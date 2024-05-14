# This script creates a table to list all resolved problem in this template:
#
#            |     Problem's name     |      Language      |      Kattis' link      |
#                        ^                       ^                     ^
#                link to code file         code language     link to kattis webpage
#
#
# How it Works: for all folders it navigate all file, save his information in a alphabetic order dictionary,
#               it try to set the problems links too, at finished work it create the table.
#
# There are two method: one for create a simple table without webpages' problems links, the other for make a table with links.  



import requests
from bs4 import BeautifulSoup
import re
import os
import pickle

# Check that the request is successfull
def request_status( request ):
    if request.status_code == 200:
        return True
    else:
        return False



# It works partially, can't find all the problem links
# For debugging purposes it currently takes input:
#   - name(string): wanted word or phrase;
#   - debug(file): opened file where the fuction writes all the steps
def answer_search( name , debug):
    headers = {
    "User-agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.163 Safari/537.36 OPR/67.0.3575.137"}
    
    try:
        name1 = name.replace('_', '+')
        research = "https://www.google.com/search?q=kattis+" + name1
        response = requests.get(research, headers = headers)
        debug.write("Request link: " + research + "\n")


        if not request_status:
            debug.write("Error state 1\n\n\n\n")
            return "1" #"status not 200"  

        html_text = response.text
        soup_link = BeautifulSoup(html_text,'html.parser')
        alltags=soup_link.find_all("a",attrs={"href" : re.compile("https://open.kattis.com/")})
        lists = []
        debug.write("Compatible links:\n")
        for item in alltags:
            lists.append(item['href'])
            debug.write(item['href'] + "\n")
        
        
        first_split = lists[0].split("problems/")
        #print(first_split)
        if len(first_split) > 1:
            debug.write("First split: " + first_split[1] + "\n")
            second_split = first_split[1].split("/")
            debug.write("Second split: " + second_split[0] + "\n")
            debug.write("Solution: " + second_split[0] + "\n\n\n\n")
            return second_split[0]
        else:
            return "3" #link non trovato

    except Exception as e:
        #print(e)
        debug.write(e)
        return "2" #"generic error :')"

# This function recursively searches for files within a directory structure and adds them to a dictionary named source_lists
#   - path (string): the starting directory path. If an empty string is provided, the current working directory is used.
#   - source_lists (dictionary): the dictionary where the function stores information about found files.
def file_in_folders(path, source_lists):
    if path == "":
        obj = os.scandir()
    else:
        obj = os.scandir(path)
    
    for entry in obj:
        if entry.is_dir() and entry.name != ".git":
            file_in_folders(path + entry.name + "/", source_lists)
        else:
            i = len(path.split("/"))
            tmp = path + entry.name
            key = entry.name.split(".")[0]
            source_lists[key] = [path.split('/')[i-2],"", tmp]

# This function takes a dictionary (dict) as input and generates a formatted table with links at Kattis page in a text file named "table.txt".
#   - dict (dictionary): The input dictionary is assumed to have the following structure:
#           Keys: Problem names (strings)
#           Values: Lists containing three elements for each problem:
#               Value 0 (string): Programming language used for the solution
#               Value 1 (string): Link of the Kattis site (e.g., "Click here")
#               Value 2 (string): Link of the Kattis problem code
def table_with_links(dict):
    file = open("table.txt", 'w')
    file.write("| Problem | Language | Kattis' link | \n")
    file.write("| ------------- | ------------- | ------------- |\n")
    for element in dict:
        tmp = "| [" + element + "](" + dict[element][2] +") | " + dict[element][0] + " | " + dict[element][1] + " |\n"
        file.write(tmp)

    return file

# This function takes a dictionary (dict) as input and generates a formatted table "table.txt".
#   - dict (dictionary): The input dictionary is assumed to have the following structure:
#           Keys: Problem names (strings)
#           Values: Lists containing three elements for each problem:
#               Value 0 (string): Programming language used for the solution
#               Value 2 (string): Link of the Kattis problem code
def table(dict):
    file = open("table.txt", 'w')
    file.write("| Problem | Language | \n")
    file.write("| ------------- | ------------- | \n")
    for element in dict:
        tmp = "| [" + element + "](" + dict[element][2] +") | " + dict[element][0] + " |\n"
        file.write(tmp)

    return file




first = False #used to check if the script is at a first run, and there is or not links file

try: 
    with open('links_dict.pickle', 'rb') as handle:
        print("carico il dizionario")
        unserialized_data = pickle.load(handle)
except:
    first = True



source_dict = {}
file_in_folders("src/", source_dict)
sorted_list = sorted(source_dict.keys(), key=lambda x: x.lower())
sorted_dict = {}
for key in sorted_list:
    sorted_dict[key] = source_dict[key]


debug = open("debug.txt", 'w')


if first : links_dict = {}
else : links_dict = unserialized_data


for key in sorted_dict:
    if not links_dict.get(key):
        response = answer_search(key, debug)
    elif not first and links_dict[key][1] == False:
        response = answer_search(key, debug)
    else:
        continue
    if not response.isdigit():
        url = "[<img src=\"https://contest.ii.uib.no/bgopen/2021/logos/kattis.png\" width=\"\" height=\"30\">](https://open.kattis.com/problems/" + response +")"
        links_dict[key] = (url, True)
    else:
        e = "Error: " + response
        links_dict[key] = (e, False)


with open('links_dict.pickle', 'wb') as handle:
    pickle.dump(links_dict, handle, protocol=pickle.HIGHEST_PROTOCOL)



for key in sorted_dict:
    sorted_dict[key][1] = links_dict[key][0]



table = table_with_links(sorted_dict)



