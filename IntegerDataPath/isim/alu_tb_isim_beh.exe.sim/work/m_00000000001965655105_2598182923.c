/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Victor Espinoza/Desktop/CECS 301/Lab 6- Integer Data Path/IntegerDataPath/Source Code/alu_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "R=%h S=%h Y=%h C=%h";
static int ng7[] = {6, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {5U, 0U};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {10U, 0U};
static int ng21[] = {9, 0};
static unsigned int ng22[] = {11U, 0U};
static unsigned int ng23[] = {12U, 0U};
static int ng24[] = {7, 0};
static unsigned int ng25[] = {13U, 0U};



static int sp_aluOperation1(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(93, ng0);
    xsi_set_current_line(93, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(93, ng0);

LAB8:    xsi_set_current_line(94, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t1 + 7976);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 16);
    xsi_set_current_line(95, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(97, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(97, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(93, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation2(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(102, ng0);
    xsi_set_current_line(102, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(102, ng0);

LAB8:    xsi_set_current_line(103, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t1 + 7976);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 16);
    xsi_set_current_line(104, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(106, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(102, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation3(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    char t21[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t22;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(111, ng0);
    xsi_set_current_line(111, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(111, ng0);

LAB8:    xsi_set_current_line(112, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng9)));
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t17, 32, t18, 32);
    t20 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t19, 32, t20, 32);
    t22 = (t1 + 7976);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 16);
    xsi_set_current_line(113, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t7, 32);
    t9 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t8, 32, t9, 32);
    t15 = (t1 + 8136);
    xsi_vlogvar_assign_value(t15, t19, 0, 0, 16);
    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(115, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(115, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t22 = *((char **)t18);
    t18 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t22, 1);
    xsi_set_current_line(111, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation4(char *t1, char *t2)
{
    char t8[8];
    char t21[8];
    char t23[8];
    char t25[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t24;
    char *t26;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(120, ng0);
    xsi_set_current_line(120, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(120, ng0);

LAB8:    xsi_set_current_line(121, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 8456);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_signed_multiply(t21, 32, t17, 32, t20, 32);
    t22 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_signed_multiply(t23, 32, t21, 32, t22, 32);
    t24 = ((char*)((ng11)));
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 32, t23, 32, t24, 32);
    t26 = (t1 + 7976);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 16);
    xsi_set_current_line(122, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8456);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t15, 32);
    t16 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t8, 32, t16, 32);
    t17 = (t1 + 8136);
    xsi_vlogvar_assign_value(t17, t21, 0, 0, 16);
    xsi_set_current_line(123, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(124, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(124, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t19 = *((char **)t18);
    t18 = (t1 + 7576U);
    t20 = *((char **)t18);
    t18 = (t1 + 2144);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t19, 16, (char)118, t20, 1);
    xsi_set_current_line(120, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation5(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    char t21[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t22;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(129, ng0);
    xsi_set_current_line(129, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(129, ng0);

LAB8:    xsi_set_current_line(130, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng11)));
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t17, 32, t18, 32);
    t20 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t19, 32, t20, 32);
    t22 = (t1 + 7976);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 16);
    xsi_set_current_line(131, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t7, 32);
    t9 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t8, 32, t9, 32);
    t15 = (t1 + 8136);
    xsi_vlogvar_assign_value(t15, t19, 0, 0, 16);
    xsi_set_current_line(132, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(133, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(133, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t22 = *((char **)t18);
    t18 = (t1 + 2576);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t22, 1);
    xsi_set_current_line(129, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation6(char *t1, char *t2)
{
    char t8[8];
    char t21[8];
    char t25[8];
    char t27[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t28;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(138, ng0);
    xsi_set_current_line(138, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(138, ng0);

LAB8:    xsi_set_current_line(139, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 8456);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_signed_multiply(t21, 32, t17, 32, t20, 32);
    t22 = (t1 + 8456);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t21, 32, t24, 32);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t25, 32, t26, 32);
    t28 = (t1 + 7976);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 16);
    xsi_set_current_line(140, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8456);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t15, 32);
    t16 = (t1 + 8456);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t21, 0, 8);
    xsi_vlog_signed_multiply(t21, 32, t8, 32, t18, 32);
    t19 = ((char*)((ng9)));
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 32, t21, 32, t19, 32);
    t20 = (t1 + 8136);
    xsi_vlogvar_assign_value(t20, t25, 0, 0, 16);
    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(142, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(142, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t19 = *((char **)t18);
    t18 = (t1 + 7576U);
    t20 = *((char **)t18);
    t18 = (t1 + 3008);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t19, 16, (char)118, t20, 1);
    xsi_set_current_line(138, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation7(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3440);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(147, ng0);
    xsi_set_current_line(147, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(147, ng0);

LAB8:    xsi_set_current_line(148, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng15)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t1 + 7976);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 16);
    xsi_set_current_line(149, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(150, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(151, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(151, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 3440);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(147, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation8(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    char t21[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t22;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3872);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(156, ng0);
    xsi_set_current_line(156, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(156, ng0);

LAB8:    xsi_set_current_line(157, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng9)));
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t17, 32, t18, 32);
    t20 = ((char*)((ng4)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t19, 32, t20, 32);
    t22 = (t1 + 7976);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 16);
    xsi_set_current_line(158, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t7, 32);
    t9 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t8, 32, t9, 32);
    t15 = (t1 + 8136);
    xsi_vlogvar_assign_value(t15, t19, 0, 0, 16);
    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(160, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(160, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t22 = *((char **)t18);
    t18 = (t1 + 3872);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t22, 1);
    xsi_set_current_line(156, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation9(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4304);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(165, ng0);
    xsi_set_current_line(165, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(165, ng0);

LAB8:    xsi_set_current_line(166, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng11)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t1 + 7976);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 16);
    xsi_set_current_line(167, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(169, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(169, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(165, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation10(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4736);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(174, ng0);
    xsi_set_current_line(174, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(174, ng0);

LAB8:    xsi_set_current_line(175, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t1 + 7976);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 16);
    xsi_set_current_line(176, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(178, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(178, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 4736);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(174, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation11(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5168);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(183, ng0);
    xsi_set_current_line(183, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(183, ng0);

LAB8:    xsi_set_current_line(184, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng9)));
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t17, 32, t18, 32);
    t20 = (t1 + 7976);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 16);
    xsi_set_current_line(185, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(186, ng0);
    t4 = ((char*)((ng20)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(187, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(187, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 5168);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(183, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation12(char *t1, char *t2)
{
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5600);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(192, ng0);
    xsi_set_current_line(192, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(192, ng0);

LAB8:    xsi_set_current_line(193, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7976);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 16);
    xsi_set_current_line(194, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng21)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8136);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    xsi_set_current_line(195, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(196, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(196, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t19 = *((char **)t18);
    t18 = (t1 + 7576U);
    t20 = *((char **)t18);
    t18 = (t1 + 5600);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t19, 16, (char)118, t20, 1);
    xsi_set_current_line(192, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_aluOperation13(char *t1, char *t2)
{
    char t8[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6032);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(201, ng0);
    xsi_set_current_line(201, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(201, ng0);

LAB8:    xsi_set_current_line(202, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7976);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 16);
    xsi_set_current_line(203, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 8456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t4, 32, t7, 32);
    t9 = ((char*)((ng4)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t8, 32, t9, 32);
    t15 = (t1 + 8136);
    xsi_vlogvar_assign_value(t15, t19, 0, 0, 16);
    xsi_set_current_line(204, ng0);
    t4 = ((char*)((ng23)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(205, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(205, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 7096U);
    t20 = *((char **)t18);
    t18 = (t1 + 7576U);
    t21 = *((char **)t18);
    t18 = (t1 + 6032);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t18, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(201, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static int sp_defaultAluOperation(char *t1, char *t2)
{
    char t8[8];
    char t18[8];
    char t30[8];
    char t32[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t33;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 6464);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(210, ng0);
    xsi_set_current_line(210, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8456);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB5:    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(210, ng0);

LAB8:    xsi_set_current_line(211, ng0);
    t15 = (t1 + 8456);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 8456);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    memcpy(t18, t21, 8);
    t24 = *((unsigned int *)t18);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t25 | t26);
    *((unsigned int *)t18) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 4294967295U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 4294967295U);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t17, 32, t18, 32);
    t31 = ((char*)((ng24)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t30, 32, t31, 32);
    t33 = (t1 + 7976);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 16);
    xsi_set_current_line(212, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t6 + 4);
    memcpy(t8, t6, 8);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 4294967295U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 4294967295U);
    t15 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_signed_add(t18, 32, t8, 32, t15, 32);
    t16 = (t1 + 8136);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 16);
    xsi_set_current_line(213, ng0);
    t4 = ((char*)((ng25)));
    t5 = (t1 + 8296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(214, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(214, ng0);
    t6 = (t1 + 7976);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t15 = (t1 + 8136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 7096U);
    t20 = *((char **)t19);
    t19 = (t1 + 7576U);
    t21 = *((char **)t19);
    t19 = (t1 + 6464);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t19, (char)118, t9, 16, (char)118, t17, 16, (char)118, t20, 16, (char)118, t21, 1);
    xsi_set_current_line(210, ng0);
    t4 = (t1 + 8456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 8456);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB5;

}

static void Initial_59_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 9376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 9184);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB8:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB10:    if (t13 != 0)
        goto LAB11;

LAB6:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB7:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB14:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB16:    if (t13 != 0)
        goto LAB17;

LAB12:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB13:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 1712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB20:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB22:    if (t13 != 0)
        goto LAB23;

LAB18:    t6 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB19:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 1712);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB26:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB28:    if (t13 != 0)
        goto LAB29;

LAB24:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB25:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 2576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB32:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB34:    if (t13 != 0)
        goto LAB35;

LAB30:    t6 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB31:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 2576);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 3008);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB38:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB40:    if (t13 != 0)
        goto LAB41;

LAB36:    t6 = (t0 + 3008);
    xsi_vlog_subprogram_popinvocation(t6);

LAB37:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 3008);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 3440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB44:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB46:    if (t13 != 0)
        goto LAB47;

LAB42:    t6 = (t0 + 3440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB43:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 3440);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 3872);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB50:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB52:    if (t13 != 0)
        goto LAB53;

LAB48:    t6 = (t0 + 3872);
    xsi_vlog_subprogram_popinvocation(t6);

LAB49:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 3872);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 4304);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB56:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB58:    if (t13 != 0)
        goto LAB59;

LAB54:    t6 = (t0 + 4304);
    xsi_vlog_subprogram_popinvocation(t6);

LAB55:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 4304);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 4736);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB62:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB64:    if (t13 != 0)
        goto LAB65;

LAB60:    t6 = (t0 + 4736);
    xsi_vlog_subprogram_popinvocation(t6);

LAB61:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 4736);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 5168);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB68:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB70:    if (t13 != 0)
        goto LAB71;

LAB66:    t6 = (t0 + 5168);
    xsi_vlog_subprogram_popinvocation(t6);

LAB67:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 5168);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 5600);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB74:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB76:    if (t13 != 0)
        goto LAB77;

LAB72:    t6 = (t0 + 5600);
    xsi_vlog_subprogram_popinvocation(t6);

LAB73:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 5600);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 6032);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB80:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB82:    if (t13 != 0)
        goto LAB83;

LAB78:    t6 = (t0 + 6032);
    xsi_vlog_subprogram_popinvocation(t6);

LAB79:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 6032);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 6464);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB86:    t5 = (t0 + 9280);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB88:    if (t13 != 0)
        goto LAB89;

LAB84:    t6 = (t0 + 6464);
    xsi_vlog_subprogram_popinvocation(t6);

LAB85:    t14 = (t0 + 9280);
    t15 = *((char **)t14);
    t14 = (t0 + 6464);
    t16 = (t0 + 9184);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB1;

LAB9:;
LAB11:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB26;
    goto LAB1;

LAB33:;
LAB35:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB32;
    goto LAB1;

LAB39:;
LAB41:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB38;
    goto LAB1;

LAB45:;
LAB47:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB44;
    goto LAB1;

LAB51:;
LAB53:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB50;
    goto LAB1;

LAB57:;
LAB59:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB56;
    goto LAB1;

LAB63:;
LAB65:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB62;
    goto LAB1;

LAB69:;
LAB71:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB68;
    goto LAB1;

LAB75:;
LAB77:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB74;
    goto LAB1;

LAB81:;
LAB83:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB80;
    goto LAB1;

LAB87:;
LAB89:    t5 = (t0 + 9376U);
    *((char **)t5) = &&LAB86;
    goto LAB1;

}


extern void work_m_00000000001965655105_2598182923_init()
{
	static char *pe[] = {(void *)Initial_59_0};
	static char *se[] = {(void *)sp_aluOperation1,(void *)sp_aluOperation2,(void *)sp_aluOperation3,(void *)sp_aluOperation4,(void *)sp_aluOperation5,(void *)sp_aluOperation6,(void *)sp_aluOperation7,(void *)sp_aluOperation8,(void *)sp_aluOperation9,(void *)sp_aluOperation10,(void *)sp_aluOperation11,(void *)sp_aluOperation12,(void *)sp_aluOperation13,(void *)sp_defaultAluOperation};
	xsi_register_didat("work_m_00000000001965655105_2598182923", "isim/alu_tb_isim_beh.exe.sim/work/m_00000000001965655105_2598182923.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
