#include "inline/inline.h"
#include "zfp.h"
#include "zfp/macros.h"
#include "block2.h"
#include "traitsf.h"
#include "template/template.h"
#include "template/codec.h"
#include "inline/bitstream.c"
#include "template/codecf.c"
#include "template/codec2.c"
#include "template/decode.c"
#include "template/decodef.c"
#include "template/decode2.c"
#include "template/revcodecf.c"
#include "template/revdecode.c"
#include "template/revdecodef.c"
#include "template/revdecode2.c"
void zfp_init_decode2f() {
 zfpns.zfp_decode_block_float_2 = zfp_decode_block_float_2;
 zfpns.zfp_decode_block_strided_float_2 = zfp_decode_block_strided_float_2;
 zfpns.zfp_decode_partial_block_strided_float_2 = zfp_decode_partial_block_strided_float_2;
}

