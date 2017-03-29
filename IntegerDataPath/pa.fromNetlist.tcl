
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name IntegerDataPath -dir "H:/CECS 301/LABS/Lab 6- Integer Data Path/IntegerDataPath/planAhead_run_1" -part xc3s500efg320-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "H:/CECS 301/LABS/Lab 6- Integer Data Path/IntegerDataPath/topLevel.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {H:/CECS 301/LABS/Lab 6- Integer Data Path/IntegerDataPath} }
set_param project.paUcfFile  "board_implementation.ucf"
add_files "board_implementation.ucf" -fileset [get_property constrset [current_run]]
open_netlist_design
