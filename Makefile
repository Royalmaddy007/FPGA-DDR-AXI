VERILATOR ?= verilator
VERILOG_SOURCES += $(PWD)/axi_self_test_master.v
VERILOG_SOURCES += $(PWD)/ddr_sdram_ctrl.v
VERILOG_SOURCES += $(PWD)/micron_ddr_sdram_model.v
VERILOG_SOURCES += $(PWD)/tb_ddr_sdram_ctrl.v

VFLAGS += --binary $(VERILOG_SOURCES) --trace --top $(TOP_MODULE) -j 0 -Wno-CASEINCOMPLETE -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-TIMESCALEMOD -Wno-MODDUP -Wno-INITIALDLY --timescale-override 1ps/1ps --exe --timing --main

TOP_MODULE = tb_ddr_sdram_ctrl
VERILATED_DIR = obj_dir

build:
	$(VERILATOR) $(VFLAGS)

run:
	$(VERILATED_DIR)/V$(TOP_MODULE)

clean:
	@rm -rf $(VERILATED_DIR)
	@rm -rf $(PWD)/*.vcd
	@rm -rf $(PWD)/*.txt
