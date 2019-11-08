import requests, json 
  
# enter your api key here 
api_key = 'Your_api_key'
  
# url variable store url 
url = 'https://maps.googleapis.com/maps/api/geocode/json?'
  
# take place as input 
place = input() 
  
# get method of requests module 
# return response object 
res_ob = requests.get(url + 'address =' +
                place + '&key =' + api_key) 
  
# json method of response object 
# convert json format data  
# into python format data. 
x = res_ob.json() 
  
# print the vale of x 
print(x) 
