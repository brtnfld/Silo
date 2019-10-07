#include "inline/inline.h"
#include "zfp.h"
#include "zfp/macros.h"
#include "block1.h"
#include "traitsi.h"
#include "template/template.h"
#include "template/codec.h"
#include "inline/bitstream.c"
#include "template/codec1.c"
#include "template/encode.c"
#include "template/encodei.c"
#include "template/encode1.c"
#include "template/revencode.c"
#include "template/revencode1.c"
void zfp_init_encode1i() {
 zfpns.zfp_encode_block_int32_1 = zfp_encode_block_int32_1;
 zfpns.zfp_encode_block_strided_int32_1 = zfp_encode_block_strided_int32_1;
 zfpns.zfp_encode_partial_block_strided_int32_1 = zfp_encode_partial_block_strided_int32_1;
}

