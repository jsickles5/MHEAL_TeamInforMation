%{
concerns:
1. do we need this program to handle phone numbers for data requests or
will frontline handle that?

2. Do we want firstname lastname with a space bewteen them?

3. will spelling be a problem for some of the healthcare workers? Would we
need to insert a spellcheck function?
%}

%this is the main for frontlineSMS taking in data and dispensing it out
%this program does 2 things:

%1.when this function is run, it takes in any text from FrontlineSMS that has a
%keyword of a ***, signifying a request. 

%2.periodically or every X messages recieved, frontline will upoad (update)
%the CSV that we keep this data on

Request = import(from FrontlineSMS)%whatever frontline spits out. This may become a group of functions

%this would take in Import and send it back as the text OutgoingData
[OutgoingData] = Retrieve(Request);
    
UpdateCSV()