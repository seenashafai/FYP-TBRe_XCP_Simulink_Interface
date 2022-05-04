# FYP-TBRe_XCP_Simulink_Interface
 Final Year Project - Design an EV tuning system based on XCP

This project aims to extend the current calibration capabilities of Team Bath Racing Electric (TBRe)


*Context*
Modern ECU calibration is governed by XCP: a calibration protocol which can operate over numerous mediums. This aims to establish calibration in the CAN environment.

The solution should resemble a package which can automatically implement CCP functionality for any Simulink model running on the MUXlab4. The minimum requirement is to achieve CCP for TBRe's current model as a proof of concept for a transferrable software solution.

****Requirements****

These are my requirements to download and modify the contents of the working repository. The finished solution should be a standalone package and should not require any dependencies other than the hardware and an up-to-date MATLAB version. 

**Hardware**
-MUXLab4 ECU
-MUXLab4 License Dongle
-12V Power Supply

**Software**
-MUXLink v4.0.2
-MATLAB R2017b
-Vector ASAP2 Studio

****How to Use****

To generate an A2L file for your ECU model compatible with 3rd party calibration software:

1. Download the project files from the latest release on this repo
2. Move the 'Automation' folder into your project's root directory
3. Open `main.m` in MATLAB from your project's directory
4. Enable 'Generate ASAP2 File' from Simulink's compiler settings
5. Run `main.m`
6. Your new A2L file will be located in: project_name_rtw/src
