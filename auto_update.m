%Identify all lookup tables
bl = getfullname(Simulink.findBlocksOfType('TBRe_Mod','Lookup_n-D'));

%%Replace numerical parameter values with variable names
for i = 1:length(bl)
    %Remove path information from block name
    n = reverse(bl(i));
    n = extractBefore(n, "/");
    n = reverse(n);
    
    %Get data & breakpoint params
    tableData = (get_param((bl(i)), 'Table'));
    breakpoint = (get_param((bl(i)), 'BreakPointsForDimension1'));

     %Format data: remove pct symbols and add suffix
    n_data = erase(n, "%") + "_Data";
    n_bPoint = erase(n, "%") + "_bPoint";
    an = [n_data n_bPoint];
    data = [n_data n_bPoint; tableData breakpoint];
    
    %Create format for file output
    formatSpec1 = '%s = Simulink.Parameter\n';
    formatSpec2 = "%s.RTWInfo.StorageClass = 'ExportedGlobal'\n";
    formatSpec3 = '%s.Value = %s\n';

    %output data to file
    fprintf(formatSpec1, an);
    fprintf(formatSpec2, an);
    fprintf(formatSpec3, data);
    fprintf("\n")

    %Set 'Data' parameter to 'Name_Data'
    set_param(char(bl(i)), 'Table', n_data)
    %Set 'Breakpoint 1' parameter to 'Name_bPoint'
    set_param(char(bl(i)), 'BreakPointsForDimension1', n_bPoint)
end




    





