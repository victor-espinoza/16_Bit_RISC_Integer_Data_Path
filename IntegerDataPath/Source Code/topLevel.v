`timescale 1ns / 1ps
/*******************************************************************************
 *
 * Author:   Edward Mares
 * Partner:  Victor Espinoza
 * Email:    eddy.mares@gmail.com
 * Filename: topLevel.v
 * Date:     November 2, 2013
 * Version:  1.0
 *
 * Notes:    This top level module is used to pull together our  debounce,
 *           integer_datapath, and display controller modules that we created  
 *           into one place in order to implement our integer_datapath module.  
 *
 ******************************************************************************/
module topLevel(clk, reset, w_adr1, w_adr0, r_adr, s_adr, alu_op, we, a3, 
                a2, a1, a0, a, b, c, d, e, f, g, N, Z, C);
                
   //Inputs             
   input clk, reset, w_adr1, w_adr0, we;
   input [1:0] r_adr, s_adr;
   input [3:0] alu_op;
   
   //Outputs
   output wire a, b, c, d, e, f, g, a3, a2, a1, a0, N, Z, C;
   
   //Local Declarations
   wire clk_out;
   wire [15:0] reg_out, alu_out;
   
   //         debounce            (clk, reset, Din, Dout);
   debounce debouce             (clk, reset, we, clk_out); 
   
   //           integer_datapath(clk, reset, W_en, W_Adr, S_Adr, DS, S_Sel, 
   //                          R_Adr, ALU_OP, N, Z, C, Reg_Out, Alu_Out);
   integer_datapath intData   (clk_out, reset, 1'b1, {1'b0,w_adr1,w_adr0}, 
                               {1'b0, s_adr}, 16'hAA55, w_adr1, 
                               {1'b0, r_adr}, alu_op, N, Z, C, reg_out, alu_out);
    
   //         display_controller(clk, reset, ad_high, ad_low, d_high, d_low,  
   //                            a3, a2, a1, a0, a, b, c, d, e, f, g);    
   display_controller display (clk, reset, reg_out[15:12], reg_out[11:8], 
                               alu_out[7:4], alu_out[3:0], a3, a2, a1, a0, 
                               a, b, c, d, e, f, g);

endmodule
