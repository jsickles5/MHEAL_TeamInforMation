function [OutgoingDataString,h] = Retrieve(Request)


%decompose breaks up request into variables of significance, specefically identifiers
[name,town, (something else maybe?)] = decompose(Request)

then read in the CSV
T = readtable(OURCSVNAME)

then make a function to search the CSV for the search tersm
Names = T(:,1)%need to look at syntax for how to index into a table
Towns = t(:,2)
for i = 0:rows(Names)%or if not rows, length or numel
    if Names(i) == name
        if Towns(:,2) == town
            %this would get the row of the table that has the data we are
            %looking for
            PatientData = T(i,:);
        end
    end
end
%maybe this should also include the phone number?
[OutgoingDataString] = PatientDataToString(PatientData)
end

            
    
