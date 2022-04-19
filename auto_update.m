%Identify all lookup tables
bl = getfullname(Simulink.findBlocksOfType('TBRe_Mod','Lookup_n-D'))

tableData = get_param(char(bl(1)), 'Table')
breakpoint = get_param(char(bl(1)), 'BreakPointsForDimension1')







%%Replace numerical parameter values with variable names
for i = 1:length(bl)
    %Remove path information from block name
    n = reverse(bl(i));
    n = extractBefore(n, "/");
    n = reverse(n);
    

    %Set 'Data' parameter to 'Name_Data'
    set_param(char(bl(i)), 'Table', n+"_Data")
    %Set 'Breakpoint 1' parameter to 'Name_bPoint'
    set_param(char(bl(i)), 'BreakPointsForDimension1', n+"_bPoint")
    
end



    





