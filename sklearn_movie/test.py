import pandas

list=[]
for i in range(0,64):
    list.append(str(i))

from sklearn.naive_bayes import MultinomialNB
mnb=MultinomialNB()

from sklearn.metrics import classification_report
#print "motheranddaughter :",mnb.score(X_motheranddaughter,Y_motheranddaughter)
#print classification_report(Y,y_predict)

'''
data = pandas.read_csv("data/mother-daughter_qcif.txt",sep="    ")
X_motheranddaughter=data[list]
Y_motheranddaughter=data['vec']

data = pandas.read_csv("data/salesman_qcif.txt",sep="    ")
X_salesman=data[list]
Y_salesman=data['vec']


data = pandas.read_csv("data/highway_qcif.txt",sep="    ")
X_highway=data[list]
Y_highway=data['vec']

data = pandas.read_csv("data/hall_qcif.txt",sep="    ")
X_hall=data[list]
Y_hall=data['vec']

data = pandas.read_csv("data/forman.txt",sep="    ")
X_forman=data[list]
Y_forman=data['vec']

data = pandas.read_csv("data/container_qcif.txt",sep="    ")
X_container=data[list]
Y_container=data['vec']

data = pandas.read_csv("data/coastguard.txt",sep="    ")
X_coastguard=data[list]
Y_coastguard=data['vec']

data = pandas.read_csv("data/carphone_qcif.txt",sep="    ")
X_carphone=data[list]
Y_carphone=data['vec']


mnb.fit(X_salesman,Y_salesman)
mnb.fit(X_motheranddaughter,Y_motheranddaughter)
mnb.fit(X_highway,Y_highway)
mnb.fit(X_hall,Y_hall)
mnb.fit(X_container,Y_container)
mnb.fit(X_coastguard,Y_coastguard)
mnb.fit(X_carphone,Y_carphone)
mnb.fit(X_forman,Y_forman)

score_salesman=mnb.score(X_salesman,Y_salesman)
score_motheranddaughter=mnb.score(X_motheranddaughter,Y_motheranddaughter)
score_highway=mnb.score(X_highway,Y_highway)
score_hall=mnb.score(X_hall,Y_hall)
score_forman=mnb.score(X_forman,Y_forman)
score_container=mnb.score(X_container,Y_container)
score_coastguard=mnb.score(X_coastguard,Y_coastguard)
score_carphone=mnb.score(X_carphone,Y_carphone)

print "salesman :",score_salesman
print "motheranddaughter :",score_motheranddaughter
print "highway :",score_highway
print "hall :",score_hall
print "forman :",score_forman
print "container :",score_container
print "coastguard :",score_coastguard
print "carphone :",score_carphone
print ""
#print "avg :",(score_salesman+score_motheranddaughter+score_left+score_highway+score_hall+score_forman+score_container+score_coastguard+score_carphone)/9.0
#print "avg :",(score_salesman+score_motheranddaughter+score_highway+score_hall+score_forman+score_container+score_coastguard+score_carphone)/8.0
#print "avg :",(score_salesman+score_motheranddaughter+score_highway+score_hall+score_container+score_coastguard+score_carphone)/7.0
print "avg :",(score_salesman+score_motheranddaughter+score_highway+score_hall+score_container+score_coastguard)/6.0
print ""
print "all_avg :",(score_salesman+score_motheranddaughter+score_highway+score_hall+score_forman+score_container+score_coastguard+score_carphone)/9.0
'''

data = pandas.read_csv("data/forman.txt",sep="    ")
X_forman=data[list]
Y_forman=data['vec']

mnb.fit(X_forman,Y_forman)
score_forman=mnb.score(X_forman,Y_forman)
print "forman :",score_forman



import pickle
with open(r"model.model", 'w') as f:
    f = pickle.dump(mnb, f)
