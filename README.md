# Lab_6_Integer_Data_Path
Project Overview:  
Integer Datapath using Verilog.
    
The purpose of this project is to connect our 8x16 register file to an 16-bit Arithmetic-logic unit (ALU) using structural Verilog. The ALU is written as a behavioral model. The combination of the Register file with the ALU and an external input (through the S-MUX) creates an "Integer Datapath" module.
  
Here is a schematic of this project:
![ScreenShot](https://cloud.githubusercontent.com/assets/14812721/24824905/540c48ca-1bc9-11e7-9958-eb9057c9f229.jpg)
    
Dependencies:   
This project was created using Xilinx ISE Project Navigator Version: 14.7.   
    
Project Verification:  
The verification for this project was done by running the circuit through the alu_tb() module. This module verifies each of the 13 ALU operations. Each of the 13 test vectors for R, S, and Alu_Op have unique, non-zero values for the R and S inputs. This project was also verified using the Nexys2 board.
