bl = getfullname(Simulink.findBlocksOfType('TBRe_Mod','Lookup_n-D'))

for i = 1:len
    n = reverse(bl(i));
    n = extractBefore(n, "/");
    n = reverse(n);

    set_param(char(bl(i)), 'Table', n+"_Data")
    set_param(char(bl(i)), 'BreakPointsForDimension1', n+"_bPoint")
    
end



    





