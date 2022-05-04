%Main script to configure any Simulink model for Calibration

%update params
model = gcs;
auto_update(model)

%build + obtain A2L
rtwbuild(model)

%Get path of a2l & elf files
modelStr = convertCharsToStrings(model);
path = modelStr + '_nsi_rtw/';

%populate ECU addresses
rtw.asap2SetAddress(path + modelStr + '.a2l',path + modelStr + '_FLASH.elf')




