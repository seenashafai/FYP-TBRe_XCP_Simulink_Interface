
SOC_Calc_Data = Simulink.Parameter;
SOC_Calc_Data.RTWInfo.StorageClass = 'ExportedGlobal';
SOC_Calc_Data.Value =  [0.0, 0.0, 10.0, 20.0, 25.0, 50.0, 100.0, 100.0];

SOC_Calc_bPoint = Simulink.Parameter;
SOC_Calc_bPoint.RTWInfo.StorageClass = 'ExportedGlobal';
SOC_Calc_bPoint.Value =  [0, 16000, 24000, 24800, 25800, 26000, 26400, 33000];


Voltage_Act_Data = Simulink.Parameter;
Voltage_Act_Data.RTWInfo.StorageClass = 'ExportedGlobal';
Voltage_Act_Data.Value =  [500.0, 33000.0];

Voltage_Act_bPoint = Simulink.Parameter;
Voltage_Act_bPoint.RTWInfo.StorageClass = 'ExportedGlobal';
Voltage_Act_bPoint.Value =  [0, 20000];


Throttle_Torque_Map__240Nm_Data = Simulink.Parameter;
Throttle_Torque_Map__240Nm_Data.RTWInfo.StorageClass = 'ExportedGlobal';
Throttle_Torque_Map__240Nm_Data.Value =  [0, 20, 230];

Throttle_Torque_Map__240Nm_bPoint = Simulink.Parameter;
Throttle_Torque_Map__240Nm_bPoint.RTWInfo.StorageClass = 'ExportedGlobal';
Throttle_Torque_Map__240Nm_bPoint.Value =  [0, 25, 100];







