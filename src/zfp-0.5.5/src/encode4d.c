#include "inline/inline.h"
#include "zfp.h"
#include "zfp/macros.h"
#include "block4.h"
#include "traitsd.h"
#include "template/template.h"
#include "template/codec.h"
#include "inline/bitstream.c"
#include "template/codecf.c"
#include "template/codec4.c"
#include "template/encode.c"
#include "template/encodef.c"
#include "template/encode4.c"
#include "template/revcodecf.c"
#include "template/revencode.c"
#include "template/revencodef.c"
#include "template/revencode4.c"
void zfp_init_encode4d() {
 zfpns.zfp_encode_block_double_4 = zfp_encode_block_double_4;
 zfpns.zfp_encode_block_strided_double_4 = zfp_encode_block_strided_double_4;
 zfpns.zfp_encode_partial_block_strided_double_4 = zfp_encode_partial_block_strided_double_4;
}

