from sklearn.naive_bayes import MultinomialNB
mnb=MultinomialNB()

import pickle
fname1 = r"model.model"
f = open(fname1)
mnb = pickle.load(f)


def my_test(x):
    print type(x)





import pandas

list=[]
for i in range(0,64):
    list.append(str(i))

data = pandas.read_csv("data/mv_qcif_motheranddaughter_0.txt",sep="    ")
X_motheranddaughter=data[list]
Y_motheranddaughter=data['vec']

data = pandas.read_csv("data/mv_qcif_salesman.txt",sep="    ")
X_salesman=data[list]
Y_salesman=data['vec']

data = pandas.read_csv("data/mv_qcif_left.txt",sep="    ")
X_left=data[list]
Y_left=data['vec']

data = pandas.read_csv("data/mv_qcif_highway.txt",sep="    ")
X_highway=data[list]
Y_highway=data['vec']

data = pandas.read_csv("data/mv_qcif_hall.txt",sep="    ")
X_hall=data[list]
Y_hall=data['vec']

data = pandas.read_csv("data/mv_qcif_forman.txt",sep="    ")
X_forman=data[list]
Y_forman=data['vec']

data = pandas.read_csv("data/mv_qcif_container.txt",sep="    ")
X_container=data[list]
Y_container=data['vec']

data = pandas.read_csv("data/mv_qcif_coastguard.txt",sep="    ")
X_coastguard=data[list]
Y_coastguard=data['vec']

data = pandas.read_csv("data/mv_qcif_carphone.txt",sep="    ")
X_carphone=data[list]
Y_carphone=data['vec']

score_salesman=mnb.score(X_salesman,Y_salesman)
score_motheranddaughter=mnb.score(X_motheranddaughter,Y_motheranddaughter)
score_left=mnb.score(X_left,Y_left)
score_highway=mnb.score(X_highway,Y_highway)
score_hall=mnb.score(X_hall,Y_hall)
score_forman=mnb.score(X_forman,Y_forman)
score_container=mnb.score(X_container,Y_container)
score_coastguard=mnb.score(X_coastguard,Y_coastguard)
score_carphone=mnb.score(X_carphone,Y_carphone)
print "salesman :",score_salesman
print "motheranddaughter :",score_motheranddaughter
print "left :",score_left
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
print "all_avg :",(score_salesman+score_motheranddaughter+score_left+score_highway+score_hall+score_forman+score_container+score_coastguard+score_carphone)/9.0


