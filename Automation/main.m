%Main script to configure any Simulink model for Calibration

%update params
model = gcs;
auto_update(model)

%build + obtain A2L
rtwbuild(model)
%populate ECU addresses
modelStr = convertCharsToStrings(model);
rtw.asap2SetAddress(modelStr + '.a2l',modelStr + '_FLASH.elf')
