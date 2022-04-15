Voltage_Act_Data = Simulink.Parameter;
Voltage_Act_Data.RTWInfo.StorageClass = 'ExportedGlobal';
Voltage_Act_Data.Value = [500,33000];

Voltage_Act_Breakpoint = Simulink.Parameter;
Voltage_Act_Breakpoint.RTWInfo.StorageClass = 'ExportedGlobal';
Voltage_Act_Breakpoint.Value = [0,20000];

SOC_Calc_Data = Simulink.Parameter;
SOC_Calc_Data.RTWInfo.StorageClass = 'ExportedGlobal';
SOC_Calc_Data.Value = [0,0,10,20,25,50,100,100];

SOC_Calc_Breakpoint = Simulink.Parameter;
SOC_Calc_Breakpoint.RTWInfo.StorageClass = 'ExportedGlobal';
SOC_Calc_Breakpoint.Value = [0,16000,24000,24800,25800,26000,26400,33000];

LV_Low_Voltage_Warning = Simulink.Parameter;
LV_Low_Voltage_Warning.RTWInfo.StorageClass = 'ExportedGlobal';
LV_Low_Voltage_Warning.Value = 25000;

LV_Voltage_In = Simulink.Signal;
LV_Voltage_In.RTWInfo.StorageClass = 'ExportedGlobal';
LV_Voltage_In.Description = 'Intermediate signal value sig2';
LV_Voltage_In.Min = 0;
LV_Voltage_In.Max = 20000;
LV_Voltage_In.DocUnits = 'V';

LV_Battery_Voltage = Simulink.Signal;
LV_Battery_Voltage.RTWInfo.StorageClass = 'ExportedGlobal';
LV_Battery_Voltage.Description = 'Intermediate signal value sig2';
LV_Battery_Voltage.Min = 0;
LV_Battery_Voltage.Max = 20000;

LV_Warning = Simulink.Signal;
LV_Warning.RTWInfo.StorageClass = 'ExportedGlobal';
LV_Warning.Description = 'Intermediate signal value sig2';
LV_Warning.Min = 0;
LV_Warning.Max = 1;


LV_SOC = Simulink.Signal;
LV_SOC.RTWInfo.StorageClass = 'ExportedGlobal';
LV_SOC.Description = 'Intermediate signal value sig2';
LV_SOC.Min = 0;
LV_SOC.Max = 100;

k1 = Simulink.Parameter;
k1.RTWInfo.StorageClass = 'ExportedGlobal';
k1.Value = 3;
k1.Description = 'k1 gain';
k1.Min = -3;
k1.Max = 3;