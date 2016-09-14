function UpdateCSV()
%{
%we need to either take in all of the data again or (much more preferrably)
%take in only the new texts. This can happen by having frontline 
1. keep a counter of new texts
2. update contimuously, so anytime anything comes in it is updated to the CSV
3. record the date and time of the first uploaded message or the computer time when the last
   upload happened. Then upolad the most recent messages until it hits that time, at which point it stops
   %}
1. take in texts

%should this take in all of the texts and loop within itself, or should the 
%function call be in a loop?
2. Process the Texts (make a function much like the decompose function)
   but returning all of the variables. For the vaccines and stuff with
   multiple numbers, you are going to want to turn those into chars and
   do char2int from thre. For hright and stuff I think the function is 
   str2int, so we should be good there. 
3. put each piece of data in its own array (seperating out the disease and stuff,
   we will have a few arrays lol (about 40) but most will just be 1 or empty/0.
   It will almost certainly involve this for the entreys where we put in numbers for treatmetns or vaccinations:

vaccinations = int2str(vaccinations)
%so if vaccinations was 123 now vaccinations is '1' '2' '3' and now you run
%a bunch of if-thens for if vaccinations matches your data
for j = 1:numel(vaccinations)
    n = vaccinations(j);
    switch n
        case '1'
            measles = 1;
        case '2'
            Flu(i) = 1;
        case '3'
            YellowFever(i) = 1;
        
        ...
            
        otherwise
            disp('other value')
    end
end


4. Put all of these arrays in a table

%writes to file filename, writes what is in M, into the specefied row and
%column. Not 
%csvwrite does not accept cell arrays for the input matrix M. 
%To export a cell array that contains only numeric data, use cell2mat to 
%convert the cell array to a numeric matrix before calling csvwrite. 
%To export cell arrays with mixed alphabetic and numeric data, where each 
%cell contains a single element, you can create an Excel® spreadsheet 
%(if your system has Excel installed) using xlswrite. For all other cases, 
%you must use low-level export functions to write your data. For more 
%information, see Export Cell Array to Text File in the MATLAB® 
%Data Import and Export documentation.

%how will we track where the previous data ends? may need something to like
%readsize of CSV or something. We could add it to the top but excel has to
%recopy all the data in the CSV every time that happens, so I don't know about that. 
%we could always just take in the CSV as a table (this is done in retrieve)
%and then append the new data (in the form of a table) to the end of that table. 
5. csvwrite(filename,M,row,col)
end