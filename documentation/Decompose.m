function [name,town, (something else maybe?)] = Decompose(Request)
%this takes in the text, (depending on how things go with frontline itself
%it may also need to take in the contact number and name

%the data probably won't be a string but there is a good chance the text
%will. Assuming this, here is some code for things that need to happen

%turns all strings to lowercase to standardize. We should do this with
%importing data as well
RequestData = lower(Request)

%strsplit-splits the string into smaller strings around the chatacter '*'
RequestData = strsplit(RequestText,'*')%I think RequestData will now be a char array

%now RequestData will look like this:
%[ '' 'name' 'town' '']
name = RequestData(2,:);%I think thats how you index char arrays
town = RequestData(3,:);
%it may misalign data because it has to make all the char vectors the same
%length, so it adds a bunch of spaces after each word. you can do
%1. use the function deblank or strcat() which concatenates strings.
%2. use arrays insead of char arrays and it doesn't do that.

%this may also need to take in the time this was sent, unless this is done
%previously in the main FrontlineSMS program. 
end
