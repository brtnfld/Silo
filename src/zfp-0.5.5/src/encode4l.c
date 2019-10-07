#include "inline/inline.h"
#include "zfp.h"
#include "zfp/macros.h"
#include "block4.h"
#include "traitsl.h"
#include "template/template.h"
#include "template/codec.h"
#include "inline/bitstream.c"
#include "template/codec4.c"
#include "template/encode.c"
#include "template/encodei.c"
#include "template/encode4.c"
#include "template/revencode.c"
#include "template/revencode4.c"
void zfp_init_encode4l() {
 zfpns.zfp_encode_block_int64_4 = zfp_encode_block_int64_4;
 zfpns.zfp_encode_block_strided_int64_4 = zfp_encode_block_strided_int64_4;
 zfpns.zfp_encode_partial_block_strided_int64_4 = zfp_encode_partial_block_strided_int64_4;
}

