#define TEST_LOAD_STORE()\
li x31, 0x0020108C;\
li x29, 4;\
sw x31, 4(x31); \
p.lb x5, 4(x31!); \
sw x5, 4(x31); \
p.lbu x5, 4(x31!); \
sw x5, 4(x31); \
p.lh x5, 4(x31!); \
sw x5, 4(x31); \
p.lhu x5, 4(x31!); \
sw x5, 4(x31); \
p.lw x5, 4(x31!); \
sw x5, 4(x31); \
p.lb x5,  x29(x31!); \
sw x5, 4(x31); \
p.lbu x5,  x29(x31!); \
sw x5, 4(x31); \
p.lh x5,  x29(x31!); \
sw x5, 4(x31); \
p.lhu x5,  x29(x31!); \
sw x5, 4(x31); \
p.lw x5,  x29(x31!); \
sw x5, 4(x31); \
p.lb x5,  x29(x31); \
sw x5, 4(x31); \
p.lbu x5,  x29(x31); \
sw x5, 4(x31); \
p.lh x5,  x29(x31); \
sw x5, 4(x31); \
p.lhu x5,  x29(x31); \
sw x5, 4(x31); \
p.lw x5,  x29(x31); \
sw x5, 4(x31); \
sw x0,4(x31); \
p.lb x5, 4(x31!); \
sw x5, 4(x31); \
p.lbu x5, 4(x31!); \
sw x5, 4(x31); \
p.lh x5, 4(x31!); \
sw x5, 4(x31); \
p.lhu x5, 4(x31!); \
sw x5, 4(x31); \
p.lw x5, 4(x31!); \
sw x5, 4(x31); \
p.lb x5,  x29(x31!); \
sw x5, 4(x31); \
p.lbu x5,  x29(x31!); \
sw x5, 4(x31); \
p.lh x5,  x29(x31!); \
sw x5, 4(x31); \
p.lhu x5,  x29(x31!); \
sw x5, 4(x31); \
p.lw x5,  x29(x31!); \
sw x5, 4(x31); \
p.lb x5,  x29(x31); \
sw x5, 4(x31); \
p.lbu x5,  x29(x31); \
sw x5, 4(x31); \
p.lh x5,  x29(x31); \
sw x5, 4(x31); \
p.lhu x5,  x29(x31); \
sw x5, 4(x31); \
p.lw x5,  x29(x31); \
sw x5, 4(x31); \
li x28, 0x00000FFF; \
li x30, 0x00000111; \
li x1, 0; \
li x2, 0; \
li x31, 0x002010F0; \
loopld:; \
	p.adduN x3, x0, x1, 0; \
        p.lw x5, x2(x31!); \
	sw x5, 4(x31); \
        sw x3,  4(x31); \
	beq x2, x28, endld; \
	p.adduN x2, x2, x30, 0; \
	j loopld; \
endld:  xor x2, x2, x2; \
	beq x1, x28, endld2; \
	p.adduN x1, x1, x30, 0; \
	j loopld; \
endld2:; \
li x5, 0xFFFFFFFF; \
li x4, 4; \
li x6, 8; \
p.sb x5, 4(x31!); \
p.sb x0, 4(x31!); \
p.sh x5, 4(x31!); \
p.sh x0, 4(x31!); \
p.sw x5, 4(x31!); \
p.sw x0, 4(x31!); \
p.sb x5, x4(x31!); \
p.sb x0, x4(x31!); \
p.sh x5, x4(x31!); \
p.sh x0, x4(x31!); \
p.sw x5, x4(x31!); \
p.sw x0, x4(x31!); \
p.sb x5, x4(x31); \
p.sb x0, x4(x31); \
p.sh x5, x6(x31); \
p.sw x5,  x29(x31); \
p.sw x0,  x29(x31); \
sw x5, 4(x31); \
p.lb x4, 1(x31!); \
p.lw x4, 1(x31!); \
p.lh x4, 1(x31!); \
p.lbu x4, 2(x31!); \
p.lhu x4, 1(x31!); \
p.sb x5, 1(x31!); \
p.sw x0, 1(x31!); \
p.sh x5, 1(x31!); \
li x1, 1; \
li x2, 2; \
li x3, 3; \
p.sb x0, x1(x31); \
p.sh x0, x2(x31); \
p.sw x5, x3(x31); \
li x2, 0xFFFFFFFF; \
li x10, 0; \
li x15, 0x00204000; \
p.sw x2, 1(x15!); \
sw x15,  4(x31); \
p.sw x2, 0(x15!); \
sw x15,  4(x31); \
p.sw x2, 0x3F(x15!); \
sw x15,  4(x31); \
p.sw x2, 0(x15!); \
sw x10,  4(x31); \
p.sw x2, 0x3F(x15!); \
sw x10,  4(x31); \
p.sw x2, 0x20(x15!); \
sh x15,  4(x31); \
p.sw x2, 0(x15!); \
sw x15,  4(x31); \
p.sw x0, 0x3F(x15!); \
sw x15,  4(x31); \
p.sb x0, 0(x15); \
sw x10,  4(x31); \
p.sh x0, 0x3F(x15!); \
sw x10,  4(x31); \
p.sb x2, 1(x15!); \
p.sh x2, 0(x15!); \
p.sw x2, 0(x15!); \
p.sb x2, x3(x31!); \
p.sh x2, x3(x31!); \
p.sw x2, x3(x31!); \
li x3, 0x002010FC; \
li x2, 0x002010FC; \
li x5, 0x4F0;\
li x6, 0x30;\
p.sb x0,  x29(x31); \
p.sh x0, x4(x31); \
p.sb x2,  x29(x31); \
p.sh x2, x4(x31); \
p.sw x2, x5(x2); \
p.sw x2, x6(x3); \
