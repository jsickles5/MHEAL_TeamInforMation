function [OutgoingDataString] = PatientDataToString(PatientData)
%this will extract the info from PatientData (if it is an array, you index
%with {} instead of (). )

%you will need to make a bunch of variables to put stuff into. These
%variables will be like name, height, weight... and also for the things
%like vaccinations or conditions, you will have to concatenate them after
%turning them into chars with int2char() because otherwise I am afraid they
%will add. 



%this will also be helpful for the numerical entries. 
heightstr = num2str(height);
weightstr = num2str(height);
...
%you will definetly want strcat() it concatentes strings into one longer
%string so that once all of your variables are set it will look like this:
 = strcat('*',name,'*',town,'*',heightstr,'*',weightstr,'*',...