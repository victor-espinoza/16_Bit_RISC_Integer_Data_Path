`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// 
// Author:         Victor Espinoza
// Partner:        Edward Mares
// Email:          victor.alfonso94@gmail.com
// Create Date:    00:10:08 11/03/2013
//
// Module Name:    alu
// File Name:      alu_tb
// Project Name:   IntegerDataPath
//   
// Description:    This module creates a test bench for us to test our alu 
//                 module and make sure that it is working correctly. We 
//                 achieve this by writing a separate task for all of the alu
//                 operations and then calling each task to make sure that they 
//                 work correctly. We change the value of R and S in each task
//                 so that we can adequately verify that each task works as
//                 expected.
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

   // Inputs
   reg [15:0] R;
   reg [15:0] S;
   reg [3:0] Alu_OP;

   // Outputs
   wire [15:0] Y;
   wire N;
   wire Z;
   wire C;
   
   //Local Declarations
   integer i;

   // Instantiate the Unit Under Test (UUT)
   alu uut (
      .R(R), 
      .S(S), 
      .Alu_OP(Alu_OP), 
      .Y(Y), 
      .N(N), 
      .Z(Z), 
      .C(C)
   );
      
   initial begin
      // Initialize Inputs
      R = 0;
      S = 0;
      Alu_OP = 0;

      // Wait 100 ns for global reset to finish
      #100;
       
      // Add stimulus here
      aluOperation1;
      aluOperation2;
      aluOperation3;
      aluOperation4;
      aluOperation5;
      aluOperation6;
      aluOperation7;
      aluOperation8;
      aluOperation9;
      aluOperation10;
      aluOperation11;
      aluOperation12;
      aluOperation13;
      defaultAluOperation;

   end
   
   task aluOperation1; //pass S
      for (i=0; i<4; i=i+1)begin
            R = i+1;
            S = i+3;
            Alu_OP = 4'b0000;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask
   
   task aluOperation2; //pass R
      for (i=0; i<4; i=i+1)begin
            R = i+4;
            S = i+6;
            Alu_OP = 4'b0001;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask

   task aluOperation3; //add
      for (i=0; i<4; i=i+1)begin
            R = (i*2) + 1;
            S = (i*4) + 1;
            Alu_OP = 4'b0010;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask
   
   task aluOperation4; //subtract
      for (i=0; i<4; i=i+1)begin
            R = (i*i*3) + 5;
            S = (i*i) + 1;
            Alu_OP = 4'b0011;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask
   
   task aluOperation5; //increment S
      for (i=0; i<4; i=i+1)begin
            R = (i*5) + 3;
            S = (i*5) + 1;
            Alu_OP = 4'b0100;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask
   
      task aluOperation6; //decrement S
      for (i=0; i<4; i=i+1)begin
            R = (i*i*i) + 4;
            S = (i*i*i) + 2;
            Alu_OP = 4'b0101;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask
   
      task aluOperation7; //left shift S (logic)
      for (i=0; i<4; i=i+1)begin
            R = i+8;
            S = i+4;
            Alu_OP = 4'b0110;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask

   task aluOperation8; //right shift S (logic)
      for (i=0; i<4; i=i+1)begin
            R = (i * 2) + 3;
            S = (i * 2) + 1;
            Alu_OP = 4'b0111;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask   
   
   task aluOperation9; //logic and
      for (i=0; i<4; i=i+1)begin
            R = i + 5;
            S = i + 2;
            Alu_OP = 4'b1000;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask   

   task aluOperation10; //logic or 
      for (i=0; i<4; i=i+1)begin
            R = i + 3;
            S = i + 6;
            Alu_OP = 4'b1001;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask

   task aluOperation11; //logic xor
      for (i=0; i<4; i=i+1)begin
            R = (i * 2);
            S = i + 4;
            Alu_OP = 4'b1010;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask

   task aluOperation12; //logic not S (1's comp)
      for (i=0; i<4; i=i+1)begin
            R = i;
            S = i+9;
            Alu_OP = 4'b1011;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask

   task aluOperation13; //negate S (2's comp)
      for (i=0; i<4; i=i+1)begin
            R = i;
            S = (2 * i) + 3;
            Alu_OP = 4'b1100;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask

   task defaultAluOperation; //pass S for default
      for (i=0; i<4; i=i+1)begin
            R = (i * ~i) + 7;
            S = ~i + 3;
            Alu_OP = 4'b1101;
            #1 $display("R=%h S=%h Y=%h C=%h", R, S, Y, C);
       end
   endtask
   
endmodule

