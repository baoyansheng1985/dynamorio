/* **********************************************************
 * Copyright (c) 2016 ARM Limited. All rights reserved.
 * **********************************************************/

/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of ARM Limited nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL ARM LIMITED OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

#include "../globals.h"
#include "instr.h"
#include "decode.h"
#include "decode_private.h"
#include "decode_fast.h" /* ensure we export decode_next_pc, decode_sizeof */

bool
is_isa_mode_legal(dr_isa_mode_t mode)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return false;
}

app_pc
canonicalize_pc_target(dcontext_t *dcontext, app_pc pc)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

DR_API
app_pc
dr_app_pc_as_jump_target(dr_isa_mode_t isa_mode, app_pc pc)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

DR_API
app_pc
dr_app_pc_as_load_target(dr_isa_mode_t isa_mode, app_pc pc)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

byte *
decode_eflags_usage(dcontext_t *dcontext, byte *pc, uint *usage,
                    dr_opnd_query_flags_t flags)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte *
decode_opcode(dcontext_t *dcontext, byte *pc, instr_t *instr)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte *
decode(dcontext_t *dcontext, byte *pc, instr_t *instr)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte *
decode_from_copy(dcontext_t *dcontext, byte *copy_pc, byte *orig_pc, instr_t *instr)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte *
decode_cti(dcontext_t *dcontext, byte *pc, instr_t *instr)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte *
decode_next_pc(dcontext_t *dcontext, byte *pc)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

int
decode_sizeof(dcontext_t *dcontext, byte *pc, int *num_prefixes
              _IF_X64(uint *rip_rel_pos))
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

byte *
decode_raw(dcontext_t *dcontext, byte *pc, instr_t *instr)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

bool
decode_raw_is_jmp(dcontext_t *dcontext, byte *pc)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return false;
}

byte *
decode_raw_jmp_target(dcontext_t *dcontext, byte *pc)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

const instr_info_t *
instr_info_extra_opnds(const instr_info_t *info)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte
instr_info_opnd_type(const instr_info_t *info, bool src, int num)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

const instr_info_t *
get_next_instr_info(const instr_info_t * info)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

byte
decode_first_opcode_byte(int opcode)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

const instr_info_t *
opcode_to_encoding_info(uint opc, dr_isa_mode_t isa_mode)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

DR_API
const char *
decode_opcode_name(int opcode)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return NULL;
}

opnd_size_t
resolve_variable_size(decode_info_t *di, opnd_size_t sz, bool is_reg)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return 0;
}

bool
optype_is_indir_reg(int optype)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return false;
}

bool
optype_is_reg(int optype)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return false;
}

bool
optype_is_gpr(int optype)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
    return false;
}

#ifdef DEBUG
# ifndef STANDALONE_DECODER
void
check_encode_decode_consistency(dcontext_t *dcontext, instrlist_t *ilist)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
}
# endif /* STANDALONE_DECODER */

void
decode_debug_checks_arch(void)
{
    ASSERT_NOT_IMPLEMENTED(false); /* FIXME i#1569 */
}
#endif /* DEBUG */

#ifdef DECODE_UNIT_TEST

# include "instr_create.h"

int main()
{
    bool res = true;
    standalone_init();
    return res;
}

#endif /* DECODE_UNIT_TEST */
