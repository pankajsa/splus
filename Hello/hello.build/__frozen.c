// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        {"_collections_abc", 6131019, 28975},
        {"_compression", 6159994, 4157},
        {"_weakrefset", 6164151, 7495},
        {"abc", 6171646, 6484},
        {"base64", 6178130, 17023},
        {"bz2", 6195153, 11214},
        {"codecs", 6206367, 34149},
        {"collections", 6240516, -47125},
        {"collections.abc", 6131019, 28975},
        {"copyreg", 6287641, 4277},
        {"dis", 6291918, 15238},
        {"encodings", 6307156, -3980},
        {"encodings.aliases", 6311136, 6329},
        {"encodings.ascii", 6317465, 1917},
        {"encodings.base64_codec", 6319382, 2456},
        {"encodings.big5", 6321838, 1477},
        {"encodings.big5hkscs", 6323315, 1487},
        {"encodings.bz2_codec", 6324802, 3318},
        {"encodings.charmap", 6328120, 2970},
        {"encodings.cp037", 6331090, 2462},
        {"encodings.cp1006", 6333552, 2538},
        {"encodings.cp1026", 6336090, 2466},
        {"encodings.cp1125", 6338556, 8159},
        {"encodings.cp1140", 6346715, 2452},
        {"encodings.cp1250", 6349167, 2489},
        {"encodings.cp1251", 6351656, 2486},
        {"encodings.cp1252", 6354142, 2489},
        {"encodings.cp1253", 6356631, 2502},
        {"encodings.cp1254", 6359133, 2491},
        {"encodings.cp1255", 6361624, 2510},
        {"encodings.cp1256", 6364134, 2488},
        {"encodings.cp1257", 6366622, 2496},
        {"encodings.cp1258", 6369118, 2494},
        {"encodings.cp273", 6371612, 2448},
        {"encodings.cp424", 6374060, 2492},
        {"encodings.cp437", 6376552, 7876},
        {"encodings.cp500", 6384428, 2462},
        {"encodings.cp720", 6386890, 2559},
        {"encodings.cp737", 6389449, 8198},
        {"encodings.cp775", 6397647, 7906},
        {"encodings.cp850", 6405553, 7537},
        {"encodings.cp852", 6413090, 7914},
        {"encodings.cp855", 6421004, 8167},
        {"encodings.cp856", 6429171, 2524},
        {"encodings.cp857", 6431695, 7519},
        {"encodings.cp858", 6439214, 7507},
        {"encodings.cp860", 6446721, 7855},
        {"encodings.cp861", 6454576, 7870},
        {"encodings.cp862", 6462446, 8059},
        {"encodings.cp863", 6470505, 7870},
        {"encodings.cp864", 6478375, 8016},
        {"encodings.cp865", 6486391, 7870},
        {"encodings.cp866", 6494261, 8203},
        {"encodings.cp869", 6502464, 7896},
        {"encodings.cp874", 6510360, 2590},
        {"encodings.cp875", 6512950, 2459},
        {"encodings.cp932", 6515409, 1479},
        {"encodings.cp949", 6516888, 1479},
        {"encodings.cp950", 6518367, 1479},
        {"encodings.euc_jis_2004", 6519846, 1493},
        {"encodings.euc_jisx0213", 6521339, 1493},
        {"encodings.euc_jp", 6522832, 1481},
        {"encodings.euc_kr", 6524313, 1481},
        {"encodings.gb18030", 6525794, 1483},
        {"encodings.gb2312", 6527277, 1481},
        {"encodings.gbk", 6528758, 1475},
        {"encodings.hex_codec", 6530233, 2443},
        {"encodings.hp_roman8", 6532676, 2663},
        {"encodings.hz", 6535339, 1473},
        {"encodings.idna", 6536812, 5757},
        {"encodings.iso2022_jp", 6542569, 1494},
        {"encodings.iso2022_jp_1", 6544063, 1498},
        {"encodings.iso2022_jp_2", 6545561, 1498},
        {"encodings.iso2022_jp_2004", 6547059, 1504},
        {"encodings.iso2022_jp_3", 6548563, 1498},
        {"encodings.iso2022_jp_ext", 6550061, 1502},
        {"encodings.iso2022_kr", 6551563, 1494},
        {"encodings.iso8859_1", 6553057, 2461},
        {"encodings.iso8859_10", 6555518, 2466},
        {"encodings.iso8859_11", 6557984, 2560},
        {"encodings.iso8859_13", 6560544, 2469},
        {"encodings.iso8859_14", 6563013, 2487},
        {"encodings.iso8859_15", 6565500, 2466},
        {"encodings.iso8859_16", 6567966, 2468},
        {"encodings.iso8859_2", 6570434, 2461},
        {"encodings.iso8859_3", 6572895, 2468},
        {"encodings.iso8859_4", 6575363, 2461},
        {"encodings.iso8859_5", 6577824, 2462},
        {"encodings.iso8859_6", 6580286, 2506},
        {"encodings.iso8859_7", 6582792, 2469},
        {"encodings.iso8859_8", 6585261, 2500},
        {"encodings.iso8859_9", 6587761, 2461},
        {"encodings.johab", 6590222, 1479},
        {"encodings.koi8_r", 6591701, 2513},
        {"encodings.koi8_t", 6594214, 2424},
        {"encodings.koi8_u", 6596638, 2499},
        {"encodings.kz1048", 6599137, 2476},
        {"encodings.latin_1", 6601613, 1929},
        {"encodings.mac_arabic", 6603542, 7770},
        {"encodings.mac_centeuro", 6611312, 2500},
        {"encodings.mac_croatian", 6613812, 2508},
        {"encodings.mac_cyrillic", 6616320, 2498},
        {"encodings.mac_farsi", 6618818, 2442},
        {"encodings.mac_greek", 6621260, 2482},
        {"encodings.mac_iceland", 6623742, 2501},
        {"encodings.mac_latin2", 6626243, 2642},
        {"encodings.mac_roman", 6628885, 2499},
        {"encodings.mac_romanian", 6631384, 2509},
        {"encodings.mac_turkish", 6633893, 2502},
        {"encodings.palmos", 6636395, 2489},
        {"encodings.ptcp154", 6638884, 2583},
        {"encodings.punycode", 6641467, 6454},
        {"encodings.quopri_codec", 6647921, 2476},
        {"encodings.raw_unicode_escape", 6650397, 1802},
        {"encodings.rot_13", 6652199, 3062},
        {"encodings.shift_jis", 6655261, 1487},
        {"encodings.shift_jis_2004", 6656748, 1497},
        {"encodings.shift_jisx0213", 6658245, 1497},
        {"encodings.tis_620", 6659742, 2551},
        {"encodings.undefined", 6662293, 2196},
        {"encodings.unicode_escape", 6664489, 1782},
        {"encodings.unicode_internal", 6666271, 1792},
        {"encodings.utf_16", 6668063, 4866},
        {"encodings.utf_16_be", 6672929, 1667},
        {"encodings.utf_16_le", 6674596, 1667},
        {"encodings.utf_32", 6676263, 4759},
        {"encodings.utf_32_be", 6681022, 1560},
        {"encodings.utf_32_le", 6682582, 1560},
        {"encodings.utf_7", 6684142, 1588},
        {"encodings.utf_8", 6685730, 1647},
        {"encodings.utf_8_sig", 6687377, 4549},
        {"encodings.uu_codec", 6691926, 3309},
        {"encodings.zlib_codec", 6695235, 3156},
        {"enum", 6698391, 24303},
        {"functools", 6722694, 24264},
        {"genericpath", 6746958, 3937},
        {"heapq", 6750895, 14395},
        {"importlib", 6765290, -3765},
        {"importlib._bootstrap", 6769055, 29211},
        {"importlib._bootstrap_external", 6798266, 41851},
        {"importlib.machinery", 6840117, 1005},
        {"inspect", 6841122, 80076},
        {"io", 6921198, 3442},
        {"keyword", 6924640, 1842},
        {"linecache", 6926482, 3822},
        {"locale", 6930304, 34621},
        {"opcode", 6964925, 5411},
        {"operator", 6970336, 13933},
        {"os", 6984269, 29831},
        {"posixpath", 7014100, 10462},
        {"quopri", 7024562, 5804},
        {"re", 7030366, 13837},
        {"reprlib", 7044203, 5383},
        {"sre_compile", 7049586, 15236},
        {"sre_constants", 7064822, 6324},
        {"sre_parse", 7071146, 21319},
        {"stat", 7092465, 4377},
        {"stringprep", 7096842, 10065},
        {"struct", 7106907, 367},
        {"threading", 7107274, 37919},
        {"token", 7145193, 3632},
        {"tokenize", 7148825, 17864},
        {"traceback", 7166689, 19656},
        {"types", 7186345, 9009},
        {"warnings", 7195354, 13869},
        {NULL, 0, 0}
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
