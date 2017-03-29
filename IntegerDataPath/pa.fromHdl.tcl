
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name IntegerDataPath -dir "E:/CECS 301/LABS/Integer Data Path (lab 6)/IntegerDataPath/planAhead_run_1" -part xc3s500efg320-5
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property top topLevel $srcset
set_param project.paUcfFile  "board_implementation.ucf"
set hdlfile [add_files [list {reg16.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {decoder_3_to_8.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {register_file.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {led_controller.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {led_clk.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Hex_to_7seg.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {alu.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ad_mux.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {integer_datapath.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {display_controller.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {debounce.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {topLevel.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
add_files "board_implementation.ucf" -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-5
