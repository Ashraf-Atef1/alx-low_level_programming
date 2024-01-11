#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <rand.h>
#include <exit.h>

void entry0(void *stack_end, undefined8 placeholder_1, undefined8 placeholder_2, void *rtld_fini)
{
	undefined8 unaff_retaddr;
	undefined auStack_8[8];

	// [13] -r-x section size 1394 named .text
	__libc_start_main(main, unaff_retaddr, &stack0x00000008, __libc_csu_init, __libc_csu_fini, rtld_fini, auStack_8);
	do
	{
		// WARNING: Do nothing block with infinite loop
	} while (true);
}

uint32_t f1(size_t arg1)
{
	size_t var_ch;

	return ((uint32_t)arg1 ^ 0x3b) & 0x3f;
}

uint32_t f2(char *arg1, size_t arg2)
{
	char *var_20h;
	int64_t var_10h;

	var_10h._0_4_ = 0;
	for (var_10h._4_4_ = 0; var_10h._4_4_ < (int32_t)arg2; var_10h._4_4_ = var_10h._4_4_ + 1)
	{
		var_10h._0_4_ = (uint32_t)var_10h + (int32_t)arg1[var_10h._4_4_];
	}
	return ((uint32_t)var_10h ^ 0x4f) & 0x3f;
}

uint32_t f3(char *arg1, size_t arg2)
{
	char *var_20h;
	int64_t var_10h;

	var_10h._0_4_ = 1;
	for (var_10h._4_4_ = 0; var_10h._4_4_ < (int32_t)arg2; var_10h._4_4_ = var_10h._4_4_ + 1)
	{
		var_10h._0_4_ = (int32_t)arg1[var_10h._4_4_] * (uint32_t)var_10h;
	}
	return ((uint32_t)var_10h ^ 0x55) & 0x3f;
}

uint32_t f4(char *arg1, size_t arg2)
{
	uint32_t uVar1;
	char *var_20h;
	int seed;
	int64_t var_ch;

	seed = (int)*arg1;
	for (var_ch._0_4_ = 0; (int32_t)var_ch < (int32_t)arg2; var_ch._0_4_ = (int32_t)var_ch + 1)
	{
		if (seed < arg1[(int32_t)var_ch])
		{
			seed = (int)arg1[(int32_t)var_ch];
		}
	}
	srand(seed ^ 0xe);
	uVar1 = rand();
	return uVar1 & 0x3f;
}

uint8_t f5(char *arg1, size_t arg2)
{
	uint8_t uVar1;
	char *var_20h;
	int64_t var_10h;

	uVar1 = 0;
	for (var_10h._4_4_ = 0; var_10h._4_4_ < (int32_t)arg2; var_10h._4_4_ = var_10h._4_4_ + 1)
	{
		uVar1 = uVar1 + arg1[var_10h._4_4_] * arg1[var_10h._4_4_];
	}
	return (uVar1 ^ 0xef) & 0x3f;
}

uint8_t f6(int64_t arg1)
{
	int64_t var_1ch;
	int var_10h;
	int64_t var_ch;

	var_10h = 0;
	for (var_ch._0_4_ = 0; (int32_t)var_ch < (char)arg1; var_ch._0_4_ = (int32_t)var_ch + 1)
	{
		var_10h = rand();
	}
	return ((uint8_t)var_10h ^ 0xe5) & 0x3f;
}

undefined8 main(int argc, char **argv)
{
	char *arg1;
	char *pcVar1;
	uint32_t uVar2;
	int32_t iVar3;
	int64_t iVar4;
	undefined8 uVar5;
	int64_t in_FS_OFFSET;
	char **var_88h;
	uint64_t var_7ch;
	size_t var_70h;
	char *var_68h;
	char *s;
	int64_t var_58h;
	int64_t var_50h;
	int64_t var_48h;
	int64_t var_40h;
	int64_t var_38h;
	int64_t var_30h;
	int64_t var_28h;
	int64_t var_20h;
	int64_t var_18h;
	int64_t canary;

	canary = *(int64_t *)(in_FS_OFFSET + 0x28);
	var_58h = 0x3877445248432d41;
	var_50h = 0x42394530534e6c37;
	var_48h = 0x4d6e706762695432;
	var_40h = 0x74767a5835737956;
	var_38h = 0x2b554c59634a474f;
	var_30h = 0x71786636576a6d34;
	var_28h = 0x723161513346655a;
	var_20h = 0x6b756f494b646850;
	var_18h._0_1_ = 0;
	if (argc != 3)
	{
		segf();
	}
	arg1 = argv[1];
	pcVar1 = argv[2];
	iVar4 = strlen(pcVar1);
	if (iVar4 != 6)
	{
		segf();
	}
	uVar2 = strlen(arg1);
	iVar3 = f1((uint64_t)uVar2);
	if (*pcVar1 != *(char *)((int64_t)&var_58h + (int64_t)iVar3))
	{
		segf();
	}
	iVar3 = f2(arg1, (uint64_t)uVar2);
	if (pcVar1[1] != *(char *)((int64_t)&var_58h + (int64_t)iVar3))
	{
		segf();
	}
	iVar3 = f3(arg1, (uint64_t)uVar2);
	if (pcVar1[2] != *(char *)((int64_t)&var_58h + (int64_t)iVar3))
	{
		segf();
	}
	iVar3 = f4(arg1, (uint64_t)uVar2);
	if (pcVar1[3] != *(char *)((int64_t)&var_58h + (int64_t)iVar3))
	{
		segf();
	}
	iVar3 = f5(arg1, (uint64_t)uVar2);
	if (pcVar1[4] != *(char *)((int64_t)&var_58h + (int64_t)iVar3))
	{
		segf();
	}
	iVar3 = f6((uint64_t)(uint32_t)(int32_t)*arg1);
	if (pcVar1[5] != *(char *)((int64_t)&var_58h + (int64_t)iVar3))
	{
		segf();
	}
	puts("Congrats!");
	uVar5 = 1;
	if (canary != *(int64_t *)(in_FS_OFFSET + 0x28))
	{
		uVar5 = __stack_chk_fail();
	}
	return uVar5;
}