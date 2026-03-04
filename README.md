# xpu

rtl/.
verilog files
 - RTL means register transfer level. blueprint for the chip. describes registers, logic, and clock
 - verilog / systemVerilog (the upgraded version) is the hardware description language (HDL). each line of code happens simulatanously (not sequentially)

sim/.
verilator C++ testbenches
 - converts your hardware into C++ so you can simulate it very quickly

scripts/.
for helper Python to generate matrices/tests

```
   verilator -Wall --cc rtl/hello_world.v --exe sim/sim_main.cpp -CFLAGS "-std=c++17"
   make -C obj_dir -f Vhello_world.mk Vhello_world
   ./obj_dir/Vhello_world
```



