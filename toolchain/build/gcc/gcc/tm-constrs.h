/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../../src/gcc-6.2.0/gcc/config/i386/i386.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "../../../src/gcc-6.2.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "../../../src/gcc-6.2.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "../../../src/gcc-6.2.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "../../../src/gcc-6.2.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "../../../src/gcc-6.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "../../../src/gcc-6.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "../../../src/gcc-6.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "../../../src/gcc-6.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "../../../src/gcc-6.2.0/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "../../../src/gcc-6.2.0/gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "../../../src/gcc-6.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "../../../src/gcc-6.2.0/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "../../../src/gcc-6.2.0/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "../../../src/gcc-6.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "../../../src/gcc-6.2.0/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "../../../src/gcc-6.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "../../../src/gcc-6.2.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "../../../src/gcc-6.2.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "../../../src/gcc-6.2.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "../../../src/gcc-6.2.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "../../../src/gcc-6.2.0/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_Bf (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return flags_reg_operand (op, mode);
}
static inline bool
satisfies_constraint_Bg (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return GOT_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Bm (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vector_memory_operand (op, mode);
}
static inline bool
satisfies_constraint_Bs (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ((!(
#line 175 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(TARGET_X32))) && (sibcall_memory_operand (op, mode))) || ((
#line 177 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(TARGET_X32 && Pmode == DImode)) && (GOT_memory_operand (op, mode)));
}
static inline bool
satisfies_constraint_Bw (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return ((!(
#line 182 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(TARGET_X32))) && (memory_operand (op, mode))) || ((
#line 184 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(TARGET_X32 && Pmode == DImode)) && (GOT_memory_operand (op, mode)));
}
static inline bool
satisfies_constraint_Bz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return constant_call_address_operand (op, mode);
}
static inline bool
satisfies_constraint_BC (rtx op)
{
  return 
#line 193 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(standard_sse_constant_p (op));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 199 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 204 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 209 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 215 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(ival == 0xff || ival == 0xffff
		    || ival == (HOST_WIDE_INT) 0xffffffff));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 221 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3)));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 227 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 232 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 241 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(standard_80387_constant_p (op) > 0));
}
static inline bool
satisfies_constraint_C (rtx op)
{
  return 
#line 246 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(standard_sse_constant_p (op) == 1);
}
static inline bool
satisfies_constraint_e (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_We (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (x86_64_immediate_operand (op, mode)) && (
#line 264 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(GET_MODE (op) != VOIDmode));
}
static inline bool
satisfies_constraint_Wz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (x86_64_zext_immediate_operand (op, mode)) && (
#line 271 "../../../src/gcc-6.2.0/gcc/config/i386/constraints.md"
(GET_MODE (op) != VOIDmode));
}
static inline bool
satisfies_constraint_Z (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return x86_64_zext_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Tv (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return vsib_address_operand (op, mode);
}
static inline bool
satisfies_constraint_Ts (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return address_no_seg_operand (op, mode);
}
static inline bool
satisfies_constraint_Ti (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return address_mpx_no_index_operand (op, mode);
}
static inline bool
satisfies_constraint_Tb (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return address_mpx_no_base_operand (op, mode);
}
#endif /* tm-constrs.h */
