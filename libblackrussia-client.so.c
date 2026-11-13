typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long    undefined5;
typedef unsigned long    undefined6;
typedef unsigned long    undefined7;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef pointer pointer __((offset(0x10)));

typedef pointer pointer __((offset(0x68)));

typedef pointer pointer __((offset(0x40)));

typedef pointer pointer __((offset(0x18)));

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct ElfNote_8_132 ElfNote_8_132, *PElfNote_8_132;

struct ElfNote_8_132 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[8]; // Vendor name
    byte description[132]; // Blob value
};



undefined LAB_00e5af38;
undefined DAT_0219a700;
uint *UNK_023b9070;
long UNK_023b9078;
undefined8 UNK_023b9080;
byte UNK_023b9088;
undefined DAT_00e5faf4;
undefined DAT_00e5fb00;
undefined DAT_00e5fba8;
undefined DAT_00e5fbb4;
undefined DAT_00e5fc4c;
undefined DAT_00e5fce8;
undefined DAT_00e5fcf4;
undefined DAT_00e5fd94;
undefined DAT_00e5fe34;
undefined8 UNK_023b91f0;
ulong *UNK_023b91f8;
undefined8 UNK_023b9200;
ulong *UNK_023b9208;
ulong *UNK_023b9210;
ulong *UNK_023b9218;
ulong *UNK_023b9220;
ulong *UNK_023b9228;
ulong *UNK_023b9230;
undefined DAT_023b9268;
undefined8 UNK_023b9270;
undefined2 UNK_023b9278;
undefined8 UNK_023b927c;
undefined8 UNK_023b9284;
undefined8 UNK_023b928c;
undefined8 UNK_023b9298;
undefined8 UNK_023b92a0;
undefined2 UNK_023b92a8;
undefined8 UNK_023b92ac;
undefined8 UNK_023b92b4;
undefined8 UNK_023b92bc;
undefined8 UNK_023b92c8;
undefined8 UNK_023b92d0;
undefined2 UNK_023b92d8;
undefined8 UNK_023b92dc;
undefined8 UNK_023b92e4;
undefined8 UNK_023b92ec;
undefined8 UNK_023b92f8;
undefined8 UNK_023b9300;
undefined2 UNK_023b9308;
undefined8 UNK_023b930c;
undefined8 UNK_023b9314;
undefined8 UNK_023b931c;
undefined8 UNK_023b9328;
undefined8 UNK_023b9330;
undefined2 UNK_023b9338;
undefined8 UNK_023b933c;
undefined8 UNK_023b9344;
undefined8 UNK_023b934c;
undefined8 UNK_023b9358;
undefined8 UNK_023b9360;
undefined2 UNK_023b9368;
undefined8 UNK_023b936c;
undefined8 UNK_023b9374;
undefined8 UNK_023b937c;
undefined8 UNK_023b9388;
undefined8 UNK_023b9390;
undefined2 UNK_023b9398;
undefined8 UNK_023b939c;
undefined8 UNK_023b93a4;
undefined8 UNK_023b93ac;
undefined8 UNK_023b93b8;
undefined8 UNK_023b93c0;
undefined2 UNK_023b93c8;
undefined8 UNK_023b93cc;
undefined8 UNK_023b93d4;
undefined8 UNK_023b93dc;
undefined8 UNK_023b93e8;
undefined8 UNK_023b93f0;
undefined2 UNK_023b93f8;
undefined8 UNK_023b93fc;
undefined8 UNK_023b9404;
undefined8 UNK_023b940c;
undefined8 UNK_023b9418;
undefined8 UNK_023b9420;
undefined2 UNK_023b9428;
undefined8 UNK_023b942c;
undefined8 UNK_023b9434;
undefined8 UNK_023b943c;
undefined8 UNK_023b9448;
undefined8 UNK_023b9450;
undefined2 UNK_023b9458;
undefined8 UNK_023b945c;
undefined8 UNK_023b9464;
undefined8 UNK_023b946c;
undefined8 UNK_023b9478;
undefined8 UNK_023b9480;
undefined2 UNK_023b9488;
undefined8 UNK_023b948c;
undefined8 UNK_023b9494;
undefined8 UNK_023b949c;
undefined8 UNK_023b94a8;
undefined8 UNK_023b94b0;
undefined2 UNK_023b94b8;
undefined8 UNK_023b94bc;
undefined8 UNK_023b94c4;
undefined8 UNK_023b94cc;
undefined8 UNK_023b94d8;
undefined8 UNK_023b94e0;
undefined2 UNK_023b94e8;
undefined8 UNK_023b94ec;
undefined8 UNK_023b94f4;
undefined8 UNK_023b94fc;
undefined8 UNK_023b9508;
undefined8 UNK_023b9510;
undefined2 UNK_023b9518;
undefined8 UNK_023b951c;
undefined8 UNK_023b9524;
undefined8 UNK_023b952c;
undefined8 UNK_023b9538;
undefined8 UNK_023b9540;
undefined2 UNK_023b9548;
undefined8 UNK_023b954c;
undefined8 UNK_023b9554;
undefined8 UNK_023b955c;
undefined8 UNK_023b9568;
undefined8 UNK_023b9570;
undefined2 UNK_023b9578;
undefined8 UNK_023b957c;
undefined8 UNK_023b9584;
undefined8 UNK_023b958c;
undefined8 UNK_023b9598;
undefined8 UNK_023b95a0;
undefined2 UNK_023b95a8;
undefined8 UNK_023b95ac;
undefined8 UNK_023b95b4;
undefined8 UNK_023b95bc;
undefined8 UNK_023b95c8;
undefined8 UNK_023b95d0;
undefined2 UNK_023b95d8;
undefined8 UNK_023b95dc;
undefined8 UNK_023b95e4;
undefined8 UNK_023b95ec;
undefined8 UNK_023b95f8;
undefined8 UNK_023b9600;
undefined2 UNK_023b9608;
undefined8 UNK_023b960c;
undefined8 UNK_023b9614;
undefined8 UNK_023b961c;
undefined8 UNK_023b9628;
undefined2 UNK_023b9630;
undefined1 UNK_023b9632;
undefined8 UNK_023b9638;
undefined8 UNK_023b9640;
undefined2 UNK_023b9648;
undefined8 UNK_023b964c;
undefined8 UNK_023b9654;
undefined8 UNK_023b965c;
undefined UNK_004d8f1a;
undefined DAT_00e9bb9c;
undefined LAB_00e9bcc4;
undefined8 UNK_02519440;
undefined4 UNK_02519448;
undefined8 UNK_02519450;
undefined4 UNK_02519458;
undefined8 UNK_02519460;
undefined4 UNK_02519468;
undefined8 UNK_02519470;
undefined4 UNK_02519478;
undefined DAT_00ea86c0;
undefined _ZNSt6__ndk122condition_variable_anyD2Ev;
undefined DAT_00ea86c4;
undefined DAT_00ea86c8;
undefined SUB_01a0d110;
undefined8 UNK_025197f8;
undefined8 UNK_02519800;
undefined8 UNK_02519808;
undefined8 UNK_02519810;
undefined8 UNK_02519818;
undefined8 UNK_02519820;
undefined8 *UNK_02519828;
undefined8 *UNK_02519830;
undefined8 UNK_02519840;
undefined8 UNK_02519848;
undefined8 UNK_02519850;
undefined8 UNK_02519858;
undefined8 UNK_02519860;
undefined8 UNK_02519868;
undefined8 UNK_02519870;
undefined8 UNK_02519878;
undefined8 UNK_02519880;
undefined8 UNK_02519888;
undefined8 UNK_02519890;
undefined8 UNK_02519898;
undefined8 UNK_025198a0;
undefined8 UNK_025198a8;
undefined UNK_0219ce30;
undefined DAT_00ec59dc;
byte UNK_02529068;
undefined SUB_00ece218;
undefined8 UNK_025793d8;
undefined8 UNK_025793e0;
byte UNK_025793e8;
undefined _ZNSt13bad_exceptionD1Ev;
undefined DAT_031be2e0;
pointer __((offset(0x10))) _ZTISt9bad_alloc;
undefined UNK_0054ff68;
undefined1 UNK_023a4ef0;
byte UNK_023a4ef8;
undefined SUB_00f1385c;
undefined DAT_00f48e5c;
undefined8 UNK_031c07c8;
undefined8 UNK_031c07d0;
undefined8 UNK_031c07d8;
undefined8 UNK_031c07e0;
undefined8 UNK_031c07e8;
undefined8 UNK_031c07f0;
undefined8 UNK_031c07f8;
undefined8 UNK_031c0800;
undefined8 UNK_031c0808;
undefined8 UNK_031c0810;
undefined8 UNK_031c0818;
undefined8 UNK_031c0820;
undefined8 UNK_031c0828;
undefined8 UNK_031c0830;
undefined8 UNK_031c0838;
undefined8 UNK_031c0840;
undefined8 UNK_031c0848;
undefined8 UNK_031c0850;
undefined8 UNK_031c0858;
undefined8 UNK_031c0860;
undefined8 UNK_031c0868;
undefined8 UNK_031c0870;
undefined8 UNK_031c0878;
undefined8 UNK_031c0880;
undefined8 UNK_031c0888;
undefined8 UNK_031c0890;
undefined8 UNK_031c0898;
undefined8 UNK_031c08a0;
undefined8 UNK_031c08a8;
undefined8 UNK_031c08b0;
undefined8 UNK_031c08b8;
undefined8 UNK_031c08c0;
undefined8 UNK_031c08c8;
undefined8 UNK_031c08d0;
undefined8 UNK_031c08d8;
undefined8 UNK_031c08e0;
undefined8 UNK_031c08e8;
undefined8 UNK_031c08f0;
undefined8 UNK_031c08f8;
undefined8 UNK_031c0900;
undefined8 UNK_031c0908;
undefined8 UNK_031c0910;
undefined8 UNK_031c0918;
undefined8 UNK_031c0920;
undefined8 UNK_031c0928;
undefined8 UNK_031c0930;
undefined8 UNK_031c0938;
undefined8 UNK_031c0940;
undefined8 UNK_031c0948;
undefined8 UNK_031c0950;
undefined8 UNK_031c0958;
undefined8 UNK_031c0960;
undefined8 UNK_031c0968;
undefined8 UNK_031c0970;
undefined8 UNK_031c0978;
undefined8 UNK_031c0980;
undefined8 UNK_031c0988;
undefined8 UNK_031c0990;
undefined8 UNK_031c0998;
undefined8 UNK_031c09a0;
undefined8 UNK_031c09a8;
undefined8 UNK_031c09b0;
undefined8 UNK_031c09b8;
ulong *UNK_036f56d8;
uint *UNK_036f56e0;
undefined DAT_00ef29e4;
undefined DAT_00fecc88;
undefined DAT_00fecd20;
undefined DAT_00fecdb4;
undefined DAT_00fecdbc;
undefined DAT_00fecdc8;
undefined DAT_00fecdd4;
byte *UNK_036f56b0;
ulong *UNK_036f56b8;
ulong *UNK_036f56c0;
uint *UNK_036f56c8;
ulong *UNK_036f56d0;
undefined DAT_00ffd2b8;
undefined DAT_00ffd2f0;
undefined DAT_00ffd378;
undefined LAB_00ffd568;
undefined DAT_00ffd600;
undefined DAT_00ffd638;
undefined LAB_00ffdac8;
undefined DAT_00ffdb00;
undefined DAT_00fbb22c;
undefined DAT_0100e7f4;
undefined8 UNK_036f57b8;
undefined DAT_010182e0;
undefined8 UNK_036f57f8;
undefined DAT_00f32240;
undefined DAT_0104fbe8;
undefined DAT_0104fbf0;
undefined DAT_0104fc90;
ulong *UNK_036f5948;
ulong *UNK_036f5950;
ulong *UNK_036f5958;
ulong *UNK_036f5960;
undefined DAT_0105a84c;
undefined8 UNK_036f5990;
undefined DAT_0105d608;
ulong *UNK_036f7670;
undefined DAT_010fd258;
undefined DAT_010fd264;
undefined DAT_010fd2fc;
undefined8 UNK_036f7d18;
undefined2 UNK_036f7d20;
undefined1 UNK_036f7d22;
ulong *UNK_036f7d48;
ulong *UNK_036f7d50;
ulong *UNK_036f7d58;
ulong *UNK_036f7d60;
undefined DAT_00fcfa0c;
undefined DAT_011127c0;
undefined DAT_011127c8;
undefined DAT_011127d8;
undefined DAT_0112f6a8;
undefined DAT_011ca358;
byte *UNK_036f8530;
byte *UNK_036f8538;
undefined8 UNK_036f8540;
byte *UNK_036f8548;
byte *UNK_036f8550;
undefined8 UNK_036f8558;
undefined DAT_0119c27c;
undefined DAT_01269410;
undefined DAT_01276c5c;
undefined DAT_01276c68;
undefined DAT_01276c74;
undefined DAT_01276d14;
undefined DAT_01276dbc;
undefined DAT_01276e6c;
undefined DAT_01276e78;
undefined DAT_01276e84;
ulong *UNK_036f8e18;
ulong *UNK_036f8e20;
ulong *UNK_036f8e28;
uint *UNK_036f8e30;
ulong *UNK_036f8e38;
ulong *UNK_036f8e40;
undefined8 UNK_036f8e48;
ulong *UNK_036f8e50;
undefined8 UNK_036f8e58;
ulong *UNK_036f8e60;
ulong *UNK_036f8e68;
ulong *UNK_036f8e70;
ulong *UNK_036f8e78;
ulong *UNK_036f8e80;
ulong *UNK_036f8e88;
undefined DAT_00fe8f50;
undefined DAT_0105d610;
undefined DAT_0106b570;
undefined DAT_0106b57c;
undefined DAT_01176b00;
undefined DAT_010209bc;
undefined DAT_0106b824;
undefined DAT_0125fef8;
undefined DAT_01286250;
undefined DAT_012862f8;
undefined DAT_01286304;
undefined DAT_01286310;
undefined DAT_0128631c;
undefined DAT_012863b4;
ulong *UNK_036f8eb8;
undefined8 UNK_036f8ec0;
ulong *UNK_036f8ec8;
ulong *UNK_036f8ed0;
ulong *UNK_036f8ed8;
uint *UNK_036f8ee0;
ulong *UNK_036f8ee8;
ulong *UNK_036f8ef0;
ulong *UNK_036f8ef8;
undefined8 UNK_036f8f00;
undefined8 UNK_036f91e0;
undefined DAT_012ddb1c;
undefined DAT_012ddc00;
undefined8 UNK_036f91d8;
ulong *UNK_036f92a0;
uint *UNK_036f92a8;
uint *UNK_036f92b0;
uint *UNK_036f92b8;
ulong *UNK_036f92c0;
ulong *UNK_036f92c8;
ulong *UNK_036f92d0;
undefined DAT_00f32260;
undefined DAT_010188f0;
undefined DAT_010188fc;
undefined DAT_01176a54;
undefined DAT_011c33a4;
undefined LAB_013027b4;
undefined DAT_013027c0;
ulong *UNK_036f9298;
uint *UNK_036f93b8;
uint *UNK_036f93c0;
ulong *UNK_036f93c8;
ulong *UNK_036f93d0;
ulong *UNK_036f93d8;
ulong *UNK_036f93e0;
uint *UNK_036f93e8;
ulong *UNK_036f93f0;
ulong *UNK_036f93f8;
undefined DAT_00f32234;
undefined DAT_00fb2f00;
undefined DAT_00fb2f30;
undefined DAT_01228570;
undefined DAT_012aea94;
undefined DAT_01321820;
undefined DAT_0132182c;
undefined DAT_01321838;
undefined1 *UNK_036f9648;
undefined *UNK_036f9650;
undefined1 *UNK_036f9668;
undefined *UNK_036f9670;
ulong *UNK_036f9678;
long UNK_036f9680;
undefined8 UNK_036f9688;
undefined *UNK_036f9698;
undefined *UNK_036f96a0;
undefined1 *UNK_036f96b8;
undefined *UNK_036f96c0;
undefined DAT_00e5fa4c;
undefined DAT_01120c3c;
undefined DAT_0118d350;
undefined DAT_011e41f4;
undefined DAT_012278e0;
undefined DAT_01323ef0;
undefined LAB_01323fd4;
undefined LAB_0132407c;
undefined LAB_01328598;
undefined DAT_013285a4;
undefined DAT_013285b0;
undefined DAT_013285bc;
undefined DAT_013285c4;
undefined DAT_013285d0;
undefined DAT_01328680;
undefined DAT_01328f24;
undefined DAT_01328f5c;
undefined DAT_01328f80;
undefined DAT_01328f9c;
undefined LAB_01329020;
undefined DAT_0132903c;
undefined DAT_01329078;
undefined DAT_01329094;
undefined LAB_0132926c;
undefined DAT_013292a4;
undefined LAB_013293c0;
undefined DAT_013293dc;
undefined LAB_01329558;
undefined DAT_01329590;
undefined DAT_013295b4;
undefined DAT_013295d0;
undefined DAT_0132988c;
undefined DAT_013298c4;
undefined DAT_013298e8;
undefined DAT_01329904;
uint *UNK_036f9458;
ulong *UNK_036f9460;
uint *UNK_036f9468;
uint *UNK_036f9470;
ulong *UNK_036f9478;
ulong *UNK_036f9480;
ulong *UNK_036f9488;
ulong *UNK_036f9490;
uint *UNK_036f9498;
long UNK_036f94a0;
undefined8 UNK_036f94a8;
undefined1 *UNK_036f94b8;
undefined *UNK_036f94c0;
undefined *UNK_036f94d8;
undefined *UNK_036f94e0;
long UNK_036f94e8;
long UNK_036f94f0;
undefined8 UNK_036f94f8;
undefined *UNK_036f9508;
undefined *UNK_036f9510;
undefined *UNK_036f9528;
undefined *UNK_036f9530;
long UNK_036f9538;
long UNK_036f9540;
undefined8 UNK_036f9548;
undefined *UNK_036f9558;
undefined *UNK_036f9560;
undefined *UNK_036f9578;
undefined *UNK_036f9580;
uint *UNK_036f9588;
long UNK_036f9590;
undefined8 UNK_036f9598;
undefined *UNK_036f95a8;
undefined *UNK_036f95b0;
undefined *UNK_036f95c8;
undefined *UNK_036f95d0;
ulong *UNK_036f95d8;
long UNK_036f95e0;
undefined1 *UNK_036f95f8;
undefined *UNK_036f9600;
undefined *UNK_036f9618;
undefined *UNK_036f9620;
ulong *UNK_036f9628;
long UNK_036f9630;
undefined8 UNK_036f9638;
ulong *UNK_036faed8;
ulong *UNK_036faee0;
byte *UNK_036faee8;
ulong UNK_036faef0;
ulong UNK_036faef8;
ulong UNK_036faf00;
undefined LAB_00e7fc70;
undefined DAT_0112f6d4;
undefined DAT_011b2b40;
undefined DAT_012ac060;
undefined DAT_0138bd78;
undefined DAT_00e79bd0;
undefined DAT_01260078;
undefined DAT_013a6e54;
undefined DAT_013a6e60;
undefined DAT_013a6f38;
undefined DAT_013a70b8;
undefined DAT_013a7174;
ulong *UNK_036fb0d8;
ulong *UNK_036fb0e0;
ulong *UNK_036fb0e8;
undefined8 UNK_036fb0f0;
ulong *UNK_036fb0f8;
undefined8 UNK_036fb100;
undefined8 UNK_036fb108;
ulong *UNK_036fb258;
undefined8 UNK_036fb260;
undefined8 UNK_036fb268;
undefined8 UNK_036fb270;
ulong *UNK_036fb278;
ulong *UNK_036fb280;
undefined DAT_012834b0;
undefined LAB_013b03cc;
undefined DAT_013c0470;
undefined DAT_013c0540;
undefined DAT_013c054c;
undefined DAT_00fb2f40;
undefined DAT_011127d0;
undefined DAT_011127e0;
undefined DAT_01208ff0;
byte *UNK_036fbe80;
byte *UNK_036fbe88;
byte *UNK_036fbe90;
byte *UNK_036fbe98;
undefined DAT_0120d034;
undefined DAT_0125c5ec;
byte *UNK_036fbeb0;
byte *UNK_036fbeb8;
byte *UNK_036fbec0;
undefined DAT_0112f6b0;
undefined DAT_0112f6bc;
undefined DAT_0119c26c;
byte *UNK_036fbed0;
byte *UNK_036fbed8;
byte *UNK_036fbee0;
byte *UNK_036fbee8;
undefined DAT_01208fe8;
uint *UNK_036fbf00;
undefined DAT_0106b564;
undefined8 UNK_036fc630;
undefined8 UNK_036fc638;
undefined DAT_015d7800;
byte *UNK_036fc6d8;
byte *UNK_036fc6e0;
byte *UNK_036fc6e8;
undefined8 UNK_036fc6f0;
byte *UNK_036fc870;
undefined DAT_015d0b4c;
undefined LAB_015ddc9c;
undefined DAT_01636220;
uint *UNK_036fcbb8;
ulong *UNK_036fcbc0;
ulong *UNK_036fcbc8;
ulong *UNK_036fcbd0;
ulong *UNK_036fcbd8;
ulong *UNK_036fcbe0;
ulong *UNK_036fcbe8;
undefined8 UNK_036fcbf0;
undefined8 UNK_036fcbf8;
undefined8 UNK_036fcc00;
ulong *UNK_036fcc08;
undefined8 UNK_036fcc10;
ulong *UNK_036fcc18;
undefined DAT_00f1da48;
undefined DAT_00faeb10;
undefined DAT_00fb2f54;
undefined DAT_00fb2fec;
undefined DAT_011416f8;
undefined DAT_011417c8;
undefined DAT_013b95b8;
undefined DAT_00eb6d5c;
undefined DAT_00f1dc68;
undefined DAT_00fe93ac;
undefined DAT_01018390;
undefined DAT_01018920;
undefined DAT_01141868;
undefined DAT_01269404;
undefined DAT_0136c6f4;
undefined DAT_013eb55c;
undefined DAT_013f3708;
undefined DAT_01465090;
undefined DAT_014fe948;
undefined DAT_0156c8a4;
undefined DAT_0166937c;
undefined DAT_016f6b5c;
undefined DAT_016f6c24;
undefined DAT_016f6cd4;
ulong *UNK_036fd3b0;
ulong *UNK_036fd3b8;
ulong *UNK_036fd3c0;
ulong *UNK_036fd3c8;
ulong *UNK_036fd3d0;
undefined8 UNK_036fd3d8;
undefined8 UNK_036fd3e0;
ulong *UNK_036fd3e8;
ulong *UNK_036fd3f0;
ulong *UNK_036fd3f8;
ulong *UNK_036fd400;
ulong *UNK_036fd408;
undefined8 UNK_036fd410;
undefined8 UNK_036fd418;
undefined8 UNK_036fd420;
undefined8 UNK_036fd428;
undefined8 UNK_036fd430;
undefined8 UNK_036fd438;
undefined8 UNK_036fd440;
ulong *UNK_036fd500;
uint *UNK_036fd508;
uint *UNK_036fd510;
uint *UNK_036fd518;
ulong *UNK_036fd520;
undefined DAT_0136c4d0;
undefined DAT_014dda7c;
undefined DAT_0157f828;
undefined DAT_015c23b8;
undefined LAB_01712bd0;
undefined DAT_011b2b34;
undefined8 UNK_036fd8e0;
undefined DAT_01777414;
ulong *UNK_036fd918;
ulong *UNK_036fda38;
ulong *UNK_036fda40;
undefined DAT_013e78cc;
undefined DAT_01788de8;
undefined8 UNK_036fda78;
undefined8 UNK_036fda80;
undefined DAT_00fb5e3c;
undefined8 UNK_036fdae0;
undefined DAT_017920b4;
ulong *UNK_036fdb10;
ulong *UNK_036fde08;
undefined DAT_00f1d9b0;
undefined DAT_01640424;
undefined DAT_0164050c;
undefined DAT_018e2c04;
undefined DAT_018e2cc4;
undefined DAT_018e2dac;
undefined8 UNK_03719bc0;
undefined8 UNK_03719bc8;
undefined8 UNK_03719bd0;
undefined8 UNK_03719bd8;
undefined8 UNK_03719be0;
undefined8 UNK_03719be8;
undefined DAT_01bcf7bc;
undefined DAT_01bcf858;
undefined _ZNSt6__ndk15mutexD1Ev;
undefined8 UNK_03e1ebd8;
undefined8 UNK_03e1ebe0;
undefined8 UNK_03e1ebe8;
undefined8 UNK_03e1ebf0;
undefined8 UNK_03e1ebf8;
undefined8 UNK_03e1ec00;

void _INIT_8(void)

{
  char cVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if (((bRam00000000023b9088 & 1) != 0) || (iVar3 = __cxa_guard_acquire(0x23b9088), iVar3 == 0)) {
    return;
  }
  pbVar4 = (byte *)__emutls_get_address(0x22c9188);
  if ((*pbVar4 & 1) == 0) {
    puVar5 = (undefined4 *)__emutls_get_address(0x22c9168);
    *(undefined1 *)((long)puVar5 + 6) = 1;
    *(undefined2 *)(puVar5 + 1) = 0x490a;
    *puVar5 = 0xa7b7e400;
    __cxa_thread_atexit(&LAB_00e5af38,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9188);
    *puVar6 = 1;
    puRam00000000023b9070 = (uint *)__emutls_get_address(0x22c9168);
    cVar1 = *(char *)((long)puRam00000000023b9070 + 6);
  }
  else {
    puRam00000000023b9070 = (uint *)__emutls_get_address(0x22c9168);
    cVar1 = *(char *)((long)puRam00000000023b9070 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000023b9070 + 6) = 0;
    *(byte *)(puRam00000000023b9070 + 1) = (byte)puRam00000000023b9070[1] ^ 0x73;
    *(byte *)((long)puRam00000000023b9070 + 5) = *(byte *)((long)puRam00000000023b9070 + 5) ^ 0x49;
    *puRam00000000023b9070 = *puRam00000000023b9070 ^ 0xd3c78945;
  }
  lVar2 = 0;
  do {
    lRam00000000023b9078 = lVar2;
    lVar2 = lRam00000000023b9078 + 1;
  } while (*(char *)((long)puRam00000000023b9070 + lRam00000000023b9078) != '\0');
  uRam00000000023b9080 = 0x4283467002223643;
  __cxa_guard_release(0x23b9088);
  return;
}



void _INIT_23(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uStack_38 = 0xeef097871c1efd3a;
  uStack_40 = 0xf5f798fa0a14f234;
  uStack_30 = 0x933d;
  pbVar3 = (byte *)__emutls_get_address(0x22c9e50);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22c9e30);
    func_0x00e5fa58(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00e5faf4,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9e50);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x22c9e30);
  func_0x00e6016c();
  uRam00000000023b91f0 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x22c9e90);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x22c9e70);
    *puVar5 = 0x7803cba8e22cd1ef;
    *(undefined4 *)(puVar5 + 1) = 0x14dd8f2;
    __cxa_thread_atexit(&DAT_00e5fb00,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9e90);
    *puVar6 = 1;
    puRam00000000023b91f8 = (ulong *)__emutls_get_address(0x22c9e70);
    cVar1 = *(char *)((long)puRam00000000023b91f8 + 0xb);
  }
  else {
    puRam00000000023b91f8 = (ulong *)__emutls_get_address(0x22c9e70);
    cVar1 = *(char *)((long)puRam00000000023b91f8 + 0xb);
  }
  if (cVar1 != '\0') {
    *(byte *)(puRam00000000023b91f8 + 1) = (byte)puRam00000000023b91f8[1] ^ 0x9f;
    *(byte *)((long)puRam00000000023b91f8 + 9) = *(byte *)((long)puRam00000000023b91f8 + 9) ^ 0xbd;
    *(byte *)((long)puRam00000000023b91f8 + 10) = *(byte *)((long)puRam00000000023b91f8 + 10) ^ 0x4d
    ;
    *puRam00000000023b91f8 = *puRam00000000023b91f8 ^ 0x194db9cd9b4dbd9f;
    *(undefined1 *)((long)puRam00000000023b91f8 + 0xb) = 0;
  }
  uStack_30 = 0x4355;
  uStack_38 = 0x881bb6d56a5a3150;
  uStack_40 = 0xa92aa1c4705a2f41;
  pbVar3 = (byte *)__emutls_get_address(0x22c9ed0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22c9eb0);
    func_0x00e5fb0c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00e5fba8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9ed0);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x22c9eb0);
  func_0x00e601b0();
  uRam00000000023b9200 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x22c9f10);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x22c9ef0);
    puVar5[1] = 0x12bad3c39b4dfdb;
    *puVar5 = 0xa78bb1032b0c5d9;
    __cxa_thread_atexit(&DAT_00e5fbb4,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9f10);
    *puVar6 = 1;
    puRam00000000023b9208 = (ulong *)__emutls_get_address(0x22c9ef0);
    cVar1 = *(char *)((long)puRam00000000023b9208 + 0xf);
  }
  else {
    puRam00000000023b9208 = (ulong *)__emutls_get_address(0x22c9ef0);
    cVar1 = *(char *)((long)puRam00000000023b9208 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000023b9208 + 0xf) = 0;
    *(byte *)((long)puRam00000000023b9208 + 0xc) =
         *(byte *)((long)puRam00000000023b9208 + 0xc) ^ 0x75;
    *(byte *)((long)puRam00000000023b9208 + 0xd) =
         *(byte *)((long)puRam00000000023b9208 + 0xd) ^ 0xc9;
    *(byte *)((long)puRam00000000023b9208 + 0xe) =
         *(byte *)((long)puRam00000000023b9208 + 0xe) ^ 0x2b;
    *puRam00000000023b9208 = *puRam00000000023b9208 ^ 0x6f2bc9754bd1a9a9;
    *(uint *)(puRam00000000023b9208 + 1) = (uint)puRam00000000023b9208[1] ^ 0x4bd1a9a9;
  }
  uStack_38 = 0xcd7bec6470bbec0e;
  uStack_40 = 0xa876ea4e779bea1c;
  pbVar3 = (byte *)__emutls_get_address(0x22c9f50);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22c9f30);
    func_0x00e5fbc0(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00e5fc4c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9f50);
    *puVar6 = 1;
    puRam00000000023b9210 = (ulong *)__emutls_get_address(0x22c9f30);
    cVar1 = (char)puRam00000000023b9210[2];
  }
  else {
    puRam00000000023b9210 = (ulong *)__emutls_get_address(0x22c9f30);
    cVar1 = (char)puRam00000000023b9210[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000023b9210 + 2) = 0;
    puRam00000000023b9210[1] = puRam00000000023b9210[1] ^ 0xcd15890f1fef9f7d;
    *puRam00000000023b9210 = *puRam00000000023b9210 ^ 0xcd15890f1fef9f7d;
  }
  uStack_30._1_1_ = (undefined1)((ushort)uStack_30 >> 8);
  uStack_30 = CONCAT11(uStack_30._1_1_,0xf);
  uStack_38 = 0x130a6fa2fcb2a6a;
  uStack_40 = 0x1d33a8c713d72c6e;
  pbVar3 = (byte *)__emutls_get_address(0x22c9f90);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22c9f70);
    func_0x00e5fc54(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00e5fce8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9f90);
    *puVar6 = 1;
    puRam00000000023b9218 = (ulong *)__emutls_get_address(0x22c9f70);
    cVar1 = *(char *)((long)puRam00000000023b9218 + 0x11);
  }
  else {
    puRam00000000023b9218 = (ulong *)__emutls_get_address(0x22c9f70);
    cVar1 = *(char *)((long)puRam00000000023b9218 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000023b9218 + 0x11) = 0;
    *(byte *)(puRam00000000023b9218 + 2) = (byte)puRam00000000023b9218[2] ^ 0xf;
    puRam00000000023b9218[1] = puRam00000000023b9218[1] ^ 0x6f55cd957ba3590f;
    *puRam00000000023b9218 = *puRam00000000023b9218 ^ 0x6f55cd957ba3590f;
  }
  pbVar3 = (byte *)__emutls_get_address(0x22c9fd0);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x22c9fb0);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x1fd;
    *puVar5 = 0x94fe41bb4d7d0e1a;
    *(undefined4 *)(puVar5 + 1) = 0x4079022f;
    __cxa_thread_atexit(&DAT_00e5fcf4,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22c9fd0);
    *puVar6 = 1;
    puRam00000000023b9220 = (ulong *)__emutls_get_address(0x22c9fb0);
    cVar1 = *(char *)((long)puRam00000000023b9220 + 0xd);
  }
  else {
    puRam00000000023b9220 = (ulong *)__emutls_get_address(0x22c9fb0);
    cVar1 = *(char *)((long)puRam00000000023b9220 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000023b9220 + 0xd) = 0;
    *(byte *)((long)puRam00000000023b9220 + 0xc) =
         *(byte *)((long)puRam00000000023b9220 + 0xc) ^ 0xfd;
    *puRam00000000023b9220 = *puRam00000000023b9220 ^ 0xe3912dfd25097b7b;
    *(uint *)(puRam00000000023b9220 + 1) = (uint)puRam00000000023b9220[1] ^ 0x25097b7b;
  }
  uStack_30._1_1_ = (undefined1)((ushort)uStack_30 >> 8);
  uStack_30 = CONCAT11(uStack_30._1_1_,0xa9);
  uStack_38 = 0x339e559d1e0662e8;
  uStack_40 = 0x2e984881143572c0;
  pbVar3 = (byte *)__emutls_get_address(0x22ca010);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22c9ff0);
    func_0x00e5fd00(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00e5fd94,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22ca010);
    *puVar6 = 1;
    puRam00000000023b9228 = (ulong *)__emutls_get_address(0x22c9ff0);
    cVar1 = *(char *)((long)puRam00000000023b9228 + 0x11);
  }
  else {
    puRam00000000023b9228 = (ulong *)__emutls_get_address(0x22c9ff0);
    cVar1 = *(char *)((long)puRam00000000023b9228 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000023b9228 + 0x11) = 0;
    *(byte *)(puRam00000000023b9228 + 2) = (byte)puRam00000000023b9228[2] ^ 0xa9;
    puRam00000000023b9228[1] = puRam00000000023b9228[1] ^ 0x57fb21ed7b6501a9;
    *puRam00000000023b9228 = *puRam00000000023b9228 ^ 0x57fb21ed7b6501a9;
  }
  uStack_30._1_1_ = (undefined1)((ushort)uStack_30 >> 8);
  uStack_30 = CONCAT11(uStack_30._1_1_,0x5d);
  uStack_38 = 0xbf2abdcab65bc431;
  uStack_40 = 0xb702a7d6b166c73c;
  pbVar3 = (byte *)__emutls_get_address(0x22ca050);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22ca030);
    func_0x00e5fda0(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00e5fe34,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22ca050);
    *puVar6 = 1;
    puRam00000000023b9230 = (ulong *)__emutls_get_address(0x22ca030);
    cVar1 = *(char *)((long)puRam00000000023b9230 + 0x11);
  }
  else {
    puRam00000000023b9230 = (ulong *)__emutls_get_address(0x22ca030);
    cVar1 = *(char *)((long)puRam00000000023b9230 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000023b9230 + 0x11) = 0;
    *(byte *)(puRam00000000023b9230 + 2) = (byte)puRam00000000023b9230[2] ^ 0x5d;
    puRam00000000023b9230[1] = puRam00000000023b9230[1] ^ 0xdb63d3a5df2fa55d;
    *puRam00000000023b9230 = *puRam00000000023b9230 ^ 0xdb63d3a5df2fa55d;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _INIT_24(void)

{
  uRam00000000023b9278 = 0;
  uRam00000000023b927c = 0;
  uRam00000000023b92a8 = 0;
  uRam00000000023b9270 = 0;
  _DAT_023b9268 = 0;
  uRam00000000023b928c = 0;
  uRam00000000023b9284 = 0;
  uRam00000000023b92a0 = 0;
  uRam00000000023b9298 = 0;
  uRam00000000023b92ac = 0;
  uRam00000000023b92bc = 0;
  uRam00000000023b92b4 = 0;
  uRam00000000023b92d0 = 0;
  uRam00000000023b92c8 = 0;
  uRam00000000023b92d8 = 0;
  uRam00000000023b92ec = 0;
  uRam00000000023b92e4 = 0;
  uRam00000000023b92dc = 0;
  uRam00000000023b9308 = 0;
  uRam00000000023b9300 = 0;
  uRam00000000023b92f8 = 0;
  uRam00000000023b931c = 0;
  uRam00000000023b9314 = 0;
  uRam00000000023b930c = 0;
  uRam00000000023b9338 = 0;
  uRam00000000023b9330 = 0;
  uRam00000000023b9328 = 0;
  uRam00000000023b9360 = 0;
  uRam00000000023b9358 = 0;
  uRam00000000023b9390 = 0;
  uRam00000000023b9388 = 0;
  uRam00000000023b93c0 = 0;
  uRam00000000023b93b8 = 0;
  uRam00000000023b93f0 = 0;
  uRam00000000023b93e8 = 0;
  uRam00000000023b94fc = 0;
  uRam00000000023b94f4 = 0;
  uRam00000000023b94ec = 0;
  uRam00000000023b952c = 0;
  uRam00000000023b9524 = 0;
  uRam00000000023b951c = 0;
  uRam00000000023b955c = 0;
  uRam00000000023b9554 = 0;
  uRam00000000023b954c = 0;
  uRam00000000023b958c = 0;
  uRam00000000023b9584 = 0;
  uRam00000000023b957c = 0;
  uRam00000000023b95bc = 0;
  uRam00000000023b95b4 = 0;
  uRam00000000023b95ac = 0;
  uRam00000000023b95ec = 0;
  uRam00000000023b95e4 = 0;
  uRam00000000023b95dc = 0;
  uRam00000000023b961c = 0;
  uRam00000000023b9614 = 0;
  uRam00000000023b960c = 0;
  uRam00000000023b9654 = 0;
  uRam00000000023b964c = 0;
  uRam00000000023b965c = 0;
  uRam00000000023b934c = 0;
  uRam00000000023b9344 = 0;
  uRam00000000023b933c = 0;
  uRam00000000023b9368 = 0;
  uRam00000000023b937c = 0;
  uRam00000000023b9374 = 0;
  uRam00000000023b936c = 0;
  uRam00000000023b9398 = 0;
  uRam00000000023b93ac = 0;
  uRam00000000023b93a4 = 0;
  uRam00000000023b939c = 0;
  uRam00000000023b93c8 = 0;
  uRam00000000023b93dc = 0;
  uRam00000000023b93d4 = 0;
  uRam00000000023b93cc = 0;
  uRam00000000023b93f8 = 0;
  uRam00000000023b9404 = 0;
  uRam00000000023b93fc = 0;
  uRam00000000023b940c = 0;
  uRam00000000023b9428 = 0;
  uRam00000000023b9420 = 0;
  uRam00000000023b9418 = 0;
  uRam00000000023b943c = 0;
  uRam00000000023b9434 = 0;
  uRam00000000023b942c = 0;
  uRam00000000023b9458 = 0;
  uRam00000000023b9450 = 0;
  uRam00000000023b9448 = 0;
  uRam00000000023b946c = 0;
  uRam00000000023b9464 = 0;
  uRam00000000023b945c = 0;
  uRam00000000023b9488 = 0;
  uRam00000000023b9480 = 0;
  uRam00000000023b9478 = 0;
  uRam00000000023b949c = 0;
  uRam00000000023b9494 = 0;
  uRam00000000023b948c = 0;
  uRam00000000023b94b8 = 0;
  uRam00000000023b94b0 = 0;
  uRam00000000023b94a8 = 0;
  uRam00000000023b94cc = 0;
  uRam00000000023b94c4 = 0;
  uRam00000000023b94bc = 0;
  uRam00000000023b94e8 = 0;
  uRam00000000023b94e0 = 0;
  uRam00000000023b94d8 = 0;
  uRam00000000023b9518 = 0;
  uRam00000000023b9510 = 0;
  uRam00000000023b9508 = 0;
  uRam00000000023b9548 = 0;
  uRam00000000023b9540 = 0;
  uRam00000000023b9538 = 0;
  uRam00000000023b9578 = 0;
  uRam00000000023b9570 = 0;
  uRam00000000023b9568 = 0;
  uRam00000000023b95a8 = 0;
  uRam00000000023b95a0 = 0;
  uRam00000000023b9598 = 0;
  uRam00000000023b95d8 = 0;
  uRam00000000023b95d0 = 0;
  uRam00000000023b95c8 = 0;
  uRam00000000023b9608 = 0;
  uRam00000000023b9600 = 0;
  uRam00000000023b95f8 = 0;
  uRam00000000023b9648 = 0;
  uRam00000000023b9640 = 0;
  uRam00000000023b9638 = 0;
  uRam00000000023b9630 = 0xa0a;
  uRam00000000023b9628 = 0xa0a0a0a0a0a0a0a;
  uRam00000000023b9632 = 0;
  return;
}



void _ZNSt6__ndk122condition_variable_anyD2Ev(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if ((plVar2 != (long *)0x0) &&
     (lVar1 = func_0x01da5850(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    _ZNSt6__ndk119__shared_weak_count14__release_weakEv(plVar2);
  }
  _ZNSt6__ndk118condition_variableD2Ev(param_1);
  return;
}



void _INIT_30(void)

{
  func_0x00fa7fd4(0x2519480,&UNK_004d8f1a,0x12);
  __cxa_atexit(&DAT_00e9bb9c,0x2519480,&DAT_0219a700);
  uRam0000000002519448 = 0;
  uRam0000000002519458 = 0;
  uRam0000000002519460 = 0xbf80000000000000;
  uRam0000000002519440 = 0;
  uRam0000000002519450 = 0;
  uRam0000000002519468 = 0;
  uRam0000000002519470 = 0;
  uRam0000000002519478 = 0x3f800000;
  func_0x00e9bbb4(0x2519498,1);
  __cxa_atexit(&LAB_00e9bcc4,0x2519498,&DAT_0219a700);
  return;
}



void _INIT_31(void)

{
  func_0x01a0d12c(0x25197f0);
  __cxa_atexit(&SUB_01a0d110,0x25197f0,&DAT_0219a700);
  uRam0000000002519800 = 0;
  uRam00000000025197f8 = 0;
  uRam0000000002519810 = 0;
  uRam0000000002519808 = 0;
  uRam0000000002519820 = 0;
  uRam0000000002519818 = 0;
  puRam0000000002519830 = (undefined8 *)_Znwm(0x40);
  puRam0000000002519830[2] = 0;
  puRam0000000002519830[7] = 0;
  *puRam0000000002519830 = 0x219c598;
  puRam0000000002519830[1] = 0;
  puRam0000000002519830[6] = 0;
  puRam0000000002519830[5] = 0;
  puRam0000000002519828 = puRam0000000002519830 + 3;
  puRam0000000002519830[4] = 0;
  *puRam0000000002519828 = 0;
  __cxa_atexit(_ZNSt6__ndk122condition_variable_anyD2Ev,0x25197f8,&DAT_0219a700);
  uRam0000000002519848 = 0;
  uRam0000000002519840 = 0;
  uRam0000000002519858 = 0;
  uRam0000000002519850 = 0;
  uRam0000000002519868 = 0;
  uRam0000000002519860 = 0;
  __cxa_atexit(&DAT_00ea86c0,0x2519840,&DAT_0219a700);
  uRam0000000002519878 = 0;
  uRam0000000002519870 = 0;
  uRam0000000002519888 = 0;
  uRam0000000002519880 = 0;
  uRam0000000002519898 = 0;
  uRam0000000002519890 = 0;
  __cxa_atexit(&DAT_00ea86c4,0x2519870,&DAT_0219a700);
  uRam00000000025198a0 = 0;
  uRam00000000025198a8 = 0;
  __cxa_atexit(&DAT_00ea86c8,0x25198a0,&DAT_0219a700);
  return;
}



void Java_com_blackhub_bronline_game_core_JNIConfig_nativeGetIntPacked
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plStack_40;
  long lStack_38;
  uint uStack_30;
  char cStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  uVar2 = 0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (param_3 != (long *)0x0) {
    lStack_38 = param_3[3];
    if (param_3[4] != 0) {
      lStack_38 = param_3[4];
    }
    if ((*param_3 == 2) && (lStack_38 != 0)) {
      plStack_40 = &lStack_38;
      (**(code **)(&UNK_0219ce30 + *(long *)param_3[1] * 8))(&uStack_30,&plStack_40);
      uVar2 = 0;
      if (cStack_2c != '\0') {
        uVar2 = (ulong)uStack_30 | 0x100000000;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(uVar2);
  }
  return;
}



undefined8 * Java_com_blackhub_bronline_game_core_JNIConfig_nativeGameSettings(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = func_0x00ec3a44();
  puVar3 = (undefined8 *)_Znwm(0x28);
  if (((bRam0000000002529068 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x2529068), iVar1 != 0)) {
    func_0x00ec456c(0x2529038);
    __cxa_atexit(&DAT_00ec59dc,0x2529038,&DAT_0219a700);
    __cxa_guard_release(0x2529068);
  }
  *puVar3 = 1;
  puVar3[1] = 0x2529038;
  puVar3[2] = 0;
  puVar3[3] = uVar2;
  puVar3[4] = 0;
  return puVar3;
}



void _INIT_51(void)

{
  int iVar1;
  
  if (((bRam00000000025793e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x25793e8), iVar1 != 0)) {
    uRam00000000025793d8 = 0;
    uRam00000000025793e0 = 0;
    __cxa_atexit(&SUB_00ece218,0x25793d8,&DAT_0219a700);
    __cxa_guard_release(0x25793e8);
    return;
  }
  return;
}



void _ZdaPv(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdlPvRKSt9nothrow_t(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdaPvRKSt9nothrow_t(void)

{
  func_0x00f39a6c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _Znwm(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  lVar2 = func_0x00f37d54(_DAT_031be2e0,param_1,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535);
  if (lVar2 == 0) {
    uVar3 = __cxa_allocate_exception(8);
    _ZNSt9bad_allocC1Ev();
                    // WARNING: Subroutine does not return
    __cxa_throw(uVar3,&_ZTISt9bad_alloc,_ZNSt13bad_exceptionD1Ev);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _Znam(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  lVar2 = func_0x00f37d54(_DAT_031be2e0,param_1,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535);
  if (lVar2 == 0) {
    uVar3 = __cxa_allocate_exception(8);
    _ZNSt9bad_allocC1Ev();
                    // WARNING: Subroutine does not return
    __cxa_throw(uVar3,&_ZTISt9bad_alloc,_ZNSt13bad_exceptionD1Ev);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZnwmRKSt9nothrow_t(undefined8 param_1)

{
  int iVar1;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  func_0x00f37d54(_DAT_031be2e0,param_1,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZnamRKSt9nothrow_t(undefined8 param_1)

{
  int iVar1;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  func_0x00f37d54(_DAT_031be2e0,param_1,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535);
  return;
}



void _ZdlPvm(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdaPvm(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdlPvSt11align_val_t(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdaPvSt11align_val_t(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdlPvmSt11align_val_t(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdaPvmSt11align_val_t(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdlPvSt11align_val_tRKSt9nothrow_t(void)

{
  func_0x00f39a6c();
  return;
}



void _ZdaPvSt11align_val_tRKSt9nothrow_t(void)

{
  func_0x00f39a6c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZnwmSt11align_val_t(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  lVar2 = func_0x00f38d6c(_DAT_031be2e0,param_1,param_2,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535)
  ;
  if (lVar2 == 0) {
    uVar3 = __cxa_allocate_exception(8);
    _ZNSt9bad_allocC1Ev();
                    // WARNING: Subroutine does not return
    __cxa_throw(uVar3,&_ZTISt9bad_alloc,_ZNSt13bad_exceptionD1Ev);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZnamSt11align_val_t(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  lVar2 = func_0x00f38d6c(_DAT_031be2e0,param_1,param_2,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535)
  ;
  if (lVar2 == 0) {
    uVar3 = __cxa_allocate_exception(8);
    _ZNSt9bad_allocC1Ev();
                    // WARNING: Subroutine does not return
    __cxa_throw(uVar3,&_ZTISt9bad_alloc,_ZNSt13bad_exceptionD1Ev);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZnwmSt11align_val_tRKSt9nothrow_t(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  func_0x00f38d6c(_DAT_031be2e0,param_1,param_2,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZnamSt11align_val_tRKSt9nothrow_t(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((bRam00000000023a4ef8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(0x23a4ef8), iVar1 != 0)) {
    func_0x00f39cc4();
    uRam00000000023a4ef0 = 1;
    __cxa_guard_release(0x23a4ef8);
  }
  func_0x00f38d6c(_DAT_031be2e0,param_1,param_2,&UNK_0054ff68,0xffffffff,0x3379b845ef9b2535);
  return;
}



void _INIT_78(void)

{
  memset(0x31c0020,0,0x620);
  __cxa_atexit(&DAT_00f48e5c,0,&DAT_0219a700);
  uRam00000000031c07c8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07c8,&DAT_0219a700);
  uRam00000000031c07d0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07d0,&DAT_0219a700);
  uRam00000000031c07d8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07d8,&DAT_0219a700);
  uRam00000000031c07e0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07e0,&DAT_0219a700);
  uRam00000000031c07e8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07e8,&DAT_0219a700);
  uRam00000000031c07f0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07f0,&DAT_0219a700);
  uRam00000000031c07f8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c07f8,&DAT_0219a700);
  uRam00000000031c0800 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0800,&DAT_0219a700);
  uRam00000000031c0808 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0808,&DAT_0219a700);
  uRam00000000031c0810 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0810,&DAT_0219a700);
  uRam00000000031c0818 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0818,&DAT_0219a700);
  uRam00000000031c0820 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0820,&DAT_0219a700);
  uRam00000000031c0828 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0828,&DAT_0219a700);
  uRam00000000031c0830 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0830,&DAT_0219a700);
  uRam00000000031c0838 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0838,&DAT_0219a700);
  uRam00000000031c0840 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0840,&DAT_0219a700);
  uRam00000000031c0848 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0848,&DAT_0219a700);
  uRam00000000031c0850 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0850,&DAT_0219a700);
  uRam00000000031c0858 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0858,&DAT_0219a700);
  uRam00000000031c0860 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0860,&DAT_0219a700);
  uRam00000000031c0868 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0868,&DAT_0219a700);
  uRam00000000031c0870 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0870,&DAT_0219a700);
  uRam00000000031c0878 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0878,&DAT_0219a700);
  uRam00000000031c0880 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0880,&DAT_0219a700);
  uRam00000000031c0888 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0888,&DAT_0219a700);
  uRam00000000031c0890 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0890,&DAT_0219a700);
  uRam00000000031c0898 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0898,&DAT_0219a700);
  uRam00000000031c08a0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08a0,&DAT_0219a700);
  uRam00000000031c08a8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08a8,&DAT_0219a700);
  uRam00000000031c08b0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08b0,&DAT_0219a700);
  uRam00000000031c08b8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08b8,&DAT_0219a700);
  uRam00000000031c08c0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08c0,&DAT_0219a700);
  uRam00000000031c08c8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08c8,&DAT_0219a700);
  uRam00000000031c08d0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08d0,&DAT_0219a700);
  uRam00000000031c08d8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08d8,&DAT_0219a700);
  uRam00000000031c08e0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08e0,&DAT_0219a700);
  uRam00000000031c08e8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08e8,&DAT_0219a700);
  uRam00000000031c08f0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08f0,&DAT_0219a700);
  uRam00000000031c08f8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c08f8,&DAT_0219a700);
  uRam00000000031c0900 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0900,&DAT_0219a700);
  uRam00000000031c0908 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0908,&DAT_0219a700);
  uRam00000000031c0910 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0910,&DAT_0219a700);
  uRam00000000031c0918 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0918,&DAT_0219a700);
  uRam00000000031c0920 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0920,&DAT_0219a700);
  uRam00000000031c0928 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0928,&DAT_0219a700);
  uRam00000000031c0930 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0930,&DAT_0219a700);
  uRam00000000031c0938 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0938,&DAT_0219a700);
  uRam00000000031c0940 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0940,&DAT_0219a700);
  uRam00000000031c0948 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0948,&DAT_0219a700);
  uRam00000000031c0950 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0950,&DAT_0219a700);
  uRam00000000031c0958 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0958,&DAT_0219a700);
  uRam00000000031c0960 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0960,&DAT_0219a700);
  uRam00000000031c0968 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0968,&DAT_0219a700);
  uRam00000000031c0970 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0970,&DAT_0219a700);
  uRam00000000031c0978 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0978,&DAT_0219a700);
  uRam00000000031c0980 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0980,&DAT_0219a700);
  uRam00000000031c0988 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0988,&DAT_0219a700);
  uRam00000000031c0990 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0990,&DAT_0219a700);
  uRam00000000031c0998 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c0998,&DAT_0219a700);
  uRam00000000031c09a0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c09a0,&DAT_0219a700);
  uRam00000000031c09a8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c09a8,&DAT_0219a700);
  uRam00000000031c09b0 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c09b0,&DAT_0219a700);
  uRam00000000031c09b8 = 0;
  __cxa_atexit(&SUB_00f1385c,0x31c09b8,&DAT_0219a700);
  return;
}



void _INIT_124(void)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lVar3 = tpidr_el0;
  lStack_28 = *(long *)(lVar3 + 0x28);
  pbVar4 = (byte *)__emutls_get_address(0x22eb0b0);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined4 *)__emutls_get_address(0x22eb090);
    *puVar7 = 0x1a3a3ce;
    __cxa_thread_atexit(&DAT_00fecc88,puVar7,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb0b0);
    *puVar8 = 1;
    pbRam00000000036f56b0 = (byte *)__emutls_get_address(0x22eb090);
    bVar1 = pbRam00000000036f56b0[3];
  }
  else {
    pbRam00000000036f56b0 = (byte *)__emutls_get_address(0x22eb090);
    bVar1 = pbRam00000000036f56b0[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036f56b0[3] = 0;
    *pbRam00000000036f56b0 = *pbRam00000000036f56b0 ^ 0x87;
    pbRam00000000036f56b0[1] = pbRam00000000036f56b0[1] ^ 199;
    pbRam00000000036f56b0[2] = pbRam00000000036f56b0[2] ^ 0xa3;
  }
  uStack_38 = 0x9144f67eb98c85a5;
  uStack_40 = 0xfc64e86898999d94;
  pbVar4 = (byte *)__emutls_get_address(0x22eb0f0);
  if ((*pbVar4 & 1) == 0) {
    uVar5 = __emutls_get_address(0x22eb0d0);
    func_0x00fecc94(uVar5,&uStack_40);
    __cxa_thread_atexit(&DAT_00fecd20,uVar5,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb0f0);
    *puVar8 = 1;
    puRam00000000036f56b8 = (ulong *)__emutls_get_address(0x22eb0d0);
    cVar2 = (char)puRam00000000036f56b8[2];
  }
  else {
    puRam00000000036f56b8 = (ulong *)__emutls_get_address(0x22eb0d0);
    cVar2 = (char)puRam00000000036f56b8[2];
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(puRam00000000036f56b8 + 2) = 0;
    puRam00000000036f56b8[1] = puRam00000000036f56b8[1] ^ 0x91219b1ff7f5f1d5;
    *puRam00000000036f56b8 = *puRam00000000036f56b8 ^ 0x91219b1ff7f5f1d5;
  }
  uStack_38 = 0x65131633572c8068;
  uStack_40 = 0x20f122d6627b24e;
  pbVar4 = (byte *)__emutls_get_address(0x22eb130);
  if ((*pbVar4 & 1) == 0) {
    uVar5 = __emutls_get_address(0x22eb110);
    func_0x00fecd28(uVar5,&uStack_40);
    __cxa_thread_atexit(&DAT_00fecdb4,uVar5,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb130);
    *puVar8 = 1;
    puRam00000000036f56c0 = (ulong *)__emutls_get_address(0x22eb110);
    cVar2 = (char)puRam00000000036f56c0[2];
  }
  else {
    puRam00000000036f56c0 = (ulong *)__emutls_get_address(0x22eb110);
    cVar2 = (char)puRam00000000036f56c0[2];
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(puRam00000000036f56c0 + 2) = 0;
    puRam00000000036f56c0[1] = puRam00000000036f56c0[1] ^ 0x656173452549d30d;
    *puRam00000000036f56c0 = *puRam00000000036f56c0 ^ 0x656173452549d30d;
  }
  pbVar4 = (byte *)__emutls_get_address(0x22eb170);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined4 *)__emutls_get_address(0x22eb150);
    *(undefined2 *)(puVar7 + 1) = 0x181;
    *puVar7 = 0xcab61a8b;
    __cxa_thread_atexit(&DAT_00fecdbc,puVar7,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb170);
    *puVar8 = 1;
    puRam00000000036f56c8 = (uint *)__emutls_get_address(0x22eb150);
    cVar2 = *(char *)((long)puRam00000000036f56c8 + 5);
  }
  else {
    puRam00000000036f56c8 = (uint *)__emutls_get_address(0x22eb150);
    cVar2 = *(char *)((long)puRam00000000036f56c8 + 5);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)((long)puRam00000000036f56c8 + 5) = 0;
    *(byte *)(puRam00000000036f56c8 + 1) = (byte)puRam00000000036f56c8[1] ^ 0x81;
    *puRam00000000036f56c8 = *puRam00000000036f56c8 ^ 0xa1d573c5;
  }
  pbVar4 = (byte *)__emutls_get_address(0x22eb1b0);
  if ((*pbVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__emutls_get_address(0x22eb190);
    *(undefined1 *)((long)puVar6 + 10) = 1;
    *(undefined2 *)(puVar6 + 1) = 0xb150;
    *puVar6 = 0xe494654d36dbd873;
    __cxa_thread_atexit(&DAT_00fecdc8,puVar6,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb1b0);
    *puVar8 = 1;
    puRam00000000036f56d0 = (ulong *)__emutls_get_address(0x22eb190);
    cVar2 = *(char *)((long)puRam00000000036f56d0 + 10);
  }
  else {
    puRam00000000036f56d0 = (ulong *)__emutls_get_address(0x22eb190);
    cVar2 = *(char *)((long)puRam00000000036f56d0 + 10);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)((long)puRam00000000036f56d0 + 10) = 0;
    *(byte *)(puRam00000000036f56d0 + 1) = (byte)puRam00000000036f56d0[1] ^ 0x35;
    *(byte *)((long)puRam00000000036f56d0 + 9) = *(byte *)((long)puRam00000000036f56d0 + 9) ^ 0xb1;
    *puRam00000000036f56d0 = *puRam00000000036f56d0 ^ 0x89f52b3945a9b135;
  }
  pbVar4 = (byte *)__emutls_get_address(0x22eb1f0);
  if ((*pbVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__emutls_get_address(0x22eb1d0);
    *(undefined1 *)(puVar6 + 1) = 1;
    *puVar6 = 0xe7da6046b74f4416;
    __cxa_thread_atexit(&DAT_00fecdd4,puVar6,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb1f0);
    *puVar8 = 1;
    puRam00000000036f56d8 = (ulong *)__emutls_get_address(0x22eb1d0);
    cVar2 = (char)puRam00000000036f56d8[1];
  }
  else {
    puRam00000000036f56d8 = (ulong *)__emutls_get_address(0x22eb1d0);
    cVar2 = (char)puRam00000000036f56d8[1];
  }
  if (cVar2 != '\0') {
    *(undefined1 *)(puRam00000000036f56d8 + 1) = 0;
    *puRam00000000036f56d8 = *puRam00000000036f56d8 ^ 0xe7bf0d27d93d3145;
  }
  pbVar4 = (byte *)__emutls_get_address(0x22eb230);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined4 *)__emutls_get_address(0x22eb210);
    *(undefined1 *)((long)puVar7 + 6) = 1;
    *(undefined2 *)(puVar7 + 1) = 0x3da;
    *puVar7 = 0x7f2c034e;
    __cxa_thread_atexit(&DAT_00ef29e4,puVar7,&DAT_0219a700);
    puVar8 = (undefined1 *)__emutls_get_address(0x22eb230);
    *puVar8 = 1;
    puRam00000000036f56e0 = (uint *)__emutls_get_address(0x22eb210);
    cVar2 = *(char *)((long)puRam00000000036f56e0 + 6);
  }
  else {
    puRam00000000036f56e0 = (uint *)__emutls_get_address(0x22eb210);
    cVar2 = *(char *)((long)puRam00000000036f56e0 + 6);
  }
  if (cVar2 != '\0') {
    *(undefined1 *)((long)puRam00000000036f56e0 + 6) = 0;
    *(byte *)((long)puRam00000000036f56e0 + 5) = *(byte *)((long)puRam00000000036f56e0 + 5) ^ 3;
    *(byte *)(puRam00000000036f56e0 + 1) = (byte)puRam00000000036f56e0[1] ^ 0xbf;
    *puRam00000000036f56e0 = *puRam00000000036f56e0 ^ 0xb4d771d;
  }
  if (*(long *)(lVar3 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void Java_com_blackhub_bronline_game_core_keyboardHelper_SoftwareKeyboardBridge_nativeOnKeyDown
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 auStack_48 [4];
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = func_0x01a42168();
  pcStack_38 = (code *)&DAT_00ffd2b8;
  puStack_30 = &DAT_00ffd2f0;
  auStack_48[0] = param_3;
  func_0x01a42054(uVar2,auStack_48);
  if (pcStack_38 != (code *)0x0) {
    (*pcStack_38)(auStack_48,0,0);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void Java_com_blackhub_bronline_game_core_keyboardHelper_SoftwareKeyboardBridge_nativeCommitText
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *****pppppuVar7;
  undefined8 *apuStack_f8 [2];
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *****apppppuStack_d0 [3];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 *****apppppuStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  uStack_b0 = 0x100001700000000;
  uVar3 = strlen();
  if (uVar3 < 0x18) {
    uVar6 = 0;
    pppppuVar7 = apppppuStack_a8;
  }
  else {
    func_0x00e5fef0(&uStack_b0,uVar3);
    uVar6 = uStack_b0 & 0xffffffff;
    pppppuVar7 = apppppuStack_a8[0];
    if (uStack_b0._4_4_ >> 0x18 != 0) {
      pppppuVar7 = apppppuStack_a8;
    }
  }
  memcpy((long)pppppuVar7 + uVar6,uVar4,uVar3);
  pppppuVar7 = apppppuStack_a8[0];
  if (uStack_b0._7_1_ != '\0') {
    pppppuVar7 = apppppuStack_a8;
  }
  *(undefined1 *)((long)pppppuVar7 + (ulong)((uint)uStack_b0 + uVar3)) = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 + uVar3);
  (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar4);
  uVar4 = func_0x01a42168();
  uVar3 = (uint)uStack_b0;
  uVar6 = uStack_b0 & 0xffffffff;
  uStack_d8 = 0x100001700000000;
  pppppuVar7 = apppppuStack_a8[0];
  if (uStack_b0._7_1_ != '\0') {
    pppppuVar7 = apppppuStack_a8;
  }
  if ((uint)uStack_b0 < 0x18) {
    memcpy(apppppuStack_d0,pppppuVar7,uVar6);
  }
  else {
    func_0x00e5fef0(&uStack_d8,uStack_b0 & 0xffffffff);
    pppppuVar1 = apppppuStack_d0[0];
    if (uStack_d8._7_1_ != '\0') {
      pppppuVar1 = apppppuStack_d0;
    }
    memcpy((long)pppppuVar1 + (uStack_d8 & 0xffffffff),pppppuVar7,uVar6);
  }
  pppppuVar7 = apppppuStack_d0;
  if (uStack_d8._7_1_ == '\0') {
    pppppuVar7 = apppppuStack_d0[0];
  }
  *(undefined1 *)((long)pppppuVar7 + (ulong)((int)uStack_d8 + uVar3)) = 0;
  uStack_90 = 0x100001700000000;
  uVar6 = uStack_d8 >> 0x20;
  uStack_d8 = CONCAT44((int)uVar6,(int)uStack_d8 + uVar3);
  uStack_b8 = param_4;
  uStack_b4 = param_5;
  func_0x00e605cc(&uStack_90,&uStack_d8,0x17);
  uStack_70 = CONCAT44(uStack_b4,uStack_b8);
  pcStack_e8 = (code *)&DAT_00ffd378;
  puStack_e0 = &LAB_00ffd568;
  _ZN5eastl19GetDefaultAllocatorEv();
  puVar5 = (undefined8 *)func_0x00f785ec(0x28,8,0,0,0,0,0,0);
  *puVar5 = 0x100001700000000;
  func_0x00e605cc(puVar5,&uStack_90,0x17);
  puVar5[4] = uStack_70;
  apuStack_f8[0] = puVar5;
  if (uStack_90._7_1_ == '\0') {
    func_0x01dafa04(uStack_88);
  }
  func_0x01a42054(uVar4,apuStack_f8);
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(apuStack_f8,0,0);
  }
  if (uStack_d8._7_1_ == '\0') {
    func_0x01dafa04(apppppuStack_d0[0]);
  }
  if (uStack_b0._7_1_ == '\0') {
    func_0x01dafa04(apppppuStack_a8[0]);
  }
  if (*(long *)(lVar2 + 0x28) != lStack_68) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void Java_com_blackhub_bronline_game_core_keyboardHelper_SoftwareKeyboardBridge_nativeOnSetVisible
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = func_0x01a42168();
  auStack_48[0] = param_3 != '\0';
  pcStack_38 = (code *)&DAT_00ffd600;
  puStack_30 = &DAT_00ffd638;
  func_0x01a42054(uVar2,auStack_48);
  if (pcStack_38 != (code *)0x0) {
    (*pcStack_38)(auStack_48,0,0);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void Java_com_blackhub_bronline_game_core_keyboardHelper_SoftwareKeyboardBridge_nativeOnKeyboardSizeChanged
               (undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong auStack_58 [2];
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = func_0x01a42168();
  auStack_58[0] = param_3 & 0xffffffff | (ulong)param_4 << 0x20;
  pcStack_48 = (code *)&LAB_00ffdac8;
  puStack_40 = &DAT_00ffdb00;
  func_0x01a42054(uVar2,auStack_58);
  if (pcStack_48 != (code *)0x0) {
    (*pcStack_48)(auStack_58,0,0);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_127(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  pbVar3 = (byte *)__emutls_get_address(0x22eb9a0);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined4 *)__emutls_get_address(0x22eb980);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0x8574fe80;
    __cxa_thread_atexit(&DAT_00fbb22c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22eb9a0);
    *puVar6 = 1;
    puVar4 = (uint *)__emutls_get_address(0x22eb980);
    cVar1 = (char)puVar4[1];
  }
  else {
    puVar4 = (uint *)__emutls_get_address(0x22eb980);
    cVar1 = (char)puVar4[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puVar4 + 1) = 0;
    *puVar4 = *puVar4 ^ 0x851d8be7;
  }
  lVar2 = 0;
  do {
    lVar7 = lVar2;
    lVar2 = lVar7 + 1;
  } while (*(char *)((long)puVar4 + lVar7) != '\0');
  func_0x00fa7fd4(0x36f5740,puVar4,lVar7);
  __cxa_atexit(&DAT_00e9bb9c,0x36f5740,&DAT_0219a700);
  return;
}



void _INIT_131(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0xf6eda7f24286e;
  uStack_40 = 0xce4f6cdd542a1a74;
  uStack_31 = 0x4d1073cb;
  pbVar2 = (byte *)__emutls_get_address(0x22ebd20);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x22ebd00);
    func_0x0100e750(uVar3,&uStack_40);
    __cxa_thread_atexit(&DAT_0100e7f4,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x22ebd20);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x22ebd00);
  func_0x0100ea48();
  uRam00000000036f57b8 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_132(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0xad91f2cfbc12ad;
  uStack_40 = 0x8ceadbf3c0a216b7;
  uStack_31 = 0xd51daa9c;
  pbVar2 = (byte *)__emutls_get_address(0x22ec3c0);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x22ec3a0);
    func_0x0101823c(uVar3,&uStack_40);
    __cxa_thread_atexit(&DAT_010182e0,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x22ec3c0);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x22ec3a0);
  func_0x01018f18();
  uRam00000000036f57f8 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_133(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uStack_38 = 0xd9f688da74868743;
  uStack_40 = 0xacfc9ddc72ac826f;
  pbVar3 = (byte *)__emutls_get_address(0x22f12c8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22f12a8);
    func_0x0104fb5c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_0104fbe8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f12c8);
    *puVar6 = 1;
    puRam00000000036f5948 = (ulong *)__emutls_get_address(0x22f12a8);
    cVar1 = (char)puRam00000000036f5948[2];
  }
  else {
    puRam00000000036f5948 = (ulong *)__emutls_get_address(0x22f12a8);
    cVar1 = (char)puRam00000000036f5948[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f5948 + 2) = 0;
    puRam00000000036f5948[1] = puRam00000000036f5948[1] ^ 0xd993efbb19cfe32d;
    *puRam00000000036f5948 = *puRam00000000036f5948 ^ 0xd993efbb19cfe32d;
  }
  pbVar3 = (byte *)__emutls_get_address(0x22f1308);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x22f12e8);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x173;
    *puVar5 = 0xf1d2716a1b5fc06;
    *(undefined4 *)(puVar5 + 1) = 0xb6a4e829;
    __cxa_thread_atexit(&DAT_0104fbf0,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f1308);
    *puVar6 = 1;
    puRam00000000036f5950 = (ulong *)__emutls_get_address(0x22f12e8);
    cVar1 = *(char *)((long)puRam00000000036f5950 + 0xd);
  }
  else {
    puRam00000000036f5950 = (ulong *)__emutls_get_address(0x22f12e8);
    cVar1 = *(char *)((long)puRam00000000036f5950 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f5950 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f5950 + 0xc) =
         *(byte *)((long)puRam00000000036f5950 + 0xc) ^ 0x73;
    *puRam00000000036f5950 = *puRam00000000036f5950 ^ 0x5f694973d3c78945;
    *(uint *)(puRam00000000036f5950 + 1) = (uint)puRam00000000036f5950[1] ^ 0xd3c78945;
  }
  uStack_30 = 0x37;
  uStack_38 = 0x8548f21d7c96975b;
  uStack_40 = 0x8464fc0776879a65;
  pbVar3 = (byte *)__emutls_get_address(0x22f1348);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22f1328);
    func_0x0104fbfc(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_0104fc90,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f1348);
    *puVar6 = 1;
    puRam00000000036f5958 = (ulong *)__emutls_get_address(0x22f1328);
    cVar1 = *(char *)((long)puRam00000000036f5958 + 0x11);
  }
  else {
    puRam00000000036f5958 = (ulong *)__emutls_get_address(0x22f1328);
    cVar1 = *(char *)((long)puRam00000000036f5958 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f5958 + 0x11) = 0;
    *(byte *)(puRam00000000036f5958 + 2) = (byte)puRam00000000036f5958[2] ^ 0x37;
    puRam00000000036f5958[1] = puRam00000000036f5958[1] ^ 0xeb279b691ff3fb37;
    *puRam00000000036f5958 = *puRam00000000036f5958 ^ 0xeb279b691ff3fb37;
  }
  pbVar3 = (byte *)__emutls_get_address(0x22f1388);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x22f1368);
    *puVar5 = 0x941d82090a137467;
    *(undefined4 *)(puVar5 + 1) = 0x1677058;
    __cxa_thread_atexit(&DAT_00f32240,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f1388);
    *puVar6 = 1;
    puRam00000000036f5960 = (ulong *)__emutls_get_address(0x22f1368);
    cVar1 = *(char *)((long)puRam00000000036f5960 + 0xb);
  }
  else {
    puRam00000000036f5960 = (ulong *)__emutls_get_address(0x22f1368);
    cVar1 = *(char *)((long)puRam00000000036f5960 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f5960 + 0xb) = 0;
    *(byte *)(puRam00000000036f5960 + 1) = (byte)puRam00000000036f5960[1] ^ 0x35;
    *(byte *)((long)puRam00000000036f5960 + 9) = *(byte *)((long)puRam00000000036f5960 + 9) ^ 0x15;
    *(byte *)((long)puRam00000000036f5960 + 10) = *(byte *)((long)puRam00000000036f5960 + 10) ^ 0x67
    ;
    *puRam00000000036f5960 = *puRam00000000036f5960 ^ 0xf553e56763671535;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_134(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x8a4aef005d969c56;
  uStack_40 = 0x866eff1b7e849e65;
  uStack_30 = 0xfb47;
  pbVar2 = (byte *)__emutls_get_address(0x22f1e38);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x22f1e18);
    func_0x0105a7b0(uVar3,&uStack_40);
    __cxa_thread_atexit(&DAT_0105a84c,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x22f1e38);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x22f1e18);
  func_0x0105aae8();
  uRam00000000036f5990 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_142(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uStack_38 = 0x7d693adad94719b2;
  uStack_40 = 0x116e0acbc269048e;
  pbVar3 = (byte *)__emutls_get_address(0x22f63a8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x22f6388);
    func_0x0105d57c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_0105d608,uVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x22f63a8);
    *puVar5 = 1;
    puRam00000000036f7670 = (ulong *)__emutls_get_address(0x22f6388);
    cVar1 = (char)puRam00000000036f7670[2];
  }
  else {
    puRam00000000036f7670 = (ulong *)__emutls_get_address(0x22f6388);
    cVar1 = (char)puRam00000000036f7670[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f7670 + 2) = 0;
    puRam00000000036f7670[1] = puRam00000000036f7670[1] ^ 0x7d0149afab056bdd;
    *puRam00000000036f7670 = *puRam00000000036f7670 ^ 0x7d0149afab056bdd;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_145(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uRam00000000036f7d20 = 0x102;
  uRam00000000036f7d18 = 0x4487000044f00000;
  uRam00000000036f7d22 = 1;
  uStack_48 = 0x8dfe448950651408;
  uStack_50 = 0x86c3439a4c7a1e3f;
  uStack_40 = 0x7b;
  pbVar3 = (byte *)__emutls_get_address(0x22f72d8);
  if ((*pbVar3 & 1) == 0) {
    uVar5 = __emutls_get_address(0x22f72b8);
    func_0x010fd1c4(uVar5,&uStack_50);
    __cxa_thread_atexit(&DAT_010fd258,uVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f72d8);
    *puVar6 = 1;
    puRam00000000036f7d48 = (ulong *)__emutls_get_address(0x22f72b8);
    cVar1 = *(char *)((long)puRam00000000036f7d48 + 0x11);
  }
  else {
    puRam00000000036f7d48 = (ulong *)__emutls_get_address(0x22f72b8);
    cVar1 = *(char *)((long)puRam00000000036f7d48 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f7d48 + 0x11) = 0;
    *(byte *)(puRam00000000036f7d48 + 2) = (byte)puRam00000000036f7d48[2] ^ 0x7b;
    puRam00000000036f7d48[1] = puRam00000000036f7d48[1] ^ 0xe3912dfd25097b7b;
    *puRam00000000036f7d48 = *puRam00000000036f7d48 ^ 0xe3912dfd25097b7b;
  }
  pbVar3 = (byte *)__emutls_get_address(0x22f7318);
  if ((*pbVar3 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x22f72f8);
    *(undefined1 *)((long)puVar4 + 0xc) = 1;
    *puVar4 = 0x3b9267990e156fe0;
    *(undefined4 *)(puVar4 + 1) = 0x7b1764dd;
    __cxa_thread_atexit(&DAT_010fd264,puVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f7318);
    *puVar6 = 1;
    puRam00000000036f7d50 = (ulong *)__emutls_get_address(0x22f72f8);
    cVar1 = *(char *)((long)puRam00000000036f7d50 + 0xc);
  }
  else {
    puRam00000000036f7d50 = (ulong *)__emutls_get_address(0x22f72f8);
    cVar1 = *(char *)((long)puRam00000000036f7d50 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f7d50 + 0xc) = 0;
    *puRam00000000036f7d50 = *puRam00000000036f7d50 ^ 0x57fb21ed7b6501a9;
    *(uint *)(puRam00000000036f7d50 + 1) = (uint)puRam00000000036f7d50[1] ^ 0x7b6501a9;
  }
  uStack_40 = 0x5d;
  uStack_48 = 0xbf06bfc7be41e038;
  uStack_50 = 0xb702b0f6b67ad614;
  pbVar3 = (byte *)__emutls_get_address(0x22f7358);
  if ((*pbVar3 & 1) == 0) {
    uVar5 = __emutls_get_address(0x22f7338);
    func_0x00e5fda0(uVar5,&uStack_50);
    __cxa_thread_atexit(&DAT_00e5fe34,uVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f7358);
    *puVar6 = 1;
    puRam00000000036f7d58 = (ulong *)__emutls_get_address(0x22f7338);
    cVar1 = *(char *)((long)puRam00000000036f7d58 + 0x11);
  }
  else {
    puRam00000000036f7d58 = (ulong *)__emutls_get_address(0x22f7338);
    cVar1 = *(char *)((long)puRam00000000036f7d58 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f7d58 + 0x11) = 0;
    *(byte *)(puRam00000000036f7d58 + 2) = (byte)puRam00000000036f7d58[2] ^ 0x5d;
    puRam00000000036f7d58[1] = puRam00000000036f7d58[1] ^ 0xdb63d3a5df2fa55d;
    *puRam00000000036f7d58 = *puRam00000000036f7d58 ^ 0xdb63d3a5df2fa55d;
  }
  uStack_48 = 0x55b0a1f3c6cc2abf;
  uStack_50 = 0x27babee3dafc30a0;
  pbVar3 = (byte *)__emutls_get_address(0x22f7398);
  if ((*pbVar3 & 1) == 0) {
    uVar5 = __emutls_get_address(0x22f7378);
    func_0x010fd270(uVar5,&uStack_50);
    __cxa_thread_atexit(&DAT_010fd2fc,uVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x22f7398);
    *puVar6 = 1;
    puRam00000000036f7d60 = (ulong *)__emutls_get_address(0x22f7378);
    cVar1 = (char)puRam00000000036f7d60[2];
  }
  else {
    puRam00000000036f7d60 = (ulong *)__emutls_get_address(0x22f7378);
    cVar1 = (char)puRam00000000036f7d60[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f7d60 + 2) = 0;
    puRam00000000036f7d60[1] = puRam00000000036f7d60[1] ^ 0x55d5cd91afbf43e9;
    *puRam00000000036f7d60 = *puRam00000000036f7d60 ^ 0x55d5cd91afbf43e9;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_167(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2307380);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x2307360);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0x7772;
    __cxa_thread_atexit(&DAT_011127c0,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2307380);
    *puVar6 = 1;
    pbRam00000000036f8530 = (byte *)__emutls_get_address(0x2307360);
    bVar1 = pbRam00000000036f8530[2];
  }
  else {
    pbRam00000000036f8530 = (byte *)__emutls_get_address(0x2307360);
    bVar1 = pbRam00000000036f8530[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036f8530[2] = 0;
    *pbRam00000000036f8530 = *pbRam00000000036f8530 ^ 0x1d;
    pbRam00000000036f8530[1] = pbRam00000000036f8530[1] ^ 0x77;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23073c0);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x23073a0);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0xe358;
    __cxa_thread_atexit(&DAT_011127c8,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23073c0);
    *puVar6 = 1;
    pbRam00000000036f8538 = (byte *)__emutls_get_address(0x23073a0);
    bVar1 = pbRam00000000036f8538[2];
  }
  else {
    pbRam00000000036f8538 = (byte *)__emutls_get_address(0x23073a0);
    bVar1 = pbRam00000000036f8538[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036f8538[2] = 0;
    *pbRam00000000036f8538 = *pbRam00000000036f8538 ^ 0x2d;
    pbRam00000000036f8538[1] = pbRam00000000036f8538[1] ^ 0xe3;
  }
  uStack_48 = 6;
  uStack_47 = 0x10a7b7e8;
  uStack_50 = 0x70082110a7b7e806;
  uStack_43 = 0x3d710821;
  uStack_3f = 0x73bfaae8;
  pbVar3 = (byte *)__emutls_get_address(0x2307400);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x23073e0);
    func_0x011ca2a4(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_011ca358,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2307400);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x23073e0);
  func_0x011ca364();
  uRam00000000036f8540 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2307440);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x2307420);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0xfb43;
    __cxa_thread_atexit(&DAT_011127d8,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2307440);
    *puVar6 = 1;
    pbRam00000000036f8548 = (byte *)__emutls_get_address(0x2307420);
    bVar1 = pbRam00000000036f8548[2];
  }
  else {
    pbRam00000000036f8548 = (byte *)__emutls_get_address(0x2307420);
    bVar1 = pbRam00000000036f8548[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036f8548[2] = 0;
    *pbRam00000000036f8548 = *pbRam00000000036f8548 ^ 0x37;
    pbRam00000000036f8548[1] = pbRam00000000036f8548[1] ^ 0xfb;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2307480);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x2307460);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0x1546;
    __cxa_thread_atexit(&DAT_0112f6a8,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2307480);
    *puVar6 = 1;
    pbRam00000000036f8550 = (byte *)__emutls_get_address(0x2307460);
    bVar1 = pbRam00000000036f8550[2];
  }
  else {
    pbRam00000000036f8550 = (byte *)__emutls_get_address(0x2307460);
    bVar1 = pbRam00000000036f8550[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036f8550[2] = 0;
    *pbRam00000000036f8550 = *pbRam00000000036f8550 ^ 0x35;
    pbRam00000000036f8550[1] = pbRam00000000036f8550[1] ^ 0x15;
  }
  uStack_48 = 0xf7;
  uStack_50 = 0x9aa4d6a6bbea20cc;
  uStack_3f = 0xa5fba038;
  uStack_3b = 0x99cfeda6;
  uStack_47 = 0xcfe9b527;
  uStack_43 = 0xf089aff6;
  pbVar3 = (byte *)__emutls_get_address(0x23074c0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x23074a0);
    func_0x00fcf938(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_00fcfa0c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23074c0);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x23074a0);
  func_0x00fd0414();
  uRam00000000036f8558 = uVar4;
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_182(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2318228);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318208);
    *(undefined1 *)((long)puVar5 + 0xc) = 1;
    *puVar5 = 0x8f42ef0a7a9f9e64;
    *(undefined4 *)(puVar5 + 1) = 0x1f919a63;
    __cxa_thread_atexit(&DAT_01276c5c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318228);
    *puVar6 = 1;
    puRam00000000036f8e18 = (ulong *)__emutls_get_address(0x2318208);
    cVar1 = *(char *)((long)puRam00000000036f8e18 + 0xc);
  }
  else {
    puRam00000000036f8e18 = (ulong *)__emutls_get_address(0x2318208);
    cVar1 = *(char *)((long)puRam00000000036f8e18 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e18 + 0xc) = 0;
    *puRam00000000036f8e18 = *puRam00000000036f8e18 ^ 0xeb279b691ff3fb37;
    *(uint *)(puRam00000000036f8e18 + 1) = (uint)puRam00000000036f8e18[1] ^ 0x1ff3fb37;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2318268);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318248);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x167;
    *puVar5 = 0xb9278b0211156076;
    *(undefined4 *)(puVar5 + 1) = 0xf026350;
    __cxa_thread_atexit(&DAT_0106b570,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318268);
    *puVar6 = 1;
    puRam00000000036f8e20 = (ulong *)__emutls_get_address(0x2318248);
    cVar1 = *(char *)((long)puRam00000000036f8e20 + 0xd);
  }
  else {
    puRam00000000036f8e20 = (ulong *)__emutls_get_address(0x2318248);
    cVar1 = *(char *)((long)puRam00000000036f8e20 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e20 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f8e20 + 0xc) =
         *(byte *)((long)puRam00000000036f8e20 + 0xc) ^ 0x67;
    *puRam00000000036f8e20 = *puRam00000000036f8e20 ^ 0xf553e56763671535;
    *(uint *)(puRam00000000036f8e20 + 1) = (uint)puRam00000000036f8e20[1] ^ 0x63671535;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23182a8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318288);
    *puVar5 = 0xbab7f9eebbfd26da;
    *(undefined4 *)(puVar5 + 1) = 0x18f23e1;
    __cxa_thread_atexit(&DAT_0106b57c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23182a8);
    *puVar6 = 1;
    puRam00000000036f8e28 = (ulong *)__emutls_get_address(0x2318288);
    cVar1 = *(char *)((long)puRam00000000036f8e28 + 0xb);
  }
  else {
    puRam00000000036f8e28 = (ulong *)__emutls_get_address(0x2318288);
    cVar1 = *(char *)((long)puRam00000000036f8e28 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e28 + 0xb) = 0;
    *(byte *)(puRam00000000036f8e28 + 1) = (byte)puRam00000000036f8e28[1] ^ 0x99;
    *(byte *)((long)puRam00000000036f8e28 + 9) = *(byte *)((long)puRam00000000036f8e28 + 9) ^ 0x53;
    *(byte *)((long)puRam00000000036f8e28 + 10) = *(byte *)((long)puRam00000000036f8e28 + 10) ^ 0x8f
    ;
    *puRam00000000036f8e28 = *puRam00000000036f8e28 ^ 0xffc3978bc98f5399;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23182e8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23182c8);
    *puVar5 = 0x1d5e5d7c065eaaa;
    __cxa_thread_atexit(&DAT_01276c68,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23182e8);
    *puVar6 = 1;
    puRam00000000036f8e30 = (uint *)__emutls_get_address(0x23182c8);
    cVar1 = *(char *)((long)puRam00000000036f8e30 + 7);
  }
  else {
    puRam00000000036f8e30 = (uint *)__emutls_get_address(0x23182c8);
    cVar1 = *(char *)((long)puRam00000000036f8e30 + 7);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e30 + 7) = 0;
    *(byte *)(puRam00000000036f8e30 + 1) = (byte)puRam00000000036f8e30[1] ^ 0xaf;
    *(byte *)((long)puRam00000000036f8e30 + 5) = *(byte *)((long)puRam00000000036f8e30 + 5) ^ 0x95;
    *(byte *)((long)puRam00000000036f8e30 + 6) = *(byte *)((long)puRam00000000036f8e30 + 6) ^ 0xd5;
    *puRam00000000036f8e30 = *puRam00000000036f8e30 ^ 0x851d8be7;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2318328);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318308);
    puVar5[1] = 0x1e3b3fed6fa071d;
    *puVar5 = 0x5690a0fee8f73d36;
    __cxa_thread_atexit(&DAT_01276c74,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318328);
    *puVar6 = 1;
    puRam00000000036f8e38 = (ulong *)__emutls_get_address(0x2318308);
    cVar1 = *(char *)((long)puRam00000000036f8e38 + 0xf);
  }
  else {
    puRam00000000036f8e38 = (ulong *)__emutls_get_address(0x2318308);
    cVar1 = *(char *)((long)puRam00000000036f8e38 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e38 + 0xf) = 0;
    *(byte *)((long)puRam00000000036f8e38 + 0xc) =
         *(byte *)((long)puRam00000000036f8e38 + 0xc) ^ 0x9b;
    *(byte *)((long)puRam00000000036f8e38 + 0xd) =
         *(byte *)((long)puRam00000000036f8e38 + 0xd) ^ 0xc1;
    *(byte *)((long)puRam00000000036f8e38 + 0xe) =
         *(byte *)((long)puRam00000000036f8e38 + 0xe) ^ 0xe3;
    *puRam00000000036f8e38 = *puRam00000000036f8e38 ^ 0x39e3c19bbb935373;
    *(uint *)(puRam00000000036f8e38 + 1) = (uint)puRam00000000036f8e38[1] ^ 0xbb935373;
  }
  uStack_30 = 0x37;
  uStack_38 = 0x4c35b0610fb452;
  uStack_31 = 0xfe;
  uStack_40 = 0xfb7b28aa6429947e;
  pbVar3 = (byte *)__emutls_get_address(0x2318368);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2318348);
    func_0x01276c80(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_01276d14,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318368);
    *puVar6 = 1;
    puRam00000000036f8e40 = (ulong *)__emutls_get_address(0x2318348);
    cVar1 = *(char *)((long)puRam00000000036f8e40 + 0x11);
  }
  else {
    puRam00000000036f8e40 = (ulong *)__emutls_get_address(0x2318348);
    cVar1 = *(char *)((long)puRam00000000036f8e40 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e40 + 0x11) = 0;
    *(byte *)(puRam00000000036f8e40 + 2) = (byte)puRam00000000036f8e40[2] ^ 0x37;
    puRam00000000036f8e40[1] = puRam00000000036f8e40[1] ^ 0x971941d90d7fe737;
    *puRam00000000036f8e40 = *puRam00000000036f8e40 ^ 0x971941d90d7fe737;
  }
  uStack_30 = 0xe0;
  uStack_2f = 0x47;
  uStack_38 = 0x10354d02cc0afc;
  uStack_31 = 0xa3;
  uStack_40 = 0xab1d1e5002fb34d0;
  pbVar3 = (byte *)__emutls_get_address(0x23183a8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2318388);
    func_0x01276d20(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_01276dbc,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23183a8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2318388);
  func_0x012778d0();
  uRam00000000036f8e48 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x23183e8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23183c8);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x145;
    *puVar5 = 0xac054b209af849d7;
    *(undefined4 *)(puVar5 + 1) = 0x94e452ea;
    __cxa_thread_atexit(&DAT_0119c27c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23183e8);
    *puVar6 = 1;
    puRam00000000036f8e50 = (ulong *)__emutls_get_address(0x23183c8);
    cVar1 = *(char *)((long)puRam00000000036f8e50 + 0xd);
  }
  else {
    puRam00000000036f8e50 = (ulong *)__emutls_get_address(0x23183c8);
    cVar1 = *(char *)((long)puRam00000000036f8e50 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e50 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f8e50 + 0xc) =
         *(byte *)((long)puRam00000000036f8e50 + 0xc) ^ 0x45;
    *puRam00000000036f8e50 = *puRam00000000036f8e50 ^ 0xc9771b45f9913b87;
    *(uint *)(puRam00000000036f8e50 + 1) = (uint)puRam00000000036f8e50[1] ^ 0xf9913b87;
  }
  uStack_38 = 0x6d2cebc67002b0;
  uStack_40 = 0x187319cac86c198d;
  uStack_31 = 8;
  uStack_30 = 0xa5;
  uStack_2f = 0xe;
  uStack_2e = 5;
  pbVar3 = (byte *)__emutls_get_address(0x2318428);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2318408);
    func_0x01276dc8(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_01276e6c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318428);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2318408);
  func_0x01277910();
  uRam00000000036f8e58 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2318468);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318448);
    *(undefined1 *)((long)puVar5 + 0xc) = 1;
    *puVar5 = 0xd36aa84adcacc7bf;
    *(undefined4 *)(puVar5 + 1) = 0xb1acc596;
    __cxa_thread_atexit(&DAT_01276e78,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318468);
    *puVar6 = 1;
    puRam00000000036f8e60 = (ulong *)__emutls_get_address(0x2318448);
    cVar1 = *(char *)((long)puRam00000000036f8e60 + 0xc);
  }
  else {
    puRam00000000036f8e60 = (ulong *)__emutls_get_address(0x2318448);
    cVar1 = *(char *)((long)puRam00000000036f8e60 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e60 + 0xc) = 0;
    *puRam00000000036f8e60 = *puRam00000000036f8e60 ^ 0x8707dd23b1c9b5ef;
    *(uint *)(puRam00000000036f8e60 + 1) = (uint)puRam00000000036f8e60[1] ^ 0xb1c9b5ef;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23184a8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318488);
    *(undefined1 *)((long)puVar5 + 0xe) = 1;
    *puVar5 = 0xdb6cbd7ce8636a4;
    *(undefined4 *)(puVar5 + 1) = 0xe88d2bbe;
    *(undefined2 *)((long)puVar5 + 0xc) = 0xadc5;
    __cxa_thread_atexit(&DAT_01269410,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23184a8);
    *puVar6 = 1;
    puRam00000000036f8e68 = (ulong *)__emutls_get_address(0x2318488);
    cVar1 = *(char *)((long)puRam00000000036f8e68 + 0xe);
  }
  else {
    puRam00000000036f8e68 = (ulong *)__emutls_get_address(0x2318488);
    cVar1 = *(char *)((long)puRam00000000036f8e68 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e68 + 0xe) = 0;
    *(byte *)((long)puRam00000000036f8e68 + 0xc) =
         *(byte *)((long)puRam00000000036f8e68 + 0xc) ^ 0xb1;
    *(byte *)((long)puRam00000000036f8e68 + 0xd) =
         *(byte *)((long)puRam00000000036f8e68 + 0xd) ^ 0xad;
    *puRam00000000036f8e68 = *puRam00000000036f8e68 ^ 0x7fd3adb181e15bed;
    *(uint *)(puRam00000000036f8e68 + 1) = (uint)puRam00000000036f8e68[1] ^ 0x81e15bed;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23184e8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23184c8);
    puVar5[1] = 0x1838fc82c1ceb26;
    *puVar5 = 0xede6b9cc0818fe1a;
    __cxa_thread_atexit(&DAT_00fe8f50,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23184e8);
    *puVar6 = 1;
    puRam00000000036f8e70 = (ulong *)__emutls_get_address(0x23184c8);
    cVar1 = *(char *)((long)puRam00000000036f8e70 + 0xf);
  }
  else {
    puRam00000000036f8e70 = (ulong *)__emutls_get_address(0x23184c8);
    cVar1 = *(char *)((long)puRam00000000036f8e70 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e70 + 0xf) = 0;
    *(byte *)((long)puRam00000000036f8e70 + 0xc) =
         *(byte *)((long)puRam00000000036f8e70 + 0xc) ^ 0xa9;
    *(byte *)((long)puRam00000000036f8e70 + 0xd) =
         *(byte *)((long)puRam00000000036f8e70 + 0xd) ^ 0xfd;
    *(byte *)((long)puRam00000000036f8e70 + 0xe) =
         *(byte *)((long)puRam00000000036f8e70 + 0xe) ^ 0x83;
    *puRam00000000036f8e70 = *puRam00000000036f8e70 ^ 0x8183fda96f799353;
    *(uint *)(puRam00000000036f8e70 + 1) = (uint)puRam00000000036f8e70[1] ^ 0x6f799353;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2318528);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318508);
    *(undefined1 *)((long)puVar5 + 0xe) = 1;
    *puVar5 = 0x6c21dc89fe20dcd1;
    *(undefined4 *)(puVar5 + 1) = 0xfa0ed8e7;
    *(undefined2 *)((long)puVar5 + 0xc) = 0xb9bf;
    __cxa_thread_atexit(&DAT_01276e84,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318528);
    *puVar6 = 1;
    puRam00000000036f8e78 = (ulong *)__emutls_get_address(0x2318508);
    cVar1 = *(char *)((long)puRam00000000036f8e78 + 0xe);
  }
  else {
    puRam00000000036f8e78 = (ulong *)__emutls_get_address(0x2318508);
    cVar1 = *(char *)((long)puRam00000000036f8e78 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e78 + 0xe) = 0;
    *(byte *)((long)puRam00000000036f8e78 + 0xc) =
         *(byte *)((long)puRam00000000036f8e78 + 0xc) ^ 0xcd;
    *(byte *)((long)puRam00000000036f8e78 + 0xd) =
         *(byte *)((long)puRam00000000036f8e78 + 0xd) ^ 0xb9;
    *puRam00000000036f8e78 = *puRam00000000036f8e78 ^ 0x194db9cd9b4dbd9f;
    *(uint *)(puRam00000000036f8e78 + 1) = (uint)puRam00000000036f8e78[1] ^ 0x9b4dbd9f;
  }
  uStack_30 = 0x31;
  uStack_38 = 0xda1c07e5e115c;
  uStack_31 = 0xb2;
  uStack_40 = 0xb400bec47b6b1373;
  pbVar3 = (byte *)__emutls_get_address(0x2318568);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2318548);
    func_0x01176a6c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_01176b00,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2318568);
    *puVar6 = 1;
    puRam00000000036f8e80 = (ulong *)__emutls_get_address(0x2318548);
    cVar1 = *(char *)((long)puRam00000000036f8e80 + 0x11);
  }
  else {
    puRam00000000036f8e80 = (ulong *)__emutls_get_address(0x2318548);
    cVar1 = *(char *)((long)puRam00000000036f8e80 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e80 + 0x11) = 0;
    *(byte *)(puRam00000000036f8e80 + 2) = (byte)puRam00000000036f8e80[2] ^ 0x31;
    puRam00000000036f8e80[1] = puRam00000000036f8e80[1] ^ 0xc169d3a1093b4331;
    *puRam00000000036f8e80 = *puRam00000000036f8e80 ^ 0xc169d3a1093b4331;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23185a8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2318588);
    *(undefined1 *)((long)puVar5 + 0xe) = 1;
    *puVar5 = 0x2b5cac1c3db4dbf9;
    *(undefined4 *)(puVar5 + 1) = 0x1db0ddc8;
    *(undefined2 *)((long)puVar5 + 0xc) = 0xc938;
    __cxa_thread_atexit(&DAT_0105d610,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23185a8);
    *puVar6 = 1;
    puRam00000000036f8e88 = (ulong *)__emutls_get_address(0x2318588);
    cVar1 = *(char *)((long)puRam00000000036f8e88 + 0xe);
  }
  else {
    puRam00000000036f8e88 = (ulong *)__emutls_get_address(0x2318588);
    cVar1 = *(char *)((long)puRam00000000036f8e88 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8e88 + 0xe) = 0;
    *(byte *)((long)puRam00000000036f8e88 + 0xc) =
         *(byte *)((long)puRam00000000036f8e88 + 0xc) ^ 0x75;
    *(byte *)((long)puRam00000000036f8e88 + 0xd) =
         *(byte *)((long)puRam00000000036f8e88 + 0xd) ^ 0xc9;
    *puRam00000000036f8e88 = *puRam00000000036f8e88 ^ 0x6f2bc9754bd1a9a9;
    *(uint *)(puRam00000000036f8e88 + 1) = (uint)puRam00000000036f8e88[1] ^ 0x4bd1a9a9;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_184(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined2 uStack_30;
  undefined3 uStack_2e;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2319890);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2319870);
    *(undefined2 *)(puVar5 + 1) = 0x145;
    *puVar5 = 0x8fcb694e8e4f5007;
    __cxa_thread_atexit(&DAT_01286250,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319890);
    *puVar6 = 1;
    puRam00000000036f8eb8 = (ulong *)__emutls_get_address(0x2319870);
    cVar1 = *(char *)((long)puRam00000000036f8eb8 + 9);
  }
  else {
    puRam00000000036f8eb8 = (ulong *)__emutls_get_address(0x2319870);
    cVar1 = *(char *)((long)puRam00000000036f8eb8 + 9);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8eb8 + 9) = 0;
    *(byte *)(puRam00000000036f8eb8 + 1) = (byte)puRam00000000036f8eb8[1] ^ 0x45;
    *puRam00000000036f8eb8 = *puRam00000000036f8eb8 ^ 0xe7bf0d27d93d3145;
  }
  uStack_30 = 0x7778;
  uStack_38 = 0xe967280178;
  uStack_33 = 0xce4d62;
  uStack_40 = 0xf7556dda793f025e;
  pbVar3 = (byte *)__emutls_get_address(0x23198d0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x23198b0);
    func_0x0128625c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_012862f8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23198d0);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x23198b0);
  func_0x01286450();
  uRam00000000036f8ec0 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2319910);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23198f0);
    puVar5[1] = 0x1939cdf6bae9448;
    *puVar5 = 0x8bfe9ad274aa917d;
    __cxa_thread_atexit(&DAT_01286304,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319910);
    *puVar6 = 1;
    puRam00000000036f8ec8 = (ulong *)__emutls_get_address(0x23198f0);
    cVar1 = *(char *)((long)puRam00000000036f8ec8 + 0xf);
  }
  else {
    puRam00000000036f8ec8 = (ulong *)__emutls_get_address(0x23198f0);
    cVar1 = *(char *)((long)puRam00000000036f8ec8 + 0xf);
  }
  if (cVar1 != '\0') {
    *(byte *)((long)puRam00000000036f8ec8 + 0xc) =
         *(byte *)((long)puRam00000000036f8ec8 + 0xc) ^ 0xbb;
    *(undefined1 *)((long)puRam00000000036f8ec8 + 0xf) = 0;
    *(byte *)((long)puRam00000000036f8ec8 + 0xe) =
         *(byte *)((long)puRam00000000036f8ec8 + 0xe) ^ 0x93;
    *(byte *)((long)puRam00000000036f8ec8 + 0xd) =
         *(byte *)((long)puRam00000000036f8ec8 + 0xd) ^ 0xef;
    *puRam00000000036f8ec8 = *puRam00000000036f8ec8 ^ 0xd993efbb19cfe32d;
    *(uint *)(puRam00000000036f8ec8 + 1) = (uint)puRam00000000036f8ec8[1] ^ 0x19cfe32d;
  }
  uStack_38 = 0x1b2b0ec17;
  uStack_33 = 0x5f1a2d;
  uStack_40 = 0x3b1b2817bda6fd16;
  pbVar3 = (byte *)__emutls_get_address(0x2319950);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2319930);
    func_0x01020930(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_010209bc,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319950);
    *puVar6 = 1;
    puRam00000000036f8ed0 = (ulong *)__emutls_get_address(0x2319930);
    cVar1 = (char)puRam00000000036f8ed0[2];
  }
  else {
    puRam00000000036f8ed0 = (ulong *)__emutls_get_address(0x2319930);
    cVar1 = (char)puRam00000000036f8ed0[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f8ed0 + 2) = 0;
    puRam00000000036f8ed0[1] = puRam00000000036f8ed0[1] ^ 0x5f694973d3c78945;
    *puRam00000000036f8ed0 = *puRam00000000036f8ed0 ^ 0x5f694973d3c78945;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2319990);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2319970);
    *(undefined1 *)((long)puVar5 + 0xc) = 1;
    *puVar5 = 0xbf4aee0072968967;
    *(undefined4 *)(puVar5 + 1) = 0x1f968b4e;
    __cxa_thread_atexit(&DAT_01276c5c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319990);
    *puVar6 = 1;
    puRam00000000036f8ed8 = (ulong *)__emutls_get_address(0x2319970);
    cVar1 = *(char *)((long)puRam00000000036f8ed8 + 0xc);
  }
  else {
    puRam00000000036f8ed8 = (ulong *)__emutls_get_address(0x2319970);
    cVar1 = *(char *)((long)puRam00000000036f8ed8 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8ed8 + 0xc) = 0;
    *puRam00000000036f8ed8 = *puRam00000000036f8ed8 ^ 0xeb279b691ff3fb37;
    *(uint *)(puRam00000000036f8ed8 + 1) = (uint)puRam00000000036f8ed8[1] ^ 0x1ff3fb37;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23199d0);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23199b0);
    *puVar5 = 0x153960b06117079;
    __cxa_thread_atexit(&DAT_01286310,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23199d0);
    *puVar6 = 1;
    puRam00000000036f8ee0 = (uint *)__emutls_get_address(0x23199b0);
    cVar1 = *(char *)((long)puRam00000000036f8ee0 + 7);
  }
  else {
    puRam00000000036f8ee0 = (uint *)__emutls_get_address(0x23199b0);
    cVar1 = *(char *)((long)puRam00000000036f8ee0 + 7);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8ee0 + 7) = 0;
    *(byte *)(puRam00000000036f8ee0 + 1) = (byte)puRam00000000036f8ee0[1] ^ 0x67;
    *(byte *)((long)puRam00000000036f8ee0 + 5) = *(byte *)((long)puRam00000000036f8ee0 + 5) ^ 0xe5;
    *(byte *)((long)puRam00000000036f8ee0 + 6) = *(byte *)((long)puRam00000000036f8ee0 + 6) ^ 0x53;
    *puRam00000000036f8ee0 = *puRam00000000036f8ee0 ^ 0x63671535;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2319a10);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23199f0);
    *(undefined1 *)((long)puVar5 + 0xe) = 1;
    *puVar5 = 0x8a81e4e7acf936d5;
    *(undefined4 *)(puVar5 + 1) = 0xa7e027ed;
    *(undefined2 *)((long)puVar5 + 0xc) = 0x97f8;
    __cxa_thread_atexit(&DAT_0128631c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319a10);
    *puVar6 = 1;
    puRam00000000036f8ee8 = (ulong *)__emutls_get_address(0x23199f0);
    cVar1 = *(char *)((long)puRam00000000036f8ee8 + 0xe);
  }
  else {
    puRam00000000036f8ee8 = (ulong *)__emutls_get_address(0x23199f0);
    cVar1 = *(char *)((long)puRam00000000036f8ee8 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8ee8 + 0xe) = 0;
    *(byte *)((long)puRam00000000036f8ee8 + 0xc) =
         *(byte *)((long)puRam00000000036f8ee8 + 0xc) ^ 0x8b;
    *(byte *)((long)puRam00000000036f8ee8 + 0xd) =
         *(byte *)((long)puRam00000000036f8ee8 + 0xd) ^ 0x97;
    *puRam00000000036f8ee8 = *puRam00000000036f8ee8 ^ 0xffc3978bc98f5399;
    *(uint *)(puRam00000000036f8ee8 + 1) = (uint)puRam00000000036f8ee8[1] ^ 0xc98f5399;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2319a50);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2319a30);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x1af;
    *puVar5 = 0xfd9af9c3ea6fe8b4;
    *(undefined4 *)(puVar5 + 1) = 0xf178f881;
    __cxa_thread_atexit(&DAT_0125fef8,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319a50);
    *puVar6 = 1;
    puRam00000000036f8ef0 = (ulong *)__emutls_get_address(0x2319a30);
    cVar1 = *(char *)((long)puRam00000000036f8ef0 + 0xd);
  }
  else {
    puRam00000000036f8ef0 = (ulong *)__emutls_get_address(0x2319a30);
    cVar1 = *(char *)((long)puRam00000000036f8ef0 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f8ef0 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f8ef0 + 0xc) =
         *(byte *)((long)puRam00000000036f8ef0 + 0xc) ^ 0xaf;
    *puRam00000000036f8ef0 = *puRam00000000036f8ef0 ^ 0x9bd595af851d8be7;
    *(uint *)(puRam00000000036f8ef0 + 1) = (uint)puRam00000000036f8ef0[1] ^ 0x851d8be7;
  }
  uStack_38 = 0xefc8f62602;
  uStack_33 = 0x398788;
  uStack_40 = 0x5cb1adf7d4e13020;
  pbVar3 = (byte *)__emutls_get_address(0x2319a90);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2319a70);
    func_0x01286328(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_012863b4,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319a90);
    *puVar6 = 1;
    puRam00000000036f8ef8 = (ulong *)__emutls_get_address(0x2319a70);
    cVar1 = (char)puRam00000000036f8ef8[2];
  }
  else {
    puRam00000000036f8ef8 = (ulong *)__emutls_get_address(0x2319a70);
    cVar1 = (char)puRam00000000036f8ef8[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f8ef8 + 2) = 0;
    puRam00000000036f8ef8[1] = puRam00000000036f8ef8[1] ^ 0x39e3c19bbb935373;
    *puRam00000000036f8ef8 = *puRam00000000036f8ef8 ^ 0x39e3c19bbb935373;
  }
  uStack_38 = 0xbc7b1aab52;
  uStack_40 = 0xfb7b28aa6429947e;
  uStack_33 = 0xe25b2d;
  uStack_30 = 0x9343;
  uStack_2e = 0xd96310;
  pbVar3 = (byte *)__emutls_get_address(0x2319ad0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2319ab0);
    func_0x0106b770(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_0106b824,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2319ad0);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2319ab0);
  func_0x0106d9fc();
  uRam00000000036f8f00 = uVar4;
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_188(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined5 uStack_47;
  undefined2 uStack_42;
  undefined1 uStack_40;
  undefined5 uStack_3f;
  undefined3 uStack_3a;
  undefined5 uStack_37;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0x22;
  uStack_47 = 0x241afcb4ec;
  uStack_50 = 0x3e04005cb6b4e807;
  uStack_3a = 0x772736;
  uStack_37 = 0x4914bdb7a7;
  uStack_42 = 0xe;
  uStack_40 = 0x26;
  uStack_3f = 0x271ca3b2e6;
  pbVar2 = (byte *)__emutls_get_address(0x23219b8);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x2321998);
    func_0x012dda20(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_012ddb1c,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x23219b8);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x2321998);
  func_0x012dded4();
  uStack_48 = 0x50;
  uStack_50 = 0x8a4ad2467a809a75;
  uStack_3f = 0xeb476b808e;
  uStack_3a = 0x378c49;
  uStack_47 = 0xf60030809e;
  uStack_42 = 0xb440;
  uStack_40 = 0x53;
  uRam00000000036f91d8 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x23219f8);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x23219d8);
    func_0x012ddb2c(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_012ddc00,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x23219f8);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x23219d8);
  func_0x012ddf48();
  uRam00000000036f91e0 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_190(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2323d20);
  if ((*pbVar3 & 1) == 0) {
    puVar6 = (undefined8 *)__emutls_get_address(0x2323d00);
    *puVar6 = 0x9eaefae48af626db;
    *(undefined4 *)(puVar6 + 1) = 0x18f37f7;
    __cxa_thread_atexit(&DAT_0106b57c,puVar6,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323d20);
    *puVar7 = 1;
    puRam00000000036f9298 = (ulong *)__emutls_get_address(0x2323d00);
    cVar1 = *(char *)((long)puRam00000000036f9298 + 0xb);
  }
  else {
    puRam00000000036f9298 = (ulong *)__emutls_get_address(0x2323d00);
    cVar1 = *(char *)((long)puRam00000000036f9298 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9298 + 0xb) = 0;
    *(byte *)(puRam00000000036f9298 + 1) = (byte)puRam00000000036f9298[1] ^ 0x99;
    *(byte *)((long)puRam00000000036f9298 + 9) = *(byte *)((long)puRam00000000036f9298 + 9) ^ 0x53;
    *(byte *)((long)puRam00000000036f9298 + 10) = *(byte *)((long)puRam00000000036f9298 + 10) ^ 0x8f
    ;
    *puRam00000000036f9298 = *puRam00000000036f9298 ^ 0xffc3978bc98f5399;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2323d60);
  if ((*pbVar3 & 1) == 0) {
    puVar6 = (undefined8 *)__emutls_get_address(0x2323d40);
    *(undefined2 *)(puVar6 + 1) = 0x173;
    *puVar6 = 0x5c80a8e9ebf73f3c;
    __cxa_thread_atexit(&DAT_00f32260,puVar6,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323d60);
    *puVar7 = 1;
    puRam00000000036f92a0 = (ulong *)__emutls_get_address(0x2323d40);
    cVar1 = *(char *)((long)puRam00000000036f92a0 + 9);
  }
  else {
    puRam00000000036f92a0 = (ulong *)__emutls_get_address(0x2323d40);
    cVar1 = *(char *)((long)puRam00000000036f92a0 + 9);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f92a0 + 9) = 0;
    *(byte *)(puRam00000000036f92a0 + 1) = (byte)puRam00000000036f92a0[1] ^ 0x73;
    *puRam00000000036f92a0 = *puRam00000000036f92a0 ^ 0x39e3c19bbb935373;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2323da0);
  if ((*pbVar3 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2323d80);
    *(undefined1 *)((long)puVar4 + 6) = 1;
    *(undefined2 *)(puVar4 + 1) = 0x41bc;
    *puVar4 = 0x6e169567;
    __cxa_thread_atexit(&DAT_010188f0,puVar4,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323da0);
    *puVar7 = 1;
    puRam00000000036f92a8 = (uint *)__emutls_get_address(0x2323d80);
    cVar1 = *(char *)((long)puRam00000000036f92a8 + 6);
  }
  else {
    puRam00000000036f92a8 = (uint *)__emutls_get_address(0x2323d80);
    cVar1 = *(char *)((long)puRam00000000036f92a8 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f92a8 + 6) = 0;
    *(byte *)(puRam00000000036f92a8 + 1) = (byte)puRam00000000036f92a8[1] ^ 0xd9;
    *(byte *)((long)puRam00000000036f92a8 + 5) = *(byte *)((long)puRam00000000036f92a8 + 5) ^ 0x41;
    *puRam00000000036f92a8 = *puRam00000000036f92a8 ^ 0xd7fe737;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2323de0);
  if ((*pbVar3 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2323dc0);
    *(undefined2 *)(puVar4 + 1) = 0x123;
    *puVar4 = 0xec126ca;
    __cxa_thread_atexit(&DAT_010188fc,puVar4,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323de0);
    *puVar7 = 1;
    puRam00000000036f92b0 = (uint *)__emutls_get_address(0x2323dc0);
    cVar1 = *(char *)((long)puRam00000000036f92b0 + 5);
  }
  else {
    puRam00000000036f92b0 = (uint *)__emutls_get_address(0x2323dc0);
    cVar1 = *(char *)((long)puRam00000000036f92b0 + 5);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f92b0 + 5) = 0;
    *(byte *)(puRam00000000036f92b0 + 1) = (byte)puRam00000000036f92b0[1] ^ 0x23;
    *puRam00000000036f92b0 = *puRam00000000036f92b0 ^ 0x6bad4799;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2323e20);
  if ((*pbVar3 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2323e00);
    *(undefined2 *)(puVar4 + 1) = 0x145;
    *puVar4 = 0xbad348ce;
    __cxa_thread_atexit(&LAB_013027b4,puVar4,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323e20);
    *puVar7 = 1;
    puRam00000000036f92b8 = (uint *)__emutls_get_address(0x2323e00);
    cVar1 = *(char *)((long)puRam00000000036f92b8 + 5);
  }
  else {
    puRam00000000036f92b8 = (uint *)__emutls_get_address(0x2323e00);
    cVar1 = *(char *)((long)puRam00000000036f92b8 + 5);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f92b8 + 5) = 0;
    *(byte *)(puRam00000000036f92b8 + 1) = (byte)puRam00000000036f92b8[1] ^ 0x45;
    *puRam00000000036f92b8 = *puRam00000000036f92b8 ^ 0xf9913b87;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2323e60);
  if ((*pbVar3 & 1) == 0) {
    puVar6 = (undefined8 *)__emutls_get_address(0x2323e40);
    *(undefined2 *)(puVar6 + 1) = 0x1dd;
    *puVar6 = 0x46227cad9771e9e;
    __cxa_thread_atexit(&DAT_013027c0,puVar6,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323e60);
    *puVar7 = 1;
    puRam00000000036f92c0 = (ulong *)__emutls_get_address(0x2323e40);
    cVar1 = *(char *)((long)puRam00000000036f92c0 + 9);
  }
  else {
    puRam00000000036f92c0 = (ulong *)__emutls_get_address(0x2323e40);
    cVar1 = *(char *)((long)puRam00000000036f92c0 + 9);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f92c0 + 9) = 0;
    *(byte *)(puRam00000000036f92c0 + 1) = (byte)puRam00000000036f92c0[1] ^ 0xdd;
    *puRam00000000036f92c0 = *puRam00000000036f92c0 ^ 0x7d0149afab056bdd;
  }
  uStack_38 = 0x7fb6cad0eca83f83;
  uStack_40 = 0xabcdfd6ea823aaf;
  pbVar3 = (byte *)__emutls_get_address(0x2323ea0);
  if ((*pbVar3 & 1) == 0) {
    uVar5 = __emutls_get_address(0x2323e80);
    func_0x011c3318(uVar5,&uStack_40);
    __cxa_thread_atexit(&DAT_011c33a4,uVar5,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323ea0);
    *puVar7 = 1;
    puRam00000000036f92c8 = (ulong *)__emutls_get_address(0x2323e80);
    cVar1 = (char)puRam00000000036f92c8[2];
  }
  else {
    puRam00000000036f92c8 = (ulong *)__emutls_get_address(0x2323e80);
    cVar1 = (char)puRam00000000036f92c8[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f92c8 + 2) = 0;
    puRam00000000036f92c8[1] = puRam00000000036f92c8[1] ^ 0x7fd3adb181e15bed;
    *puRam00000000036f92c8 = *puRam00000000036f92c8 ^ 0x7fd3adb181e15bed;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2323ee0);
  if ((*pbVar3 & 1) == 0) {
    puVar6 = (undefined8 *)__emutls_get_address(0x2323ec0);
    *(undefined2 *)((long)puVar6 + 0xc) = 0x1a9;
    *puVar6 = 0xe0eeb4860a0af211;
    *(undefined4 *)(puVar6 + 1) = 0x400af634;
    __cxa_thread_atexit(&DAT_01176a54,puVar6,&DAT_0219a700);
    puVar7 = (undefined1 *)__emutls_get_address(0x2323ee0);
    *puVar7 = 1;
    puRam00000000036f92d0 = (ulong *)__emutls_get_address(0x2323ec0);
    cVar1 = *(char *)((long)puRam00000000036f92d0 + 0xd);
  }
  else {
    puRam00000000036f92d0 = (ulong *)__emutls_get_address(0x2323ec0);
    cVar1 = *(char *)((long)puRam00000000036f92d0 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f92d0 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f92d0 + 0xc) =
         *(byte *)((long)puRam00000000036f92d0 + 0xc) ^ 0xa9;
    *puRam00000000036f92d0 = *puRam00000000036f92d0 ^ 0x8183fda96f799353;
    *(uint *)(puRam00000000036f92d0 + 1) = (uint)puRam00000000036f92d0[1] ^ 0x6f799353;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_192(void)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  pbVar2 = (byte *)__emutls_get_address(0x2325b38);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x2325b18);
    *(undefined1 *)((long)puVar3 + 6) = 1;
    *(undefined2 *)(puVar3 + 1) = 0xcdd7;
    *puVar3 = 0xfccfa8c4;
    __cxa_thread_atexit(&DAT_01321820,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325b38);
    *puVar5 = 1;
    puRam00000000036f93b8 = (uint *)__emutls_get_address(0x2325b18);
    cVar1 = *(char *)((long)puRam00000000036f93b8 + 6);
  }
  else {
    puRam00000000036f93b8 = (uint *)__emutls_get_address(0x2325b18);
    cVar1 = *(char *)((long)puRam00000000036f93b8 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93b8 + 6) = 0;
    *(byte *)(puRam00000000036f93b8 + 1) = (byte)puRam00000000036f93b8[1] ^ 0xa5;
    *(byte *)((long)puRam00000000036f93b8 + 5) = *(byte *)((long)puRam00000000036f93b8 + 5) ^ 0xcd;
    *puRam00000000036f93b8 = *puRam00000000036f93b8 ^ 0x93a3c787;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325b78);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x2325b58);
    *(undefined1 *)((long)puVar3 + 6) = 1;
    *(undefined2 *)(puVar3 + 1) = 0x9b7a;
    *puVar3 = 0x82999083;
    __cxa_thread_atexit(&DAT_0132182c,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325b78);
    *puVar5 = 1;
    puRam00000000036f93c0 = (uint *)__emutls_get_address(0x2325b58);
    cVar1 = *(char *)((long)puRam00000000036f93c0 + 6);
  }
  else {
    puRam00000000036f93c0 = (uint *)__emutls_get_address(0x2325b58);
    cVar1 = *(char *)((long)puRam00000000036f93c0 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93c0 + 6) = 0;
    *(byte *)((long)puRam00000000036f93c0 + 5) = *(byte *)((long)puRam00000000036f93c0 + 5) ^ 0x9b;
    *(byte *)(puRam00000000036f93c0 + 1) = (byte)puRam00000000036f93c0[1] ^ 0x1f;
    *puRam00000000036f93c0 = *puRam00000000036f93c0 ^ 0xf7f5f1d5;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325bb8);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2325b98);
    *(undefined2 *)(puVar4 + 1) = 0x10d;
    *puVar4 = 0x110f162c4128a14a;
    __cxa_thread_atexit(&DAT_01321838,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325bb8);
    *puVar5 = 1;
    puRam00000000036f93c8 = (ulong *)__emutls_get_address(0x2325b98);
    cVar1 = *(char *)((long)puRam00000000036f93c8 + 9);
  }
  else {
    puRam00000000036f93c8 = (ulong *)__emutls_get_address(0x2325b98);
    cVar1 = *(char *)((long)puRam00000000036f93c8 + 9);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93c8 + 9) = 0;
    *(byte *)(puRam00000000036f93c8 + 1) = (byte)puRam00000000036f93c8[1] ^ 0xd;
    *puRam00000000036f93c8 = *puRam00000000036f93c8 ^ 0x656173452549d30d;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325bf8);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2325bd8);
    *puVar4 = 0x9ba4daedc486008c;
    *(undefined4 *)(puVar4 + 1) = 0x1d517a0;
    __cxa_thread_atexit(&DAT_00fb2f00,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325bf8);
    *puVar5 = 1;
    puRam00000000036f93d0 = (ulong *)__emutls_get_address(0x2325bd8);
    cVar1 = *(char *)((long)puRam00000000036f93d0 + 0xb);
  }
  else {
    puRam00000000036f93d0 = (ulong *)__emutls_get_address(0x2325bd8);
    cVar1 = *(char *)((long)puRam00000000036f93d0 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93d0 + 0xb) = 0;
    *(byte *)(puRam00000000036f93d0 + 1) = (byte)puRam00000000036f93d0[1] ^ 0xc5;
    *(byte *)((long)puRam00000000036f93d0 + 9) = *(byte *)((long)puRam00000000036f93d0 + 9) ^ 0x73;
    *(byte *)((long)puRam00000000036f93d0 + 10) = *(byte *)((long)puRam00000000036f93d0 + 10) ^ 0xd5
    ;
    *puRam00000000036f93d0 = *puRam00000000036f93d0 ^ 0xefc7bf81a1d573c5;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325c38);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2325c18);
    *(undefined1 *)((long)puVar4 + 10) = 1;
    *(undefined2 *)(puVar4 + 1) = 0xb150;
    *puVar4 = 0xfd814e5524f9c27c;
    __cxa_thread_atexit(&DAT_00fecdc8,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325c38);
    *puVar5 = 1;
    puRam00000000036f93d8 = (ulong *)__emutls_get_address(0x2325c18);
    cVar1 = *(char *)((long)puRam00000000036f93d8 + 10);
  }
  else {
    puRam00000000036f93d8 = (ulong *)__emutls_get_address(0x2325c18);
    cVar1 = *(char *)((long)puRam00000000036f93d8 + 10);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93d8 + 10) = 0;
    *(byte *)(puRam00000000036f93d8 + 1) = (byte)puRam00000000036f93d8[1] ^ 0x35;
    *(byte *)((long)puRam00000000036f93d8 + 9) = *(byte *)((long)puRam00000000036f93d8 + 9) ^ 0xb1;
    *puRam00000000036f93d8 = *puRam00000000036f93d8 ^ 0x89f52b3945a9b135;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325c78);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2325c58);
    *(undefined2 *)((long)puVar4 + 0xc) = 0x127;
    *puVar4 = 0x83da7944bc515416;
    *(undefined4 *)(puVar4 + 1) = 0xb458450c;
    __cxa_thread_atexit(&DAT_012aea94,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325c78);
    *puVar5 = 1;
    puRam00000000036f93e0 = (ulong *)__emutls_get_address(0x2325c58);
    cVar1 = *(char *)((long)puRam00000000036f93e0 + 0xd);
  }
  else {
    puRam00000000036f93e0 = (ulong *)__emutls_get_address(0x2325c58);
    cVar1 = *(char *)((long)puRam00000000036f93e0 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93e0 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f93e0 + 0xc) =
         *(byte *)((long)puRam00000000036f93e0 + 0xc) ^ 0x27;
    *puRam00000000036f93e0 = *puRam00000000036f93e0 ^ 0xe7bf0d27d93d3145;
    *(uint *)(puRam00000000036f93e0 + 1) = (uint)puRam00000000036f93e0[1] ^ 0xd93d3145;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325cb8);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x2325c98);
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = 0x19aa9665;
    __cxa_thread_atexit(&DAT_00fb2f30,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325cb8);
    *puVar5 = 1;
    puRam00000000036f93e8 = (uint *)__emutls_get_address(0x2325c98);
    cVar1 = (char)puRam00000000036f93e8[1];
  }
  else {
    puRam00000000036f93e8 = (uint *)__emutls_get_address(0x2325c98);
    cVar1 = (char)puRam00000000036f93e8[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f93e8 + 1) = 0;
    *puRam00000000036f93e8 = *puRam00000000036f93e8 ^ 0x19cfe32d;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325cf8);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2325cd8);
    *puVar4 = 0x361d2801a6b3e816;
    *(undefined4 *)(puVar4 + 1) = 0x1c7e72a;
    __cxa_thread_atexit(&DAT_01228570,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325cf8);
    *puVar5 = 1;
    puRam00000000036f93f0 = (ulong *)__emutls_get_address(0x2325cd8);
    cVar1 = *(char *)((long)puRam00000000036f93f0 + 0xb);
  }
  else {
    puRam00000000036f93f0 = (ulong *)__emutls_get_address(0x2325cd8);
    cVar1 = *(char *)((long)puRam00000000036f93f0 + 0xb);
  }
  if (cVar1 != '\0') {
    *(byte *)(puRam00000000036f93f0 + 1) = (byte)puRam00000000036f93f0[1] ^ 0x45;
    *(byte *)((long)puRam00000000036f93f0 + 9) = *(byte *)((long)puRam00000000036f93f0 + 9) ^ 0x89;
    *(byte *)((long)puRam00000000036f93f0 + 10) = *(byte *)((long)puRam00000000036f93f0 + 10) ^ 199;
    *puRam00000000036f93f0 = *puRam00000000036f93f0 ^ 0x5f694973d3c78945;
    *(undefined1 *)((long)puRam00000000036f93f0 + 0xb) = 0;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2325d38);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2325d18);
    *(undefined1 *)((long)puVar4 + 10) = 1;
    *(undefined2 *)(puVar4 + 1) = 0xfb44;
    *puVar4 = 0x9842f51d7794927b;
    __cxa_thread_atexit(&DAT_00f32234,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2325d38);
    *puVar5 = 1;
    puRam00000000036f93f8 = (ulong *)__emutls_get_address(0x2325d18);
    cVar1 = *(char *)((long)puRam00000000036f93f8 + 10);
  }
  else {
    puRam00000000036f93f8 = (ulong *)__emutls_get_address(0x2325d18);
    cVar1 = *(char *)((long)puRam00000000036f93f8 + 10);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f93f8 + 10) = 0;
    *(byte *)(puRam00000000036f93f8 + 1) = (byte)puRam00000000036f93f8[1] ^ 0x37;
    *(byte *)((long)puRam00000000036f93f8 + 9) = *(byte *)((long)puRam00000000036f93f8 + 9) ^ 0xfb;
    *puRam00000000036f93f8 = *puRam00000000036f93f8 ^ 0xeb279b691ff3fb37;
  }
  return;
}



void _INIT_193(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  pbVar4 = (byte *)__emutls_get_address(0x2325e88);
  if ((*pbVar4 & 1) == 0) {
    puVar6 = (undefined4 *)__emutls_get_address(0x2325e68);
    *(undefined1 *)((long)puVar6 + 6) = 1;
    *(undefined2 *)(puVar6 + 1) = 0xd42;
    *puVar6 = 0xb5495811;
    __cxa_thread_atexit(&DAT_01120c3c,puVar6,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2325e88);
    *puVar9 = 1;
    puRam00000000036f9458 = (uint *)__emutls_get_address(0x2325e68);
    cVar1 = *(char *)((long)puRam00000000036f9458 + 6);
  }
  else {
    puRam00000000036f9458 = (uint *)__emutls_get_address(0x2325e68);
    cVar1 = *(char *)((long)puRam00000000036f9458 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9458 + 6) = 0;
    *(byte *)(puRam00000000036f9458 + 1) = (byte)puRam00000000036f9458[1] ^ 0x27;
    *(byte *)((long)puRam00000000036f9458 + 5) = *(byte *)((long)puRam00000000036f9458 + 5) ^ 0xd;
    *puRam00000000036f9458 = *puRam00000000036f9458 ^ 0xd93d3145;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2325ec8);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2325ea8);
    *(undefined1 *)((long)puVar7 + 0xc) = 1;
    *puVar7 = 0xcf516acd683e1259;
    *(undefined4 *)(puVar7 + 1) = 0xb231874;
    __cxa_thread_atexit(&DAT_012278e0,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2325ec8);
    *puVar9 = 1;
    puRam00000000036f9460 = (ulong *)__emutls_get_address(0x2325ea8);
    cVar1 = *(char *)((long)puRam00000000036f9460 + 0xc);
  }
  else {
    puRam00000000036f9460 = (ulong *)__emutls_get_address(0x2325ea8);
    cVar1 = *(char *)((long)puRam00000000036f9460 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9460 + 0xc) = 0;
    *puRam00000000036f9460 = *puRam00000000036f9460 ^ 0xbb2103bf0b4d771d;
    *(uint *)(puRam00000000036f9460 + 1) = (uint)puRam00000000036f9460[1] ^ 0xb4d771d;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2325f08);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2325ee8);
    *puVar7 = 0x19396cf70bd827f;
    __cxa_thread_atexit(&LAB_01328598,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2325f08);
    *puVar9 = 1;
    puRam00000000036f9468 = (uint *)__emutls_get_address(0x2325ee8);
    cVar1 = *(char *)((long)puRam00000000036f9468 + 7);
  }
  else {
    puRam00000000036f9468 = (uint *)__emutls_get_address(0x2325ee8);
    cVar1 = *(char *)((long)puRam00000000036f9468 + 7);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9468 + 7) = 0;
    *(byte *)((long)puRam00000000036f9468 + 5) = *(byte *)((long)puRam00000000036f9468 + 5) ^ 0xef;
    *(byte *)(puRam00000000036f9468 + 1) = (byte)puRam00000000036f9468[1] ^ 0xbb;
    *(byte *)((long)puRam00000000036f9468 + 6) = *(byte *)((long)puRam00000000036f9468 + 6) ^ 0x93;
    *puRam00000000036f9468 = *puRam00000000036f9468 ^ 0x19cfe32d;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2325f48);
  if ((*pbVar4 & 1) == 0) {
    puVar6 = (undefined4 *)__emutls_get_address(0x2325f28);
    *(undefined1 *)((long)puVar6 + 6) = 1;
    *(undefined2 *)(puVar6 + 1) = 0x4900;
    *puVar6 = 0xbea2fd0c;
    __cxa_thread_atexit(&LAB_00e5af38,puVar6,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2325f48);
    *puVar9 = 1;
    puRam00000000036f9470 = (uint *)__emutls_get_address(0x2325f28);
    cVar1 = *(char *)((long)puRam00000000036f9470 + 6);
  }
  else {
    puRam00000000036f9470 = (uint *)__emutls_get_address(0x2325f28);
    cVar1 = *(char *)((long)puRam00000000036f9470 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9470 + 6) = 0;
    *(byte *)(puRam00000000036f9470 + 1) = (byte)puRam00000000036f9470[1] ^ 0x73;
    *(byte *)((long)puRam00000000036f9470 + 5) = *(byte *)((long)puRam00000000036f9470 + 5) ^ 0x49;
    *puRam00000000036f9470 = *puRam00000000036f9470 ^ 0xd3c78945;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2325f88);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2325f68);
    *puVar7 = 0x8f49fa1967b6887e;
    *(undefined4 *)(puVar7 + 1) = 0x1f39f52;
    __cxa_thread_atexit(&DAT_013285a4,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2325f88);
    *puVar9 = 1;
    puRam00000000036f9478 = (ulong *)__emutls_get_address(0x2325f68);
    cVar1 = *(char *)((long)puRam00000000036f9478 + 0xb);
  }
  else {
    puRam00000000036f9478 = (ulong *)__emutls_get_address(0x2325f68);
    cVar1 = *(char *)((long)puRam00000000036f9478 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9478 + 0xb) = 0;
    *(byte *)(puRam00000000036f9478 + 1) = (byte)puRam00000000036f9478[1] ^ 0x37;
    *(byte *)((long)puRam00000000036f9478 + 9) = *(byte *)((long)puRam00000000036f9478 + 9) ^ 0xfb;
    *(byte *)((long)puRam00000000036f9478 + 10) = *(byte *)((long)puRam00000000036f9478 + 10) ^ 0xf3
    ;
    *puRam00000000036f9478 = *puRam00000000036f9478 ^ 0xeb279b691ff3fb37;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2325fc8);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2325fa8);
    puVar7[1] = 0x153910916085650;
    *puVar7 = 0x9931840b0a066374;
    __cxa_thread_atexit(&DAT_013285b0,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2325fc8);
    *puVar9 = 1;
    puRam00000000036f9480 = (ulong *)__emutls_get_address(0x2325fa8);
    cVar1 = *(char *)((long)puRam00000000036f9480 + 0xf);
  }
  else {
    puRam00000000036f9480 = (ulong *)__emutls_get_address(0x2325fa8);
    cVar1 = *(char *)((long)puRam00000000036f9480 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9480 + 0xf) = 0;
    *(byte *)((long)puRam00000000036f9480 + 0xc) =
         *(byte *)((long)puRam00000000036f9480 + 0xc) ^ 0x67;
    *(byte *)((long)puRam00000000036f9480 + 0xd) =
         *(byte *)((long)puRam00000000036f9480 + 0xd) ^ 0xe5;
    *(byte *)((long)puRam00000000036f9480 + 0xe) =
         *(byte *)((long)puRam00000000036f9480 + 0xe) ^ 0x53;
    *puRam00000000036f9480 = *puRam00000000036f9480 ^ 0xf553e56763671535;
    *(uint *)(puRam00000000036f9480 + 1) = (uint)puRam00000000036f9480[1] ^ 0x63671535;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2326008);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2325fe8);
    *puVar7 = 0x8aacd4e7a8fb3ccd;
    *(undefined4 *)(puVar7 + 1) = 0x18f27f7;
    __cxa_thread_atexit(&DAT_0106b57c,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326008);
    *puVar9 = 1;
    puRam00000000036f9488 = (ulong *)__emutls_get_address(0x2325fe8);
    cVar1 = *(char *)((long)puRam00000000036f9488 + 0xb);
  }
  else {
    puRam00000000036f9488 = (ulong *)__emutls_get_address(0x2325fe8);
    cVar1 = *(char *)((long)puRam00000000036f9488 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9488 + 0xb) = 0;
    *(byte *)(puRam00000000036f9488 + 1) = (byte)puRam00000000036f9488[1] ^ 0x99;
    *(byte *)((long)puRam00000000036f9488 + 9) = *(byte *)((long)puRam00000000036f9488 + 9) ^ 0x53;
    *(byte *)((long)puRam00000000036f9488 + 10) = *(byte *)((long)puRam00000000036f9488 + 10) ^ 0x8f
    ;
    *puRam00000000036f9488 = *puRam00000000036f9488 ^ 0xffc3978bc98f5399;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2326048);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2326028);
    *(undefined2 *)((long)puVar7 + 0xc) = 0x1af;
    *puVar7 = 0xffb0e1cce071eeb4;
    *(undefined4 *)(puVar7 + 1) = 0xe878ffae;
    __cxa_thread_atexit(&DAT_0125fef8,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326048);
    *puVar9 = 1;
    puRam00000000036f9490 = (ulong *)__emutls_get_address(0x2326028);
    cVar1 = *(char *)((long)puRam00000000036f9490 + 0xd);
  }
  else {
    puRam00000000036f9490 = (ulong *)__emutls_get_address(0x2326028);
    cVar1 = *(char *)((long)puRam00000000036f9490 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9490 + 0xd) = 0;
    *(byte *)((long)puRam00000000036f9490 + 0xc) =
         *(byte *)((long)puRam00000000036f9490 + 0xc) ^ 0xaf;
    *puRam00000000036f9490 = *puRam00000000036f9490 ^ 0x9bd595af851d8be7;
    *(uint *)(puRam00000000036f9490 + 1) = (uint)puRam00000000036f9490[1] ^ 0x851d8be7;
  }
  pbVar4 = (byte *)__emutls_get_address(0x2326088);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2326068);
    *puVar7 = 0x1077055ee396441;
    __cxa_thread_atexit(&DAT_011e41f4,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326088);
    *puVar9 = 1;
    puRam00000000036f9588 = (uint *)__emutls_get_address(0x2326068);
    cVar1 = *(char *)((long)puRam00000000036f9588 + 7);
  }
  else {
    puRam00000000036f9588 = (uint *)__emutls_get_address(0x2326068);
    cVar1 = *(char *)((long)puRam00000000036f9588 + 7);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9588 + 7) = 0;
    *(byte *)(puRam00000000036f9588 + 1) = (byte)puRam00000000036f9588[1] ^ 0x21;
    *(byte *)((long)puRam00000000036f9588 + 5) = *(byte *)((long)puRam00000000036f9588 + 5) ^ 9;
    *(byte *)((long)puRam00000000036f9588 + 6) = *(byte *)((long)puRam00000000036f9588 + 6) ^ 7;
    *puRam00000000036f9588 = *puRam00000000036f9588 ^ 0x874b0533;
  }
  lVar3 = 0;
  do {
    lRam00000000036f9590 = lVar3;
    lVar3 = lRam00000000036f9590 + 1;
  } while (*(char *)((long)puRam00000000036f9588 + lRam00000000036f9590) != '\0');
  uRam00000000036f9598 = 0x68;
  puRam00000000036f95a8 = &DAT_01328f24;
  puRam00000000036f95b0 = &DAT_01328f5c;
  puRam00000000036f95c8 = &DAT_01328f80;
  puRam00000000036f95d0 = &DAT_01328f9c;
  pbVar4 = (byte *)__emutls_get_address(0x23260c8);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x23260a8);
    *(undefined1 *)(puVar7 + 1) = 1;
    *puVar7 = 0xdbca30eda0fc70a3;
    __cxa_thread_atexit(&DAT_013285bc,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x23260c8);
    *puVar9 = 1;
    puRam00000000036f95d8 = (ulong *)__emutls_get_address(0x23260a8);
    cVar1 = (char)puRam00000000036f95d8[1];
  }
  else {
    puRam00000000036f95d8 = (ulong *)__emutls_get_address(0x23260a8);
    cVar1 = (char)puRam00000000036f95d8[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036f95d8 + 1) = 0;
    *puRam00000000036f95d8 = *puRam00000000036f95d8 ^ 0xdbaf4383c59f19cf;
  }
  lVar3 = 0;
  do {
    lRam00000000036f95e0 = lVar3;
    lVar3 = lRam00000000036f95e0 + 1;
  } while (*(char *)((long)puRam00000000036f95d8 + lRam00000000036f95e0) != '\0');
  puRam00000000036f95f8 = &LAB_01329020;
  puRam00000000036f9600 = &DAT_0132903c;
  puRam00000000036f9618 = &DAT_01329078;
  puRam00000000036f9620 = &DAT_01329094;
  pbVar4 = (byte *)__emutls_get_address(0x2326108);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x23260e8);
    *(undefined1 *)((long)puVar7 + 10) = 1;
    *(undefined2 *)(puVar7 + 1) = 0xd538;
    *puVar7 = 0x771ad350ff52a739;
    __cxa_thread_atexit(&DAT_00e5fa4c,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326108);
    *puVar9 = 1;
    puRam00000000036f9628 = (ulong *)__emutls_get_address(0x23260e8);
    cVar1 = *(char *)((long)puRam00000000036f9628 + 10);
  }
  else {
    puRam00000000036f9628 = (ulong *)__emutls_get_address(0x23260e8);
    cVar1 = *(char *)((long)puRam00000000036f9628 + 10);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9628 + 10) = 0;
    *(byte *)(puRam00000000036f9628 + 1) = (byte)puRam00000000036f9628[1] ^ 0x5d;
    *(byte *)((long)puRam00000000036f9628 + 9) = *(byte *)((long)puRam00000000036f9628 + 9) ^ 0xd5;
    *puRam00000000036f9628 = *puRam00000000036f9628 ^ 0x7638735893bd55d;
  }
  lVar3 = 0;
  do {
    lRam00000000036f9630 = lVar3;
    lVar3 = lRam00000000036f9630 + 1;
  } while (*(char *)((long)puRam00000000036f9628 + lRam00000000036f9630) != '\0');
  puRam00000000036f9648 = &LAB_0132926c;
  puRam00000000036f9650 = &DAT_013292a4;
  uRam00000000036f9638 = 0x70;
  puRam00000000036f9668 = &LAB_013293c0;
  puRam00000000036f9670 = &DAT_013293dc;
  pbVar4 = (byte *)__emutls_get_address(0x2326148);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2326128);
    puVar7[1] = 0x1b7b083d2c1adca;
    *puVar7 = 0x1cd2b990c2fdaac9;
    __cxa_thread_atexit(&DAT_013285c4,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326148);
    *puVar9 = 1;
    puRam00000000036f9678 = (ulong *)__emutls_get_address(0x2326128);
    cVar1 = *(char *)((long)puRam00000000036f9678 + 0xf);
  }
  else {
    puRam00000000036f9678 = (ulong *)__emutls_get_address(0x2326128);
    cVar1 = *(char *)((long)puRam00000000036f9678 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036f9678 + 0xf) = 0;
    *(byte *)((long)puRam00000000036f9678 + 0xc) =
         *(byte *)((long)puRam00000000036f9678 + 0xc) ^ 0xf3;
    *(byte *)((long)puRam00000000036f9678 + 0xd) =
         *(byte *)((long)puRam00000000036f9678 + 0xd) ^ 0xd5;
    *(byte *)((long)puRam00000000036f9678 + 0xe) =
         *(byte *)((long)puRam00000000036f9678 + 0xe) ^ 0xb7;
    *puRam00000000036f9678 = *puRam00000000036f9678 ^ 0x4fb7d5f3ab95cfbf;
    *(uint *)(puRam00000000036f9678 + 1) = (uint)puRam00000000036f9678[1] ^ 0xab95cfbf;
  }
  lVar3 = 0;
  do {
    lRam00000000036f9680 = lVar3;
    lVar3 = lRam00000000036f9680 + 1;
  } while (*(char *)((long)puRam00000000036f9678 + lRam00000000036f9680) != '\0');
  puRam00000000036f9698 = &DAT_01328f24;
  puRam00000000036f96a0 = &DAT_01328f5c;
  uRam00000000036f9688 = 0x6c;
  puRam00000000036f96b8 = &LAB_013293c0;
  puRam00000000036f96c0 = &DAT_013293dc;
  __cxa_atexit(&DAT_01323ef0,0x36f9588,&DAT_0219a700);
  pbVar4 = (byte *)__emutls_get_address(0x2326188);
  if ((*pbVar4 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x2326168);
    *puVar7 = 0x1394fa2237f828c;
    __cxa_thread_atexit(&DAT_013285d0,puVar7,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326188);
    *puVar9 = 1;
    puRam00000000036f9498 = (uint *)__emutls_get_address(0x2326168);
    cVar1 = *(char *)((long)puRam00000000036f9498 + 7);
  }
  else {
    puRam00000000036f9498 = (uint *)__emutls_get_address(0x2326168);
    cVar1 = *(char *)((long)puRam00000000036f9498 + 7);
  }
  if (cVar1 != '\0') {
    *(byte *)((long)puRam00000000036f9498 + 5) = *(byte *)((long)puRam00000000036f9498 + 5) ^ 0x3d;
    *(byte *)(puRam00000000036f9498 + 1) = (byte)puRam00000000036f9498[1] ^ 199;
    *(undefined1 *)((long)puRam00000000036f9498 + 7) = 0;
    *(byte *)((long)puRam00000000036f9498 + 6) = *(byte *)((long)puRam00000000036f9498 + 6) ^ 0x39;
    *puRam00000000036f9498 = *puRam00000000036f9498 ^ 0x4711e7eb;
  }
  lVar3 = 0;
  do {
    lRam00000000036f94a0 = lVar3;
    lVar3 = lRam00000000036f94a0 + 1;
  } while (*(char *)((long)puRam00000000036f9498 + lRam00000000036f94a0) != '\0');
  puRam00000000036f94b8 = &LAB_01329558;
  puRam00000000036f94c0 = &DAT_01329590;
  uRam00000000036f94a8 = 0x10;
  puRam00000000036f94d8 = &DAT_013295b4;
  puRam00000000036f94e0 = &DAT_013295d0;
  __cxa_atexit(&LAB_01323fd4,0x36f9498,&DAT_0219a700);
  uStack_58 = 0xce6728e990d548;
  uStack_60 = 0xfd23a3af892f250;
  uStack_51 = 0xf1e55e11;
  pbVar4 = (byte *)__emutls_get_address(0x23261c8);
  if ((*pbVar4 & 1) == 0) {
    uVar8 = __emutls_get_address(0x23261a8);
    func_0x013285dc(uVar8,&uStack_60);
    __cxa_thread_atexit(&DAT_01328680,uVar8,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x23261c8);
    *puVar9 = 1;
  }
  lVar5 = __emutls_get_address(0x23261a8);
  func_0x0132983c();
  lVar3 = 0;
  do {
    lRam00000000036f94f0 = lVar3;
    lVar3 = lRam00000000036f94f0 + 1;
  } while (*(char *)(lVar5 + lRam00000000036f94f0) != '\0');
  uRam00000000036f94f8 = 4;
  puRam00000000036f9508 = &DAT_0132988c;
  puRam00000000036f9510 = &DAT_013298c4;
  puRam00000000036f9528 = &DAT_013298e8;
  puRam00000000036f9530 = &DAT_01329904;
  uStack_58 = 0x6961ba1f2a7ffe;
  uStack_60 = 0xb9643ca80e2858e6;
  uStack_51 = 0x4b5ee9a4;
  lRam00000000036f94e8 = lVar5;
  pbVar4 = (byte *)__emutls_get_address(0x2326208);
  if ((*pbVar4 & 1) == 0) {
    uVar8 = __emutls_get_address(0x23261e8);
    func_0x0118d2ac(uVar8,&uStack_60);
    uVar8 = __emutls_get_address(0x23261e8);
    __cxa_thread_atexit(&DAT_0118d350,uVar8,&DAT_0219a700);
    puVar9 = (undefined1 *)__emutls_get_address(0x2326208);
    *puVar9 = 1;
  }
  lVar5 = __emutls_get_address(0x23261e8);
  func_0x0118d35c();
  lVar3 = 0;
  do {
    lRam00000000036f9540 = lVar3;
    lVar3 = lRam00000000036f9540 + 1;
  } while (*(char *)(lVar5 + lRam00000000036f9540) != '\0');
  puRam00000000036f9558 = &DAT_0132988c;
  puRam00000000036f9560 = &DAT_013298c4;
  uRam00000000036f9548 = 0xc;
  puRam00000000036f9578 = &DAT_013298e8;
  puRam00000000036f9580 = &DAT_01329904;
  lRam00000000036f9538 = lVar5;
  __cxa_atexit(&LAB_0132407c,0x36f94e8,&DAT_0219a700);
  if (*(long *)(lVar2 + 0x28) != lStack_48) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_205(void)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  
  pbVar3 = (byte *)__emutls_get_address(0x232efe0);
  if ((*pbVar3 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x232efc0);
    *puVar7 = 0x4a89efefd5f62516;
    *(undefined4 *)(puVar7 + 1) = 0x1933d1c;
    __cxa_thread_atexit(&DAT_011b2b40,puVar7,&DAT_0219a700);
    puVar10 = (undefined1 *)__emutls_get_address(0x232efe0);
    *puVar10 = 1;
    puRam00000000036faed8 = (ulong *)__emutls_get_address(0x232efc0);
    cVar1 = *(char *)((long)puRam00000000036faed8 + 0xb);
  }
  else {
    puRam00000000036faed8 = (ulong *)__emutls_get_address(0x232efc0);
    cVar1 = *(char *)((long)puRam00000000036faed8 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036faed8 + 0xb) = 0;
    *(byte *)(puRam00000000036faed8 + 1) = (byte)puRam00000000036faed8[1] ^ 0x73;
    *(byte *)((long)puRam00000000036faed8 + 9) = *(byte *)((long)puRam00000000036faed8 + 9) ^ 0x53;
    *(byte *)((long)puRam00000000036faed8 + 10) = *(byte *)((long)puRam00000000036faed8 + 10) ^ 0x93
    ;
    *puRam00000000036faed8 = *puRam00000000036faed8 ^ 0x39e3c19bbb935373;
  }
  pbVar3 = (byte *)__emutls_get_address(0x232f020);
  if ((*pbVar3 & 1) == 0) {
    puVar7 = (undefined8 *)__emutls_get_address(0x232f000);
    *(undefined1 *)((long)puVar7 + 0xc) = 1;
    *puVar7 = 0xfd3732bd7f1e9056;
    *(undefined4 *)(puVar7 + 1) = 0xd118844;
    __cxa_thread_atexit(&DAT_0138bd78,puVar7,&DAT_0219a700);
    puVar10 = (undefined1 *)__emutls_get_address(0x232f020);
    *puVar10 = 1;
    puRam00000000036faee0 = (ulong *)__emutls_get_address(0x232f000);
    cVar1 = *(char *)((long)puRam00000000036faee0 + 0xc);
  }
  else {
    puRam00000000036faee0 = (ulong *)__emutls_get_address(0x232f000);
    cVar1 = *(char *)((long)puRam00000000036faee0 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036faee0 + 0xc) = 0;
    *puRam00000000036faee0 = *puRam00000000036faee0 ^ 0x971941d90d7fe737;
    *(uint *)(puRam00000000036faee0 + 1) = (uint)puRam00000000036faee0[1] ^ 0xd7fe737;
  }
  pbVar3 = (byte *)__emutls_get_address(0x232f060);
  if ((*pbVar3 & 1) == 0) {
    puVar8 = (undefined2 *)__emutls_get_address(0x232f040);
    *(undefined1 *)(puVar8 + 1) = 1;
    *puVar8 = 0x47fa;
    __cxa_thread_atexit(&DAT_0112f6d4,puVar8,&DAT_0219a700);
    puVar10 = (undefined1 *)__emutls_get_address(0x232f060);
    *puVar10 = 1;
    pbRam00000000036faee8 = (byte *)__emutls_get_address(0x232f040);
    bVar2 = pbRam00000000036faee8[2];
  }
  else {
    pbRam00000000036faee8 = (byte *)__emutls_get_address(0x232f040);
    bVar2 = pbRam00000000036faee8[2];
  }
  if (bVar2 != 0) {
    pbRam00000000036faee8[2] = 0;
    *pbRam00000000036faee8 = *pbRam00000000036faee8 ^ 0x99;
    pbRam00000000036faee8[1] = pbRam00000000036faee8[1] ^ 0x47;
  }
  pbVar3 = (byte *)__emutls_get_address(0x232f0a0);
  if ((*pbVar3 & 1) == 0) {
    puVar9 = (undefined4 *)__emutls_get_address(0x232f080);
    *(undefined1 *)((long)puVar9 + 6) = 1;
    *(undefined2 *)(puVar9 + 1) = 0xdd4f;
    *puVar9 = 0xdca8cdc1;
    __cxa_thread_atexit(&DAT_012ac060,puVar9,&DAT_0219a700);
    puVar10 = (undefined1 *)__emutls_get_address(0x232f0a0);
    *puVar10 = 1;
    puVar4 = (uint *)__emutls_get_address(0x232f080);
    cVar1 = *(char *)((long)puVar4 + 6);
  }
  else {
    puVar4 = (uint *)__emutls_get_address(0x232f080);
    cVar1 = *(char *)((long)puVar4 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puVar4 + 6) = 0;
    *(byte *)(puVar4 + 1) = (byte)puVar4[1] ^ 0x23;
    *(byte *)((long)puVar4 + 5) = *(byte *)((long)puVar4 + 5) ^ 0xdd;
    *puVar4 = *puVar4 ^ 0xb1c9b5ef;
  }
  uRam00000000036faef0 = uRam00000000036faef0 & 0xffffffffffffff00;
  uRam00000000036faf00 = CONCAT17(0x17,(undefined7)uRam00000000036faf00);
  uVar6 = 0;
  do {
    uVar5 = uVar6;
    uVar6 = uVar5 + 1;
  } while (*(char *)((long)puVar4 + uVar5) != '\0');
  if (uVar5 < 0x18) {
    uVar6 = 0x36faef0;
    uRam00000000036faf00 = CONCAT17('\x17' - (char)uVar5,(undefined7)uRam00000000036faf00);
  }
  else {
    uVar6 = func_0x00f785e8(uVar5 + 1,0,0,0,0,0);
    uRam00000000036faf00 = uVar5 | 0x8000000000000000;
    uRam00000000036faef0 = uVar6;
    uRam00000000036faef8 = uVar5;
  }
  memmove(uVar6,puVar4,uVar5);
  puVar10 = (undefined1 *)(uRam00000000036faef0 + uRam00000000036faef8);
  if (-1 < (long)uRam00000000036faf00) {
    puVar10 = (undefined1 *)(0x36faf07 - (uRam00000000036faf00 >> 0x38));
  }
  *puVar10 = 0;
  __cxa_atexit(&LAB_00e7fc70,0x36faef0,&DAT_0219a700);
  return;
}



void _INIT_209(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 uStack_3b;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2331fa8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2331f88);
    *(undefined2 *)(puVar5 + 1) = 0x1e7;
    *puVar5 = 0xff9cfbcae06fe8b4;
    __cxa_thread_atexit(&DAT_00e79bd0,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2331fa8);
    *puVar6 = 1;
    puRam00000000036fb0d8 = (ulong *)__emutls_get_address(0x2331f88);
    cVar1 = *(char *)((long)puRam00000000036fb0d8 + 9);
  }
  else {
    puRam00000000036fb0d8 = (ulong *)__emutls_get_address(0x2331f88);
    cVar1 = *(char *)((long)puRam00000000036fb0d8 + 9);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fb0d8 + 9) = 0;
    *(byte *)(puRam00000000036fb0d8 + 1) = (byte)puRam00000000036fb0d8[1] ^ 0xe7;
    *puRam00000000036fb0d8 = *puRam00000000036fb0d8 ^ 0x9bd595af851d8be7;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2331fe8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2331fc8);
    *(undefined1 *)((long)puVar5 + 0xc) = 1;
    *puVar5 = 0x56a0b8f7d2fe3235;
    *(undefined4 *)(puVar5 + 1) = 0xbbe03d1a;
    __cxa_thread_atexit(&DAT_013a6e54,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2331fe8);
    *puVar6 = 1;
    puRam00000000036fb0e0 = (ulong *)__emutls_get_address(0x2331fc8);
    cVar1 = *(char *)((long)puRam00000000036fb0e0 + 0xc);
  }
  else {
    puRam00000000036fb0e0 = (ulong *)__emutls_get_address(0x2331fc8);
    cVar1 = *(char *)((long)puRam00000000036fb0e0 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fb0e0 + 0xc) = 0;
    *puRam00000000036fb0e0 = *puRam00000000036fb0e0 ^ 0x39e3c19bbb935373;
    *(uint *)(puRam00000000036fb0e0 + 1) = (uint)puRam00000000036fb0e0[1] ^ 0xbb935373;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2332028);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2332008);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x1d9;
    *puVar5 = 0xf84d38b564128671;
    *(undefined4 *)(puVar5 + 1) = 0x7e11825c;
    __cxa_thread_atexit(&DAT_013a6e60,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2332028);
    *puVar6 = 1;
    puRam00000000036fb0e8 = (ulong *)__emutls_get_address(0x2332008);
    cVar1 = *(char *)((long)puRam00000000036fb0e8 + 0xd);
  }
  else {
    puRam00000000036fb0e8 = (ulong *)__emutls_get_address(0x2332008);
    cVar1 = *(char *)((long)puRam00000000036fb0e8 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fb0e8 + 0xd) = 0;
    *(byte *)((long)puRam00000000036fb0e8 + 0xc) =
         *(byte *)((long)puRam00000000036fb0e8 + 0xc) ^ 0xd9;
    *puRam00000000036fb0e8 = *puRam00000000036fb0e8 ^ 0x971941d90d7fe737;
    *(uint *)(puRam00000000036fb0e8 + 1) = (uint)puRam00000000036fb0e8[1] ^ 0xd7fe737;
  }
  uStack_58 = 0x4a1fcc24f0;
  uStack_53 = 0xb41118;
  uStack_60 = 0xa116034c25de26d1;
  uStack_50 = 0xac937cc;
  uStack_4c = 0xc70c1257;
  pbVar3 = (byte *)__emutls_get_address(0x2332068);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2332048);
    func_0x013a6e6c(uVar4,&uStack_60);
    __cxa_thread_atexit(&DAT_013a6f38,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2332068);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2332048);
  func_0x013a8310();
  uStack_58 = 0x6a94f44ff4;
  uStack_53 = 0xb00348;
  uStack_60 = 0xb024622990fc5ac1;
  uStack_48 = 0x119ce25aef;
  uStack_50 = 0xd6e25eeb;
  uStack_4c = 0xaa056e15;
  uStack_3b = 0x4595fc5affe71074;
  uStack_43 = 0xac1c74;
  uStack_40 = 0x2998f87fe9;
  uRam00000000036fb0f0 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x23320a8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2332088);
    func_0x013a6f44(uVar4,&uStack_60);
    __cxa_thread_atexit(&DAT_013a70b8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23320a8);
    *puVar6 = 1;
    puRam00000000036fb0f8 = (ulong *)__emutls_get_address(0x2332088);
    cVar1 = *(char *)((long)puRam00000000036fb0f8 + 0x2d);
  }
  else {
    puRam00000000036fb0f8 = (ulong *)__emutls_get_address(0x2332088);
    cVar1 = *(char *)((long)puRam00000000036fb0f8 + 0x2d);
  }
  if (cVar1 != '\0') {
    *(byte *)(puRam00000000036fb0f8 + 5) = (byte)puRam00000000036fb0f8[5] ^ 0x87;
    *(byte *)((long)puRam00000000036fb0f8 + 0x29) =
         *(byte *)((long)puRam00000000036fb0f8 + 0x29) ^ 0x3b;
    *puRam00000000036fb0f8 = *puRam00000000036fb0f8 ^ 0xc9771b45f9913b87;
    puRam00000000036fb0f8[1] = puRam00000000036fb0f8[1] ^ 0xc9771b45f9913b87;
    *(byte *)((long)puRam00000000036fb0f8 + 0x2a) =
         *(byte *)((long)puRam00000000036fb0f8 + 0x2a) ^ 0x91;
    *(byte *)((long)puRam00000000036fb0f8 + 0x2b) =
         *(byte *)((long)puRam00000000036fb0f8 + 0x2b) ^ 0xf9;
    puRam00000000036fb0f8[2] = puRam00000000036fb0f8[2] ^ 0xc9771b45f9913b87;
    puRam00000000036fb0f8[3] = puRam00000000036fb0f8[3] ^ 0xc9771b45f9913b87;
    puRam00000000036fb0f8[4] = puRam00000000036fb0f8[4] ^ 0xc9771b45f9913b87;
    *(byte *)((long)puRam00000000036fb0f8 + 0x2c) =
         *(byte *)((long)puRam00000000036fb0f8 + 0x2c) ^ 0x45;
    *(undefined1 *)((long)puRam00000000036fb0f8 + 0x2d) = 0;
  }
  uStack_58 = 0xc6ed7105b8;
  uStack_53 = 0x2d6425;
  uStack_60 = 0x96f26ecdf630e91;
  uStack_50 = 0xab6d1fbc;
  pbVar3 = (byte *)__emutls_get_address(0x23320e8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x23320c8);
    func_0x013a70c8(uVar4,&uStack_60);
    __cxa_thread_atexit(&DAT_013a7174,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23320e8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x23320c8);
  func_0x013a8348();
  uStack_58 = 0x65c5a7d09b;
  uStack_60 = 0xe9689e57d9aedcbd;
  uStack_53 = 0xe26bb4;
  uStack_50 = 0xd9bdd4bf;
  uStack_4c = CONCAT31(uStack_4c._1_3_,0x23);
  uRam00000000036fb100 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2332128);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2332108);
    func_0x0125ffc4(uVar4,&uStack_60);
    __cxa_thread_atexit(&DAT_01260078,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2332128);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2332108);
  func_0x0126093c();
  uRam00000000036fb108 = uVar4;
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_213(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  undefined4 uStack_2d;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2333c78);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2333c58);
    *puVar5 = 0xc2d142b4c3db25f;
    *(undefined4 *)(puVar5 + 1) = 0x149a77e;
    __cxa_thread_atexit(&LAB_013b03cc,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2333c78);
    *puVar6 = 1;
    puRam00000000036fb258 = (ulong *)__emutls_get_address(0x2333c58);
    cVar1 = *(char *)((long)puRam00000000036fb258 + 0xb);
  }
  else {
    puRam00000000036fb258 = (ulong *)__emutls_get_address(0x2333c58);
    cVar1 = *(char *)((long)puRam00000000036fb258 + 0xb);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fb258 + 0xb) = 0;
    *(byte *)(puRam00000000036fb258 + 1) = (byte)puRam00000000036fb258[1] ^ 0xd;
    *(byte *)((long)puRam00000000036fb258 + 9) = *(byte *)((long)puRam00000000036fb258 + 9) ^ 0xd3;
    *(byte *)((long)puRam00000000036fb258 + 10) = *(byte *)((long)puRam00000000036fb258 + 10) ^ 0x49
    ;
    *puRam00000000036fb258 = *puRam00000000036fb258 ^ 0x656173452549d30d;
  }
  uStack_38 = 0xabeff3c4ac12a9;
  uStack_40 = 0xbfb3d1e4d3a70686;
  uStack_31 = 0xd516a68e;
  pbVar3 = (byte *)__emutls_get_address(0x2333cb8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2333c98);
    func_0x0101823c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_010182e0,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2333cb8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2333c98);
  func_0x01018f18();
  uStack_38 = 0x94794029c0dc54;
  uStack_40 = 0xcf81455c37dbc476;
  uStack_31 = 0xcedf5cfd;
  uStack_2d = CONCAT31(uStack_2d._1_3_,0x45);
  uRam00000000036fb260 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2333cf8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2333cd8);
    func_0x013c03c4(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_013c0470,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2333cf8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2333cd8);
  func_0x013c0640();
  uStack_38 = 0xd16855ab487220;
  uStack_40 = 0x8bdd6454b06b420c;
  uStack_31 = 0x50500393;
  uStack_2d = 0xbf744bb0;
  uRam00000000036fb268 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2333d38);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2333d18);
    func_0x013c047c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_013c0540,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2333d38);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2333d18);
  func_0x013c0680();
  uStack_38 = 0x557bda5f2a1974;
  uStack_31 = CONCAT31(uStack_31._1_3_,0xbb);
  uStack_40 = 0xd74d6ccd681e0454;
  uRam00000000036fb270 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2333d78);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2333d58);
    func_0x01283424(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_012834b0,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2333d78);
    *puVar6 = 1;
    puRam00000000036fb278 = (ulong *)__emutls_get_address(0x2333d58);
    cVar1 = (char)puRam00000000036fb278[2];
  }
  else {
    puRam00000000036fb278 = (ulong *)__emutls_get_address(0x2333d58);
    cVar1 = (char)puRam00000000036fb278[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fb278 + 2) = 0;
    puRam00000000036fb278[1] = puRam00000000036fb278[1] ^ 0xbb2103bf0b4d771d;
    *puRam00000000036fb278 = *puRam00000000036fb278 ^ 0xbb2103bf0b4d771d;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2333db8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2333d98);
    *(undefined1 *)((long)puVar5 + 0xc) = 1;
    *puVar5 = 0x8dff83da749c9064;
    *(undefined4 *)(puVar5 + 1) = 0x19bb9b48;
    __cxa_thread_atexit(&DAT_013c054c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2333db8);
    *puVar6 = 1;
    puRam00000000036fb280 = (ulong *)__emutls_get_address(0x2333d98);
    cVar1 = *(char *)((long)puRam00000000036fb280 + 0xc);
  }
  else {
    puRam00000000036fb280 = (ulong *)__emutls_get_address(0x2333d98);
    cVar1 = *(char *)((long)puRam00000000036fb280 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fb280 + 0xc) = 0;
    *puRam00000000036fb280 = *puRam00000000036fb280 ^ 0xd993efbb19cfe32d;
    *(uint *)(puRam00000000036fb280 + 1) = (uint)puRam00000000036fb280[1] ^ 0x19cfe32d;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_234(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  pbVar2 = (byte *)__emutls_get_address(0x2344870);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2344850);
    *puVar4 = 0x1cf824a;
    __cxa_thread_atexit(&DAT_01208ff0,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344870);
    *puVar5 = 1;
    pbRam00000000036fbe80 = (byte *)__emutls_get_address(0x2344850);
    bVar1 = pbRam00000000036fbe80[3];
  }
  else {
    pbRam00000000036fbe80 = (byte *)__emutls_get_address(0x2344850);
    bVar1 = pbRam00000000036fbe80[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbe80[3] = 0;
    *pbRam00000000036fbe80 = *pbRam00000000036fbe80 ^ 0x2d;
    pbRam00000000036fbe80[1] = pbRam00000000036fbe80[1] ^ 0xe3;
    pbRam00000000036fbe80[2] = pbRam00000000036fbe80[2] ^ 0xcf;
  }
  pbVar2 = (byte *)__emutls_get_address(0x23448b0);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined2 *)__emutls_get_address(0x2344890);
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = 0x8936;
    __cxa_thread_atexit(&DAT_011127d0,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23448b0);
    *puVar5 = 1;
    pbRam00000000036fbe88 = (byte *)__emutls_get_address(0x2344890);
    bVar1 = pbRam00000000036fbe88[2];
  }
  else {
    pbRam00000000036fbe88 = (byte *)__emutls_get_address(0x2344890);
    bVar1 = pbRam00000000036fbe88[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbe88[2] = 0;
    *pbRam00000000036fbe88 = *pbRam00000000036fbe88 ^ 0x45;
    pbRam00000000036fbe88[1] = pbRam00000000036fbe88[1] ^ 0x89;
  }
  pbVar2 = (byte *)__emutls_get_address(0x23448f0);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x23448d0);
    *puVar4 = 0x1f39744;
    __cxa_thread_atexit(&DAT_00fb2f40,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23448f0);
    *puVar5 = 1;
    pbRam00000000036fbe90 = (byte *)__emutls_get_address(0x23448d0);
    bVar1 = pbRam00000000036fbe90[3];
  }
  else {
    pbRam00000000036fbe90 = (byte *)__emutls_get_address(0x23448d0);
    bVar1 = pbRam00000000036fbe90[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbe90[3] = 0;
    *pbRam00000000036fbe90 = *pbRam00000000036fbe90 ^ 0x37;
    pbRam00000000036fbe90[1] = pbRam00000000036fbe90[1] ^ 0xfb;
    pbRam00000000036fbe90[2] = pbRam00000000036fbe90[2] ^ 0xf3;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2344930);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2344910);
    *puVar4 = 0x167665a;
    __cxa_thread_atexit(&DAT_011127e0,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344930);
    *puVar5 = 1;
    pbRam00000000036fbe98 = (byte *)__emutls_get_address(0x2344910);
    bVar1 = pbRam00000000036fbe98[3];
  }
  else {
    pbRam00000000036fbe98 = (byte *)__emutls_get_address(0x2344910);
    bVar1 = pbRam00000000036fbe98[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbe98[3] = 0;
    *pbRam00000000036fbe98 = *pbRam00000000036fbe98 ^ 0x35;
    pbRam00000000036fbe98[1] = pbRam00000000036fbe98[1] ^ 0x15;
    pbRam00000000036fbe98[2] = pbRam00000000036fbe98[2] ^ 0x67;
  }
  return;
}



void _INIT_235(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  pbVar2 = (byte *)__emutls_get_address(0x2344970);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2344950);
    *puVar4 = 0x14d167a;
    __cxa_thread_atexit(&DAT_0120d034,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344970);
    *puVar5 = 1;
    pbRam00000000036fbeb0 = (byte *)__emutls_get_address(0x2344950);
    bVar1 = pbRam00000000036fbeb0[3];
  }
  else {
    pbRam00000000036fbeb0 = (byte *)__emutls_get_address(0x2344950);
    bVar1 = pbRam00000000036fbeb0[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbeb0[3] = 0;
    *pbRam00000000036fbeb0 = *pbRam00000000036fbeb0 ^ 0x1d;
    pbRam00000000036fbeb0[1] = pbRam00000000036fbeb0[1] ^ 0x77;
    pbRam00000000036fbeb0[2] = pbRam00000000036fbeb0[2] ^ 0x4d;
  }
  pbVar2 = (byte *)__emutls_get_address(0x23449b0);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined2 *)__emutls_get_address(0x2344990);
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = 0xe35e;
    __cxa_thread_atexit(&DAT_011127c8,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23449b0);
    *puVar5 = 1;
    pbRam00000000036fbeb8 = (byte *)__emutls_get_address(0x2344990);
    bVar1 = pbRam00000000036fbeb8[2];
  }
  else {
    pbRam00000000036fbeb8 = (byte *)__emutls_get_address(0x2344990);
    bVar1 = pbRam00000000036fbeb8[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbeb8[2] = 0;
    *pbRam00000000036fbeb8 = *pbRam00000000036fbeb8 ^ 0x2d;
    pbRam00000000036fbeb8[1] = pbRam00000000036fbeb8[1] ^ 0xe3;
  }
  pbVar2 = (byte *)__emutls_get_address(0x23449f0);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x23449d0);
    *puVar4 = 0x1c7e536;
    __cxa_thread_atexit(&DAT_0125c5ec,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23449f0);
    *puVar5 = 1;
    pbRam00000000036fbec0 = (byte *)__emutls_get_address(0x23449d0);
    bVar1 = pbRam00000000036fbec0[3];
  }
  else {
    pbRam00000000036fbec0 = (byte *)__emutls_get_address(0x23449d0);
    bVar1 = pbRam00000000036fbec0[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbec0[3] = 0;
    *pbRam00000000036fbec0 = *pbRam00000000036fbec0 ^ 0x45;
    pbRam00000000036fbec0[1] = pbRam00000000036fbec0[1] ^ 0x89;
    pbRam00000000036fbec0[2] = pbRam00000000036fbec0[2] ^ 199;
  }
  return;
}



void _INIT_236(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  pbVar2 = (byte *)__emutls_get_address(0x2344a30);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2344a10);
    *puVar4 = 0x1677452;
    __cxa_thread_atexit(&DAT_011127e0,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344a30);
    *puVar5 = 1;
    pbRam00000000036fbed0 = (byte *)__emutls_get_address(0x2344a10);
    bVar1 = pbRam00000000036fbed0[3];
  }
  else {
    pbRam00000000036fbed0 = (byte *)__emutls_get_address(0x2344a10);
    bVar1 = pbRam00000000036fbed0[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbed0[3] = 0;
    *pbRam00000000036fbed0 = *pbRam00000000036fbed0 ^ 0x35;
    pbRam00000000036fbed0[1] = pbRam00000000036fbed0[1] ^ 0x15;
    pbRam00000000036fbed0[2] = pbRam00000000036fbed0[2] ^ 0x67;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2344a70);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined2 *)__emutls_get_address(0x2344a50);
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = 0x53ea;
    __cxa_thread_atexit(&DAT_0119c26c,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344a70);
    *puVar5 = 1;
    pbRam00000000036fbed8 = (byte *)__emutls_get_address(0x2344a50);
    bVar1 = pbRam00000000036fbed8[2];
  }
  else {
    pbRam00000000036fbed8 = (byte *)__emutls_get_address(0x2344a50);
    bVar1 = pbRam00000000036fbed8[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbed8[2] = 0;
    *pbRam00000000036fbed8 = *pbRam00000000036fbed8 ^ 0x99;
    pbRam00000000036fbed8[1] = pbRam00000000036fbed8[1] ^ 0x53;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2344ab0);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2344a90);
    *puVar4 = 0x11de794;
    __cxa_thread_atexit(&DAT_0112f6b0,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344ab0);
    *puVar5 = 1;
    pbRam00000000036fbee0 = (byte *)__emutls_get_address(0x2344a90);
    bVar1 = pbRam00000000036fbee0[3];
  }
  else {
    pbRam00000000036fbee0 = (byte *)__emutls_get_address(0x2344a90);
    bVar1 = pbRam00000000036fbee0[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbee0[3] = 0;
    *pbRam00000000036fbee0 = *pbRam00000000036fbee0 ^ 0xe7;
    pbRam00000000036fbee0[1] = pbRam00000000036fbee0[1] ^ 0x8b;
    pbRam00000000036fbee0[2] = pbRam00000000036fbee0[2] ^ 0x1d;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2344af0);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined4 *)__emutls_get_address(0x2344ad0);
    *puVar4 = 0x193201c;
    __cxa_thread_atexit(&DAT_0112f6bc,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2344af0);
    *puVar5 = 1;
    pbRam00000000036fbee8 = (byte *)__emutls_get_address(0x2344ad0);
    bVar1 = pbRam00000000036fbee8[3];
  }
  else {
    pbRam00000000036fbee8 = (byte *)__emutls_get_address(0x2344ad0);
    bVar1 = pbRam00000000036fbee8[3];
  }
  if (bVar1 != 0) {
    pbRam00000000036fbee8[3] = 0;
    *pbRam00000000036fbee8 = *pbRam00000000036fbee8 ^ 0x73;
    pbRam00000000036fbee8[1] = pbRam00000000036fbee8[1] ^ 0x53;
    pbRam00000000036fbee8[2] = pbRam00000000036fbee8[2] ^ 0x93;
  }
  return;
}



void _INIT_237(void)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  pbVar2 = (byte *)__emutls_get_address(0x2344b58);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x2344b38);
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = 0xb2c5873;
    __cxa_thread_atexit(&DAT_01208fe8,puVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x2344b58);
    *puVar4 = 1;
    puRam00000000036fbf00 = (uint *)__emutls_get_address(0x2344b38);
    cVar1 = (char)puRam00000000036fbf00[1];
  }
  else {
    puRam00000000036fbf00 = (uint *)__emutls_get_address(0x2344b38);
    cVar1 = (char)puRam00000000036fbf00[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fbf00 + 1) = 0;
    *puRam00000000036fbf00 = *puRam00000000036fbf00 ^ 0xb4d771d;
  }
  return;
}



void _INIT_256(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0x301a235da0a3fb24;
  uStack_50 = 0x300b3b16b7a6ec29;
  uStack_40 = 0x892b;
  pbVar2 = (byte *)__emutls_get_address(0x23559f0);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x23559d0);
    func_0x0106b4c8(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_0106b564,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x23559f0);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x23559d0);
  func_0x0106d90c();
  uRam00000000036fc630 = uVar3;
  uRam00000000036fc638 = strlen(uVar3);
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_258(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined3 uStack_48;
  undefined5 uStack_45;
  undefined3 uStack_40;
  undefined8 uStack_3d;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x2357f38);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x2357f18);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0x776e;
    __cxa_thread_atexit(&DAT_011127c0,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2357f38);
    *puVar6 = 1;
    pbRam00000000036fc6d8 = (byte *)__emutls_get_address(0x2357f18);
    bVar1 = pbRam00000000036fc6d8[2];
  }
  else {
    pbRam00000000036fc6d8 = (byte *)__emutls_get_address(0x2357f18);
    bVar1 = pbRam00000000036fc6d8[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fc6d8[2] = 0;
    *pbRam00000000036fc6d8 = *pbRam00000000036fc6d8 ^ 0x1d;
    pbRam00000000036fc6d8[1] = pbRam00000000036fc6d8[1] ^ 0x77;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2357f78);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x2357f58);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0xe359;
    __cxa_thread_atexit(&DAT_011127c8,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2357f78);
    *puVar6 = 1;
    pbRam00000000036fc6e0 = (byte *)__emutls_get_address(0x2357f58);
    bVar1 = pbRam00000000036fc6e0[2];
  }
  else {
    pbRam00000000036fc6e0 = (byte *)__emutls_get_address(0x2357f58);
    bVar1 = pbRam00000000036fc6e0[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fc6e0[2] = 0;
    *pbRam00000000036fc6e0 = *pbRam00000000036fc6e0 ^ 0x2d;
    pbRam00000000036fc6e0[1] = pbRam00000000036fc6e0[1] ^ 0xe3;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2357fb8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined2 *)__emutls_get_address(0x2357f98);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0x892a;
    __cxa_thread_atexit(&DAT_011127d0,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2357fb8);
    *puVar6 = 1;
    pbRam00000000036fc6e8 = (byte *)__emutls_get_address(0x2357f98);
    bVar1 = pbRam00000000036fc6e8[2];
  }
  else {
    pbRam00000000036fc6e8 = (byte *)__emutls_get_address(0x2357f98);
    bVar1 = pbRam00000000036fc6e8[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fc6e8[2] = 0;
    *pbRam00000000036fc6e8 = *pbRam00000000036fc6e8 ^ 0x45;
    pbRam00000000036fc6e8[1] = pbRam00000000036fc6e8[1] ^ 0x89;
  }
  uStack_48 = 0xdc8e59;
  uStack_50 = 0x8e6af70876979a65;
  uStack_3d = 0xf3975a8a5fb51c71;
  uStack_45 = 0x8a4eff084d;
  uStack_40 = 0x96b65b;
  pbVar3 = (byte *)__emutls_get_address(0x2357ff8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2357fd8);
    func_0x015d771c(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_015d7800,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2357ff8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2357fd8);
  func_0x015d797c();
  uRam00000000036fc6f0 = uVar4;
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_264(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  
  pbVar2 = (byte *)__emutls_get_address(0x2359948);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined2 *)__emutls_get_address(0x2359928);
    *(undefined1 *)(puVar3 + 1) = 1;
    *puVar3 = 0x153f;
    __cxa_thread_atexit(&DAT_0112f6a8,puVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x2359948);
    *puVar4 = 1;
    pbRam00000000036fc870 = (byte *)__emutls_get_address(0x2359928);
    bVar1 = pbRam00000000036fc870[2];
  }
  else {
    pbRam00000000036fc870 = (byte *)__emutls_get_address(0x2359928);
    bVar1 = pbRam00000000036fc870[2];
  }
  if (bVar1 != 0) {
    pbRam00000000036fc870[2] = 0;
    *pbRam00000000036fc870 = *pbRam00000000036fc870 ^ 0x35;
    pbRam00000000036fc870[1] = pbRam00000000036fc870[1] ^ 0x15;
  }
  return;
}



void _INIT_271(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined5 uStack_46;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined4 uStack_3d;
  undefined3 uStack_39;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x235f660);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x235f640);
    *puVar5 = 0x1538e0402257a72;
    __cxa_thread_atexit(&DAT_01286310,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f660);
    *puVar6 = 1;
    puRam00000000036fcbb8 = (uint *)__emutls_get_address(0x235f640);
    cVar1 = *(char *)((long)puRam00000000036fcbb8 + 7);
  }
  else {
    puRam00000000036fcbb8 = (uint *)__emutls_get_address(0x235f640);
    cVar1 = *(char *)((long)puRam00000000036fcbb8 + 7);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fcbb8 + 7) = 0;
    *(byte *)(puRam00000000036fcbb8 + 1) = (byte)puRam00000000036fcbb8[1] ^ 0x67;
    *(byte *)((long)puRam00000000036fcbb8 + 5) = *(byte *)((long)puRam00000000036fcbb8 + 5) ^ 0xe5;
    *(byte *)((long)puRam00000000036fcbb8 + 6) = *(byte *)((long)puRam00000000036fcbb8 + 6) ^ 0x53;
    *puRam00000000036fcbb8 = *puRam00000000036fcbb8 ^ 0x63671535;
  }
  pbVar3 = (byte *)__emutls_get_address(0x235f6a0);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x235f680);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x18b;
    *puVar5 = 0x9a90e3e8ace336ca;
    *(undefined4 *)(puVar5 + 1) = 0xbbea25eb;
    __cxa_thread_atexit(&DAT_00fb2f54,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f6a0);
    *puVar6 = 1;
    puRam00000000036fcbc0 = (ulong *)__emutls_get_address(0x235f680);
    cVar1 = *(char *)((long)puRam00000000036fcbc0 + 0xd);
  }
  else {
    puRam00000000036fcbc0 = (ulong *)__emutls_get_address(0x235f680);
    cVar1 = *(char *)((long)puRam00000000036fcbc0 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fcbc0 + 0xd) = 0;
    *(byte *)((long)puRam00000000036fcbc0 + 0xc) =
         *(byte *)((long)puRam00000000036fcbc0 + 0xc) ^ 0x8b;
    *puRam00000000036fcbc0 = *puRam00000000036fcbc0 ^ 0xffc3978bc98f5399;
    *(uint *)(puRam00000000036fcbc0 + 1) = (uint)puRam00000000036fcbc0[1] ^ 0xc98f5399;
  }
  uStack_48 = 0xf986;
  uStack_46 = 0xa7f0dbe67c;
  uStack_41 = 0x9b;
  uStack_50 = 0xf396f0dbe478f9a4;
  pbVar3 = (byte *)__emutls_get_address(0x235f6e0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f6c0);
    func_0x00fb2f60(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_00fb2fec,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f6e0);
    *puVar6 = 1;
    puRam00000000036fcbc8 = (ulong *)__emutls_get_address(0x235f6c0);
    cVar1 = (char)puRam00000000036fcbc8[2];
  }
  else {
    puRam00000000036fcbc8 = (ulong *)__emutls_get_address(0x235f6c0);
    cVar1 = (char)puRam00000000036fcbc8[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fcbc8 + 2) = 0;
    puRam00000000036fcbc8[1] = puRam00000000036fcbc8[1] ^ 0x9bd595af851d8be7;
    *puRam00000000036fcbc8 = *puRam00000000036fcbc8 ^ 0x9bd595af851d8be7;
  }
  uStack_48 = 0x2112;
  uStack_46 = 0x91a4efd8f2;
  uStack_41 = 0x39;
  uStack_50 = 0x51a0a4f6dafd3621;
  pbVar3 = (byte *)__emutls_get_address(0x235f720);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f700);
    func_0x01286328(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_012863b4,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f720);
    *puVar6 = 1;
    puRam00000000036fcbd0 = (ulong *)__emutls_get_address(0x235f700);
    cVar1 = (char)puRam00000000036fcbd0[2];
  }
  else {
    puRam00000000036fcbd0 = (ulong *)__emutls_get_address(0x235f700);
    cVar1 = (char)puRam00000000036fcbd0[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fcbd0 + 2) = 0;
    puRam00000000036fcbd0[1] = puRam00000000036fcbd0[1] ^ 0x39e3c19bbb935373;
    *puRam00000000036fcbd0 = *puRam00000000036fcbd0 ^ 0x39e3c19bbb935373;
  }
  pbVar3 = (byte *)__emutls_get_address(0x235f760);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x235f740);
    *puVar5 = 0xa63105461ddf22ca;
    *(undefined4 *)(puVar5 + 1) = 0x1ad22f4;
    __cxa_thread_atexit(&DAT_013b95b8,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f760);
    *puVar6 = 1;
    puRam00000000036fcbd8 = (ulong *)__emutls_get_address(0x235f740);
    cVar1 = *(char *)((long)puRam00000000036fcbd8 + 0xb);
  }
  else {
    puRam00000000036fcbd8 = (ulong *)__emutls_get_address(0x235f740);
    cVar1 = *(char *)((long)puRam00000000036fcbd8 + 0xb);
  }
  if (cVar1 != '\0') {
    *(byte *)(puRam00000000036fcbd8 + 1) = (byte)puRam00000000036fcbd8[1] ^ 0x99;
    *(byte *)((long)puRam00000000036fcbd8 + 9) = *(byte *)((long)puRam00000000036fcbd8 + 9) ^ 0x47;
    *(byte *)((long)puRam00000000036fcbd8 + 10) = *(byte *)((long)puRam00000000036fcbd8 + 10) ^ 0xad
    ;
    *puRam00000000036fcbd8 = *puRam00000000036fcbd8 ^ 0xc77f77236bad4799;
    *(undefined1 *)((long)puRam00000000036fcbd8 + 0xb) = 0;
  }
  pbVar3 = (byte *)__emutls_get_address(0x235f7a0);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x235f780);
    *(undefined1 *)((long)puVar5 + 0xe) = 1;
    *puVar5 = 0xac0378248bf053c4;
    *(undefined4 *)(puVar5 + 1) = 0x94f075f5;
    *(undefined2 *)((long)puVar5 + 0xc) = 0x1b20;
    __cxa_thread_atexit(&LAB_015ddc9c,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f7a0);
    *puVar6 = 1;
    puRam00000000036fcbe0 = (ulong *)__emutls_get_address(0x235f780);
    cVar1 = *(char *)((long)puRam00000000036fcbe0 + 0xe);
  }
  else {
    puRam00000000036fcbe0 = (ulong *)__emutls_get_address(0x235f780);
    cVar1 = *(char *)((long)puRam00000000036fcbe0 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fcbe0 + 0xe) = 0;
    *(byte *)((long)puRam00000000036fcbe0 + 0xc) =
         *(byte *)((long)puRam00000000036fcbe0 + 0xc) ^ 0x45;
    *(byte *)((long)puRam00000000036fcbe0 + 0xd) =
         *(byte *)((long)puRam00000000036fcbe0 + 0xd) ^ 0x1b;
    *puRam00000000036fcbe0 = *puRam00000000036fcbe0 ^ 0xc9771b45f9913b87;
    *(uint *)(puRam00000000036fcbe0 + 1) = (uint)puRam00000000036fcbe0[1] ^ 0xf9913b87;
  }
  uStack_40 = 0xdd;
  uStack_48 = 0x38af;
  uStack_46 = 0x6c28c1d970;
  uStack_41 = 0x18;
  uStack_50 = 0x18752aced964039e;
  pbVar3 = (byte *)__emutls_get_address(0x235f7e0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f7c0);
    func_0x015d0ab8(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_015d0b4c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f7e0);
    *puVar6 = 1;
    puRam00000000036fcbe8 = (ulong *)__emutls_get_address(0x235f7c0);
    cVar1 = *(char *)((long)puRam00000000036fcbe8 + 0x11);
  }
  else {
    puRam00000000036fcbe8 = (ulong *)__emutls_get_address(0x235f7c0);
    cVar1 = *(char *)((long)puRam00000000036fcbe8 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fcbe8 + 0x11) = 0;
    *(byte *)(puRam00000000036fcbe8 + 2) = (byte)puRam00000000036fcbe8[2] ^ 0xdd;
    puRam00000000036fcbe8[1] = puRam00000000036fcbe8[1] ^ 0x7d0149afab056bdd;
    *puRam00000000036fcbe8 = *puRam00000000036fcbe8 ^ 0x7d0149afab056bdd;
  }
  uStack_48 = 0xfb9d;
  uStack_46 = 0x759846dca8;
  uStack_50 = 0xe273be42c3a8ddac;
  uStack_41 = 0xf5;
  uStack_40 = 0x80;
  uStack_3f = 199;
  uStack_3e = 0xc9;
  pbVar3 = (byte *)__emutls_get_address(0x235f820);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f800);
    func_0x01141654(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_011416f8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f820);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x235f800);
  func_0x011429b4();
  uStack_48 = 0x159f;
  uStack_46 = 0xbce1d4ec80;
  uStack_50 = 0x1aa7ced0f38033ae;
  uStack_41 = 0xc;
  uStack_40 = 0x99;
  uStack_3f = 0x1d;
  uStack_3e = 0x8e;
  uStack_3d = 0xd3dec4e2;
  uRam00000000036fcbf0 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x235f860);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f840);
    func_0x01141704(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_011417c8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f860);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x235f840);
  func_0x01142a04();
  uStack_48 = 0xc021;
  uStack_50 = 0xe4f79ec81d18fb10;
  uStack_3e = 10;
  uStack_3d = 0xe092ef1b;
  uStack_39 = 0x9320f4;
  uStack_46 = 0xee9cc71d0c;
  uStack_41 = 0xe4;
  uStack_40 = 0x1f;
  uStack_3f = 0xfc;
  uRam00000000036fcbf8 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x235f8a0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f880);
    func_0x01636144(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_01636220,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f8a0);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x235f880);
  func_0x01636a58();
  uStack_48 = 0xd3da;
  uStack_46 = 0x29dca1f92c;
  uStack_41 = 0x19;
  uStack_50 = 0x7722d0b9f80cced6;
  uRam00000000036fcc00 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x235f8e0);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f8c0);
    func_0x00f1d9bc(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_00f1da48,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f8e0);
    *puVar6 = 1;
    puRam00000000036fcc08 = (ulong *)__emutls_get_address(0x235f8c0);
    cVar1 = (char)puRam00000000036fcc08[2];
  }
  else {
    puRam00000000036fcc08 = (ulong *)__emutls_get_address(0x235f8c0);
    cVar1 = (char)puRam00000000036fcc08[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fcc08 + 2) = 0;
    puRam00000000036fcc08[1] = puRam00000000036fcc08[1] ^ 0x194db9cd9b4dbd9f;
    *puRam00000000036fcc08 = *puRam00000000036fcc08 ^ 0x194db9cd9b4dbd9f;
  }
  uStack_40 = 0x5e;
  uStack_3f = 0x43;
  uStack_48 = 0x1043;
  uStack_46 = 0x1bb2cf6c58;
  uStack_41 = 0xa8;
  uStack_50 = 0xa41db0c07b5a2b72;
  pbVar3 = (byte *)__emutls_get_address(0x235f920);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x235f900);
    func_0x00e5fb0c(uVar4,&uStack_50);
    __cxa_thread_atexit(&DAT_00e5fba8,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f920);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x235f900);
  func_0x00e601b0();
  uRam00000000036fcc10 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x235f960);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x235f940);
    *(undefined1 *)(puVar5 + 1) = 1;
    *puVar5 = 0x6f5fa70024b2cae8;
    __cxa_thread_atexit(&DAT_00faeb10,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x235f960);
    *puVar6 = 1;
    puRam00000000036fcc18 = (ulong *)__emutls_get_address(0x235f940);
    cVar1 = (char)puRam00000000036fcc18[1];
  }
  else {
    puRam00000000036fcc18 = (ulong *)__emutls_get_address(0x235f940);
    cVar1 = (char)puRam00000000036fcc18[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fcc18 + 1) = 0;
    *puRam00000000036fcc18 = *puRam00000000036fcc18 ^ 0x6f2bc9754bd1a9a9;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_289(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined5 uStack_38;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__emutls_get_address(0x23707e8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23707c8);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x1af;
    *puVar5 = 0x136e0ac9ce6c199f;
    *(undefined4 *)(puVar5 + 1) = 0xdf6b0ea9;
    __cxa_thread_atexit(&DAT_01269404,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23707e8);
    *puVar6 = 1;
    puRam00000000036fd3b0 = (ulong *)__emutls_get_address(0x23707c8);
    cVar1 = *(char *)((long)puRam00000000036fd3b0 + 0xd);
  }
  else {
    puRam00000000036fd3b0 = (ulong *)__emutls_get_address(0x23707c8);
    cVar1 = *(char *)((long)puRam00000000036fd3b0 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3b0 + 0xd) = 0;
    *(byte *)((long)puRam00000000036fd3b0 + 0xc) =
         *(byte *)((long)puRam00000000036fd3b0 + 0xc) ^ 0xaf;
    *puRam00000000036fd3b0 = *puRam00000000036fd3b0 ^ 0x7d0149afab056bdd;
    *(uint *)(puRam00000000036fd3b0 + 1) = (uint)puRam00000000036fd3b0[1] ^ 0xab056bdd;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2370828);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2370808);
    *(undefined1 *)((long)puVar5 + 0xc) = 1;
    *puVar5 = 0xf369b260dfa0d4a2;
    *(undefined4 *)(puVar5 + 1) = 0xb1bddb8a;
    __cxa_thread_atexit(&DAT_01276e78,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370828);
    *puVar6 = 1;
    puRam00000000036fd3b8 = (ulong *)__emutls_get_address(0x2370808);
    cVar1 = *(char *)((long)puRam00000000036fd3b8 + 0xc);
  }
  else {
    puRam00000000036fd3b8 = (ulong *)__emutls_get_address(0x2370808);
    cVar1 = *(char *)((long)puRam00000000036fd3b8 + 0xc);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3b8 + 0xc) = 0;
    *puRam00000000036fd3b8 = *puRam00000000036fd3b8 ^ 0x8707dd23b1c9b5ef;
    *(uint *)(puRam00000000036fd3b8 + 1) = (uint)puRam00000000036fd3b8[1] ^ 0xb1c9b5ef;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2370868);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2370848);
    *puVar5 = 0xabcdfd6ea823aaf;
    *(undefined4 *)(puVar5 + 1) = 0x1e13f83;
    __cxa_thread_atexit(&DAT_01018920,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370868);
    *puVar6 = 1;
    puRam00000000036fd3c0 = (ulong *)__emutls_get_address(0x2370848);
    cVar1 = *(char *)((long)puRam00000000036fd3c0 + 0xb);
  }
  else {
    puRam00000000036fd3c0 = (ulong *)__emutls_get_address(0x2370848);
    cVar1 = *(char *)((long)puRam00000000036fd3c0 + 0xb);
  }
  if (cVar1 != '\0') {
    *(byte *)(puRam00000000036fd3c0 + 1) = (byte)puRam00000000036fd3c0[1] ^ 0xed;
    *(byte *)((long)puRam00000000036fd3c0 + 9) = *(byte *)((long)puRam00000000036fd3c0 + 9) ^ 0x5b;
    *(byte *)((long)puRam00000000036fd3c0 + 10) = *(byte *)((long)puRam00000000036fd3c0 + 10) ^ 0xe1
    ;
    *puRam00000000036fd3c0 = *puRam00000000036fd3c0 ^ 0x7fd3adb181e15bed;
    *(undefined1 *)((long)puRam00000000036fd3c0 + 0xb) = 0;
  }
  uStack_30 = 0x53;
  uStack_38 = 0xc01c10c527;
  uStack_33 = 0x9f;
  uStack_32 = 0xef;
  uStack_31 = 0xe4;
  uStack_40 = 0xefe689c7003ae01a;
  pbVar3 = (byte *)__emutls_get_address(0x23708a8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370888);
    func_0x011417d4(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_01141868,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23708a8);
    *puVar6 = 1;
    puRam00000000036fd3c8 = (ulong *)__emutls_get_address(0x2370888);
    cVar1 = *(char *)((long)puRam00000000036fd3c8 + 0x11);
  }
  else {
    puRam00000000036fd3c8 = (ulong *)__emutls_get_address(0x2370888);
    cVar1 = *(char *)((long)puRam00000000036fd3c8 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3c8 + 0x11) = 0;
    *(byte *)(puRam00000000036fd3c8 + 2) = (byte)puRam00000000036fd3c8[2] ^ 0x53;
    puRam00000000036fd3c8[1] = puRam00000000036fd3c8[1] ^ 0x8183fda96f799353;
    *puRam00000000036fd3c8 = *puRam00000000036fd3c8 ^ 0x8183fda96f799353;
  }
  uStack_30 = 0x9f;
  uStack_38 = 0xa4e824ebf1;
  uStack_33 = 0xdb;
  uStack_32 = 0x21;
  uStack_31 = 0x7c;
  uStack_40 = 0x7624cdaefa0bced6;
  pbVar3 = (byte *)__emutls_get_address(0x23708e8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x23708c8);
    func_0x00eb6cc8(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00eb6d5c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23708e8);
    *puVar6 = 1;
    puRam00000000036fd3d0 = (ulong *)__emutls_get_address(0x23708c8);
    cVar1 = *(char *)((long)puRam00000000036fd3d0 + 0x11);
  }
  else {
    puRam00000000036fd3d0 = (ulong *)__emutls_get_address(0x23708c8);
    cVar1 = *(char *)((long)puRam00000000036fd3d0 + 0x11);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3d0 + 0x11) = 0;
    *(byte *)(puRam00000000036fd3d0 + 2) = (byte)puRam00000000036fd3d0[2] ^ 0x9f;
    puRam00000000036fd3d0[1] = puRam00000000036fd3d0[1] ^ 0x194db9cd9b4dbd9f;
    *puRam00000000036fd3d0 = *puRam00000000036fd3d0 ^ 0x194db9cd9b4dbd9f;
  }
  uStack_38 = 0xc87d582277;
  uStack_33 = 0xbc;
  uStack_40 = 0xb606bbf26d5e267f;
  uStack_32 = 7;
  uStack_31 = 0xb2;
  uStack_30 = 0x7d;
  uStack_2f = 0x2c;
  uStack_2e = 0x5c;
  uStack_2d = 0x60;
  uStack_2c = 0xcf;
  uStack_2b = 0xd3;
  pbVar3 = (byte *)__emutls_get_address(0x2370928);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370908);
    func_0x016f6aa0(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_016f6b5c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370928);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370908);
  func_0x016f7674();
  uStack_38 = 0x2325bedddd;
  uStack_33 = 0xa0;
  uStack_32 = 0x58;
  uStack_31 = 6;
  uStack_40 = 0x1a69a2162a93dae0;
  uStack_30 = 0xcb;
  uStack_2f = 0xc5;
  uStack_2e = 0xb4;
  uStack_2d = 0x4b;
  uRam00000000036fd3d8 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370968);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370948);
    func_0x014fe89c(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_014fe948,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370968);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370948);
  func_0x014ff9a0();
  uRam00000000036fd3e0 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x23709a8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2370988);
    puVar5[1] = 0x115ec7c7e87cf13;
    *puVar5 = 0xa27cfd6e7286f13c;
    __cxa_thread_atexit(&DAT_0136c6f4,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23709a8);
    *puVar6 = 1;
    puRam00000000036fd3e8 = (ulong *)__emutls_get_address(0x2370988);
    cVar1 = *(char *)((long)puRam00000000036fd3e8 + 0xf);
  }
  else {
    puRam00000000036fd3e8 = (ulong *)__emutls_get_address(0x2370988);
    cVar1 = *(char *)((long)puRam00000000036fd3e8 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3e8 + 0xf) = 0;
    *(byte *)((long)puRam00000000036fd3e8 + 0xc) =
         *(byte *)((long)puRam00000000036fd3e8 + 0xc) ^ 0xf;
    *(byte *)((long)puRam00000000036fd3e8 + 0xd) =
         *(byte *)((long)puRam00000000036fd3e8 + 0xd) ^ 0x89;
    *(byte *)((long)puRam00000000036fd3e8 + 0xe) =
         *(byte *)((long)puRam00000000036fd3e8 + 0xe) ^ 0x15;
    *puRam00000000036fd3e8 = *puRam00000000036fd3e8 ^ 0xcd15890f1fef9f7d;
    *(uint *)(puRam00000000036fd3e8 + 1) = (uint)puRam00000000036fd3e8[1] ^ 0x1fef9f7d;
  }
  pbVar3 = (byte *)__emutls_get_address(0x23709e8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x23709c8);
    *(undefined1 *)((long)puVar5 + 0xe) = 1;
    *puVar5 = 0x3cb9f416ca374e;
    *(undefined4 *)(puVar5 + 1) = 0xbda0d61;
    *(undefined2 *)((long)puVar5 + 0xc) = 0xcdf0;
    __cxa_thread_atexit(&DAT_0156c8a4,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x23709e8);
    *puVar6 = 1;
    puRam00000000036fd3f0 = (ulong *)__emutls_get_address(0x23709c8);
    cVar1 = *(char *)((long)puRam00000000036fd3f0 + 0xe);
  }
  else {
    puRam00000000036fd3f0 = (ulong *)__emutls_get_address(0x23709c8);
    cVar1 = *(char *)((long)puRam00000000036fd3f0 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3f0 + 0xe) = 0;
    *(byte *)((long)puRam00000000036fd3f0 + 0xc) =
         *(byte *)((long)puRam00000000036fd3f0 + 0xc) ^ 0x95;
    *(byte *)((long)puRam00000000036fd3f0 + 0xd) =
         *(byte *)((long)puRam00000000036fd3f0 + 0xd) ^ 0xcd;
    *puRam00000000036fd3f0 = *puRam00000000036fd3f0 ^ 0x6f55cd957ba3590f;
    *(uint *)(puRam00000000036fd3f0 + 1) = (uint)puRam00000000036fd3f0[1] ^ 0x7ba3590f;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2370a28);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2370a08);
    *(undefined2 *)((long)puVar5 + 0xc) = 0x1fd;
    *puVar5 = 0xafe85f98517d1a39;
    *(undefined4 *)(puVar5 + 1) = 0x496c0d1e;
    __cxa_thread_atexit(&DAT_00e5fcf4,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370a28);
    *puVar6 = 1;
    puRam00000000036fd3f8 = (ulong *)__emutls_get_address(0x2370a08);
    cVar1 = *(char *)((long)puRam00000000036fd3f8 + 0xd);
  }
  else {
    puRam00000000036fd3f8 = (ulong *)__emutls_get_address(0x2370a08);
    cVar1 = *(char *)((long)puRam00000000036fd3f8 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd3f8 + 0xd) = 0;
    *(byte *)((long)puRam00000000036fd3f8 + 0xc) =
         *(byte *)((long)puRam00000000036fd3f8 + 0xc) ^ 0xfd;
    *puRam00000000036fd3f8 = *puRam00000000036fd3f8 ^ 0xe3912dfd25097b7b;
    *(uint *)(puRam00000000036fd3f8 + 1) = (uint)puRam00000000036fd3f8[1] ^ 0x25097b7b;
  }
  uStack_38 = 0x9b1e296dc8;
  uStack_33 = 0x44;
  uStack_32 = 0x97;
  uStack_31 = 0x57;
  uStack_40 = 0x399c48be122368fe;
  pbVar3 = (byte *)__emutls_get_address(0x2370a68);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370a48);
    func_0x00f1dbdc(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00f1dc68,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370a68);
    *puVar6 = 1;
    puRam00000000036fd400 = (ulong *)__emutls_get_address(0x2370a48);
    cVar1 = (char)puRam00000000036fd400[2];
  }
  else {
    puRam00000000036fd400 = (ulong *)__emutls_get_address(0x2370a48);
    cVar1 = (char)puRam00000000036fd400[2];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fd400 + 2) = 0;
    puRam00000000036fd400[1] = puRam00000000036fd400[1] ^ 0x57fb21ed7b6501a9;
    *puRam00000000036fd400 = *puRam00000000036fd400 ^ 0x57fb21ed7b6501a9;
  }
  pbVar3 = (byte *)__emutls_get_address(0x2370aa8);
  if ((*pbVar3 & 1) == 0) {
    puVar5 = (undefined8 *)__emutls_get_address(0x2370a88);
    puVar5[1] = 0x163bfc0a94ae931;
    *puVar5 = 0xba0db4cc8c42d61a;
    __cxa_thread_atexit(&DAT_01465090,puVar5,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370aa8);
    *puVar6 = 1;
    puRam00000000036fd408 = (ulong *)__emutls_get_address(0x2370a88);
    cVar1 = *(char *)((long)puRam00000000036fd408 + 0xf);
  }
  else {
    puRam00000000036fd408 = (ulong *)__emutls_get_address(0x2370a88);
    cVar1 = *(char *)((long)puRam00000000036fd408 + 0xf);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd408 + 0xf) = 0;
    *(byte *)((long)puRam00000000036fd408 + 0xc) =
         *(byte *)((long)puRam00000000036fd408 + 0xc) ^ 0xa5;
    *(byte *)((long)puRam00000000036fd408 + 0xd) =
         *(byte *)((long)puRam00000000036fd408 + 0xd) ^ 0xd3;
    *(byte *)((long)puRam00000000036fd408 + 0xe) = *(byte *)((long)puRam00000000036fd408 + 0xe) ^ 99
    ;
    *puRam00000000036fd408 = *puRam00000000036fd408 ^ 0xdb63d3a5df2fa55d;
    *(uint *)(puRam00000000036fd408 + 1) = (uint)puRam00000000036fd408[1] ^ 0xdf2fa55d;
  }
  uStack_30 = 0x9a;
  uStack_2f = 0x43;
  uStack_38 = 0xf5dfea2685;
  uStack_33 = 0xac;
  uStack_32 = 0xa1;
  uStack_31 = 0x30;
  uStack_40 = 0x3cb3a2e3ffcc22a1;
  pbVar3 = (byte *)__emutls_get_address(0x2370ae8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370ac8);
    func_0x00fe9310(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_00fe93ac,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370ae8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370ac8);
  func_0x00fe9d28();
  uStack_38 = 0x84e19e4ca6;
  uStack_33 = 0x56;
  uStack_32 = 0x2d;
  uStack_31 = 0x82;
  uStack_40 = 0x972a4d82db8c4e87;
  uStack_30 = 0x9a;
  uStack_2f = 0x5f;
  uStack_2e = 0x9b;
  uStack_2d = 0xf4;
  uStack_2c = 0x99;
  uStack_2b = 0x5c;
  uStack_2a = 0xf130;
  uRam00000000036fd410 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370b28);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370b08);
    func_0x016692b0(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_0166937c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370b28);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370b08);
  func_0x0166977c();
  uStack_38 = 0xff20ea8203;
  uStack_33 = 0xa9;
  uStack_32 = 0x66;
  uStack_40 = 0x7273b9ea26ea8425;
  uStack_31 = 0x6f;
  uStack_30 = 8;
  uStack_2f = 0x96;
  uStack_2e = 0x99;
  uRam00000000036fd418 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370b68);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370b48);
    func_0x013eb4b8(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_013eb55c,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370b68);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370b48);
  func_0x013eb568();
  uStack_38 = 0x5968b6ed90;
  uStack_33 = 0x75;
  uStack_40 = 0x5a08635c64b6f5ba;
  uStack_32 = 0x15;
  uStack_31 = 0x48;
  uStack_30 = 0x9a;
  uStack_2f = 0xed;
  uStack_2e = 0xb6;
  uStack_2d = 0x68;
  uStack_2c = 0x59;
  uStack_2b = 0x33;
  uRam00000000036fd420 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370ba8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370b88);
    func_0x016f6b68(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_016f6c24,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370ba8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370b88);
  func_0x016f76d4();
  uStack_38 = 0xd8c41c729a;
  uStack_33 = 0xc0;
  uStack_32 = 0x1f;
  uStack_40 = 0x912e98cfcc096a87;
  uStack_31 = 0x9c;
  uStack_30 = 0xa7;
  uStack_2f = 0x77;
  uStack_2e = 0x7d;
  uRam00000000036fd428 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370be8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370bc8);
    func_0x016f6c30(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_016f6cd4,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370be8);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370bc8);
  func_0x016f7730();
  uStack_38 = 0x4e8223484;
  uStack_33 = 0x4b;
  uStack_32 = 0x59;
  uStack_40 = 0xed681013e0372c99;
  uStack_31 = 0xe0;
  uStack_30 = 0xb9;
  uStack_2f = 0x31;
  uStack_2e = 0x43;
  uRam00000000036fd430 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370c28);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370c08);
    func_0x010182ec(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_01018390,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370c28);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370c08);
  func_0x01018f6c();
  uStack_38 = 0xa062faba5c;
  uStack_40 = 0x4d5eccb76aefa241;
  uStack_33 = 0xeb;
  uStack_32 = 0x5e;
  uStack_31 = 0x57;
  uStack_30 = 0x45;
  uStack_2f = 0xb6;
  uStack_2e = 0xef;
  uStack_2d = 0x6d;
  uStack_2c = 0xc5;
  uRam00000000036fd438 = uVar4;
  pbVar3 = (byte *)__emutls_get_address(0x2370c68);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x2370c48);
    func_0x013f3654(uVar4,&uStack_40);
    __cxa_thread_atexit(&DAT_013f3708,uVar4,&DAT_0219a700);
    puVar6 = (undefined1 *)__emutls_get_address(0x2370c68);
    *puVar6 = 1;
  }
  uVar4 = __emutls_get_address(0x2370c48);
  func_0x013f3714();
  uRam00000000036fd440 = uVar4;
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_290(void)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  pbVar2 = (byte *)__emutls_get_address(0x23730b0);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2373090);
    *(undefined1 *)(puVar4 + 1) = 1;
    *puVar4 = 0xf520970207067079;
    __cxa_thread_atexit(&LAB_01712bd0,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23730b0);
    *puVar5 = 1;
    puRam00000000036fd500 = (ulong *)__emutls_get_address(0x2373090);
    cVar1 = (char)puRam00000000036fd500[1];
  }
  else {
    puRam00000000036fd500 = (ulong *)__emutls_get_address(0x2373090);
    cVar1 = (char)puRam00000000036fd500[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fd500 + 1) = 0;
    *puRam00000000036fd500 = *puRam00000000036fd500 ^ 0xf553e56763671535;
  }
  pbVar2 = (byte *)__emutls_get_address(0x23730f0);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x23730d0);
    *(undefined1 *)((long)puVar3 + 6) = 1;
    *(undefined2 *)(puVar3 + 1) = 0x97f3;
    *puVar3 = 0xaceb3dd0;
    __cxa_thread_atexit(&DAT_0136c4d0,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23730f0);
    *puVar5 = 1;
    puRam00000000036fd508 = (uint *)__emutls_get_address(0x23730d0);
    cVar1 = *(char *)((long)puRam00000000036fd508 + 6);
  }
  else {
    puRam00000000036fd508 = (uint *)__emutls_get_address(0x23730d0);
    cVar1 = *(char *)((long)puRam00000000036fd508 + 6);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd508 + 6) = 0;
    *(byte *)(puRam00000000036fd508 + 1) = (byte)puRam00000000036fd508[1] ^ 0x8b;
    *(byte *)((long)puRam00000000036fd508 + 5) = *(byte *)((long)puRam00000000036fd508 + 5) ^ 0x97;
    *puRam00000000036fd508 = *puRam00000000036fd508 ^ 0xc98f5399;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2373130);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x2373110);
    *(undefined2 *)(puVar3 + 1) = 0x1af;
    *puVar3 = 0xe070eaa9;
    __cxa_thread_atexit(&DAT_014dda7c,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2373130);
    *puVar5 = 1;
    puRam00000000036fd510 = (uint *)__emutls_get_address(0x2373110);
    cVar1 = *(char *)((long)puRam00000000036fd510 + 5);
  }
  else {
    puRam00000000036fd510 = (uint *)__emutls_get_address(0x2373110);
    cVar1 = *(char *)((long)puRam00000000036fd510 + 5);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd510 + 5) = 0;
    *(byte *)(puRam00000000036fd510 + 1) = (byte)puRam00000000036fd510[1] ^ 0xaf;
    *puRam00000000036fd510 = *puRam00000000036fd510 ^ 0x851d8be7;
  }
  pbVar2 = (byte *)__emutls_get_address(0x2373170);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined4 *)__emutls_get_address(0x2373150);
    *(undefined2 *)(puVar3 + 1) = 0x19b;
    *puVar3 = 0xd0fd3221;
    __cxa_thread_atexit(&DAT_0157f828,puVar3,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x2373170);
    *puVar5 = 1;
    puRam00000000036fd518 = (uint *)__emutls_get_address(0x2373150);
    cVar1 = *(char *)((long)puRam00000000036fd518 + 5);
  }
  else {
    puRam00000000036fd518 = (uint *)__emutls_get_address(0x2373150);
    cVar1 = *(char *)((long)puRam00000000036fd518 + 5);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fd518 + 5) = 0;
    *(byte *)(puRam00000000036fd518 + 1) = (byte)puRam00000000036fd518[1] ^ 0x9b;
    *puRam00000000036fd518 = *puRam00000000036fd518 ^ 0xbb935373;
  }
  pbVar2 = (byte *)__emutls_get_address(0x23731b0);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)__emutls_get_address(0x2373190);
    *(undefined1 *)(puVar4 + 1) = 1;
    *puVar4 = 0x976a25ab6c088265;
    __cxa_thread_atexit(&DAT_015c23b8,puVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x23731b0);
    *puVar5 = 1;
    puRam00000000036fd520 = (ulong *)__emutls_get_address(0x2373190);
    cVar1 = (char)puRam00000000036fd520[1];
  }
  else {
    puRam00000000036fd520 = (ulong *)__emutls_get_address(0x2373190);
    cVar1 = (char)puRam00000000036fd520[1];
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(puRam00000000036fd520 + 1) = 0;
    *puRam00000000036fd520 = *puRam00000000036fd520 ^ 0x971941d90d7fe737;
  }
  return;
}



void _INIT_294(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x66b41a7a949a5a;
  uStack_40 = 0xa208ef0c73919a63;
  uStack_31 = 0x9d;
  uStack_30 = 0x27b41a6d928f56;
  pbVar2 = (byte *)__emutls_get_address(0x237c1b8);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x237c198);
    func_0x011b2a70(uVar3,&uStack_40);
    __cxa_thread_atexit(&DAT_011b2b34,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237c1b8);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x237c198);
  func_0x011b38e0();
  uRam00000000036fd8e0 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_295(void)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uStack_58 = 0x9411ca1406007458;
  uStack_60 = 0xbc7c91020f057461;
  uStack_48 = 0x9411970210323a46;
  uStack_50 = 0x913d900811007e56;
  uStack_38 = 0x23ba000e0e3a46;
  uStack_40 = 0x913d900811007e56;
  uStack_31 = 0x87;
  uStack_30 = 0x53ba10060e6350;
  pbVar3 = (byte *)__emutls_get_address(0x237c3b8);
  if ((*pbVar3 & 1) == 0) {
    uVar4 = __emutls_get_address(0x237c398);
    func_0x01777250(uVar4,&uStack_60);
    __cxa_thread_atexit(&DAT_01777414,uVar4,&DAT_0219a700);
    puVar5 = (undefined1 *)__emutls_get_address(0x237c3b8);
    *puVar5 = 1;
    puRam00000000036fd918 = (ulong *)__emutls_get_address(0x237c398);
    cVar1 = *(char *)((long)puRam00000000036fd918 + 0x37);
  }
  else {
    puRam00000000036fd918 = (ulong *)__emutls_get_address(0x237c398);
    cVar1 = *(char *)((long)puRam00000000036fd918 + 0x37);
  }
  if (cVar1 != '\0') {
    *(byte *)((long)puRam00000000036fd918 + 0x34) =
         *(byte *)((long)puRam00000000036fd918 + 0x34) ^ 0x67;
    *(undefined1 *)((long)puRam00000000036fd918 + 0x37) = 0;
    *(byte *)((long)puRam00000000036fd918 + 0x35) =
         *(byte *)((long)puRam00000000036fd918 + 0x35) ^ 0xe5;
    puRam00000000036fd918[1] = puRam00000000036fd918[1] ^ 0xf553e56763671535;
    *puRam00000000036fd918 = *puRam00000000036fd918 ^ 0xf553e56763671535;
    puRam00000000036fd918[3] = puRam00000000036fd918[3] ^ 0xf553e56763671535;
    puRam00000000036fd918[2] = puRam00000000036fd918[2] ^ 0xf553e56763671535;
    *(byte *)((long)puRam00000000036fd918 + 0x36) =
         *(byte *)((long)puRam00000000036fd918 + 0x36) ^ 0x53;
    puRam00000000036fd918[5] = puRam00000000036fd918[5] ^ 0xf553e56763671535;
    puRam00000000036fd918[4] = puRam00000000036fd918[4] ^ 0xf553e56763671535;
    *(uint *)(puRam00000000036fd918 + 6) = (uint)puRam00000000036fd918[6] ^ 0x63671535;
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_297(void)

{
  char cVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  pbVar2 = (byte *)__emutls_get_address(0x237cbd8);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__emutls_get_address(0x237cbb8);
    *(undefined2 *)((long)puVar3 + 0xc) = 0x1af;
    *puVar3 = 0x106e0adbce760e8f;
    *(undefined4 *)(puVar3 + 1) = 0xcf6b0ab0;
    __cxa_thread_atexit(&DAT_01269404,puVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237cbd8);
    *puVar4 = 1;
    puRam00000000036fda38 = (ulong *)__emutls_get_address(0x237cbb8);
    cVar1 = *(char *)((long)puRam00000000036fda38 + 0xd);
  }
  else {
    puRam00000000036fda38 = (ulong *)__emutls_get_address(0x237cbb8);
    cVar1 = *(char *)((long)puRam00000000036fda38 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fda38 + 0xd) = 0;
    *(byte *)((long)puRam00000000036fda38 + 0xc) =
         *(byte *)((long)puRam00000000036fda38 + 0xc) ^ 0xaf;
    *puRam00000000036fda38 = *puRam00000000036fda38 ^ 0x7d0149afab056bdd;
    *(uint *)(puRam00000000036fda38 + 1) = (uint)puRam00000000036fda38[1] ^ 0xab056bdd;
  }
  pbVar2 = (byte *)__emutls_get_address(0x237cc18);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__emutls_get_address(0x237cbf8);
    *(undefined1 *)((long)puVar3 + 0xe) = 1;
    *puVar3 = 0x2c94e3f8d5b51ebe;
    *(undefined4 *)(puVar3 + 1) = 0xd2a817b2;
    *(undefined2 *)((long)puVar3 + 0xc) = 0xade5;
    __cxa_thread_atexit(&DAT_01269410,puVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237cc18);
    *puVar4 = 1;
    puRam00000000036fda40 = (ulong *)__emutls_get_address(0x237cbf8);
    cVar1 = *(char *)((long)puRam00000000036fda40 + 0xe);
  }
  else {
    puRam00000000036fda40 = (ulong *)__emutls_get_address(0x237cbf8);
    cVar1 = *(char *)((long)puRam00000000036fda40 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fda40 + 0xe) = 0;
    *(byte *)((long)puRam00000000036fda40 + 0xc) =
         *(byte *)((long)puRam00000000036fda40 + 0xc) ^ 0xb1;
    *(byte *)((long)puRam00000000036fda40 + 0xd) =
         *(byte *)((long)puRam00000000036fda40 + 0xd) ^ 0xad;
    *puRam00000000036fda40 = *puRam00000000036fda40 ^ 0x7fd3adb181e15bed;
    *(uint *)(puRam00000000036fda40 + 1) = (uint)puRam00000000036fda40[1] ^ 0x81e15bed;
  }
  return;
}



void _INIT_298(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined6 uStack_38;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined6 uStack_30;
  undefined1 uStack_2a;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0xb41a7a949a5a;
  uStack_40 = 0xa208ef0c73919a63;
  uStack_32 = 0x61;
  uStack_31 = 0x99;
  uStack_30 = 0x9b466c969656;
  pbVar2 = (byte *)__emutls_get_address(0x237ce18);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x237cdf8);
    func_0x01788d2c(uVar3,&uStack_40);
    __cxa_thread_atexit(&DAT_01788de8,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237ce18);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x237cdf8);
  func_0x01789318();
  uStack_38 = 0xca1406007458;
  uStack_32 = 0x12;
  uStack_40 = 0xbc7c91020f057461;
  uStack_31 = 0x83;
  uStack_30 = 0xca1411066154;
  uStack_2a = 0x53;
  uRam00000000036fda78 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x237ce58);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x237ce38);
    func_0x013e7808(uVar3,&uStack_40);
    __cxa_thread_atexit(&DAT_013e78cc,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237ce58);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x237ce38);
  func_0x013e79e0();
  uRam00000000036fda80 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_299(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0x7458;
  uStack_50 = 0xbc7c91020f057461;
  uStack_3e = 0x151a863d8a042a14;
  uStack_46 = 0x8100ca140600;
  uStack_40 = 0x6154;
  pbVar2 = (byte *)__emutls_get_address(0x237d6d8);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x237d6b8);
    func_0x00fb5d60(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_00fb5e3c,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237d6d8);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x237d6b8);
  func_0x00fb5e4c();
  uRam00000000036fdae0 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_300(void)

{
  char cVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  pbVar2 = (byte *)__emutls_get_address(0x237d8a8);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__emutls_get_address(0x237d888);
    *(undefined1 *)((long)puVar3 + 0xe) = 1;
    *puVar3 = 0x6aa48fd2efc71620;
    *(undefined4 *)(puVar3 + 1) = 0xe8da1f2c;
    *(undefined2 *)((long)puVar3 + 0xc) = 0xc1cf;
    __cxa_thread_atexit(&DAT_017920b4,puVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x237d8a8);
    *puVar4 = 1;
    puRam00000000036fdb10 = (ulong *)__emutls_get_address(0x237d888);
    cVar1 = *(char *)((long)puRam00000000036fdb10 + 0xe);
  }
  else {
    puRam00000000036fdb10 = (ulong *)__emutls_get_address(0x237d888);
    cVar1 = *(char *)((long)puRam00000000036fdb10 + 0xe);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fdb10 + 0xe) = 0;
    *(byte *)((long)puRam00000000036fdb10 + 0xc) =
         *(byte *)((long)puRam00000000036fdb10 + 0xc) ^ 0x9b;
    *(byte *)((long)puRam00000000036fdb10 + 0xd) =
         *(byte *)((long)puRam00000000036fdb10 + 0xd) ^ 0xc1;
    *puRam00000000036fdb10 = *puRam00000000036fdb10 ^ 0x39e3c19bbb935373;
    *(uint *)(puRam00000000036fdb10 + 1) = (uint)puRam00000000036fdb10[1] ^ 0xbb935373;
  }
  return;
}



void _INIT_306(void)

{
  char cVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  pbVar2 = (byte *)__emutls_get_address(0x2384080);
  if ((*pbVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__emutls_get_address(0x2384060);
    *(undefined2 *)((long)puVar3 + 0xc) = 0x1af;
    *puVar3 = 0xfab8dc80e06eeaa5;
    *(undefined4 *)(puVar3 + 1) = 0xaa6eee80;
    __cxa_thread_atexit(&DAT_0125fef8,puVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x2384080);
    *puVar4 = 1;
    puRam00000000036fde08 = (ulong *)__emutls_get_address(0x2384060);
    cVar1 = *(char *)((long)puRam00000000036fde08 + 0xd);
  }
  else {
    puRam00000000036fde08 = (ulong *)__emutls_get_address(0x2384060);
    cVar1 = *(char *)((long)puRam00000000036fde08 + 0xd);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)((long)puRam00000000036fde08 + 0xd) = 0;
    *(byte *)((long)puRam00000000036fde08 + 0xc) =
         *(byte *)((long)puRam00000000036fde08 + 0xc) ^ 0xaf;
    *puRam00000000036fde08 = *puRam00000000036fde08 ^ 0x9bd595af851d8be7;
    *(uint *)(puRam00000000036fde08 + 1) = (uint)puRam00000000036fde08[1] ^ 0x851d8be7;
  }
  return;
}



void _INIT_328(void)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined3 uStack_46;
  undefined2 uStack_43;
  undefined1 uStack_41;
  undefined2 uStack_40;
  undefined3 uStack_3e;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  undefined2 uStack_38;
  undefined6 uStack_36;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0x9ade;
  uStack_46 = 0x50d4ba;
  uStack_43 = 0x6eae;
  uStack_50 = 0xf128b453d0e6c6ca;
  uStack_41 = 0xe8;
  uStack_40 = 0x9a81;
  uStack_3e = 0x4adfa0;
  uStack_3b = 0x7a9;
  pbVar2 = (byte *)__emutls_get_address(0x238d338);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x238d318);
    func_0x01640360(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_01640424,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x238d338);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x238d318);
  func_0x016408d8();
  uStack_48 = 0x74dc;
  uStack_50 = 0x9fcc4c1e0ce28c8;
  uStack_3e = 0xdfee82;
  uStack_3b = 0xbacb;
  uStack_39 = 0xd;
  uStack_38 = 0x5b80;
  uStack_46 = 0xc2e492;
  uStack_43 = 0xbade;
  uStack_41 = 0x10;
  uStack_40 = 0x7483;
  uRam0000000003719bc0 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x238d378);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x238d358);
    func_0x01640430(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_0164050c,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x238d378);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x238d358);
  func_0x01640940();
  uStack_48 = 0xbc61;
  uStack_46 = 0xdd1a18;
  uStack_50 = 0xf7ac94d90e56e076;
  uStack_43 = 0xac95;
  uStack_41 = 0xf5;
  uStack_40 = 0xf83c;
  uStack_3e = 0xa9011c;
  uRam0000000003719bc8 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x238d3b8);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x238d398);
    func_0x00f1d8fc(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_00f1d9b0,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x238d3b8);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x238d398);
  func_0x00f201e8();
  uStack_48 = 0x92ae;
  uStack_46 = 0xb9ee2c;
  uStack_43 = 0x62d1;
  uStack_41 = 0x6d;
  uStack_50 = 0x6f62d0bdfa62ceba;
  uStack_38 = 0xd2ed;
  uStack_36 = 0x1939daa8eb3e;
  uStack_40 = 0xd6f0;
  uStack_3e = 0xe2f528;
  uStack_3b = 0x23d0;
  uStack_39 = 0x6d;
  uRam0000000003719bd0 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x238d3f8);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x238d3d8);
    func_0x018e2af8(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_018e2c04,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x238d3f8);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x238d3d8);
  func_0x018e2f98();
  uStack_48 = 0x6c00;
  uStack_46 = 0xd57c5a;
  uStack_50 = 0xb746bad168143014;
  uStack_43 = 0x46bb;
  uStack_41 = 0xb5;
  uStack_40 = 0x285e;
  uStack_3e = 0xa1675e;
  uRam0000000003719bd8 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x238d438);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x238d418);
    func_0x018e2c10(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_018e2cc4,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x238d438);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x238d418);
  func_0x018e2fc0();
  uStack_48 = 0x8698;
  uStack_50 = 0x1904a0052afeda8c;
  uStack_3e = 0x1c27b0;
  uStack_3b = 0x4aad;
  uStack_39 = 0x1b;
  uStack_38 = 0xa9cc;
  uStack_46 = 0x13eb0;
  uStack_43 = 0x4a1;
  uStack_41 = 6;
  uStack_40 = 0xdfc7;
  uRam0000000003719be0 = uVar3;
  pbVar2 = (byte *)__emutls_get_address(0x238d478);
  if ((*pbVar2 & 1) == 0) {
    uVar3 = __emutls_get_address(0x238d458);
    func_0x018e2cd0(uVar3,&uStack_50);
    __cxa_thread_atexit(&DAT_018e2dac,uVar3,&DAT_0219a700);
    puVar4 = (undefined1 *)__emutls_get_address(0x238d478);
    *puVar4 = 1;
  }
  uVar3 = __emutls_get_address(0x238d458);
  func_0x018e3010();
  uRam0000000003719be8 = uVar3;
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void _INIT_408(void)

{
  __cxa_atexit(_ZNSt6__ndk15mutexD1Ev,0x3e1ec08,&DAT_0219a700);
  uRam0000000003e1ebe0 = 0;
  uRam0000000003e1ebe8 = 0;
  uRam0000000003e1ebd8 = 0;
  __cxa_atexit(&DAT_01bcf7bc,0x3e1ebd8,&DAT_0219a700);
  __cxa_atexit(_ZNSt6__ndk15mutexD1Ev,0x3e1ec30,&DAT_0219a700);
  uRam0000000003e1ebf0 = 0;
  uRam0000000003e1ebf8 = 0;
  uRam0000000003e1ec00 = 0;
  __cxa_atexit(&DAT_01bcf858,0x3e1ebf0,&DAT_0219a700);
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



void __register_atfork(void)

{
  __register_atfork();
  return;
}



void __cxa_guard_acquire(void)

{
  __cxa_guard_acquire();
  return;
}



void __emutls_get_address(void)

{
  __emutls_get_address();
  return;
}



void __cxa_guard_release(void)

{
  __cxa_guard_release();
  return;
}



void __cxa_thread_atexit(void)

{
  __cxa_thread_atexit();
  return;
}



void _ZdaPv(void)

{
  _ZdaPv();
  return;
}



void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void _Znwm(void)

{
  _Znwm();
  return;
}



void _ZdlPv(void)

{
  _ZdlPv();
  return;
}



void _Znam(void)

{
  _Znam();
  return;
}



void __cxa_begin_catch(void)

{
  __cxa_begin_catch();
  return;
}



void _ZSt9terminatev(void)

{
                    // WARNING: Subroutine does not return
  _ZSt9terminatev();
}



void __strncpy_chk2(void)

{
  __strncpy_chk2();
  return;
}



void strncpy(void)

{
  strncpy();
  return;
}



void acosf(void)

{
  acosf();
  return;
}



void memmove(void)

{
  memmove();
  return;
}



void strcasecmp(void)

{
  strcasecmp();
  return;
}



void memset(void)

{
  memset();
  return;
}



void __cxa_guard_abort(void)

{
  __cxa_guard_abort();
  return;
}



void strcmp(void)

{
  strcmp();
  return;
}



void memcmp(void)

{
  memcmp();
  return;
}



void strlen(void)

{
  strlen();
  return;
}



void __cxa_allocate_exception(void)

{
  __cxa_allocate_exception();
  return;
}



void __cxa_throw(void)

{
                    // WARNING: Subroutine does not return
  __cxa_throw();
}



void __cxa_free_exception(void)

{
  __cxa_free_exception();
  return;
}



void __cxa_end_catch(void)

{
  __cxa_end_catch();
  return;
}



void _ZNSt12domain_errorD1Ev(void)

{
  _ZNSt12domain_errorD1Ev();
  return;
}



void _ZNSt11logic_errorC1EPKc(void)

{
  _ZNSt11logic_errorC1EPKc();
  return;
}



void _ZNSt20bad_array_new_lengthC1Ev(void)

{
  _ZNSt20bad_array_new_lengthC1Ev();
  return;
}



void _ZNSt13bad_exceptionD1Ev(void)

{
  _ZNSt13bad_exceptionD1Ev();
  return;
}



void memcpy(void)

{
  memcpy();
  return;
}



void _ZNSt6__ndk19to_stringEi(void)

{
  _ZNSt6__ndk19to_stringEi();
  return;
}



void _ZNSt13runtime_errorC1EPKc(void)

{
  _ZNSt13runtime_errorC1EPKc();
  return;
}



void _ZNSt13bad_exceptionD1Ev(void)

{
  _ZNSt13bad_exceptionD1Ev();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
  return;
}



void _ZNSt11range_errorD1Ev(void)

{
  _ZNSt11range_errorD1Ev();
  return;
}



void _ZNKSt13runtime_error4whatEv(void)

{
  _ZNKSt13runtime_error4whatEv();
  return;
}



void _ZNSt13runtime_errorC2ERKS_(void)

{
  _ZNSt13runtime_errorC2ERKS_();
  return;
}



void localeconv(void)

{
  localeconv();
  return;
}



void __errno(void)

{
  __errno();
  return;
}



void strtoull(void)

{
  strtoull();
  return;
}



void strtoll(void)

{
  strtoll();
  return;
}



void strtod(void)

{
  strtod();
  return;
}



void __strlen_chk(void)

{
  __strlen_chk();
  return;
}



void _ZNSt6__ndk19to_stringEm(void)

{
  _ZNSt6__ndk19to_stringEm();
  return;
}



void __vsnprintf_chk(void)

{
  __vsnprintf_chk();
  return;
}



void vsnprintf(void)

{
  vsnprintf();
  return;
}



void memchr(void)

{
  memchr();
  return;
}



void _ZNSt12domain_errorD1Ev(void)

{
  _ZNSt12domain_errorD1Ev();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm();
  return;
}



void _ZNSt6__ndk119__shared_weak_count14__release_weakEv(void)

{
  _ZNSt6__ndk119__shared_weak_count14__release_weakEv();
  return;
}



void _ZNSt6__ndk16localeD1Ev(void)

{
  _ZNSt6__ndk16localeD1Ev();
  return;
}



void _ZNSt6__ndk16localeC1Ev(void)

{
  _ZNSt6__ndk16localeC1Ev();
  return;
}



void _ZNKSt6__ndk16locale9use_facetERNS0_2idE(void)

{
  _ZNKSt6__ndk16locale9use_facetERNS0_2idE();
  return;
}



void _ZNK5eastl19prime_rehash_policy17GetRehashRequiredEjjj(void)

{
  _ZNK5eastl19prime_rehash_policy17GetRehashRequiredEjjj();
  return;
}



void _ZNSt6__ndk111regex_errorC1ENS_15regex_constants10error_typeE(void)

{
  _ZNSt6__ndk111regex_errorC1ENS_15regex_constants10error_typeE();
  return;
}



void _ZNSt6__ndk111regex_errorD1Ev(void)

{
  _ZNSt6__ndk111regex_errorD1Ev();
  return;
}



void _ZNSt6__ndk119__shared_weak_countD1Ev(void)

{
  _ZNSt6__ndk119__shared_weak_countD1Ev();
  return;
}



void _ZNSt6__ndk16localeC1ERKS0_(void)

{
  _ZNSt6__ndk16localeC1ERKS0_();
  return;
}



void _ZNKSt6__ndk16locale4nameEv(void)

{
  _ZNKSt6__ndk16locale4nameEv();
  return;
}



void _ZNSt6__ndk120__get_collation_nameEPKc(void)

{
  _ZNSt6__ndk120__get_collation_nameEPKc();
  return;
}



void _ZNSt6__ndk115__get_classnameEPKcb(void)

{
  _ZNSt6__ndk115__get_classnameEPKcb();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc();
  return;
}



void strncmp(void)

{
  strncmp();
  return;
}



void sscanf(void)

{
  sscanf();
  return;
}



void _ZNSt6__ndk122condition_variable_anyD2Ev(void)

{
  _ZNSt6__ndk122condition_variable_anyD2Ev();
  return;
}



void _ZNSt6__ndk118condition_variableD2Ev(void)

{
  _ZNSt6__ndk118condition_variableD2Ev();
  return;
}



void _ZNSt6__ndk16threadD1Ev(void)

{
  _ZNSt6__ndk16threadD1Ev();
  return;
}



void _ZNSt6__ndk111__call_onceERVmPvPFvS2_E(void)

{
  _ZNSt6__ndk111__call_onceERVmPvPFvS2_E();
  return;
}



void BASS_Free(void)

{
  BASS_Free();
  return;
}



void _ZNSt6__ndk15mutexD1Ev(void)

{
  _ZNSt6__ndk15mutexD1Ev();
  return;
}



void _ZN5eastl15RBTreeIncrementEPKNS_16rbtree_node_baseE(void)

{
  _ZN5eastl15RBTreeIncrementEPKNS_16rbtree_node_baseE();
  return;
}



void _ZN5eastl11RBTreeEraseEPNS_16rbtree_node_baseES1_(void)

{
  _ZN5eastl11RBTreeEraseEPNS_16rbtree_node_baseES1_();
  return;
}



void BASS_Pause(void)

{
  BASS_Pause();
  return;
}



void BASS_Start(void)

{
  BASS_Start();
  return;
}



void BASS_ChannelSetAttribute(void)

{
  BASS_ChannelSetAttribute();
  return;
}



void _ZNSt6__ndk15mutex4lockEv(void)

{
  _ZNSt6__ndk15mutex4lockEv();
  return;
}



void _ZNSt6__ndk15mutex6unlockEv(void)

{
  _ZNSt6__ndk15mutex6unlockEv();
  return;
}



void BASS_Set3DPosition(void)

{
  BASS_Set3DPosition();
  return;
}



void BASS_Apply3D(void)

{
  BASS_Apply3D();
  return;
}



void BASS_StreamFree(void)

{
  BASS_StreamFree();
  return;
}



void _ZN6RakNet9BitStreamC1Ev(void)

{
  _ZN6RakNet9BitStreamC1Ev();
  return;
}



void _ZN6RakNet9BitStream9WriteBitsEPKhib(void)

{
  _ZN6RakNet9BitStream9WriteBitsEPKhib();
  return;
}



void BASS_StreamGetFilePosition(void)

{
  BASS_StreamGetFilePosition();
  return;
}



void _ZN6RakNet9BitStreamD1Ev(void)

{
  _ZN6RakNet9BitStreamD1Ev();
  return;
}



void __dynamic_cast(void)

{
  __dynamic_cast();
  return;
}



void _ZNSt6__ndk17promiseIvEC2Ev(void)

{
  _ZNSt6__ndk17promiseIvEC2Ev();
  return;
}



void _ZNSt6__ndk118condition_variable10notify_oneEv(void)

{
  _ZNSt6__ndk118condition_variable10notify_oneEv();
  return;
}



void _ZNSt6__ndk17promiseIvE10get_futureEv(void)

{
  _ZNSt6__ndk17promiseIvE10get_futureEv();
  return;
}



void _ZNSt6__ndk16futureIvED1Ev(void)

{
  _ZNSt6__ndk16futureIvED1Ev();
  return;
}



void BASS_ChannelPlay(void)

{
  BASS_ChannelPlay();
  return;
}



void BASS_ErrorGetCode(void)

{
  BASS_ErrorGetCode();
  return;
}



void BASS_ChannelPause(void)

{
  BASS_ChannelPause();
  return;
}



void BASS_ChannelSetPosition(void)

{
  BASS_ChannelSetPosition();
  return;
}



void BASS_ChannelGetInfo(void)

{
  BASS_ChannelGetInfo();
  return;
}



void BASS_ChannelSeconds2Bytes(void)

{
  BASS_ChannelSeconds2Bytes();
  return;
}



void BASS_ChannelFlags(void)

{
  BASS_ChannelFlags();
  return;
}



void BASS_ChannelSetSync(void)

{
  BASS_ChannelSetSync();
  return;
}



void BASS_ChannelIsActive(void)

{
  BASS_ChannelIsActive();
  return;
}



void BASS_ChannelGetPosition(void)

{
  BASS_ChannelGetPosition();
  return;
}



void BASS_ChannelGetLength(void)

{
  BASS_ChannelGetLength();
  return;
}



void BASS_ChannelGetTags(void)

{
  BASS_ChannelGetTags();
  return;
}



void BASS_ChannelSet3DPosition(void)

{
  BASS_ChannelSet3DPosition();
  return;
}



void _ZNSt6__ndk16thread6detachEv(void)

{
  _ZNSt6__ndk16thread6detachEv();
  return;
}



void _ZNSt6__ndk118condition_variable10notify_allEv(void)

{
  _ZNSt6__ndk118condition_variable10notify_allEv();
  return;
}



void _ZNSt6__ndk115__thread_structC1Ev(void)

{
  _ZNSt6__ndk115__thread_structC1Ev();
  return;
}



void pthread_create(void)

{
  pthread_create();
  return;
}



void _ZNSt6__ndk120__throw_system_errorEiPKc(void)

{
  _ZNSt6__ndk120__throw_system_errorEiPKc();
  return;
}



void _ZNSt6__ndk119__thread_local_dataEv(void)

{
  _ZNSt6__ndk119__thread_local_dataEv();
  return;
}



void pthread_setspecific(void)

{
  pthread_setspecific();
  return;
}



void _ZNSt6__ndk115__thread_structD1Ev(void)

{
  _ZNSt6__ndk115__thread_structD1Ev();
  return;
}



void _ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(void)

{
  _ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE();
  return;
}



void _ZNSt6__ndk16thread4joinEv(void)

{
  _ZNSt6__ndk16thread4joinEv();
  return;
}



void BASS_Init(void)

{
  BASS_Init();
  return;
}



void BASS_Set3DFactors(void)

{
  BASS_Set3DFactors();
  return;
}



void BASS_SetConfigPtr(void)

{
  BASS_SetConfigPtr();
  return;
}



void BASS_SetConfig(void)

{
  BASS_SetConfig();
  return;
}



void _ZN5eastl15RBTreeDecrementEPKNS_16rbtree_node_baseE(void)

{
  _ZN5eastl15RBTreeDecrementEPKNS_16rbtree_node_baseE();
  return;
}



void _ZN5eastl12RBTreeInsertEPNS_16rbtree_node_baseES1_S1_NS_10RBTreeSideE(void)

{
  _ZN5eastl12RBTreeInsertEPNS_16rbtree_node_baseES1_S1_NS_10RBTreeSideE();
  return;
}



void _ZNSt6__ndk17promiseIvED1Ev(void)

{
  _ZNSt6__ndk17promiseIvED1Ev();
  return;
}



void BASS_StreamCreateFile(void)

{
  BASS_StreamCreateFile();
  return;
}



void BASS_ChannelSet3DAttributes(void)

{
  BASS_ChannelSet3DAttributes();
  return;
}



void BASS_StreamCreateURL(void)

{
  BASS_StreamCreateURL();
  return;
}



void _ZNSt13exception_ptrD1Ev(void)

{
  _ZNSt13exception_ptrD1Ev();
  return;
}



void _ZNSt6__ndk17promiseIvE9set_valueEv(void)

{
  _ZNSt6__ndk17promiseIvE9set_valueEv();
  return;
}



void _ZSt17current_exceptionv(void)

{
  _ZSt17current_exceptionv();
  return;
}



void _ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr(void)

{
  _ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr();
  return;
}



void _ZNSt6__ndk115future_categoryEv(void)

{
  _ZNSt6__ndk115future_categoryEv();
  return;
}



void _ZNSt6__ndk112future_errorC1ENS_10error_codeE(void)

{
  _ZNSt6__ndk112future_errorC1ENS_10error_codeE();
  return;
}



void _ZNSt6__ndk112future_errorD1Ev(void)

{
  _ZNSt6__ndk112future_errorD1Ev();
  return;
}



void logf(void)

{
  logf();
  return;
}



void expf(void)

{
  expf();
  return;
}



void strcpy(void)

{
  strcpy();
  return;
}



void log10f(void)

{
  log10f();
  return;
}



void powf(void)

{
  powf();
  return;
}



void mpg123_init(void)

{
  mpg123_init();
  return;
}



void mpg123_exit(void)

{
  mpg123_exit();
  return;
}



void __strcpy_chk(void)

{
  __strcpy_chk();
  return;
}



void mpg123_new(void)

{
  mpg123_new();
  return;
}



void mpg123_param2(void)

{
  mpg123_param2();
  return;
}



void fopen(void)

{
  fopen();
  return;
}



void fread(void)

{
  fread();
  return;
}



void fseek(void)

{
  fseek();
  return;
}



void fclose(void)

{
  fclose();
  return;
}



void ftell(void)

{
  ftell();
  return;
}



void realloc(void)

{
  realloc();
  return;
}



void mpg123_close(void)

{
  mpg123_close();
  return;
}



void mpg123_delete(void)

{
  mpg123_delete();
  return;
}



void mpg123_open(void)

{
  mpg123_open();
  return;
}



void mpg123_getformat(void)

{
  mpg123_getformat();
  return;
}



void mpg123_format_none(void)

{
  mpg123_format_none();
  return;
}



void mpg123_format(void)

{
  mpg123_format();
  return;
}



void mpg123_length(void)

{
  mpg123_length();
  return;
}



void mpg123_seek(void)

{
  mpg123_seek();
  return;
}



void mpg123_tell(void)

{
  mpg123_tell();
  return;
}



void mpg123_read(void)

{
  mpg123_read();
  return;
}



void mpg123_replace_reader_handle(void)

{
  mpg123_replace_reader_handle();
  return;
}



void mpg123_open_handle(void)

{
  mpg123_open_handle();
  return;
}



void strstr(void)

{
  strstr();
  return;
}



void getcwd(void)

{
  getcwd();
  return;
}



void __strcat_chk(void)

{
  __strcat_chk();
  return;
}



void closedir(void)

{
  closedir();
  return;
}



void time(void)

{
  time();
  return;
}



void localtime(void)

{
  localtime();
  return;
}



void perror(void)

{
  perror();
  return;
}



void mpg123_format_all(void)

{
  mpg123_format_all();
  return;
}



void mpg123_open_feed(void)

{
  mpg123_open_feed();
  return;
}



void mpg123_feed(void)

{
  mpg123_feed();
  return;
}



void lstat(void)

{
  lstat();
  return;
}



void __readlink_chk(void)

{
  __readlink_chk();
  return;
}



void malloc(void)

{
  malloc();
  return;
}



void free(void)

{
  free();
  return;
}



void __vsprintf_chk(void)

{
  __vsprintf_chk();
  return;
}



void calloc(void)

{
  calloc();
  return;
}



void atan2f(void)

{
  atan2f();
  return;
}



void sincosf(void)

{
  sincosf();
  return;
}



void _ZN5eastl19GetDefaultAllocatorEv(void)

{
  _ZN5eastl19GetDefaultAllocatorEv();
  return;
}



void _ZNK5eastl19prime_rehash_policy14GetBucketCountEj(void)

{
  _ZNK5eastl19prime_rehash_policy14GetBucketCountEj();
  return;
}



void asinf(void)

{
  asinf();
  return;
}



void fmodf(void)

{
  fmodf();
  return;
}



void exp2f(void)

{
  exp2f();
  return;
}



void tanf(void)

{
  tanf();
  return;
}



void sinf(void)

{
  sinf();
  return;
}



void sem_init(void)

{
  sem_init();
  return;
}



void strerror(void)

{
  strerror();
  return;
}



void sem_destroy(void)

{
  sem_destroy();
  return;
}



void sem_wait(void)

{
  sem_wait();
  return;
}



void sem_post(void)

{
  sem_post();
  return;
}



void _ZN6RakNet9BitStream6Write0Ev(void)

{
  _ZN6RakNet9BitStream6Write0Ev();
  return;
}



void _ZN6RakNet9BitStream6Write1Ev(void)

{
  _ZN6RakNet9BitStream6Write1Ev();
  return;
}



void strrchr(void)

{
  strrchr();
  return;
}



void atoi(void)

{
  atoi();
  return;
}



void atof(void)

{
  atof();
  return;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



void _ZNSt6__ndk119__shared_mutex_baseC1Ev(void)

{
  _ZNSt6__ndk119__shared_mutex_baseC1Ev();
  return;
}



void _ZNSt6__ndk115recursive_mutex4lockEv(void)

{
  _ZNSt6__ndk115recursive_mutex4lockEv();
  return;
}



void _ZNSt6__ndk115recursive_mutex6unlockEv(void)

{
  _ZNSt6__ndk115recursive_mutex6unlockEv();
  return;
}



void _ZNSt6__ndk115recursive_mutexC1Ev(void)

{
  _ZNSt6__ndk115recursive_mutexC1Ev();
  return;
}



void _ZNSt6__ndk115recursive_mutexD1Ev(void)

{
  _ZNSt6__ndk115recursive_mutexD1Ev();
  return;
}



void _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
               (void)

{
  _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE();
  return;
}



void _ZNSt6__ndk119__shared_mutex_base11lock_sharedEv(void)

{
  _ZNSt6__ndk119__shared_mutex_base11lock_sharedEv();
  return;
}



void _ZNSt6__ndk119__shared_mutex_base13unlock_sharedEv(void)

{
  _ZNSt6__ndk119__shared_mutex_base13unlock_sharedEv();
  return;
}



void _ZNSt9bad_allocC1Ev(void)

{
  _ZNSt9bad_allocC1Ev();
  return;
}



void _ZNSt13bad_exceptionD1Ev(void)

{
  _ZNSt13bad_exceptionD1Ev();
  return;
}



void _ZNSt6__ndk16chrono12steady_clock3nowEv(void)

{
  _ZNSt6__ndk16chrono12steady_clock3nowEv();
  return;
}



void _ZNSt11range_errorD1Ev(void)

{
  _ZNSt11range_errorD1Ev();
  return;
}



void _ZNSt6__ndk119__shared_mutex_base4lockEv(void)

{
  _ZNSt6__ndk119__shared_mutex_base4lockEv();
  return;
}



void _ZNSt6__ndk119__shared_mutex_base6unlockEv(void)

{
  _ZNSt6__ndk119__shared_mutex_base6unlockEv();
  return;
}



void _ZdlPvSt11align_val_t(void)

{
  _ZdlPvSt11align_val_t();
  return;
}



void _ZnwmSt11align_val_t(void)

{
  _ZnwmSt11align_val_t();
  return;
}



void _ZNSt13runtime_errorC1EPKc(void)

{
  _ZNSt13runtime_errorC1EPKc();
  return;
}



void printf(void)

{
  printf();
  return;
}



void strncasecmp(void)

{
  strncasecmp();
  return;
}



void strtoul(void)

{
  strtoul();
  return;
}



void strtol(void)

{
  strtol();
  return;
}



void strtof(void)

{
  strtof();
  return;
}



void strtok(void)

{
  strtok();
  return;
}



void _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEED1Ev(void)

{
  _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEED1Ev();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED2Ev(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED2Ev();
  return;
}



void _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED1Ev(void)

{
  _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED1Ev();
  return;
}



void stat(void)

{
  stat();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED2Ev(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED2Ev();
  return;
}



void _ZNSt6__ndk18ios_base4initEPv(void)

{
  _ZNSt6__ndk18ios_base4initEPv();
  return;
}



void _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEEC1Ev(void)

{
  _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEEC1Ev();
  return;
}



void _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void)

{
  _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj();
  return;
}



void _ZNSt6__ndk18ios_base5clearEj(void)

{
  _ZNSt6__ndk18ios_base5clearEj();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5tellgEv();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4readEPcl();
  return;
}



void _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void)

{
  _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE5closeEv();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_();
  return;
}



void _ZNKSt6__ndk18ios_base6getlocEv(void)

{
  _ZNKSt6__ndk18ios_base6getlocEv();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev();
  return;
}



void _ZNSt6__ndk18ios_base33__set_badbit_and_consider_rethrowEv(void)

{
  _ZNSt6__ndk18ios_base33__set_badbit_and_consider_rethrowEv();
  return;
}



void _ZNSt6__ndk112__next_primeEm(void)

{
  _ZNSt6__ndk112__next_primeEm();
  return;
}



void _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED1Ev(void)

{
  _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED1Ev();
  return;
}



void _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC1Ev(void)

{
  _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC1Ev();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6sentryC2ERS3_b(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6sentryC2ERS3_b();
  return;
}



void __cxa_rethrow(void)

{
  __cxa_rethrow();
  return;
}



void _ZNSt6__ndk16chrono12system_clock3nowEv(void)

{
  _ZNSt6__ndk16chrono12system_clock3nowEv();
  return;
}



void strftime(void)

{
  strftime();
  return;
}



void realpath(void)

{
  realpath();
  return;
}



void ferror(void)

{
  ferror();
  return;
}



void fileno(void)

{
  fileno();
  return;
}



void dup(void)

{
  dup();
  return;
}



void fdopen(void)

{
  fdopen();
  return;
}



void fwrite(void)

{
  fwrite();
  return;
}



void mkdir(void)

{
  mkdir();
  return;
}



void opendir(void)

{
  opendir();
  return;
}



void readdir(void)

{
  readdir();
  return;
}



void fnmatch(void)

{
  fnmatch();
  return;
}



void remove(void)

{
  remove();
  return;
}



void _ZNSt6__ndk16localeaSERKS0_(void)

{
  _ZNSt6__ndk16localeaSERKS0_();
  return;
}



void mz_zip_create(void)

{
  mz_zip_create();
  return;
}



void mz_stream_seek(void)

{
  mz_stream_seek();
  return;
}



void mz_zip_open(void)

{
  mz_zip_open();
  return;
}



void mz_zip_close(void)

{
  mz_zip_close();
  return;
}



void mz_zip_delete(void)

{
  mz_zip_delete();
  return;
}



void mz_zip_entry_is_open(void)

{
  mz_zip_entry_is_open();
  return;
}



void mz_zip_entry_close(void)

{
  mz_zip_entry_close();
  return;
}



void mz_zip_entry_read(void)

{
  mz_zip_entry_read();
  return;
}



void mz_zip_goto_first_entry(void)

{
  mz_zip_goto_first_entry();
  return;
}



void mz_zip_goto_next_entry(void)

{
  mz_zip_goto_next_entry();
  return;
}



void mz_zip_entry_get_info(void)

{
  mz_zip_entry_get_info();
  return;
}



void mz_zip_entry_is_dir(void)

{
  mz_zip_entry_is_dir();
  return;
}



void mz_zip_get_entry(void)

{
  mz_zip_get_entry();
  return;
}



void mz_zip_path_compare(void)

{
  mz_zip_path_compare();
  return;
}



void mz_zip_goto_entry(void)

{
  mz_zip_goto_entry();
  return;
}



void mz_zip_entry_read_open(void)

{
  mz_zip_entry_read_open();
  return;
}



void gettimeofday(void)

{
  gettimeofday();
  return;
}



void clock_gettime(void)

{
  clock_gettime();
  return;
}



void rand(void)

{
  rand();
  return;
}



void _ZNSt6__ndk113random_deviceclEv(void)

{
  _ZNSt6__ndk113random_deviceclEv();
  return;
}



void _ZNSt6__ndk113random_deviceD2Ev(void)

{
  _ZNSt6__ndk113random_deviceD2Ev();
  return;
}



void _ZNSt6__ndk113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
               (void)

{
  _ZNSt6__ndk113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
  return;
}



void fmod(void)

{
  fmod();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  return;
}



void _ZNSt6__ndk19to_stringEj(void)

{
  _ZNSt6__ndk19to_stringEj();
  return;
}



void _ZNSt6__ndk19to_stringEl(void)

{
  _ZNSt6__ndk19to_stringEl();
  return;
}



void cosf(void)

{
  cosf();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm();
  return;
}



void gmtime_r(void)

{
  gmtime_r();
  return;
}



void strchr(void)

{
  strchr();
  return;
}



void pow(void)

{
  pow();
  return;
}



void _ZNSt6__ndk14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void)

{
  _ZNSt6__ndk14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf();
  return;
}



void difftime(void)

{
  difftime();
  return;
}



void srand(void)

{
  srand();
  return;
}



void pthread_self(void)

{
  pthread_self();
  return;
}



void _ZN6RakNet9BitStream5WriteEPKci(void)

{
  _ZN6RakNet9BitStream5WriteEPKci();
  return;
}



void _ZN6RakNet9BitStream8ReadBitsEPhib(void)

{
  _ZN6RakNet9BitStream8ReadBitsEPhib();
  return;
}



void _ZNSt6__ndk15stoulERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void)

{
  _ZNSt6__ndk15stoulERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi();
  return;
}



void _ZNSt6__ndk15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void)

{
  _ZNSt6__ndk15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi();
  return;
}



void _ZNSt6__ndk14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm(void)

{
  _ZNSt6__ndk14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm();
  return;
}



void mktime(void)

{
  mktime();
  return;
}



void gmtime(void)

{
  gmtime();
  return;
}



void _ZNSt6__ndk119__shared_weak_count4lockEv(void)

{
  _ZNSt6__ndk119__shared_weak_count4lockEv();
  return;
}



void _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(void)

{
  _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm();
  return;
}



void fprintf(void)

{
  fprintf();
  return;
}



void sincos(void)

{
  sincos();
  return;
}



void atan2(void)

{
  atan2();
  return;
}



void feof(void)

{
  feof();
  return;
}



void atanf(void)

{
  atanf();
  return;
}



void exit(void)

{
                    // WARNING: Subroutine does not return
  exit();
}



void glGetIntegerv(void)

{
  glGetIntegerv();
  return;
}



void glGetError(void)

{
  glGetError();
  return;
}



void eglGetCurrentContext(void)

{
  eglGetCurrentContext();
  return;
}



void glPixelStorei(void)

{
  glPixelStorei();
  return;
}



void glVertexAttribPointer(void)

{
  glVertexAttribPointer();
  return;
}



void glGenFramebuffers(void)

{
  glGenFramebuffers();
  return;
}



void glDrawBuffers(void)

{
  glDrawBuffers();
  return;
}



void glReadBuffer(void)

{
  glReadBuffer();
  return;
}



void glTexImage2D(void)

{
  glTexImage2D();
  return;
}



void glCompressedTexImage2D(void)

{
  glCompressedTexImage2D();
  return;
}



void glTexParameterf(void)

{
  glTexParameterf();
  return;
}



void glBlendFunc(void)

{
  glBlendFunc();
  return;
}



void glDisableVertexAttribArray(void)

{
  glDisableVertexAttribArray();
  return;
}



void glStencilMask(void)

{
  glStencilMask();
  return;
}



void glDeleteTextures(void)

{
  glDeleteTextures();
  return;
}



void glGetStringi(void)

{
  glGetStringi();
  return;
}



void eglGetProcAddress(void)

{
  eglGetProcAddress();
  return;
}



void glGenTextures(void)

{
  glGenTextures();
  return;
}



void glBindTexture(void)

{
  glBindTexture();
  return;
}



void glTexParameteri(void)

{
  glTexParameteri();
  return;
}



void glGetString(void)

{
  glGetString();
  return;
}



void glTexParameterfv(void)

{
  glTexParameterfv();
  return;
}



void glDepthFunc(void)

{
  glDepthFunc();
  return;
}



void glBufferSubData(void)

{
  glBufferSubData();
  return;
}



void glBindBuffer(void)

{
  glBindBuffer();
  return;
}



void glDeleteFramebuffers(void)

{
  glDeleteFramebuffers();
  return;
}



void glUnmapBuffer(void)

{
  glUnmapBuffer();
  return;
}



void glDeleteBuffers(void)

{
  glDeleteBuffers();
  return;
}



void glTexSubImage2D(void)

{
  glTexSubImage2D();
  return;
}



void glDepthMask(void)

{
  glDepthMask();
  return;
}



void glDrawElements(void)

{
  glDrawElements();
  return;
}



void glFramebufferRenderbuffer(void)

{
  glFramebufferRenderbuffer();
  return;
}



void glBindFramebuffer(void)

{
  glBindFramebuffer();
  return;
}



void glGenVertexArrays(void)

{
  glGenVertexArrays();
  return;
}



void glStencilOp(void)

{
  glStencilOp();
  return;
}



void glGenBuffers(void)

{
  glGenBuffers();
  return;
}



void glClear(void)

{
  glClear();
  return;
}



void glBlendFuncSeparate(void)

{
  glBlendFuncSeparate();
  return;
}



void glDeleteRenderbuffers(void)

{
  glDeleteRenderbuffers();
  return;
}



void glDisable(void)

{
  glDisable();
  return;
}



void glBindVertexArray(void)

{
  glBindVertexArray();
  return;
}



void glActiveTexture(void)

{
  glActiveTexture();
  return;
}



void glStencilFunc(void)

{
  glStencilFunc();
  return;
}



void glCullFace(void)

{
  glCullFace();
  return;
}



void glDrawArrays(void)

{
  glDrawArrays();
  return;
}



void glDeleteVertexArrays(void)

{
  glDeleteVertexArrays();
  return;
}



void glClearColor(void)

{
  glClearColor();
  return;
}



void glUniformMatrix4fv(void)

{
  glUniformMatrix4fv();
  return;
}



void glReadPixels(void)

{
  glReadPixels();
  return;
}



void glEnable(void)

{
  glEnable();
  return;
}



void glDrawElementsInstanced(void)

{
  glDrawElementsInstanced();
  return;
}



void glEnableVertexAttribArray(void)

{
  glEnableVertexAttribArray();
  return;
}



void glMapBufferRange(void)

{
  glMapBufferRange();
  return;
}



void glViewport(void)

{
  glViewport();
  return;
}



void glScissor(void)

{
  glScissor();
  return;
}



void glGenRenderbuffers(void)

{
  glGenRenderbuffers();
  return;
}



void glBindRenderbuffer(void)

{
  glBindRenderbuffer();
  return;
}



void glRenderbufferStorage(void)

{
  glRenderbufferStorage();
  return;
}



void glColorMask(void)

{
  glColorMask();
  return;
}



void glUseProgram(void)

{
  glUseProgram();
  return;
}



void glPolygonOffset(void)

{
  glPolygonOffset();
  return;
}



void glFramebufferTexture2D(void)

{
  glFramebufferTexture2D();
  return;
}



void glUniform2fv(void)

{
  glUniform2fv();
  return;
}



void glBufferData(void)

{
  glBufferData();
  return;
}



void glUniform4fv(void)

{
  glUniform4fv();
  return;
}



void glUniform3fv(void)

{
  glUniform3fv();
  return;
}



void glUniform4iv(void)

{
  glUniform4iv();
  return;
}



void glUniform1fv(void)

{
  glUniform1fv();
  return;
}



void glDeleteShader(void)

{
  glDeleteShader();
  return;
}



void glCreateProgram(void)

{
  glCreateProgram();
  return;
}



void glBindAttribLocation(void)

{
  glBindAttribLocation();
  return;
}



void glAttachShader(void)

{
  glAttachShader();
  return;
}



void glLinkProgram(void)

{
  glLinkProgram();
  return;
}



void glGetProgramiv(void)

{
  glGetProgramiv();
  return;
}



void glGetUniformBlockIndex(void)

{
  glGetUniformBlockIndex();
  return;
}



void glUniformBlockBinding(void)

{
  glUniformBlockBinding();
  return;
}



void glGetUniformLocation(void)

{
  glGetUniformLocation();
  return;
}



void glUniform1i(void)

{
  glUniform1i();
  return;
}



void glGetProgramInfoLog(void)

{
  glGetProgramInfoLog();
  return;
}



void glCreateShader(void)

{
  glCreateShader();
  return;
}



void glShaderSource(void)

{
  glShaderSource();
  return;
}



void glCompileShader(void)

{
  glCompileShader();
  return;
}



void glGetShaderiv(void)

{
  glGetShaderiv();
  return;
}



void glGetShaderInfoLog(void)

{
  glGetShaderInfoLog();
  return;
}



void glDeleteProgram(void)

{
  glDeleteProgram();
  return;
}



void puts(void)

{
  puts();
  return;
}



void __strchr_chk(void)

{
  __strchr_chk();
  return;
}



void acos(void)

{
  acos();
  return;
}



void sin(void)

{
  sin();
  return;
}



void _ZN17RakNetworkFactory21GetRakClientInterfaceEv(void)

{
  _ZN17RakNetworkFactory21GetRakClientInterfaceEv();
  return;
}



void __strncpy_chk(void)

{
  __strncpy_chk();
  return;
}



void _ZN6RakNet9BitStreamC2EPhjb(void)

{
  _ZN6RakNet9BitStreamC2EPhjb();
  return;
}



void _ZN6RakNet9BitStream4ReadEPci(void)

{
  _ZN6RakNet9BitStream4ReadEPci();
  return;
}



void _ZN6RakNet9BitStream10IgnoreBitsEi(void)

{
  _ZN6RakNet9BitStream10IgnoreBitsEi();
  return;
}



void nextafterf(void)

{
  nextafterf();
  return;
}



void curl_global_init(void)

{
  curl_global_init();
  return;
}



void curl_multi_init(void)

{
  curl_multi_init();
  return;
}



void curl_multi_cleanup(void)

{
  curl_multi_cleanup();
  return;
}



void curl_global_cleanup(void)

{
  curl_global_cleanup();
  return;
}



void curl_easy_perform(void)

{
  curl_easy_perform();
  return;
}



void curl_multi_perform(void)

{
  curl_multi_perform();
  return;
}



void curl_multi_info_read(void)

{
  curl_multi_info_read();
  return;
}



void curl_easy_getinfo(void)

{
  curl_easy_getinfo();
  return;
}



void curl_easy_strerror(void)

{
  curl_easy_strerror();
  return;
}



void curl_easy_init(void)

{
  curl_easy_init();
  return;
}



void curl_multi_add_handle(void)

{
  curl_multi_add_handle();
  return;
}



void curl_slist_free_all(void)

{
  curl_slist_free_all();
  return;
}



void curl_slist_append(void)

{
  curl_slist_append();
  return;
}



void curl_easy_setopt(void)

{
  curl_easy_setopt();
  return;
}



void curl_multi_remove_handle(void)

{
  curl_multi_remove_handle();
  return;
}



void curl_easy_cleanup(void)

{
  curl_easy_cleanup();
  return;
}



void __memmove_chk(void)

{
  __memmove_chk();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt11range_errorD1Ev(void)

{
  _ZNSt11range_errorD1Ev();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEj(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  return;
}



void log10(void)

{
  log10();
  return;
}



void _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED2Ev(void)

{
  _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED2Ev();
  return;
}



void _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(void)

{
  _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv();
  return;
}



void _ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
               (void)

{
  _ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_();
  return;
}



void _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (void)

{
  _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc
               (void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc
            ();
  return;
}



void _ZNSt19bad_optional_accessD1Ev(void)

{
  _ZNSt19bad_optional_accessD1Ev();
  return;
}



void _ZNSt12domain_errorD1Ev(void)

{
  _ZNSt12domain_errorD1Ev();
  return;
}



void _ZNSt8bad_castD1Ev(void)

{
  _ZNSt8bad_castD1Ev();
  return;
}



void _ZNSt8bad_castC1Ev(void)

{
  _ZNSt8bad_castC1Ev();
  return;
}



void _ZN22UpdateManagerSystemApi11GetInstanceEv(void)

{
  _ZN22UpdateManagerSystemApi11GetInstanceEv();
  return;
}



void _ZN22UpdateManagerSystemApi29AddFileDownloadedNotificationERKN5eastl12basic_stringIcN2bh9AllocatorEEERKNS0_8functionIFvvEEE
               (void)

{
  _ZN22UpdateManagerSystemApi29AddFileDownloadedNotificationERKN5eastl12basic_stringIcN2bh9AllocatorEEERKNS0_8functionIFvvEEE
            ();
  return;
}



void _ZN28UpdateManagerSystemCallbacks9ConfigureERK28UpdateManagerCallbacksConfig(void)

{
  _ZN28UpdateManagerSystemCallbacks9ConfigureERK28UpdateManagerCallbacksConfig();
  return;
}



void pthread_getschedparam(void)

{
  pthread_getschedparam();
  return;
}



void pthread_setschedparam(void)

{
  pthread_setschedparam();
  return;
}



void vasprintf(void)

{
  vasprintf();
  return;
}



void UpdateManagerSetAllocatorBackend(void)

{
  UpdateManagerSetAllocatorBackend();
  return;
}



void dlopen(void)

{
  dlopen();
  return;
}



void dlsym(void)

{
  dlsym();
  return;
}



void setlocale(void)

{
  setlocale();
  return;
}



void sysinfo(void)

{
  sysinfo();
  return;
}



void sigaction(void)

{
  sigaction();
  return;
}



void AndroidBitmap_lockPixels(void)

{
  AndroidBitmap_lockPixels();
  return;
}



void AndroidBitmap_unlockPixels(void)

{
  AndroidBitmap_unlockPixels();
  return;
}



void access(void)

{
  access();
  return;
}



void strsep(void)

{
  strsep();
  return;
}



void rename(void)

{
  rename();
  return;
}



void fscanf(void)

{
  fscanf();
  return;
}



void usleep(void)

{
  usleep();
  return;
}



void sched_get_priority_min(void)

{
  sched_get_priority_min();
  return;
}



void sched_get_priority_max(void)

{
  sched_get_priority_max();
  return;
}



void pthread_attr_init(void)

{
  pthread_attr_init();
  return;
}



void pthread_attr_getstacksize(void)

{
  pthread_attr_getstacksize();
  return;
}



void pthread_attr_getschedparam(void)

{
  pthread_attr_getschedparam();
  return;
}



void pthread_attr_setschedparam(void)

{
  pthread_attr_setschedparam();
  return;
}



void pthread_join(void)

{
  pthread_join();
  return;
}



void pthread_mutexattr_init(void)

{
  pthread_mutexattr_init();
  return;
}



void pthread_mutexattr_settype(void)

{
  pthread_mutexattr_settype();
  return;
}



void pthread_mutex_init(void)

{
  pthread_mutex_init();
  return;
}



void pthread_mutex_destroy(void)

{
  pthread_mutex_destroy();
  return;
}



void pthread_mutex_lock(void)

{
  pthread_mutex_lock();
  return;
}



void pthread_mutex_unlock(void)

{
  pthread_mutex_unlock();
  return;
}



void _ZN28UpdateManagerSystemCallbacks17SetInstallationIdERKN5eastl12basic_stringIcN2bh9AllocatorEEE
               (void)

{
  _ZN28UpdateManagerSystemCallbacks17SetInstallationIdERKN5eastl12basic_stringIcN2bh9AllocatorEEE();
  return;
}



void _ZNK20UpdateManagerContext15GetFeatureFlagsEv(void)

{
  _ZNK20UpdateManagerContext15GetFeatureFlagsEv();
  return;
}



void _ZN20UpdateManagerContext19ResolveFeatureFlagsEN5eastl17basic_string_viewIcEERKNS0_12basic_stringIcN2bh9AllocatorEEE6Flavor
               (void)

{
  _ZN20UpdateManagerContext19ResolveFeatureFlagsEN5eastl17basic_string_viewIcEERKNS0_12basic_stringIcN2bh9AllocatorEEE6Flavor
            ();
  return;
}



void _ZN22UpdateManagerSystemApi10FlowRunnerEv(void)

{
  _ZN22UpdateManagerSystemApi10FlowRunnerEv();
  return;
}



void _ZN16UpdateFlowRunner6CancelEv(void)

{
  _ZN16UpdateFlowRunner6CancelEv();
  return;
}



void _ZNK16UpdateFlowRunner9IsRunningEv(void)

{
  _ZNK16UpdateFlowRunner9IsRunningEv();
  return;
}



void _ZNK16UpdateFlowRunner11GetSnapshotEv(void)

{
  _ZNK16UpdateFlowRunner11GetSnapshotEv();
  return;
}



void _ZN14update_manager18GetBuildInfoStringEv(void)

{
  _ZN14update_manager18GetBuildInfoStringEv();
  return;
}



void _ZN16UpdateFlowRunner5StartERK16UpdateFlowConfigRK19UpdateFlowCallbacks(void)

{
  _ZN16UpdateFlowRunner5StartERK16UpdateFlowConfigRK19UpdateFlowCallbacks();
  return;
}



void _ZN22UpdateManagerSystemApi25RemoveLastCheckDateMarkerERKN5eastl12basic_stringIcN2bh9AllocatorEEEb
               (void)

{
  _ZN22UpdateManagerSystemApi25RemoveLastCheckDateMarkerERKN5eastl12basic_stringIcN2bh9AllocatorEEEb
            ();
  return;
}



void _ZN16UpdateFlowRunner7ConfirmEv(void)

{
  _ZN16UpdateFlowRunner7ConfirmEv();
  return;
}



void _ZN16UpdateFlowRunner7DeclineEv(void)

{
  _ZN16UpdateFlowRunner7DeclineEv();
  return;
}



void _ZN16UpdateFlowRunner10SetDevModeEb(void)

{
  _ZN16UpdateFlowRunner10SetDevModeEb();
  return;
}



void _ZN16UpdateFlowRunner5RetryEv(void)

{
  _ZN16UpdateFlowRunner5RetryEv();
  return;
}



void _ZNK20UpdateManagerContext14GetDebugOutputEv(void)

{
  _ZNK20UpdateManagerContext14GetDebugOutputEv();
  return;
}



void _ZNK20UpdateManagerContext20GetCurrentHashCommitEv(void)

{
  _ZNK20UpdateManagerContext20GetCurrentHashCommitEv();
  return;
}



void _ZNK20UpdateManagerContext19GetTargetHashCommitEv(void)

{
  _ZNK20UpdateManagerContext19GetTargetHashCommitEv();
  return;
}



void RAND_bytes(void)

{
  RAND_bytes();
  return;
}



void _ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
               (void)

{
  _ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
            ();
  return;
}



void wcslen(void)

{
  wcslen();
  return;
}



void _ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6resizeEmw(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6resizeEmw();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9__grow_byEmmmmmm(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9__grow_byEmmmmmm();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE21__grow_by_and_replaceEmmmmmmPKw
               (void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE21__grow_by_and_replaceEmmmmmmPKw
            ();
  return;
}



void timegm(void)

{
  timegm();
  return;
}



void _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKcSC_
               (void)

{
  _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKcSC_
            ();
  return;
}



void _ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_
               (void)

{
  _ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_
            ();
  return;
}



void _ZNSt6__ndk16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
               (void)

{
  _ZNSt6__ndk16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
            ();
  return;
}



void localtime_r(void)

{
  localtime_r();
  return;
}



void setvbuf(void)

{
  setvbuf();
  return;
}



void __android_log_write(void)

{
  __android_log_write();
  return;
}



void fputs(void)

{
  fputs();
  return;
}



void fflush(void)

{
  fflush();
  return;
}



void prctl(void)

{
  prctl();
  return;
}



void gettid(void)

{
  gettid();
  return;
}



void enet_host_service(void)

{
  enet_host_service();
  return;
}



void enet_packet_destroy(void)

{
  enet_packet_destroy();
  return;
}



void enet_host_create(void)

{
  enet_host_create();
  return;
}



void enet_peer_disconnect_now(void)

{
  enet_peer_disconnect_now();
  return;
}



void enet_host_destroy(void)

{
  enet_host_destroy();
  return;
}



void enet_address_set_host(void)

{
  enet_address_set_host();
  return;
}



void enet_host_connect(void)

{
  enet_host_connect();
  return;
}



void enet_host_flush(void)

{
  enet_host_flush();
  return;
}



void enet_peer_reset(void)

{
  enet_peer_reset();
  return;
}



void enet_packet_create(void)

{
  enet_packet_create();
  return;
}



void enet_peer_send(void)

{
  enet_peer_send();
  return;
}



void BASS_RecordFree(void)

{
  BASS_RecordFree();
  return;
}



void BASS_RecordInit(void)

{
  BASS_RecordInit();
  return;
}



void BASS_RecordStart(void)

{
  BASS_RecordStart();
  return;
}



void BASS_ChannelStop(void)

{
  BASS_ChannelStop();
  return;
}



void opus_decoder_destroy(void)

{
  opus_decoder_destroy();
  return;
}



void opus_decoder_create(void)

{
  opus_decoder_create();
  return;
}



void opus_decode(void)

{
  opus_decode();
  return;
}



void opus_encode(void)

{
  opus_encode();
  return;
}



void enet_initialize(void)

{
  enet_initialize();
  return;
}



void opus_encoder_create(void)

{
  opus_encoder_create();
  return;
}



void opus_encoder_ctl(void)

{
  opus_encoder_ctl();
  return;
}



void qsort(void)

{
  qsort();
  return;
}



void __memset_chk(void)

{
  __memset_chk();
  return;
}



void log(void)

{
  log();
  return;
}



void sched_yield(void)

{
  sched_yield();
  return;
}



void socket(void)

{
  socket();
  return;
}



void getaddrinfo(void)

{
  getaddrinfo();
  return;
}



void fcntl(void)

{
  fcntl();
  return;
}



void connect(void)

{
  connect();
  return;
}



void __FD_SET_chk(void)

{
  __FD_SET_chk();
  return;
}



void select(void)

{
  select();
  return;
}



void getsockopt(void)

{
  getsockopt();
  return;
}



void freeaddrinfo(void)

{
  freeaddrinfo();
  return;
}



void close(void)

{
  close();
  return;
}



void bind(void)

{
  bind();
  return;
}



void listen(void)

{
  listen();
  return;
}



void accept(void)

{
  accept();
  return;
}



void shutdown(void)

{
  shutdown();
  return;
}



void recvfrom(void)

{
  recvfrom();
  return;
}



void sendto(void)

{
  sendto();
  return;
}



void pthread_getspecific(void)

{
  pthread_getspecific();
  return;
}



void getenv(void)

{
  getenv();
  return;
}



void sleep(void)

{
  sleep();
  return;
}



void munmap(void)

{
  munmap();
  return;
}



void pthread_key_create(void)

{
  pthread_key_create();
  return;
}



void pthread_key_delete(void)

{
  pthread_key_delete();
  return;
}



void arc4random_buf(void)

{
  arc4random_buf();
  return;
}



void sysconf(void)

{
  sysconf();
  return;
}



void __open_2(void)

{
  __open_2();
  return;
}



void read(void)

{
  read();
  return;
}



void madvise(void)

{
  madvise();
  return;
}



void mprotect(void)

{
  mprotect();
  return;
}



void getrusage(void)

{
  getrusage();
  return;
}



void mmap(void)

{
  mmap();
  return;
}



void pthread_setname_np(void)

{
  pthread_setname_np();
  return;
}



void slCreateEngine(void)

{
  slCreateEngine();
  return;
}



void uncompress(void)

{
  uncompress();
  return;
}



void inflateEnd(void)

{
  inflateEnd();
  return;
}



void inflateInit_(void)

{
  inflateInit_();
  return;
}



void inflateReset2(void)

{
  inflateReset2();
  return;
}



void inflate(void)

{
  inflate();
  return;
}



void inflateInit2_(void)

{
  inflateInit2_();
  return;
}



void _ZN6RakNet9BitStream5ResetEv(void)

{
  _ZN6RakNet9BitStream5ResetEv();
  return;
}



void _ZN6RakNet9BitStream5WriteEPS0_i(void)

{
  _ZN6RakNet9BitStream5WriteEPS0_i();
  return;
}



void _ZN6RakNet9BitStream7ReadBitEv(void)

{
  _ZN6RakNet9BitStream7ReadBitEv();
  return;
}



void _ZN6RakNet9BitStream17WriteAlignedBytesEPKhi(void)

{
  _ZN6RakNet9BitStream17WriteAlignedBytesEPKhi();
  return;
}



void _ZN6RakNet9BitStream16ReadAlignedBytesEPhi(void)

{
  _ZN6RakNet9BitStream16ReadAlignedBytesEPhi();
  return;
}



void _ZN6RakNet9BitStream15WriteCompressedEPKhib(void)

{
  _ZN6RakNet9BitStream15WriteCompressedEPKhib();
  return;
}



void _ZN6RakNet9BitStream14ReadCompressedEPhib(void)

{
  _ZN6RakNet9BitStream14ReadCompressedEPhib();
  return;
}



void putchar(void)

{
  putchar();
  return;
}



void _ZNK6RakNet9BitStream8CopyDataEPPh(void)

{
  _ZNK6RakNet9BitStream8CopyDataEPPh();
  return;
}



void _ZN6RakNet9BitStream14SetWriteOffsetEi(void)

{
  _ZN6RakNet9BitStream14SetWriteOffsetEi();
  return;
}



void _ZN6RakNet9BitStreamC1Ei(void)

{
  _ZN6RakNet9BitStreamC1Ei();
  return;
}



void _ZN19HuffmanEncodingTree10FreeMemoryEv(void)

{
  _ZN19HuffmanEncodingTree10FreeMemoryEv();
  return;
}



void _ZN19HuffmanEncodingTree26GenerateFromFrequencyTableEPj(void)

{
  _ZN19HuffmanEncodingTree26GenerateFromFrequencyTableEPj();
  return;
}



void _ZNK19HuffmanEncodingTree24InsertNodeIntoSortedListEP23HuffmanEncodingTreeNodePN14DataStructures10LinkedListIS1_EE
               (void)

{
  _ZNK19HuffmanEncodingTree24InsertNodeIntoSortedListEP23HuffmanEncodingTreeNodePN14DataStructures10LinkedListIS1_EE
            ();
  return;
}



void _ZN14DataStructures10LinkedListIP23HuffmanEncodingTreeNodeED2Ev(void)

{
  _ZN14DataStructures10LinkedListIP23HuffmanEncodingTreeNodeED2Ev();
  return;
}



void _ZN19HuffmanEncodingTree11EncodeArrayEPhjPN6RakNet9BitStreamE(void)

{
  _ZN19HuffmanEncodingTree11EncodeArrayEPhjPN6RakNet9BitStreamE();
  return;
}



void _ZN19HuffmanEncodingTree11DecodeArrayEPN6RakNet9BitStreamEjjPh(void)

{
  _ZN19HuffmanEncodingTree11DecodeArrayEPN6RakNet9BitStreamEjjPh();
  return;
}



void _ZN19HuffmanEncodingTreeC1Ev(void)

{
  _ZN19HuffmanEncodingTreeC1Ev();
  return;
}



void _ZN19HuffmanEncodingTreeD1Ev(void)

{
  _ZN19HuffmanEncodingTreeD1Ev();
  return;
}



void _ZN6RakNet7GetTimeEv(void)

{
  _ZN6RakNet7GetTimeEv();
  return;
}



void _ZN6RakNet9GetTimeNSEv(void)

{
  _ZN6RakNet9GetTimeNSEv();
  return;
}



void _ZN6RakNet4Time3NowEv(void)

{
  _ZN6RakNet4Time3NowEv();
  return;
}



void _ZNK6RakNet4Time5GetMSEv(void)

{
  _ZNK6RakNet4Time5GetMSEv();
  return;
}



void _ZNK6RakNet4TimemiERKS0_(void)

{
  _ZNK6RakNet4TimemiERKS0_();
  return;
}



void _ZN18InternalPacketPool10GetPointerEv(void)

{
  _ZN18InternalPacketPool10GetPointerEv();
  return;
}



void _ZN18InternalPacketPool14ReleasePointerEP14InternalPacket(void)

{
  _ZN18InternalPacketPool14ReleasePointerEP14InternalPacket();
  return;
}



void _ZN18InternalPacketPool9ClearPoolEv(void)

{
  _ZN18InternalPacketPool9ClearPoolEv();
  return;
}



void _ZNK8PlayerIDeqERKS_(void)

{
  _ZNK8PlayerIDeqERKS_();
  return;
}



void _ZNK8PlayerIDneERKS_(void)

{
  _ZNK8PlayerIDneERKS_();
  return;
}



void _ZNK8PlayerID8ToStringEb(void)

{
  _ZNK8PlayerID8ToStringEb();
  return;
}



void _ZNK8PlayerID11ToStringNetEb(void)

{
  _ZNK8PlayerID11ToStringNetEb();
  return;
}



void _Z29ConnectionCloseReasonToString22EConnectionCloseReason(void)

{
  _Z29ConnectionCloseReasonToString22EConnectionCloseReason();
  return;
}



void _ZN12RLEncryption17CalculateChecksumEPKhm(void)

{
  _ZN12RLEncryption17CalculateChecksumEPKhm();
  return;
}



void _ZN12RLEncryption21EncryptInternalPacketEPhPKhmhh(void)

{
  _ZN12RLEncryption21EncryptInternalPacketEPhPKhmhh();
  return;
}



void _ZN12RLEncryption21DecryptInternalPacketEPhPKhmhh(void)

{
  _ZN12RLEncryption21DecryptInternalPacketEPhPKhmhh();
  return;
}



void _ZN6RPCMap16GetNodeFromIndexEh(void)

{
  _ZN6RPCMap16GetNodeFromIndexEh();
  return;
}



void _ZN6RPCMap24GetIndexFromFunctionNameEi(void)

{
  _ZN6RPCMap24GetIndexFromFunctionNameEi();
  return;
}



void _ZN6RPCMap25AddIdentifierWithFunctionEiNSt6__ndk18functionIFvP13RPCParametersEEE(void)

{
  _ZN6RPCMap25AddIdentifierWithFunctionEiNSt6__ndk18functionIFvP13RPCParametersEEE();
  return;
}



void _ZN6RPCMap10RemoveNodeEi(void)

{
  _ZN6RPCMap10RemoveNodeEi();
  return;
}



void _ZN6RPCMapC1Ev(void)

{
  _ZN6RPCMapC1Ev();
  return;
}



void _ZN6RPCMapD1Ev(void)

{
  _ZN6RPCMapD1Ev();
  return;
}



void _ZN13RakClientAuth15ComputeAuthHashEPcPKc(void)

{
  _ZN13RakClientAuth15ComputeAuthHashEPcPKc();
  return;
}



void _Z18_raklogprintf_impl12ERakLogLevelPKcz(void)

{
  _Z18_raklogprintf_impl12ERakLogLevelPKcz();
  return;
}



void _Z17RakGetLoggerLevelv(void)

{
  _Z17RakGetLoggerLevelv();
  return;
}



void _ZN18RemoteSystemStruct17ResetRemoteSystemEb8PlayerIDNS_11ConnectModeER19RemoteSystemTracker
               (void)

{
  _ZN18RemoteSystemStruct17ResetRemoteSystemEb8PlayerIDNS_11ConnectModeER19RemoteSystemTracker();
  return;
}



void _ZN18RemoteSystemStruct14SetConnectModeENS_11ConnectModeER19RemoteSystemTracker(void)

{
  _ZN18RemoteSystemStruct14SetConnectModeENS_11ConnectModeER19RemoteSystemTracker();
  return;
}



void _ZNK18RemoteSystemStruct23WasKickedByErrorTriggerEv(void)

{
  _ZNK18RemoteSystemStruct23WasKickedByErrorTriggerEv();
  return;
}



void _ZN18RemoteSystemStructC1Ei(void)

{
  _ZN18RemoteSystemStructC1Ei();
  return;
}



void _ZN18RemoteSystemStructD1Ev(void)

{
  _ZN18RemoteSystemStructD1Ev();
  return;
}



void _ZN9RakClientC1Ev(void)

{
  _ZN9RakClientC1Ev();
  return;
}



void _ZN7RakPeer11AllocPacketEj(void)

{
  _ZN7RakPeer11AllocPacketEj();
  return;
}



void _ZN7RakPeer11AllocPacketE8PlayerIDP14InternalPacket(void)

{
  _ZN7RakPeer11AllocPacketE8PlayerIDP14InternalPacket();
  return;
}



void _ZN7RakPeerC2Ev(void)

{
  _ZN7RakPeerC2Ev();
  return;
}



void _ZN15RakTaskExecutorD2Ev(void)

{
  _ZN15RakTaskExecutorD2Ev();
  return;
}



void _ZN7RakPeerD2Ev(void)

{
  _ZN7RakPeerD2Ev();
  return;
}



void _ZN7RakPeer12ClearBanListEv(void)

{
  _ZN7RakPeer12ClearBanListEv();
  return;
}



void _ZN7RakPeer10InitializeEttiPKc(void)

{
  _ZN7RakPeer10InitializeEttiPKc();
  return;
}



void _ZNSt6__ndk16vectorINS_10shared_ptrI18RemoteSystemStructEENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEPS3_OT_
               (void)

{
  _ZNSt6__ndk16vectorINS_10shared_ptrI18RemoteSystemStructEENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEPS3_OT_
            ();
  return;
}



void _ZN7RakPeer14RunUpdateCycleEv(void)

{
  _ZN7RakPeer14RunUpdateCycleEv();
  return;
}



void _ZN7RakPeer7ConnectEPKctPci(void)

{
  _ZN7RakPeer7ConnectEPKctPci();
  return;
}



void _ZN7RakPeer10DisconnectEjh(void)

{
  _ZN7RakPeer10DisconnectEjh();
  return;
}



void _ZN7RakPeer26NotifyAndFlagForDisconnectE8PlayerIDh22EConnectionCloseReason(void)

{
  _ZN7RakPeer26NotifyAndFlagForDisconnectE8PlayerIDh22EConnectionCloseReason();
  return;
}



void _ZN7RakPeer13SendImmediateEPci14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastListb
               (void)

{
  _ZN7RakPeer13SendImmediateEPci14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastListb();
  return;
}



void _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE4findIS2_EENS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEERKT_
               (void)

{
  _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE4findIS2_EENS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEERKT_
            ();
  return;
}



void _ZN10moodycamel17ReaderWriterQueueIN7RakPeer21BufferedCommandStructELm64EE13inner_enqueueILNS3_14AllocationModeE0EJS2_EEEbDpOT0_
               (void)

{
  _ZN10moodycamel17ReaderWriterQueueIN7RakPeer21BufferedCommandStructELm64EE13inner_enqueueILNS3_14AllocationModeE0EJS2_EEEbDpOT0_
            ();
  return;
}



void _ZNK7RakPeer17GetNumConnectionsEv(void)

{
  _ZNK7RakPeer17GetNumConnectionsEv();
  return;
}



void _ZN7RakPeer4SendEPKci14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList(void)

{
  _ZN7RakPeer4SendEPKci14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList();
  return;
}



void _ZN7RakPeer12SendBufferedEPKci14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastListN18RemoteSystemStruct11ConnectModeE22EConnectionCloseReason
               (void)

{
  _ZN7RakPeer12SendBufferedEPKci14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastListN18RemoteSystemStruct11ConnectModeE22EConnectionCloseReason
            ();
  return;
}



void _ZN7RakPeer4SendEPN6RakNet9BitStreamE14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList
               (void)

{
  _ZN7RakPeer4SendEPN6RakNet9BitStreamE14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList
            ();
  return;
}



void _ZN7RakPeer6UpdateEv(void)

{
  _ZN7RakPeer6UpdateEv();
  return;
}



void _ZN7RakPeer7ReceiveEv(void)

{
  _ZN7RakPeer7ReceiveEv();
  return;
}



void _ZN7RakPeer16ReceiveIgnoreRPCEv(void)

{
  _ZN7RakPeer16ReceiveIgnoreRPCEv();
  return;
}



void _ZN7RakPeer15HandleRPCPacketEP6Packet(void)

{
  _ZN7RakPeer15HandleRPCPacketEP6Packet();
  return;
}



void _ZNK7RakPeer22ShiftIncomingTimestampEPh8PlayerID(void)

{
  _ZNK7RakPeer22ShiftIncomingTimestampEPh8PlayerID();
  return;
}



void _ZN14DataStructures5QueueIP6PacketE4PushERKS2_(void)

{
  _ZN14DataStructures5QueueIP6PacketE4PushERKS2_();
  return;
}



void _ZNK7RakPeer27GetRemoteSystemFromPlayerIDE8PlayerID(void)

{
  _ZNK7RakPeer27GetRemoteSystemFromPlayerIDE8PlayerID();
  return;
}



void _ZN7RakPeer16DeallocatePacketEP6Packet(void)

{
  _ZN7RakPeer16DeallocatePacketEP6Packet();
  return;
}



void _ZN7RakPeer29RegisterAsRemoteProcedureCallEiNSt6__ndk18functionIFvP13RPCParametersEEE(void)

{
  _ZN7RakPeer29RegisterAsRemoteProcedureCallEiNSt6__ndk18functionIFvP13RPCParametersEEE();
  return;
}



void _ZN7RakPeer31UnregisterAsRemoteProcedureCallEi(void)

{
  _ZN7RakPeer31UnregisterAsRemoteProcedureCallEi();
  return;
}



void _ZN7RakPeer3RPCEiPKcj14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList(void)

{
  _ZN7RakPeer3RPCEiPKcj14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList();
  return;
}



void _ZN7RakPeer3RPCEiPN6RakNet9BitStreamE14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList
               (void)

{
  _ZN7RakPeer3RPCEiPN6RakNet9BitStreamE14PacketPriority17PacketReliabilityc8PlayerIDP13BroadcastList
            ();
  return;
}



void _ZN7RakPeer23CloseConnectionInternalE8PlayerID22EConnectionCloseReason(void)

{
  _ZN7RakPeer23CloseConnectionInternalE8PlayerID22EConnectionCloseReason();
  return;
}



void _ZN7RakPeer4PingE8PlayerID(void)

{
  _ZN7RakPeer4PingE8PlayerID();
  return;
}



void _ZN7RakPeer12PingInternalE8PlayerIDb(void)

{
  _ZN7RakPeer12PingInternalE8PlayerIDb();
  return;
}



void _ZN7RakPeer4PingEPKctb(void)

{
  _ZN7RakPeer4PingEPKctb();
  return;
}



void _ZNK7RakPeer14GetAveragePingE8PlayerID(void)

{
  _ZNK7RakPeer14GetAveragePingE8PlayerID();
  return;
}



void _ZNKSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE4findIS2_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_PvEEEERKT_
               (void)

{
  _ZNKSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE4findIS2_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_PvEEEERKT_
            ();
  return;
}



void _ZNKSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE4findIS2_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
               (void)

{
  _ZNKSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE4findIS2_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
            ();
  return;
}



void _ZNK7RakPeer11GetLastPingE8PlayerID(void)

{
  _ZNK7RakPeer11GetLastPingE8PlayerID();
  return;
}



void _ZNK7RakPeer13GetLowestPingE8PlayerID(void)

{
  _ZNK7RakPeer13GetLowestPingE8PlayerID();
  return;
}



void _ZN7RakPeer17SetOccasionalPingEb(void)

{
  _ZN7RakPeer17SetOccasionalPingEb();
  return;
}



void _ZN7RakPeer14SetTimeoutTimeEj8PlayerID(void)

{
  _ZN7RakPeer14SetTimeoutTimeEj8PlayerID();
  return;
}



void _ZN7RakPeer27GetRemoteSystemFromPlayerIDE8PlayerID(void)

{
  _ZN7RakPeer27GetRemoteSystemFromPlayerIDE8PlayerID();
  return;
}



void _ZN7RakPeer10SetMTUSizeEi(void)

{
  _ZN7RakPeer10SetMTUSizeEi();
  return;
}



void _ZNK7RakPeer10GetMTUSizeEv(void)

{
  _ZNK7RakPeer10GetMTUSizeEv();
  return;
}



void _ZNK7RakPeer18PlayerIDToDottedIPE8PlayerID(void)

{
  _ZNK7RakPeer18PlayerIDToDottedIPE8PlayerID();
  return;
}



void _ZN7RakPeer34AllowConnectionResponseIPMigrationEb(void)

{
  _ZN7RakPeer34AllowConnectionResponseIPMigrationEb();
  return;
}



void _ZN7RakPeer12AttachPluginEP15PluginInterface(void)

{
  _ZN7RakPeer12AttachPluginEP15PluginInterface();
  return;
}



void _ZN7RakPeer12DetachPluginEP15PluginInterface(void)

{
  _ZN7RakPeer12DetachPluginEP15PluginInterface();
  return;
}



void _ZN7RakPeer14PushBackPacketEP6Packetb(void)

{
  _ZN7RakPeer14PushBackPacketEP6Packetb();
  return;
}



void _ZN14DataStructures5QueueIP6PacketE10PushAtHeadERKS2_j(void)

{
  _ZN14DataStructures5QueueIP6PacketE10PushAtHeadERKS2_j();
  return;
}



void _ZNK7RakPeer13GetStatisticsE8PlayerID(void)

{
  _ZNK7RakPeer13GetStatisticsE8PlayerID();
  return;
}



void _ZN7RakPeer17SetMinimumSendBPSEd(void)

{
  _ZN7RakPeer17SetMinimumSendBPSEd();
  return;
}



void _ZN7RakPeer18SetStartingSendBPSEd(void)

{
  _ZN7RakPeer18SetStartingSendBPSEd();
  return;
}



void _ZN7RakPeer32AssignPlayerIDToRemoteSystemListE8PlayerIDN18RemoteSystemStruct11ConnectModeE
               (void)

{
  _ZN7RakPeer32AssignPlayerIDToRemoteSystemListE8PlayerIDN18RemoteSystemStruct11ConnectModeE();
  return;
}



void _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKS2_RS4_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_
               (void)

{
  _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKS2_RS4_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_
            ();
  return;
}



void _ZN7RakPeer19AddPacketToProducerEP6Packet(void)

{
  _ZN7RakPeer19AddPacketToProducerEP6Packet();
  return;
}



void _ZN10moodycamel17ReaderWriterQueueIP6PacketLm512EE13inner_enqueueILNS3_14AllocationModeE0EJRKS2_EEEbDpOT0_
               (void)

{
  _ZN10moodycamel17ReaderWriterQueueIP6PacketLm512EE13inner_enqueueILNS3_14AllocationModeE0EJRKS2_EEEbDpOT0_
            ();
  return;
}



void _ZN7RakPeer6SendToE8PlayerIDPKci(void)

{
  _ZN7RakPeer6SendToE8PlayerIDPKci();
  return;
}



void _ZN7RakPeer36ProcessNetworkPacketWithRemoteSystemER18RemoteSystemStruct8PlayerIDPKci(void)

{
  _ZN7RakPeer36ProcessNetworkPacketWithRemoteSystemER18RemoteSystemStruct8PlayerIDPKci();
  return;
}



void _ZN7RakPeer16HandlePingPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket(void)

{
  _ZN7RakPeer16HandlePingPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket();
  return;
}



void _ZN7RakPeer16HandlePongPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket(void)

{
  _ZN7RakPeer16HandlePongPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket();
  return;
}



void _ZN7RakPeer20HandleInternalPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket(void)

{
  _ZN7RakPeer20HandleInternalPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket();
  return;
}



void _ZN7RakPeer28ProcessReliabilityLayerErrorER18RemoteSystemStruct(void)

{
  _ZN7RakPeer28ProcessReliabilityLayerErrorER18RemoteSystemStruct();
  return;
}



void _ZN7RakPeer23UpdateRemoteSystemStateER18RemoteSystemStruct(void)

{
  _ZN7RakPeer23UpdateRemoteSystemStateER18RemoteSystemStruct();
  return;
}



void _ZN7RakPeer26UpdateRemoteSystemIncomingER18RemoteSystemStruct(void)

{
  _ZN7RakPeer26UpdateRemoteSystemIncomingER18RemoteSystemStruct();
  return;
}



void _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE11__do_rehashILb1EEEvm
               (void)

{
  _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDN7RakPeer16PlayerIDAndIndexEEENS_22__unordered_map_hasherIS2_S5_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S5_SA_S8_Lb1EEENS_9allocatorIS5_EEE11__do_rehashILb1EEEvm
            ();
  return;
}



void _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS2_JRKS2_RKS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_
               (void)

{
  _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS2_JRKS2_RKS5_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_
            ();
  return;
}



void _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
               (void)

{
  _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE11__do_rehashILb1EEEvm
            ();
  return;
}



void _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE4findIS2_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
               (void)

{
  _ZNSt6__ndk112__hash_tableINS_17__hash_value_typeI8PlayerIDNS_10shared_ptrI18RemoteSystemStructEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EENS_8equal_toIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_SB_S9_Lb1EEENS_9allocatorIS6_EEE4findIS2_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_
            ();
  return;
}



void _ZNSt6__ndk112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE11__do_rehashILb1EEEvm
               (void)

{
  _ZNSt6__ndk112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE11__do_rehashILb1EEEvm()
  ;
  return;
}



void _ZN22RakPeerUpdateScheduler26ScheduleRemoteSystemUpdateERK18RemoteSystemStruct(void)

{
  _ZN22RakPeerUpdateScheduler26ScheduleRemoteSystemUpdateERK18RemoteSystemStruct();
  return;
}



void _ZNSt6__ndk112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE25__emplace_unique_key_argsIiJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEERKT_DpOT0_
               (void)

{
  _ZNSt6__ndk112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE25__emplace_unique_key_argsIiJRKiEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIiPvEEEEbEERKT_DpOT0_
            ();
  return;
}



void _ZN22RakPeerUpdateScheduler16UpdateOnNextTickERK18RemoteSystemStruct(void)

{
  _ZN22RakPeerUpdateScheduler16UpdateOnNextTickERK18RemoteSystemStruct();
  return;
}



void _ZN22RakPeerUpdateScheduler18GetNextSystemIndexEv(void)

{
  _ZN22RakPeerUpdateScheduler18GetNextSystemIndexEv();
  return;
}



void _ZNSt6__ndk112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE14__erase_uniqueIiEEmRKT_
               (void)

{
  _ZNSt6__ndk112__hash_tableIiNS_4hashIiEENS_8equal_toIiEENS_9allocatorIiEEE14__erase_uniqueIiEEmRKT_
            ();
  return;
}



void _ZN22RakPeerUpdateSchedulerC2ERK28RakPeerUpdateSchedulerParams(void)

{
  _ZN22RakPeerUpdateSchedulerC2ERK28RakPeerUpdateSchedulerParams();
  return;
}



void _ZN22RakPeerUpdateSchedulerD1Ev(void)

{
  _ZN22RakPeerUpdateSchedulerD1Ev();
  return;
}



void _Z8RakSleepj(void)

{
  _Z8RakSleepj();
  return;
}



void _Z10RakSleepNSj(void)

{
  _Z10RakSleepNSj();
  return;
}



void _ZN15RakTaskExecutor12ScheduleTaskENSt6__ndk18functionIFvvEEE(void)

{
  _ZN15RakTaskExecutor12ScheduleTaskENSt6__ndk18functionIFvvEEE();
  return;
}



void _ZNSt6__ndk16vectorINS_8functionIFvvEEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEPS3_OT_
               (void)

{
  _ZNSt6__ndk16vectorINS_8functionIFvvEEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEPS3_OT_();
  return;
}



void _ZN15RakTaskExecutor12ExecuteTasksEv(void)

{
  _ZN15RakTaskExecutor12ExecuteTasksEv();
  return;
}



void _ZN15RakTaskExecutorC1Ev(void)

{
  _ZN15RakTaskExecutorC1Ev();
  return;
}



void _ZN16ReliabilityLayer19InitializeVariablesEv(void)

{
  _ZN16ReliabilityLayer19InitializeVariablesEv();
  return;
}



void _ZN14DataStructures11OrderedListItP18SplitPacketChannelXadL_Z22SplitPacketChannelCompRKtRKS2_EEED2Ev
               (void)

{
  _ZN14DataStructures11OrderedListItP18SplitPacketChannelXadL_Z22SplitPacketChannelCompRKtRKS2_EEED2Ev
            ();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EED2Ev(void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EED2Ev();
  return;
}



void _ZN14DataStructures9RangeListItED2Ev(void)

{
  _ZN14DataStructures9RangeListItED2Ev();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE9FreePagesEv(void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE9FreePagesEv();
  return;
}



void _ZN16ReliabilityLayer10FreeMemoryEv(void)

{
  _ZN16ReliabilityLayer10FreeMemoryEv();
  return;
}



void _ZN16ReliabilityLayer21ResetReliabilityLayerEv(void)

{
  _ZN16ReliabilityLayer21ResetReliabilityLayerEv();
  return;
}



void _ZN16ReliabilityLayer14SetTimeoutTimeEj(void)

{
  _ZN16ReliabilityLayer14SetTimeoutTimeEj();
  return;
}



void _ZN16ReliabilityLayer7SetPingEj(void)

{
  _ZN16ReliabilityLayer7SetPingEj();
  return;
}



void _ZN16ReliabilityLayer38HandleSocketReceiveFromConnectedPlayerEPKci8PlayerIDRN14DataStructures4ListIP15PluginInterfaceEEi
               (void)

{
  _ZN16ReliabilityLayer38HandleSocketReceiveFromConnectedPlayerEPKci8PlayerIDRN14DataStructures4ListIP15PluginInterfaceEEi
            ();
  return;
}



void _ZN14DataStructures9RangeListItE11DeserializeEPN6RakNet9BitStreamE(void)

{
  _ZN14DataStructures9RangeListItE11DeserializeEPN6RakNet9BitStreamE();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE6DeleteEtRS2_(void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE6DeleteEtRS2_();
  return;
}



void _ZN14DataStructures5QueueIP14InternalPacketE4PushERKS2_(void)

{
  _ZN14DataStructures5QueueIP14InternalPacketE4PushERKS2_();
  return;
}



void _ZN16ReliabilityLayer33CreateInternalPacketFromBitStreamEPN6RakNet9BitStreamENS0_4TimeERK8PlayerIDRb
               (void)

{
  _ZN16ReliabilityLayer33CreateInternalPacketFromBitStreamEPN6RakNet9BitStreamENS0_4TimeERK8PlayerIDRb
            ();
  return;
}



void _ZN14DataStructures9RangeListItE6InsertEt(void)

{
  _ZN14DataStructures9RangeListItE6InsertEt();
  return;
}



void _ZN16ReliabilityLayer31DeleteOldUnreliableSplitPacketsEN6RakNet4TimeE(void)

{
  _ZN16ReliabilityLayer31DeleteOldUnreliableSplitPacketsEN6RakNet4TimeE();
  return;
}



void _ZN14DataStructures11OrderedListItP18SplitPacketChannelXadL_Z22SplitPacketChannelCompRKtRKS2_EEE6InsertES4_S6_
               (void)

{
  _ZN14DataStructures11OrderedListItP18SplitPacketChannelXadL_Z22SplitPacketChannelCompRKtRKS2_EEE6InsertES4_S6_
            ();
  return;
}



void _ZN14DataStructures11OrderedListIjP14InternalPacketXadL_Z20SplitPacketIndexCompRKjRKS2_EEE6InsertES4_S6_
               (void)

{
  _ZN14DataStructures11OrderedListIjP14InternalPacketXadL_Z20SplitPacketIndexCompRKjRKS2_EEE6InsertES4_S6_
            ();
  return;
}



void _ZN16ReliabilityLayer30BuildPacketFromSplitPacketListEtN6RakNet4TimeE(void)

{
  _ZN16ReliabilityLayer30BuildPacketFromSplitPacketListEtN6RakNet4TimeE();
  return;
}



void _ZN14DataStructures5QueueIxE4PushERKx(void)

{
  _ZN14DataStructures5QueueIxE4PushERKx();
  return;
}



void _ZN16ReliabilityLayer17AddToOrderingListEP14InternalPacket(void)

{
  _ZN16ReliabilityLayer17AddToOrderingListEP14InternalPacket();
  return;
}



void _ZNK14DataStructures11OrderedListItP18SplitPacketChannelXadL_Z22SplitPacketChannelCompRKtRKS2_EEE15GetIndexFromKeyES4_Pb
               (void)

{
  _ZNK14DataStructures11OrderedListItP18SplitPacketChannelXadL_Z22SplitPacketChannelCompRKtRKS2_EEE15GetIndexFromKeyES4_Pb
            ();
  return;
}



void _ZN16ReliabilityLayer7ReceiveER14InternalPacket(void)

{
  _ZN16ReliabilityLayer7ReceiveER14InternalPacket();
  return;
}



void _ZN16ReliabilityLayer4SendEPKci14PacketPriority17PacketReliabilityhbiN6RakNet4TimeE(void)

{
  _ZN16ReliabilityLayer4SendEPKci14PacketPriority17PacketReliabilityhbiN6RakNet4TimeE();
  return;
}



void _ZN16ReliabilityLayer19BuildInternalPacketEPKci14PacketPriority17PacketReliabilityhbiN6RakNet4TimeE
               (void)

{
  _ZN16ReliabilityLayer19BuildInternalPacketEPKci14PacketPriority17PacketReliabilityhbiN6RakNet4TimeE
            ();
  return;
}



void _ZN16ReliabilityLayer18SendInternalPacketEP14InternalPacketi(void)

{
  _ZN16ReliabilityLayer18SendInternalPacketEP14InternalPacketi();
  return;
}



void _ZN16ReliabilityLayer11SplitPacketEP14InternalPacketi(void)

{
  _ZN16ReliabilityLayer11SplitPacketEP14InternalPacketi();
  return;
}



void _ZN16ReliabilityLayer20DetectLostConnectionEiN6RakNet4TimeE(void)

{
  _ZN16ReliabilityLayer20DetectLostConnectionEiN6RakNet4TimeE();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE6InsertEtRKS2_(void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE6InsertEtRKS2_();
  return;
}



void _ZN16ReliabilityLayer6UpdateE8PlayerIDiN6RakNet4TimeERN14DataStructures4ListIP15PluginInterfaceEE
               (void)

{
  _ZN16ReliabilityLayer6UpdateE8PlayerIDiN6RakNet4TimeERN14DataStructures4ListIP15PluginInterfaceEE
            ();
  return;
}



void _ZN16ReliabilityLayer16GenerateDatagramEPN6RakNet9BitStreamEiPbNS0_4TimeE8PlayerIDRN14DataStructures4ListIP15PluginInterfaceEE
               (void)

{
  _ZN16ReliabilityLayer16GenerateDatagramEPN6RakNet9BitStreamEiPbNS0_4TimeE8PlayerIDRN14DataStructures4ListIP15PluginInterfaceEE
            ();
  return;
}



void _ZN14DataStructures9RangeListItE9SerializeEPN6RakNet9BitStreamEib(void)

{
  _ZN14DataStructures9RangeListItE9SerializeEPN6RakNet9BitStreamEib();
  return;
}



void _ZN16ReliabilityLayer34WriteToBitStreamFromInternalPacketEPN6RakNet9BitStreamEPK14InternalPacket
               (void)

{
  _ZN16ReliabilityLayer34WriteToBitStreamFromInternalPacketEPN6RakNet9BitStreamEPK14InternalPacket()
  ;
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE16InsertBranchDownEtRKS2_PNS_4PageItS2_Li32EEEPNS3_12ReturnActionEPb
               (void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE16InsertBranchDownEtRKS2_PNS_4PageItS2_Li32EEEPNS3_12ReturnActionEPb
            ();
  return;
}



void _ZN14DataStructures5QueueIP14InternalPacketE10PushAtHeadERKS2_j(void)

{
  _ZN14DataStructures5QueueIP14InternalPacketE10PushAtHeadERKS2_j();
  return;
}



void _ZN16ReliabilityLayer14AreAcksWaitingEv(void)

{
  _ZN16ReliabilityLayer14AreAcksWaitingEv();
  return;
}



void _ZN16ReliabilityLayer20SetUnreliableTimeoutEj(void)

{
  _ZN16ReliabilityLayer20SetUnreliableTimeoutEj();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE19FindDeleteRebalanceEtPNS_4PageItS2_Li32EEEPbtPNS3_12ReturnActionERS2_
               (void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE19FindDeleteRebalanceEtPNS_4PageItS2_Li32EEEPbtPNS3_12ReturnActionERS2_
            ();
  return;
}



void _ZN14DataStructures4ListINS_9RangeNodeItEEE6InsertES2_j(void)

{
  _ZN14DataStructures4ListINS_9RangeNodeItEEE6InsertES2_j();
  return;
}



void _ZN14DataStructures11OrderedListItNS_9RangeNodeItEEXadL_ZNS_13RangeNodeCompItEEiRKT_RKNS1_IS4_EEEEE6InsertERKtRKS2_
               (void)

{
  _ZN14DataStructures11OrderedListItNS_9RangeNodeItEEXadL_ZNS_13RangeNodeCompItEEiRKT_RKNS1_IS4_EEEEE6InsertERKtRKS2_
            ();
  return;
}



void _ZN14DataStructures11OrderedListItNS_9RangeNodeItEEXadL_ZNS_13RangeNodeCompItEEiRKT_RKNS1_IS4_EEEEE13RemoveAtIndexEj
               (void)

{
  _ZN14DataStructures11OrderedListItNS_9RangeNodeItEEXadL_ZNS_13RangeNodeCompItEEiRKT_RKNS1_IS4_EEEEE13RemoveAtIndexEj
            ();
  return;
}



void _ZNK16ReliabilityLayer13GetStatisticsEv(void)

{
  _ZNK16ReliabilityLayer13GetStatisticsEv();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE12FixUnderflowEiPNS_4PageItS2_Li32EEEtPNS3_12ReturnActionE
               (void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE12FixUnderflowEiPNS_4PageItS2_Li32EEEtPNS3_12ReturnActionE
            ();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE10RotateLeftEPNS_4PageItS2_Li32EEEiPNS3_12ReturnActionE
               (void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE10RotateLeftEPNS_4PageItS2_Li32EEEiPNS3_12ReturnActionE
            ();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE11RotateRightEPNS_4PageItS2_Li32EEEiPNS3_12ReturnActionE
               (void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE11RotateRightEPNS_4PageItS2_Li32EEEiPNS3_12ReturnActionE
            ();
  return;
}



void _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE14InsertIntoNodeEtRKS2_iPNS_4PageItS2_Li32EEES8_PNS3_12ReturnActionE
               (void)

{
  _ZN14DataStructures9BPlusTreeItP14InternalPacketLi32EE14InsertIntoNodeEtRKS2_iPNS_4PageItS2_Li32EEES8_PNS3_12ReturnActionE
            ();
  return;
}



void _ZN16ReliabilityLayerC2ER16RakPeerInterface(void)

{
  _ZN16ReliabilityLayerC2ER16RakPeerInterface();
  return;
}



void _ZN16ReliabilityLayerD1Ev(void)

{
  _ZN16ReliabilityLayerD1Ev();
  return;
}



void _ZNK26ReliabilityLayerErrorState8GetErrorEv(void)

{
  _ZNK26ReliabilityLayerErrorState8GetErrorEv();
  return;
}



void _ZN26ReliabilityLayerErrorState21RegisterInternalErrorEv(void)

{
  _ZN26ReliabilityLayerErrorState21RegisterInternalErrorEv();
  return;
}



void _ZN26ReliabilityLayerErrorState22RegisterDeadConnectionEv(void)

{
  _ZN26ReliabilityLayerErrorState22RegisterDeadConnectionEv();
  return;
}



void _ZN26ReliabilityLayerErrorState28RegisterDeserializationIssueEv(void)

{
  _ZN26ReliabilityLayerErrorState28RegisterDeserializationIssueEv();
  return;
}



void _ZN26ReliabilityLayerErrorState23RegisterSplitMergeIssueEv(void)

{
  _ZN26ReliabilityLayerErrorState23RegisterSplitMergeIssueEv();
  return;
}



void _ZN26ReliabilityLayerErrorState21RegisterInvalidPacketEv(void)

{
  _ZN26ReliabilityLayerErrorState21RegisterInvalidPacketEv();
  return;
}



void _ZN26ReliabilityLayerErrorState21RegisterChecksumErrorEv(void)

{
  _ZN26ReliabilityLayerErrorState21RegisterChecksumErrorEv();
  return;
}



void _ZN11SocketLayer17CreateBoundSocketEtPKc(void)

{
  _ZN11SocketLayer17CreateBoundSocketEtPKc();
  return;
}



void _ZN11SocketLayer14DomainNameToIPEPKc(void)

{
  _ZN11SocketLayer14DomainNameToIPEPKc();
  return;
}



void _ZN11SocketLayer8RecvFromEiP27RakPacketProcessorInterfacePi(void)

{
  _ZN11SocketLayer8RecvFromEiP27RakPacketProcessorInterfacePi();
  return;
}



void _ZN11SocketLayer6SendToEiPKcijt(void)

{
  _ZN11SocketLayer6SendToEiPKcijt();
  return;
}



void _ZN11SocketLayer7GetMyIPEPA16_c(void)

{
  _ZN11SocketLayer7GetMyIPEPA16_c();
  return;
}



void _ZN11SocketLayer12GetLocalPortEi(void)

{
  _ZN11SocketLayer12GetLocalPortEi();
  return;
}



void _ZN11SocketLayerC1Ev(void)

{
  _ZN11SocketLayerC1Ev();
  return;
}



void _ZN16StringCompressor12AddReferenceEv(void)

{
  _ZN16StringCompressor12AddReferenceEv();
  return;
}



void _ZN16StringCompressorC1Ev(void)

{
  _ZN16StringCompressorC1Ev();
  return;
}



void _ZN16StringCompressor15RemoveReferenceEv(void)

{
  _ZN16StringCompressor15RemoveReferenceEv();
  return;
}



void _ZN16StringCompressorD1Ev(void)

{
  _ZN16StringCompressorD1Ev();
  return;
}



void _ZN14DataStructures11OrderedListIiNS_3MapIiP19HuffmanEncodingTreeXadL_ZNS_23defaultMapKeyComparisonIiEEiRKT_S7_EEE7MapNodeEXadL_ZNS8_18NodeComparisonFuncERKiRKS9_EEE6InsertESB_SD_
               (void)

{
  _ZN14DataStructures11OrderedListIiNS_3MapIiP19HuffmanEncodingTreeXadL_ZNS_23defaultMapKeyComparisonIiEEiRKT_S7_EEE7MapNodeEXadL_ZNS8_18NodeComparisonFuncERKiRKS9_EEE6InsertESB_SD_
            ();
  return;
}



void _ZN14DataStructures3MapIiP19HuffmanEncodingTreeXadL_ZNS_23defaultMapKeyComparisonIiEEiRKT_S6_EEED2Ev
               (void)

{
  _ZN14DataStructures3MapIiP19HuffmanEncodingTreeXadL_ZNS_23defaultMapKeyComparisonIiEEiRKT_S6_EEED2Ev
            ();
  return;
}



void _ZN9RakClientD1Ev(void)

{
  _ZN9RakClientD1Ev();
  return;
}



void _ZN9RakClient28HandleConnectionBannedPacketE8PlayerIDPKci(void)

{
  _ZN9RakClient28HandleConnectionBannedPacketE8PlayerIDPKci();
  return;
}



void _ZN9RakClient37HandleNoFreeIncomingConnectionsPacketE8PlayerIDPKci(void)

{
  _ZN9RakClient37HandleNoFreeIncomingConnectionsPacketE8PlayerIDPKci();
  return;
}



void _ZN9RakClient26HandleOpenConnectionPacketE8PlayerIDPKci(void)

{
  _ZN9RakClient26HandleOpenConnectionPacketE8PlayerIDPKci();
  return;
}



void _ZN9RakClient28HandleConnectionFailedPacketE8PlayerIDPKci(void)

{
  _ZN9RakClient28HandleConnectionFailedPacketE8PlayerIDPKci();
  return;
}



void _ZN9RakClient20ProcessNetworkPacketEjtPKci(void)

{
  _ZN9RakClient20ProcessNetworkPacketEjtPKci();
  return;
}



void _ZNK9RakClient26GenerateAuthResponsePacketEPKhiPN6RakNet9BitStreamE(void)

{
  _ZNK9RakClient26GenerateAuthResponsePacketEPKhiPN6RakNet9BitStreamE();
  return;
}



void _ZN9RakClient30HandleConnectionAcceptedPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket
               (void)

{
  _ZN9RakClient30HandleConnectionAcceptedPacketER18RemoteSystemStruct8PlayerIDR14InternalPacket();
  return;
}



void pthread_attr_setdetachstate(void)

{
  pthread_attr_setdetachstate();
  return;
}



void inet_ntoa(void)

{
  inet_ntoa();
  return;
}



void inet_addr(void)

{
  inet_addr();
  return;
}



void setsockopt(void)

{
  setsockopt();
  return;
}



void gethostbyname(void)

{
  gethostbyname();
  return;
}



void recvmmsg(void)

{
  recvmmsg();
  return;
}



void gethostname(void)

{
  gethostname();
  return;
}



void getsockname(void)

{
  getsockname();
  return;
}



void mz_crypt_rand(void)

{
  mz_crypt_rand();
  return;
}



void mz_crypt_crc32_update(void)

{
  mz_crypt_crc32_update();
  return;
}



void mz_path_remove_slash(void)

{
  mz_path_remove_slash();
  return;
}



void mz_path_compare_wc(void)

{
  mz_path_compare_wc();
  return;
}



void mz_stream_open(void)

{
  mz_stream_open();
  return;
}



void mz_stream_is_open(void)

{
  mz_stream_is_open();
  return;
}



void mz_stream_read(void)

{
  mz_stream_read();
  return;
}



void mz_stream_read_uint16(void)

{
  mz_stream_read_uint16();
  return;
}



void mz_stream_read_uint32(void)

{
  mz_stream_read_uint32();
  return;
}



void mz_stream_read_int64(void)

{
  mz_stream_read_int64();
  return;
}



void mz_stream_read_uint64(void)

{
  mz_stream_read_uint64();
  return;
}



void mz_stream_write(void)

{
  mz_stream_write();
  return;
}



void mz_stream_write_uint8(void)

{
  mz_stream_write_uint8();
  return;
}



void mz_stream_write_uint16(void)

{
  mz_stream_write_uint16();
  return;
}



void mz_stream_write_uint32(void)

{
  mz_stream_write_uint32();
  return;
}



void mz_stream_write_int64(void)

{
  mz_stream_write_int64();
  return;
}



void mz_stream_write_uint64(void)

{
  mz_stream_write_uint64();
  return;
}



void mz_stream_copy(void)

{
  mz_stream_copy();
  return;
}



void mz_stream_tell(void)

{
  mz_stream_tell();
  return;
}



void mz_stream_find(void)

{
  mz_stream_find();
  return;
}



void mz_stream_find_reverse(void)

{
  mz_stream_find_reverse();
  return;
}



void mz_stream_close(void)

{
  mz_stream_close();
  return;
}



void mz_stream_set_base(void)

{
  mz_stream_set_base();
  return;
}



void mz_stream_get_prop_int64(void)

{
  mz_stream_get_prop_int64();
  return;
}



void mz_stream_set_prop_int64(void)

{
  mz_stream_set_prop_int64();
  return;
}



void mz_stream_delete(void)

{
  mz_stream_delete();
  return;
}



void mz_stream_raw_create(void)

{
  mz_stream_raw_create();
  return;
}



void mz_stream_mem_open(void)

{
  mz_stream_mem_open();
  return;
}



void mz_stream_mem_seek(void)

{
  mz_stream_mem_seek();
  return;
}



void mz_stream_mem_close(void)

{
  mz_stream_mem_close();
  return;
}



void mz_stream_mem_set_buffer(void)

{
  mz_stream_mem_set_buffer();
  return;
}



void mz_stream_mem_get_buffer(void)

{
  mz_stream_mem_get_buffer();
  return;
}



void mz_stream_mem_get_buffer_at(void)

{
  mz_stream_mem_get_buffer_at();
  return;
}



void mz_stream_mem_set_buffer_limit(void)

{
  mz_stream_mem_set_buffer_limit();
  return;
}



void mz_stream_mem_create(void)

{
  mz_stream_mem_create();
  return;
}



void mz_stream_mem_delete(void)

{
  mz_stream_mem_delete();
  return;
}



void mz_zip_extrafield_contains(void)

{
  mz_zip_extrafield_contains();
  return;
}



void mz_zip_entry_read_close(void)

{
  mz_zip_entry_read_close();
  return;
}



void mz_zip_entry_write_close(void)

{
  mz_zip_entry_write_close();
  return;
}



void mz_stream_pkcrypt_create(void)

{
  mz_stream_pkcrypt_create();
  return;
}



void mz_stream_pkcrypt_set_password(void)

{
  mz_stream_pkcrypt_set_password();
  return;
}



void mz_stream_pkcrypt_set_verify(void)

{
  mz_stream_pkcrypt_set_verify();
  return;
}



void mz_stream_zlib_create(void)

{
  mz_stream_zlib_create();
  return;
}



void mz_os_is_dir_separator(void)

{
  mz_os_is_dir_separator();
  return;
}



void mz_zip_locate_next_entry(void)

{
  mz_zip_locate_next_entry();
  return;
}



void mz_os_rand(void)

{
  mz_os_rand();
  return;
}



void zng_crc32(void)

{
  zng_crc32();
  return;
}



void zng_deflateInit2(void)

{
  zng_deflateInit2();
  return;
}



void zng_inflateInit2(void)

{
  zng_inflateInit2();
  return;
}



void zng_inflate(void)

{
  zng_inflate();
  return;
}



void zng_deflate(void)

{
  zng_deflate();
  return;
}



void zng_inflateEnd(void)

{
  zng_inflateEnd();
  return;
}



void zng_deflateEnd(void)

{
  zng_deflateEnd();
  return;
}



void strdup(void)

{
  strdup();
  return;
}



void unlink(void)

{
  unlink();
  return;
}



void utime(void)

{
  utime();
  return;
}



void chmod(void)

{
  chmod();
  return;
}



void mz_os_make_dir(void)

{
  mz_os_make_dir();
  return;
}



void symlink(void)

{
  symlink();
  return;
}



void strncat(void)

{
  strncat();
  return;
}



void mz_stream_os_create(void)

{
  mz_stream_os_create();
  return;
}



void mz_stream_os_open(void)

{
  mz_stream_os_open();
  return;
}



void mz_stream_os_read(void)

{
  mz_stream_os_read();
  return;
}



void mz_stream_os_close(void)

{
  mz_stream_os_close();
  return;
}



void mz_stream_os_delete(void)

{
  mz_stream_os_delete();
  return;
}



void fseeko(void)

{
  fseeko();
  return;
}



void ftello(void)

{
  ftello();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc();
  return;
}



void posix_memalign(void)

{
  posix_memalign();
  return;
}



void raise(void)

{
  raise();
  return;
}



void modf(void)

{
  modf();
  return;
}



void _ZTHN10ALCcontext13sLocalContextE(void)

{
  _ZTHN10ALCcontext13sLocalContextE();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  return;
}



void ldexpf(void)

{
  ldexpf();
  return;
}



void log2f(void)

{
  log2f();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  return;
}



void _ZNSt6__ndk116generic_categoryEv(void)

{
  _ZNSt6__ndk116generic_categoryEv();
  return;
}



void _ZNSt6__ndk112system_errorC2ENS_10error_codeE(void)

{
  _ZNSt6__ndk112system_errorC2ENS_10error_codeE();
  return;
}



void _ZNSt6__ndk112system_errorD2Ev(void)

{
  _ZNSt6__ndk112system_errorD2Ev();
  return;
}



void _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm(void)

{
  _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  return;
}



void _ZNSt6__ndk18ios_base4swapERS0_(void)

{
  _ZNSt6__ndk18ios_base4swapERS0_();
  return;
}



void _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4swapERS3_(void)

{
  _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4swapERS3_();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4peekEv(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKc();
  return;
}



void sinhf(void)

{
  sinhf();
  return;
}



void hypotf(void)

{
  hypotf();
  return;
}



void cbrtf(void)

{
  cbrtf();
  return;
}



void clearerr(void)

{
  clearerr();
  return;
}



void rewind(void)

{
  rewind();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERf(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERf();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERj(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERj();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERi(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERi();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERm(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERm();
  return;
}



void cos(void)

{
  cos();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEv(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEv();
  return;
}



void INT123_frame_bitrate(void)

{
  INT123_frame_bitrate();
  return;
}



void INT123_frame_freq(void)

{
  INT123_frame_freq();
  return;
}



void INT123_read_frame(void)

{
  INT123_read_frame();
  return;
}



void INT123_set_pointer(void)

{
  INT123_set_pointer();
  return;
}



void INT123_compute_bpf(void)

{
  INT123_compute_bpf();
  return;
}



void mpg123_tpf(void)

{
  mpg123_tpf();
  return;
}



void mpg123_position_64(void)

{
  mpg123_position_64();
  return;
}



void INT123_frame_init_par(void)

{
  INT123_frame_init_par();
  return;
}



void mpg123_reset_eq(void)

{
  mpg123_reset_eq();
  return;
}



void INT123_frame_index_setup(void)

{
  INT123_frame_index_setup();
  return;
}



void INT123_frame_dither_init(void)

{
  INT123_frame_dither_init();
  return;
}



void INT123_frame_outbuffer(void)

{
  INT123_frame_outbuffer();
  return;
}



void INT123_frame_buffers(void)

{
  INT123_frame_buffers();
  return;
}



void INT123_frame_buffers_reset(void)

{
  INT123_frame_buffers_reset();
  return;
}



void INT123_frame_fill_toc(void)

{
  INT123_frame_fill_toc();
  return;
}



void INT123_frame_reset(void)

{
  INT123_frame_reset();
  return;
}



void INT123_frame_exit(void)

{
  INT123_frame_exit();
  return;
}



void INT123_frame_index_find(void)

{
  INT123_frame_index_find();
  return;
}



void INT123_frame_ins2outs(void)

{
  INT123_frame_ins2outs();
  return;
}



void INT123_frame_outs(void)

{
  INT123_frame_outs();
  return;
}



void INT123_frame_expect_outsamples(void)

{
  INT123_frame_expect_outsamples();
  return;
}



void INT123_frame_gapless_init(void)

{
  INT123_frame_gapless_init();
  return;
}



void INT123_frame_gapless_realinit(void)

{
  INT123_frame_gapless_realinit();
  return;
}



void INT123_frame_gapless_update(void)

{
  INT123_frame_gapless_update();
  return;
}



void INT123_frame_set_frameseek(void)

{
  INT123_frame_set_frameseek();
  return;
}



void INT123_frame_skip(void)

{
  INT123_frame_skip();
  return;
}



void INT123_frame_set_seek(void)

{
  INT123_frame_set_seek();
  return;
}



void INT123_do_rva(void)

{
  INT123_do_rva();
  return;
}



void mpg123_framepos_64(void)

{
  mpg123_framepos_64();
  return;
}



void INT123_frame_output_format(void)

{
  INT123_frame_output_format();
  return;
}



void mpg123_fmt_all(void)

{
  mpg123_fmt_all();
  return;
}



void mpg123_format2(void)

{
  mpg123_format2();
  return;
}



void mpg123_fmt2(void)

{
  mpg123_fmt2();
  return;
}



void mpg123_fmt_support(void)

{
  mpg123_fmt_support();
  return;
}



void INT123_invalidate_format(void)

{
  INT123_invalidate_format();
  return;
}



void INT123_decoder_synth_bytes(void)

{
  INT123_decoder_synth_bytes();
  return;
}



void INT123_samples_to_bytes(void)

{
  INT123_samples_to_bytes();
  return;
}



void INT123_bytes_to_samples(void)

{
  INT123_bytes_to_samples();
  return;
}



void INT123_outblock_bytes(void)

{
  INT123_outblock_bytes();
  return;
}



void swap_endian(void)

{
  swap_endian();
  return;
}



void INT123_postprocess_buffer(void)

{
  INT123_postprocess_buffer();
  return;
}



void INT123_parse_new_id3(void)

{
  INT123_parse_new_id3();
  return;
}



void INT123_fi_add(void)

{
  INT123_fi_add();
  return;
}



void INT123_getcpuflags(void)

{
  INT123_getcpuflags();
  return;
}



void INT123_defdec(void)

{
  INT123_defdec();
  return;
}



void INT123_decclass(void)

{
  INT123_decclass();
  return;
}



void INT123_init_icy(void)

{
  INT123_init_icy();
  return;
}



void INT123_init_id3(void)

{
  INT123_init_id3();
  return;
}



void INT123_bc_prepare(void)

{
  INT123_bc_prepare();
  return;
}



void INT123_fi_init(void)

{
  INT123_fi_init();
  return;
}



void INT123_fi_resize(void)

{
  INT123_fi_resize();
  return;
}



void INT123_open_bad(void)

{
  INT123_open_bad();
  return;
}



void INT123_reset_id3(void)

{
  INT123_reset_id3();
  return;
}



void INT123_reset_icy(void)

{
  INT123_reset_icy();
  return;
}



void INT123_dither_table_init(void)

{
  INT123_dither_table_init();
  return;
}



void INT123_fi_reset(void)

{
  INT123_fi_reset();
  return;
}



void INT123_fi_exit(void)

{
  INT123_fi_exit();
  return;
}



void INT123_exit_id3(void)

{
  INT123_exit_id3();
  return;
}



void INT123_clear_icy(void)

{
  INT123_clear_icy();
  return;
}



void INT123_bc_cleanup(void)

{
  INT123_bc_cleanup();
  return;
}



void INT123_ntom_ins2outs(void)

{
  INT123_ntom_ins2outs();
  return;
}



void INT123_ntom_frmouts(void)

{
  INT123_ntom_frmouts();
  return;
}



void INT123_ntom_frame_outsamples(void)

{
  INT123_ntom_frame_outsamples();
  return;
}



void INT123_ntom_frameoff(void)

{
  INT123_ntom_frameoff();
  return;
}



void INT123_ntom_set_ntom(void)

{
  INT123_ntom_set_ntom();
  return;
}



void INT123_dct64(void)

{
  INT123_dct64();
  return;
}



void INT123_do_equalizer(void)

{
  INT123_do_equalizer();
  return;
}



void mpg123_free_string(void)

{
  mpg123_free_string();
  return;
}



void INT123_id3_link(void)

{
  INT123_id3_link();
  return;
}



void INT123_id3_to_utf8(void)

{
  INT123_id3_to_utf8();
  return;
}



void store_id3v2(void)

{
  store_id3v2();
  return;
}



void mpg123_init_string(void)

{
  mpg123_init_string();
  return;
}



void mpg123_move_string(void)

{
  mpg123_move_string();
  return;
}



void mpg123_same_string(void)

{
  mpg123_same_string();
  return;
}



void INT123_safe_realloc(void)

{
  INT123_safe_realloc();
  return;
}



void mpg123_grow_string(void)

{
  mpg123_grow_string();
  return;
}



void INT123_set_synth_functions(void)

{
  INT123_set_synth_functions();
  return;
}



void INT123_synth_ntom_s32(void)

{
  INT123_synth_ntom_s32();
  return;
}



void INT123_synth_ntom_real(void)

{
  INT123_synth_ntom_real();
  return;
}



void INT123_synth_ntom_8bit(void)

{
  INT123_synth_ntom_8bit();
  return;
}



void INT123_synth_ntom(void)

{
  INT123_synth_ntom();
  return;
}



void INT123_make_conv16to8_table(void)

{
  INT123_make_conv16to8_table();
  return;
}



void INT123_init_layer3_stuff(void)

{
  INT123_init_layer3_stuff();
  return;
}



void INT123_init_layer12_stuff(void)

{
  INT123_init_layer12_stuff();
  return;
}



void INT123_frame_cpu_opt(void)

{
  INT123_frame_cpu_opt();
  return;
}



void INT123_dectype(void)

{
  INT123_dectype();
  return;
}



void INT123_bc_poolsize(void)

{
  INT123_bc_poolsize();
  return;
}



void INT123_bc_fill(void)

{
  INT123_bc_fill();
  return;
}



void INT123_feed_more(void)

{
  INT123_feed_more();
  return;
}



void INT123_feed_set_pos(void)

{
  INT123_feed_set_pos();
  return;
}



void INT123_open_feed(void)

{
  INT123_open_feed();
  return;
}



void INT123_open_stream(void)

{
  INT123_open_stream();
  return;
}



void INT123_compat_open(void)

{
  INT123_compat_open();
  return;
}



void INT123_open_stream_handle(void)

{
  INT123_open_stream_handle();
  return;
}



void INT123_compat_close(void)

{
  INT123_compat_close();
  return;
}



void __read_chk(void)

{
  __read_chk();
  return;
}



void lseek(void)

{
  lseek();
  return;
}



void mpg123_par(void)

{
  mpg123_par();
  return;
}



void mpg123_getpar(void)

{
  mpg123_getpar();
  return;
}



void mpg123_open_64(void)

{
  mpg123_open_64();
  return;
}



void INT123_open_fixed_post(void)

{
  INT123_open_fixed_post();
  return;
}



void mpg123_scan(void)

{
  mpg123_scan();
  return;
}



void mpg123_tell_64(void)

{
  mpg123_tell_64();
  return;
}



void mpg123_open_fixed_64(void)

{
  mpg123_open_fixed_64();
  return;
}



void mpg123_open_fd_64(void)

{
  mpg123_open_fd_64();
  return;
}



void mpg123_open_handle_64(void)

{
  mpg123_open_handle_64();
  return;
}



void mpg123_replace_reader_64(void)

{
  mpg123_replace_reader_64();
  return;
}



void mpg123_replace_reader_handle_64(void)

{
  mpg123_replace_reader_handle_64();
  return;
}



void INT123_decode_update(void)

{
  INT123_decode_update();
  return;
}



void INT123_synth_ntom_set_step(void)

{
  INT123_synth_ntom_set_step();
  return;
}



void mpg123_framebyframe_decode_64(void)

{
  mpg123_framebyframe_decode_64();
  return;
}



void mpg123_decode_frame_64(void)

{
  mpg123_decode_frame_64();
  return;
}



void mpg123_decode(void)

{
  mpg123_decode();
  return;
}



void mpg123_timeframe_64(void)

{
  mpg123_timeframe_64();
  return;
}



void mpg123_tellframe_64(void)

{
  mpg123_tellframe_64();
  return;
}



void mpg123_tell_stream_64(void)

{
  mpg123_tell_stream_64();
  return;
}



void mpg123_seek_64(void)

{
  mpg123_seek_64();
  return;
}



void mpg123_feedseek_64(void)

{
  mpg123_feedseek_64();
  return;
}



void mpg123_seek_frame_64(void)

{
  mpg123_seek_frame_64();
  return;
}



void mpg123_set_filesize_64(void)

{
  mpg123_set_filesize_64();
  return;
}



void mpg123_framelength_64(void)

{
  mpg123_framelength_64();
  return;
}



void mpg123_length_64(void)

{
  mpg123_length_64();
  return;
}



void INT123_icy2utf8(void)

{
  INT123_icy2utf8();
  return;
}



void mpg123_store_utf8(void)

{
  mpg123_store_utf8();
  return;
}



void mpg123_set_string(void)

{
  mpg123_set_string();
  return;
}



void mpg123_index_64(void)

{
  mpg123_index_64();
  return;
}



void mpg123_set_index_64(void)

{
  mpg123_set_index_64();
  return;
}



void INT123_fi_set(void)

{
  INT123_fi_set();
  return;
}



void INT123_compat_strdup(void)

{
  INT123_compat_strdup();
  return;
}



void exp2(void)

{
  exp2();
  return;
}



void INT123_dct64_real_neon64(void)

{
  INT123_dct64_real_neon64();
  return;
}



void INT123_synth_1to1_neon64_accurate_asm(void)

{
  INT123_synth_1to1_neon64_accurate_asm();
  return;
}



void INT123_synth_1to1_s_neon64_accurate_asm(void)

{
  INT123_synth_1to1_s_neon64_accurate_asm();
  return;
}



void INT123_synth_1to1_s32_neon64_asm(void)

{
  INT123_synth_1to1_s32_neon64_asm();
  return;
}



void INT123_synth_1to1_s32_s_neon64_asm(void)

{
  INT123_synth_1to1_s32_s_neon64_asm();
  return;
}



void INT123_synth_1to1_real_neon64_asm(void)

{
  INT123_synth_1to1_real_neon64_asm();
  return;
}



void INT123_synth_1to1_real_s_neon64_asm(void)

{
  INT123_synth_1to1_real_s_neon64_asm();
  return;
}



void mpg123_add_substring(void)

{
  mpg123_add_substring();
  return;
}



void sigemptyset(void)

{
  sigemptyset();
  return;
}



void sigsetjmp(void)

{
  sigsetjmp();
  return;
}



void INT123_check_neon(void)

{
  INT123_check_neon();
  return;
}



void siglongjmp(void)

{
                    // WARNING: Subroutine does not return
  siglongjmp();
}



void open(void)

{
  open();
  return;
}



void __write_chk(void)

{
  __write_chk();
  return;
}



void opus_pcm_soft_clip(void)

{
  opus_pcm_soft_clip();
  return;
}



void encode_size(void)

{
  encode_size();
  return;
}



void opus_packet_get_samples_per_frame(void)

{
  opus_packet_get_samples_per_frame();
  return;
}



void opus_packet_parse_impl(void)

{
  opus_packet_parse_impl();
  return;
}



void opus_decoder_init(void)

{
  opus_decoder_init();
  return;
}



void silk_Get_Decoder_Size(void)

{
  silk_Get_Decoder_Size();
  return;
}



void celt_decoder_get_size(void)

{
  celt_decoder_get_size();
  return;
}



void silk_InitDecoder(void)

{
  silk_InitDecoder();
  return;
}



void celt_decoder_init(void)

{
  celt_decoder_init();
  return;
}



void opus_custom_decoder_ctl(void)

{
  opus_custom_decoder_ctl();
  return;
}



void opus_select_arch(void)

{
  opus_select_arch();
  return;
}



void opus_decode_native(void)

{
  opus_decode_native();
  return;
}



void celt_fatal(void)

{
  celt_fatal();
  return;
}



void ec_dec_init(void)

{
  ec_dec_init();
  return;
}



void silk_Decode(void)

{
  silk_Decode();
  return;
}



void ec_dec_bit_logp(void)

{
  ec_dec_bit_logp();
  return;
}



void ec_dec_uint(void)

{
  ec_dec_uint();
  return;
}



void celt_decode_with_ec(void)

{
  celt_decode_with_ec();
  return;
}



void exp(void)

{
  exp();
  return;
}



void opus_packet_get_nb_frames(void)

{
  opus_packet_get_nb_frames();
  return;
}



void opus_encoder_init(void)

{
  opus_encoder_init();
  return;
}



void silk_Get_Encoder_Size(void)

{
  silk_Get_Encoder_Size();
  return;
}



void celt_encoder_get_size(void)

{
  celt_encoder_get_size();
  return;
}



void silk_InitEncoder(void)

{
  silk_InitEncoder();
  return;
}



void celt_encoder_init(void)

{
  celt_encoder_init();
  return;
}



void opus_custom_encoder_ctl(void)

{
  opus_custom_encoder_ctl();
  return;
}



void silk_lin2log(void)

{
  silk_lin2log();
  return;
}



void tonality_analysis_init(void)

{
  tonality_analysis_init();
  return;
}



void compute_stereo_width(void)

{
  compute_stereo_width();
  return;
}



void is_digital_silence(void)

{
  is_digital_silence();
  return;
}



void opus_encode_native(void)

{
  opus_encode_native();
  return;
}



void tonality_analysis_reset(void)

{
  tonality_analysis_reset();
  return;
}



void celt_inner_prod_neon(void)

{
  celt_inner_prod_neon();
  return;
}



void run_analysis(void)

{
  run_analysis();
  return;
}



void opus_packet_pad(void)

{
  opus_packet_pad();
  return;
}



void ec_enc_init(void)

{
  ec_enc_init();
  return;
}



void silk_log2lin(void)

{
  silk_log2lin();
  return;
}



void silk_Encode(void)

{
  silk_Encode();
  return;
}



void ec_enc_bit_logp(void)

{
  ec_enc_bit_logp();
  return;
}



void ec_enc_uint(void)

{
  ec_enc_uint();
  return;
}



void ec_enc_done(void)

{
  ec_enc_done();
  return;
}



void ec_enc_shrink(void)

{
  ec_enc_shrink();
  return;
}



void celt_encode_with_ec(void)

{
  celt_encode_with_ec();
  return;
}



void opus_repacketizer_init(void)

{
  opus_repacketizer_init();
  return;
}



void opus_repacketizer_cat(void)

{
  opus_repacketizer_cat();
  return;
}



void opus_repacketizer_out_range_impl(void)

{
  opus_repacketizer_out_range_impl();
  return;
}



void tonality_get_info(void)

{
  tonality_get_info();
  return;
}



void opus_fft_c(void)

{
  opus_fft_c();
  return;
}



void compute_dense(void)

{
  compute_dense();
  return;
}



void compute_gru(void)

{
  compute_gru();
  return;
}



void silk_CNG_Reset(void)

{
  silk_CNG_Reset();
  return;
}



void silk_CNG(void)

{
  silk_CNG();
  return;
}



void silk_encode_signs(void)

{
  silk_encode_signs();
  return;
}



void silk_decode_signs(void)

{
  silk_decode_signs();
  return;
}



void silk_init_decoder(void)

{
  silk_init_decoder();
  return;
}



void silk_decode_core(void)

{
  silk_decode_core();
  return;
}



void silk_decode_frame(void)

{
  silk_decode_frame();
  return;
}



void silk_decode_parameters(void)

{
  silk_decode_parameters();
  return;
}



void silk_decode_indices(void)

{
  silk_decode_indices();
  return;
}



void silk_decode_pulses(void)

{
  silk_decode_pulses();
  return;
}



void silk_decoder_set_fs(void)

{
  silk_decoder_set_fs();
  return;
}



void ec_dec_icdf(void)

{
  ec_dec_icdf();
  return;
}



void silk_stereo_decode_pred(void)

{
  silk_stereo_decode_pred();
  return;
}



void silk_stereo_decode_mid_only(void)

{
  silk_stereo_decode_mid_only();
  return;
}



void silk_resampler(void)

{
  silk_resampler();
  return;
}



void silk_stereo_MS_to_LR(void)

{
  silk_stereo_MS_to_LR();
  return;
}



void silk_PLC_Reset(void)

{
  silk_PLC_Reset();
  return;
}



void silk_NLSF2A(void)

{
  silk_NLSF2A();
  return;
}



void silk_resampler_init(void)

{
  silk_resampler_init();
  return;
}



void silk_PLC(void)

{
  silk_PLC();
  return;
}



void silk_PLC_glue_frames(void)

{
  silk_PLC_glue_frames();
  return;
}



void silk_NLSF_unpack(void)

{
  silk_NLSF_unpack();
  return;
}



void silk_shell_decoder(void)

{
  silk_shell_decoder();
  return;
}



void ec_enc_icdf(void)

{
  ec_enc_icdf();
  return;
}



void silk_gains_dequant(void)

{
  silk_gains_dequant();
  return;
}



void silk_NLSF_decode(void)

{
  silk_NLSF_decode();
  return;
}



void silk_bwexpander(void)

{
  silk_bwexpander();
  return;
}



void silk_decode_pitch(void)

{
  silk_decode_pitch();
  return;
}



void silk_LPC_analysis_filter(void)

{
  silk_LPC_analysis_filter();
  return;
}



void silk_init_encoder(void)

{
  silk_init_encoder();
  return;
}



void check_control_input(void)

{
  check_control_input();
  return;
}



void silk_control_encoder(void)

{
  silk_control_encoder();
  return;
}



void silk_stereo_encode_pred(void)

{
  silk_stereo_encode_pred();
  return;
}



void silk_stereo_encode_mid_only(void)

{
  silk_stereo_encode_mid_only();
  return;
}



void silk_encode_indices(void)

{
  silk_encode_indices();
  return;
}



void silk_encode_pulses(void)

{
  silk_encode_pulses();
  return;
}



void silk_HP_variable_cutoff(void)

{
  silk_HP_variable_cutoff();
  return;
}



void silk_stereo_LR_to_MS(void)

{
  silk_stereo_LR_to_MS();
  return;
}



void silk_encode_do_VAD_FLP(void)

{
  silk_encode_do_VAD_FLP();
  return;
}



void silk_control_SNR(void)

{
  silk_control_SNR();
  return;
}



void silk_encode_frame_FLP(void)

{
  silk_encode_frame_FLP();
  return;
}



void ec_enc_patch_initial_bits(void)

{
  ec_enc_patch_initial_bits();
  return;
}



void silk_shell_encoder(void)

{
  silk_shell_encoder();
  return;
}



void silk_gains_quant(void)

{
  silk_gains_quant();
  return;
}



void silk_gains_ID(void)

{
  silk_gains_ID();
  return;
}



void silk_interpolate(void)

{
  silk_interpolate();
  return;
}



void silk_LP_variable_cutoff(void)

{
  silk_LP_variable_cutoff();
  return;
}



void silk_NLSF_stabilize(void)

{
  silk_NLSF_stabilize();
  return;
}



void silk_NSQ_c(void)

{
  silk_NSQ_c();
  return;
}



void silk_NSQ_del_dec_c(void)

{
  silk_NSQ_del_dec_c();
  return;
}



void silk_LPC_inverse_pred_gain_neon(void)

{
  silk_LPC_inverse_pred_gain_neon();
  return;
}



void silk_sum_sqr_shift(void)

{
  silk_sum_sqr_shift();
  return;
}



void silk_VAD_Init(void)

{
  silk_VAD_Init();
  return;
}



void silk_VAD_GetSA_Q8_c(void)

{
  silk_VAD_GetSA_Q8_c();
  return;
}



void silk_control_audio_bandwidth(void)

{
  silk_control_audio_bandwidth();
  return;
}



void silk_quant_LTP_gains(void)

{
  silk_quant_LTP_gains();
  return;
}



void silk_VQ_WMat_EC_c(void)

{
  silk_VQ_WMat_EC_c();
  return;
}



void silk_NLSF_encode(void)

{
  silk_NLSF_encode();
  return;
}



void silk_NLSF_VQ(void)

{
  silk_NLSF_VQ();
  return;
}



void silk_NLSF_del_dec_quant(void)

{
  silk_NLSF_del_dec_quant();
  return;
}



void silk_process_NLSFs(void)

{
  silk_process_NLSFs();
  return;
}



void silk_stereo_find_predictor(void)

{
  silk_stereo_find_predictor();
  return;
}



void silk_stereo_quant_pred(void)

{
  silk_stereo_quant_pred();
  return;
}



void silk_ana_filt_bank_1(void)

{
  silk_ana_filt_bank_1();
  return;
}



void silk_sigm_Q15(void)

{
  silk_sigm_Q15();
  return;
}



void silk_A2NLSF(void)

{
  silk_A2NLSF();
  return;
}



void silk_biquad_alt_stride1(void)

{
  silk_biquad_alt_stride1();
  return;
}



void silk_bwexpander_32(void)

{
  silk_bwexpander_32();
  return;
}



void silk_inner_prod_aligned_scale(void)

{
  silk_inner_prod_aligned_scale();
  return;
}



void silk_LPC_inverse_pred_gain_c(void)

{
  silk_LPC_inverse_pred_gain_c();
  return;
}



void silk_LPC_fit(void)

{
  silk_LPC_fit();
  return;
}



void silk_insertion_sort_increasing_all_values_int16(void)

{
  silk_insertion_sort_increasing_all_values_int16();
  return;
}



void silk_NLSF_VQ_weights_laroia(void)

{
  silk_NLSF_VQ_weights_laroia();
  return;
}



void silk_resampler_private_up2_HQ_wrapper(void)

{
  silk_resampler_private_up2_HQ_wrapper();
  return;
}



void silk_resampler_private_IIR_FIR(void)

{
  silk_resampler_private_IIR_FIR();
  return;
}



void silk_resampler_private_down_FIR(void)

{
  silk_resampler_private_down_FIR();
  return;
}



void silk_resampler_down2_3(void)

{
  silk_resampler_down2_3();
  return;
}



void silk_resampler_down2(void)

{
  silk_resampler_down2();
  return;
}



void silk_resampler_private_AR2(void)

{
  silk_resampler_private_AR2();
  return;
}



void silk_resampler_private_up2_HQ(void)

{
  silk_resampler_private_up2_HQ();
  return;
}



void silk_insertion_sort_increasing(void)

{
  silk_insertion_sort_increasing();
  return;
}



void hysteresis_decision(void)

{
  hysteresis_decision();
  return;
}



void celt_lcg_rand(void)

{
  celt_lcg_rand();
  return;
}



void compute_band_energies(void)

{
  compute_band_energies();
  return;
}



void normalise_bands(void)

{
  normalise_bands();
  return;
}



void denormalise_bands(void)

{
  denormalise_bands();
  return;
}



void anti_collapse(void)

{
  anti_collapse();
  return;
}



void spreading_decision(void)

{
  spreading_decision();
  return;
}



void haar1(void)

{
  haar1();
  return;
}



void quant_all_bands(void)

{
  quant_all_bands();
  return;
}



void resampling_factor(void)

{
  resampling_factor();
  return;
}



void comb_filter(void)

{
  comb_filter();
  return;
}



void init_caps(void)

{
  init_caps();
  return;
}



void opus_custom_mode_create(void)

{
  opus_custom_mode_create();
  return;
}



void celt_preemphasis(void)

{
  celt_preemphasis();
  return;
}



void ec_tell_frac(void)

{
  ec_tell_frac();
  return;
}



void ec_enc_bits(void)

{
  ec_enc_bits();
  return;
}



void amp2Log2(void)

{
  amp2Log2();
  return;
}



void quant_coarse_energy(void)

{
  quant_coarse_energy();
  return;
}



void clt_compute_allocation(void)

{
  clt_compute_allocation();
  return;
}



void quant_fine_energy(void)

{
  quant_fine_energy();
  return;
}



void quant_energy_finalise(void)

{
  quant_energy_finalise();
  return;
}



void pitch_downsample(void)

{
  pitch_downsample();
  return;
}



void pitch_search(void)

{
  pitch_search();
  return;
}



void remove_doubling(void)

{
  remove_doubling();
  return;
}



void clt_mdct_forward_c(void)

{
  clt_mdct_forward_c();
  return;
}



void renormalise_vector(void)

{
  renormalise_vector();
  return;
}



void ec_dec_bits(void)

{
  ec_dec_bits();
  return;
}



void dual_inner_prod_neon(void)

{
  dual_inner_prod_neon();
  return;
}



void alg_quant(void)

{
  alg_quant();
  return;
}



void alg_unquant(void)

{
  alg_unquant();
  return;
}



void stereo_itheta(void)

{
  stereo_itheta();
  return;
}



void ec_decode(void)

{
  ec_decode();
  return;
}



void isqrt32(void)

{
  isqrt32();
  return;
}



void ec_dec_update(void)

{
  ec_dec_update();
  return;
}



void ec_encode(void)

{
  ec_encode();
  return;
}



void validate_celt_decoder(void)

{
  validate_celt_decoder();
  return;
}



void unquant_coarse_energy(void)

{
  unquant_coarse_energy();
  return;
}



void unquant_fine_energy(void)

{
  unquant_fine_energy();
  return;
}



void unquant_energy_finalise(void)

{
  unquant_energy_finalise();
  return;
}



void _celt_autocorr(void)

{
  _celt_autocorr();
  return;
}



void _celt_lpc(void)

{
  _celt_lpc();
  return;
}



void celt_fir_c(void)

{
  celt_fir_c();
  return;
}



void celt_iir(void)

{
  celt_iir();
  return;
}



void clt_mdct_backward_c(void)

{
  clt_mdct_backward_c();
  return;
}



void encode_pulses(void)

{
  encode_pulses();
  return;
}



void decode_pulses(void)

{
  decode_pulses();
  return;
}



void ec_decode_bin(void)

{
  ec_decode_bin();
  return;
}



void ec_encode_bin(void)

{
  ec_encode_bin();
  return;
}



void opus_fft_impl(void)

{
  opus_fft_impl();
  return;
}



void ec_laplace_encode(void)

{
  ec_laplace_encode();
  return;
}



void ec_laplace_decode(void)

{
  ec_laplace_decode();
  return;
}



void celt_pitch_xcorr_float_neon(void)

{
  celt_pitch_xcorr_float_neon();
  return;
}



void exp_rotation(void)

{
  exp_rotation();
  return;
}



void op_pvq_search_c(void)

{
  op_pvq_search_c();
  return;
}



void silk_apply_sine_window_FLP(void)

{
  silk_apply_sine_window_FLP();
  return;
}



void silk_corrVector_FLP(void)

{
  silk_corrVector_FLP();
  return;
}



void silk_corrMatrix_FLP(void)

{
  silk_corrMatrix_FLP();
  return;
}



void silk_find_pitch_lags_FLP(void)

{
  silk_find_pitch_lags_FLP();
  return;
}



void silk_noise_shape_analysis_FLP(void)

{
  silk_noise_shape_analysis_FLP();
  return;
}



void silk_find_pred_coefs_FLP(void)

{
  silk_find_pred_coefs_FLP();
  return;
}



void silk_process_gains_FLP(void)

{
  silk_process_gains_FLP();
  return;
}



void silk_NSQ_wrapper_FLP(void)

{
  silk_NSQ_wrapper_FLP();
  return;
}



void silk_find_LPC_FLP(void)

{
  silk_find_LPC_FLP();
  return;
}



void silk_find_LTP_FLP(void)

{
  silk_find_LTP_FLP();
  return;
}



void silk_autocorrelation_FLP(void)

{
  silk_autocorrelation_FLP();
  return;
}



void silk_schur_FLP(void)

{
  silk_schur_FLP();
  return;
}



void silk_k2a_FLP(void)

{
  silk_k2a_FLP();
  return;
}



void silk_bwexpander_FLP(void)

{
  silk_bwexpander_FLP();
  return;
}



void silk_LPC_analysis_filter_FLP(void)

{
  silk_LPC_analysis_filter_FLP();
  return;
}



void silk_pitch_analysis_core_FLP(void)

{
  silk_pitch_analysis_core_FLP();
  return;
}



void silk_quant_LTP_gains_FLP(void)

{
  silk_quant_LTP_gains_FLP();
  return;
}



void silk_LTP_scale_ctrl_FLP(void)

{
  silk_LTP_scale_ctrl_FLP();
  return;
}



void silk_LTP_analysis_filter_FLP(void)

{
  silk_LTP_analysis_filter_FLP();
  return;
}



void silk_scale_copy_vector_FLP(void)

{
  silk_scale_copy_vector_FLP();
  return;
}



void silk_process_NLSFs_FLP(void)

{
  silk_process_NLSFs_FLP();
  return;
}



void silk_residual_energy_FLP(void)

{
  silk_residual_energy_FLP();
  return;
}



void silk_energy_FLP(void)

{
  silk_energy_FLP();
  return;
}



void silk_scale_vector_FLP(void)

{
  silk_scale_vector_FLP();
  return;
}



void silk_inner_product_FLP(void)

{
  silk_inner_product_FLP();
  return;
}



void silk_burg_modified_FLP(void)

{
  silk_burg_modified_FLP();
  return;
}



void silk_A2NLSF_FLP(void)

{
  silk_A2NLSF_FLP();
  return;
}



void silk_NLSF2A_FLP(void)

{
  silk_NLSF2A_FLP();
  return;
}



void silk_warped_autocorrelation_FLP(void)

{
  silk_warped_autocorrelation_FLP();
  return;
}



void silk_NSQ_del_dec_neon(void)

{
  silk_NSQ_del_dec_neon();
  return;
}



void silk_noise_shape_quantizer_short_prediction_neon(void)

{
  silk_noise_shape_quantizer_short_prediction_neon();
  return;
}



void silk_NSQ_noise_shape_feedback_loop_neon(void)

{
  silk_NSQ_noise_shape_feedback_loop_neon();
  return;
}



void silk_insertion_sort_decreasing_FLP(void)

{
  silk_insertion_sort_decreasing_FLP();
  return;
}



void opus_cpu_capabilities(void)

{
  opus_cpu_capabilities();
  return;
}



void fgets(void)

{
  fgets();
  return;
}



void _ZN5eastl10UTF8ToUCS4ERPKcS1_Rj(void)

{
  _ZN5eastl10UTF8ToUCS4ERPKcS1_Rj();
  return;
}



void _ZN5eastl10UCS4ToUTF8EjRPc(void)

{
  _ZN5eastl10UCS4ToUTF8EjRPc();
  return;
}



void enet_malloc(void)

{
  enet_malloc();
  return;
}



void enet_free(void)

{
  enet_free();
  return;
}



void enet_socket_create(void)

{
  enet_socket_create();
  return;
}



void enet_socket_bind(void)

{
  enet_socket_bind();
  return;
}



void enet_socket_set_option(void)

{
  enet_socket_set_option();
  return;
}



void enet_socket_get_address(void)

{
  enet_socket_get_address();
  return;
}



void enet_host_random_seed(void)

{
  enet_host_random_seed();
  return;
}



void enet_list_clear(void)

{
  enet_list_clear();
  return;
}



void enet_socket_destroy(void)

{
  enet_socket_destroy();
  return;
}



void enet_peer_queue_outgoing_command(void)

{
  enet_peer_queue_outgoing_command();
  return;
}



void enet_host_bandwidth_throttle(void)

{
  enet_host_bandwidth_throttle();
  return;
}



void enet_time_get(void)

{
  enet_time_get();
  return;
}



void enet_list_insert(void)

{
  enet_list_insert();
  return;
}



void enet_list_remove(void)

{
  enet_list_remove();
  return;
}



void enet_list_move(void)

{
  enet_list_move();
  return;
}



void enet_peer_setup_outgoing_command(void)

{
  enet_peer_setup_outgoing_command();
  return;
}



void enet_peer_throttle(void)

{
  enet_peer_throttle();
  return;
}



void enet_protocol_command_size(void)

{
  enet_protocol_command_size();
  return;
}



void enet_peer_receive(void)

{
  enet_peer_receive();
  return;
}



void enet_peer_reset_queues(void)

{
  enet_peer_reset_queues();
  return;
}



void enet_peer_on_connect(void)

{
  enet_peer_on_connect();
  return;
}



void enet_peer_on_disconnect(void)

{
  enet_peer_on_disconnect();
  return;
}



void enet_peer_ping(void)

{
  enet_peer_ping();
  return;
}



void enet_peer_disconnect(void)

{
  enet_peer_disconnect();
  return;
}



void enet_peer_has_outgoing_commands(void)

{
  enet_peer_has_outgoing_commands();
  return;
}



void enet_peer_queue_acknowledgement(void)

{
  enet_peer_queue_acknowledgement();
  return;
}



void enet_peer_dispatch_incoming_unreliable_commands(void)

{
  enet_peer_dispatch_incoming_unreliable_commands();
  return;
}



void enet_peer_dispatch_incoming_reliable_commands(void)

{
  enet_peer_dispatch_incoming_reliable_commands();
  return;
}



void enet_peer_queue_incoming_command(void)

{
  enet_peer_queue_incoming_command();
  return;
}



void enet_socket_send(void)

{
  enet_socket_send();
  return;
}



void enet_socket_receive(void)

{
  enet_socket_receive();
  return;
}



void enet_socket_wait(void)

{
  enet_socket_wait();
  return;
}



void inet_pton(void)

{
  inet_pton();
  return;
}



void inet_ntop(void)

{
  inet_ntop();
  return;
}



void getnameinfo(void)

{
  getnameinfo();
  return;
}



void sendmsg(void)

{
  sendmsg();
  return;
}



void recvmsg(void)

{
  recvmsg();
  return;
}



void poll(void)

{
  poll();
  return;
}



void SSL_get_early_data_status(void)

{
  SSL_get_early_data_status();
  return;
}



void TLS_client_method(void)

{
  TLS_client_method();
  return;
}



void SSL_CTX_set_default_passwd_cb_userdata(void)

{
  SSL_CTX_set_default_passwd_cb_userdata();
  return;
}



void SSL_connect(void)

{
  SSL_connect();
  return;
}



void SSL_CTX_set_ciphersuites(void)

{
  SSL_CTX_set_ciphersuites();
  return;
}



void SSL_get_version(void)

{
  SSL_get_version();
  return;
}



void SSL_CTX_use_PrivateKey_file(void)

{
  SSL_CTX_use_PrivateKey_file();
  return;
}



void SSL_CTX_set_default_passwd_cb(void)

{
  SSL_CTX_set_default_passwd_cb();
  return;
}



void SSL_CTX_new_ex(void)

{
  SSL_CTX_new_ex();
  return;
}



void SSL_CTX_use_certificate_file(void)

{
  SSL_CTX_use_certificate_file();
  return;
}



void SSL_CTX_add_client_CA(void)

{
  SSL_CTX_add_client_CA();
  return;
}



void SSL_get_ex_data(void)

{
  SSL_get_ex_data();
  return;
}



void d2i_SSL_SESSION(void)

{
  d2i_SSL_SESSION();
  return;
}



void SSL_get0_alpn_selected(void)

{
  SSL_get0_alpn_selected();
  return;
}



void SSL_CTX_check_private_key(void)

{
  SSL_CTX_check_private_key();
  return;
}



void SSL_get_error(void)

{
  SSL_get_error();
  return;
}



void SSL_get0_group_name(void)

{
  SSL_get0_group_name();
  return;
}



void SSL_ctrl(void)

{
  SSL_ctrl();
  return;
}



void SSL_get_current_cipher(void)

{
  SSL_get_current_cipher();
  return;
}



void SSL_read(void)

{
  SSL_read();
  return;
}



void SSL_CTX_set_options(void)

{
  SSL_CTX_set_options();
  return;
}



void i2d_SSL_SESSION(void)

{
  i2d_SSL_SESSION();
  return;
}



void SSL_CTX_set_cipher_list(void)

{
  SSL_CTX_set_cipher_list();
  return;
}



void SSL_CTX_set_srp_username(void)

{
  SSL_CTX_set_srp_username();
  return;
}



void SSL_new(void)

{
  SSL_new();
  return;
}



void SSL_CTX_sess_set_new_cb(void)

{
  SSL_CTX_sess_set_new_cb();
  return;
}



void SSL_CTX_ctrl(void)

{
  SSL_CTX_ctrl();
  return;
}



void SSL_shutdown(void)

{
  SSL_shutdown();
  return;
}



void SSL_CTX_set_msg_callback(void)

{
  SSL_CTX_set_msg_callback();
  return;
}



void SSL_CIPHER_get_name(void)

{
  SSL_CIPHER_get_name();
  return;
}



void SSL_CTX_get_cert_store(void)

{
  SSL_CTX_get_cert_store();
  return;
}



void SSL_CTX_use_certificate(void)

{
  SSL_CTX_use_certificate();
  return;
}



void SSL_CTX_set_default_read_buffer_len(void)

{
  SSL_CTX_set_default_read_buffer_len();
  return;
}



void SSL_SESSION_free(void)

{
  SSL_SESSION_free();
  return;
}



void SSL_get0_verified_chain(void)

{
  SSL_get0_verified_chain();
  return;
}



void SSL_get_shutdown(void)

{
  SSL_get_shutdown();
  return;
}



void SSL_free(void)

{
  SSL_free();
  return;
}



void SSL_set_alpn_protos(void)

{
  SSL_set_alpn_protos();
  return;
}



void SSL_set_session(void)

{
  SSL_set_session();
  return;
}



void SSL_set_ex_data(void)

{
  SSL_set_ex_data();
  return;
}



void SSL_write_early_data(void)

{
  SSL_write_early_data();
  return;
}



void SSL_CTX_set_cert_store(void)

{
  SSL_CTX_set_cert_store();
  return;
}



void SSL_get1_peer_certificate(void)

{
  SSL_get1_peer_certificate();
  return;
}



void SSL_SESSION_get_timeout(void)

{
  SSL_SESSION_get_timeout();
  return;
}



void SSL_CTX_new(void)

{
  SSL_CTX_new();
  return;
}



void SSL_CTX_use_PrivateKey(void)

{
  SSL_CTX_use_PrivateKey();
  return;
}



void SSL_set0_wbio(void)

{
  SSL_set0_wbio();
  return;
}



void SSL_get_verify_result(void)

{
  SSL_get_verify_result();
  return;
}



void SSL_CTX_set_keylog_callback(void)

{
  SSL_CTX_set_keylog_callback();
  return;
}



void SSL_CTX_free(void)

{
  SSL_CTX_free();
  return;
}



void SSL_CTX_set_verify(void)

{
  SSL_CTX_set_verify();
  return;
}



void OPENSSL_init_ssl(void)

{
  OPENSSL_init_ssl();
  return;
}



void SSL_set_connect_state(void)

{
  SSL_set_connect_state();
  return;
}



void SSL_get_certificate(void)

{
  SSL_get_certificate();
  return;
}



void SSL_get_peer_cert_chain(void)

{
  SSL_get_peer_cert_chain();
  return;
}



void SSL_set0_rbio(void)

{
  SSL_set0_rbio();
  return;
}



void SSL_get_peer_signature_type_nid(void)

{
  SSL_get_peer_signature_type_nid();
  return;
}



void SSL_CTX_set_srp_password(void)

{
  SSL_CTX_set_srp_password();
  return;
}



void SSL_version(void)

{
  SSL_version();
  return;
}



void SSL_get_privatekey(void)

{
  SSL_get_privatekey();
  return;
}



void SSL_SESSION_get_max_early_data(void)

{
  SSL_SESSION_get_max_early_data();
  return;
}



void SSL_write(void)

{
  SSL_write();
  return;
}



void TLS_method(void)

{
  TLS_method();
  return;
}



void SSL_CTX_set_post_handshake_auth(void)

{
  SSL_CTX_set_post_handshake_auth();
  return;
}



void SSL_CTX_use_certificate_chain_file(void)

{
  SSL_CTX_use_certificate_chain_file();
  return;
}



void SSL_alert_desc_string_long(void)

{
  SSL_alert_desc_string_long();
  return;
}



void ASN1_STRING_print(void)

{
  ASN1_STRING_print();
  return;
}



void BIO_meth_new(void)

{
  BIO_meth_new();
  return;
}



void X509_STORE_set_flags(void)

{
  X509_STORE_set_flags();
  return;
}



void EVP_DigestUpdate(void)

{
  EVP_DigestUpdate();
  return;
}



void BN_num_bits(void)

{
  BN_num_bits();
  return;
}



void X509V3_EXT_print(void)

{
  X509V3_EXT_print();
  return;
}



void UI_create_method(void)

{
  UI_create_method();
  return;
}



void OCSP_RESPONSE_free(void)

{
  OCSP_RESPONSE_free();
  return;
}



void i2a_ASN1_OBJECT(void)

{
  i2a_ASN1_OBJECT();
  return;
}



void DES_set_odd_parity(void)

{
  DES_set_odd_parity();
  return;
}



void ENGINE_get_first(void)

{
  ENGINE_get_first();
  return;
}



void DES_set_key_unchecked(void)

{
  DES_set_key_unchecked();
  return;
}



void OBJ_find_sigid_algs(void)

{
  OBJ_find_sigid_algs();
  return;
}



void ENGINE_ctrl_cmd(void)

{
  ENGINE_ctrl_cmd();
  return;
}



void UI_method_set_closer(void)

{
  UI_method_set_closer();
  return;
}



void ENGINE_get_next(void)

{
  ENGINE_get_next();
  return;
}



void UI_get_string_type(void)

{
  UI_get_string_type();
  return;
}



void UI_set_result(void)

{
  UI_set_result();
  return;
}



void OSSL_PROVIDER_try_load(void)

{
  OSSL_PROVIDER_try_load();
  return;
}



void X509_NAME_get_index_by_NID(void)

{
  X509_NAME_get_index_by_NID();
  return;
}



void UI_method_set_reader(void)

{
  UI_method_set_reader();
  return;
}



void X509_get_serialNumber(void)

{
  X509_get_serialNumber();
  return;
}



void ENGINE_by_id(void)

{
  ENGINE_by_id();
  return;
}



void ERR_pop_to_mark(void)

{
  ERR_pop_to_mark();
  return;
}



void d2i_X509_bio(void)

{
  d2i_X509_bio();
  return;
}



void BIO_free(void)

{
  BIO_free();
  return;
}



void OSSL_STORE_open_ex(void)

{
  OSSL_STORE_open_ex();
  return;
}



void X509_get_pubkey(void)

{
  X509_get_pubkey();
  return;
}



void PKCS12_free(void)

{
  PKCS12_free();
  return;
}



void ERR_clear_error(void)

{
  ERR_clear_error();
  return;
}



void UI_method_get_reader(void)

{
  UI_method_get_reader();
  return;
}



void BN_print(void)

{
  BN_print();
  return;
}



void X509_verify_cert_error_string(void)

{
  X509_verify_cert_error_string();
  return;
}



void BIO_get_shutdown(void)

{
  BIO_get_shutdown();
  return;
}



void ENGINE_ctrl(void)

{
  ENGINE_ctrl();
  return;
}



void EVP_sha512_256(void)

{
  EVP_sha512_256();
  return;
}



void EVP_PKEY_get1_RSA(void)

{
  EVP_PKEY_get1_RSA();
  return;
}



void RSA_flags(void)

{
  RSA_flags();
  return;
}



void OPENSSL_sk_pop_free(void)

{
  OPENSSL_sk_pop_free();
  return;
}



void X509_get_issuer_name(void)

{
  X509_get_issuer_name();
  return;
}



void X509_load_crl_file(void)

{
  X509_load_crl_file();
  return;
}



void EVP_DigestInit_ex(void)

{
  EVP_DigestInit_ex();
  return;
}



void X509_get0_notBefore(void)

{
  X509_get0_notBefore();
  return;
}



void RSA_free(void)

{
  RSA_free();
  return;
}



void d2i_OCSP_RESPONSE(void)

{
  d2i_OCSP_RESPONSE();
  return;
}



void EVP_sha256(void)

{
  EVP_sha256();
  return;
}



void UI_OpenSSL(void)

{
  UI_OpenSSL();
  return;
}



void OCSP_crl_reason_str(void)

{
  OCSP_crl_reason_str();
  return;
}



void X509_STORE_free(void)

{
  X509_STORE_free();
  return;
}



void OCSP_cert_status_str(void)

{
  OCSP_cert_status_str();
  return;
}



void OSSL_STORE_expect(void)

{
  OSSL_STORE_expect();
  return;
}



void i2d_X509_PUBKEY(void)

{
  i2d_X509_PUBKEY();
  return;
}



void OSSL_LIB_CTX_free(void)

{
  OSSL_LIB_CTX_free();
  return;
}



void UI_get_input_flags(void)

{
  UI_get_input_flags();
  return;
}



void X509_STORE_add_cert(void)

{
  X509_STORE_add_cert();
  return;
}



void ERR_get_error(void)

{
  ERR_get_error();
  return;
}



void MD5_Final(void)

{
  MD5_Final();
  return;
}



void OCSP_check_validity(void)

{
  OCSP_check_validity();
  return;
}



void BIO_set_data(void)

{
  BIO_set_data();
  return;
}



void ERR_error_string_n(void)

{
  ERR_error_string_n();
  return;
}



void EVP_PKEY_get_security_bits(void)

{
  EVP_PKEY_get_security_bits();
  return;
}



void BIO_clear_flags(void)

{
  BIO_clear_flags();
  return;
}



void ERR_peek_last_error(void)

{
  ERR_peek_last_error();
  return;
}



void PEM_write_bio_X509(void)

{
  PEM_write_bio_X509();
  return;
}



void BIO_new_mem_buf(void)

{
  BIO_new_mem_buf();
  return;
}



void OBJ_obj2txt(void)

{
  OBJ_obj2txt();
  return;
}



void OSSL_PROVIDER_available(void)

{
  OSSL_PROVIDER_available();
  return;
}



void X509_NAME_print_ex(void)

{
  X509_NAME_print_ex();
  return;
}



void OSSL_LIB_CTX_load_config(void)

{
  OSSL_LIB_CTX_load_config();
  return;
}



void X509_get0_signature(void)

{
  X509_get0_signature();
  return;
}



void X509_get0_extensions(void)

{
  X509_get0_extensions();
  return;
}



void X509_EXTENSION_get_object(void)

{
  X509_EXTENSION_get_object();
  return;
}



void EVP_PKEY_get_id(void)

{
  EVP_PKEY_get_id();
  return;
}



void ENGINE_load_private_key(void)

{
  ENGINE_load_private_key();
  return;
}



void UI_method_get_closer(void)

{
  UI_method_get_closer();
  return;
}



void X509_NAME_get_entry(void)

{
  X509_NAME_get_entry();
  return;
}



void BIO_set_shutdown(void)

{
  BIO_set_shutdown();
  return;
}



void BIO_meth_set_write(void)

{
  BIO_meth_set_write();
  return;
}



void X509_STORE_set_default_paths(void)

{
  X509_STORE_set_default_paths();
  return;
}



void EVP_sha1(void)

{
  EVP_sha1();
  return;
}



void ENGINE_get_id(void)

{
  ENGINE_get_id();
  return;
}



void ASN1_TIME_print(void)

{
  ASN1_TIME_print();
  return;
}



void OSSL_LIB_CTX_new(void)

{
  OSSL_LIB_CTX_new();
  return;
}



void ERR_peek_error(void)

{
  ERR_peek_error();
  return;
}



void EVP_MD_CTX_free(void)

{
  EVP_MD_CTX_free();
  return;
}



void BIO_puts(void)

{
  BIO_puts();
  return;
}



void ENGINE_set_default(void)

{
  ENGINE_set_default();
  return;
}



void EVP_MD_CTX_new(void)

{
  EVP_MD_CTX_new();
  return;
}



void BIO_set_flags(void)

{
  BIO_set_flags();
  return;
}



void OPENSSL_sk_value(void)

{
  OPENSSL_sk_value();
  return;
}



void ENGINE_free(void)

{
  ENGINE_free();
  return;
}



void X509_PUBKEY_get0_param(void)

{
  X509_PUBKEY_get0_param();
  return;
}



void X509_get0_notAfter(void)

{
  X509_get0_notAfter();
  return;
}



void BIO_meth_set_ctrl(void)

{
  BIO_meth_set_ctrl();
  return;
}



void ASN1_STRING_get0_data(void)

{
  ASN1_STRING_get0_data();
  return;
}



void OBJ_nid2sn(void)

{
  OBJ_nid2sn();
  return;
}



void X509_EXTENSION_get_data(void)

{
  X509_EXTENSION_get_data();
  return;
}



void OSSL_STORE_INFO_get_type(void)

{
  OSSL_STORE_INFO_get_type();
  return;
}



void OSSL_STORE_INFO_free(void)

{
  OSSL_STORE_INFO_free();
  return;
}



void d2i_PKCS12_bio(void)

{
  d2i_PKCS12_bio();
  return;
}



void ENGINE_finish(void)

{
  ENGINE_finish();
  return;
}



void ASN1_STRING_type(void)

{
  ASN1_STRING_type();
  return;
}



void ASN1_STRING_length(void)

{
  ASN1_STRING_length();
  return;
}



void OPENSSL_sk_num(void)

{
  OPENSSL_sk_num();
  return;
}



void BIO_set_init(void)

{
  BIO_set_init();
  return;
}



void OCSP_response_get1_basic(void)

{
  OCSP_response_get1_basic();
  return;
}



void CRYPTO_free(void)

{
  CRYPTO_free();
  return;
}



void EVP_PKEY_free(void)

{
  EVP_PKEY_free();
  return;
}



void OpenSSL_version(void)

{
  OpenSSL_version();
  return;
}



void OSSL_PROVIDER_unload(void)

{
  OSSL_PROVIDER_unload();
  return;
}



void UI_method_set_writer(void)

{
  UI_method_set_writer();
  return;
}



void OSSL_STORE_close(void)

{
  OSSL_STORE_close();
  return;
}



void BIO_meth_free(void)

{
  BIO_meth_free();
  return;
}



void X509_STORE_load_file(void)

{
  X509_STORE_load_file();
  return;
}



void X509_get_signature_nid(void)

{
  X509_get_signature_nid();
  return;
}



void BIO_printf(void)

{
  BIO_printf();
  return;
}



void MD5_Update(void)

{
  MD5_Update();
  return;
}



void i2t_ASN1_OBJECT(void)

{
  i2t_ASN1_OBJECT();
  return;
}



void PKCS12_PBE_add(void)

{
  PKCS12_PBE_add();
  return;
}



void PKCS12_parse(void)

{
  PKCS12_parse();
  return;
}



void X509_LOOKUP_file(void)

{
  X509_LOOKUP_file();
  return;
}



void UI_method_get_writer(void)

{
  UI_method_get_writer();
  return;
}



void OCSP_resp_find_status(void)

{
  OCSP_resp_find_status();
  return;
}



void UI_get0_user_data(void)

{
  UI_get0_user_data();
  return;
}



void RAND_status(void)

{
  RAND_status();
  return;
}



void BIO_s_file(void)

{
  BIO_s_file();
  return;
}



void X509_STORE_load_path(void)

{
  X509_STORE_load_path();
  return;
}



void GENERAL_NAMES_free(void)

{
  GENERAL_NAMES_free();
  return;
}



void X509_STORE_up_ref(void)

{
  X509_STORE_up_ref();
  return;
}



void OCSP_cert_to_id(void)

{
  OCSP_cert_to_id();
  return;
}



void OSSL_STORE_load(void)

{
  OSSL_STORE_load();
  return;
}



void EVP_PKEY_get_group_name(void)

{
  EVP_PKEY_get_group_name();
  return;
}



void X509_get_version(void)

{
  X509_get_version();
  return;
}



void BIO_meth_set_destroy(void)

{
  BIO_meth_set_destroy();
  return;
}



void OCSP_response_status(void)

{
  OCSP_response_status();
  return;
}



void DES_ecb_encrypt(void)

{
  DES_ecb_encrypt();
  return;
}



void ERR_set_mark(void)

{
  ERR_set_mark();
  return;
}



void PEM_read_bio_X509(void)

{
  PEM_read_bio_X509();
  return;
}



void X509_check_issued(void)

{
  X509_check_issued();
  return;
}



void X509_STORE_add_lookup(void)

{
  X509_STORE_add_lookup();
  return;
}



void BIO_ctrl(void)

{
  BIO_ctrl();
  return;
}



void UI_method_set_opener(void)

{
  UI_method_set_opener();
  return;
}



void X509_STORE_add_crl(void)

{
  X509_STORE_add_crl();
  return;
}



void OCSP_response_status_str(void)

{
  OCSP_response_status_str();
  return;
}



void BIO_s_mem(void)

{
  BIO_s_mem();
  return;
}



void X509_get_subject_name(void)

{
  X509_get_subject_name();
  return;
}



void BIO_meth_set_read(void)

{
  BIO_meth_set_read();
  return;
}



void PEM_read_bio_PrivateKey(void)

{
  PEM_read_bio_PrivateKey();
  return;
}



void X509_NAME_ENTRY_get_data(void)

{
  X509_NAME_ENTRY_get_data();
  return;
}



void UI_method_get_opener(void)

{
  UI_method_get_opener();
  return;
}



void EVP_PKEY_get_bits(void)

{
  EVP_PKEY_get_bits();
  return;
}



void ENGINE_init(void)

{
  ENGINE_init();
  return;
}



void ASN1_STRING_to_UTF8(void)

{
  ASN1_STRING_to_UTF8();
  return;
}



void PEM_X509_INFO_read_bio(void)

{
  PEM_X509_INFO_read_bio();
  return;
}



void X509_get_ext_d2i(void)

{
  X509_get_ext_d2i();
  return;
}



void X509_digest(void)

{
  X509_digest();
  return;
}



void PEM_read_bio_X509_AUX(void)

{
  PEM_read_bio_X509_AUX();
  return;
}



void BIO_meth_set_create(void)

{
  BIO_meth_set_create();
  return;
}



void OSSL_STORE_INFO_get1_CERT(void)

{
  OSSL_STORE_INFO_get1_CERT();
  return;
}



void EVP_PKEY_get_bn_param(void)

{
  EVP_PKEY_get_bn_param();
  return;
}



void UI_destroy_method(void)

{
  UI_destroy_method();
  return;
}



void BIO_get_data(void)

{
  BIO_get_data();
  return;
}



void d2i_PrivateKey_bio(void)

{
  d2i_PrivateKey_bio();
  return;
}



void X509_free(void)

{
  X509_free();
  return;
}



void X509_get_X509_PUBKEY(void)

{
  X509_get_X509_PUBKEY();
  return;
}



void OPENSSL_sk_pop(void)

{
  OPENSSL_sk_pop();
  return;
}



void OCSP_basic_verify(void)

{
  OCSP_basic_verify();
  return;
}



void BN_clear_free(void)

{
  BN_clear_free();
  return;
}



void OCSP_CERTID_free(void)

{
  OCSP_CERTID_free();
  return;
}



void BIO_up_ref(void)

{
  BIO_up_ref();
  return;
}



void X509_get0_pubkey(void)

{
  X509_get0_pubkey();
  return;
}



void BIO_new(void)

{
  BIO_new();
  return;
}



void EVP_PKEY_copy_parameters(void)

{
  EVP_PKEY_copy_parameters();
  return;
}



void OSSL_STORE_INFO_get1_PKEY(void)

{
  OSSL_STORE_INFO_get1_PKEY();
  return;
}



void EVP_DigestInit(void)

{
  EVP_DigestInit();
  return;
}



void OCSP_BASICRESP_free(void)

{
  OCSP_BASICRESP_free();
  return;
}



void EVP_DigestFinal_ex(void)

{
  EVP_DigestFinal_ex();
  return;
}



void X509_ALGOR_get0(void)

{
  X509_ALGOR_get0();
  return;
}



void EVP_PKEY_get0_type_name(void)

{
  EVP_PKEY_get0_type_name();
  return;
}



void EVP_get_digestbyname(void)

{
  EVP_get_digestbyname();
  return;
}



void MD5_Init(void)

{
  MD5_Init();
  return;
}



void nghttp2_pq_init(void)

{
  nghttp2_pq_init();
  return;
}



void nghttp2_pq_free(void)

{
  nghttp2_pq_free();
  return;
}



void nghttp2_pq_push(void)

{
  nghttp2_pq_push();
  return;
}



void nghttp2_pq_top(void)

{
  nghttp2_pq_top();
  return;
}



void nghttp2_pq_remove(void)

{
  nghttp2_pq_remove();
  return;
}



void nghttp2_pq_empty(void)

{
  nghttp2_pq_empty();
  return;
}



void nghttp2_pq_size(void)

{
  nghttp2_pq_size();
  return;
}



void nghttp2_map_init(void)

{
  nghttp2_map_init();
  return;
}



void nghttp2_map_free(void)

{
  nghttp2_map_free();
  return;
}



void nghttp2_map_each(void)

{
  nghttp2_map_each();
  return;
}



void nghttp2_map_insert(void)

{
  nghttp2_map_insert();
  return;
}



void nghttp2_map_find(void)

{
  nghttp2_map_find();
  return;
}



void nghttp2_map_remove(void)

{
  nghttp2_map_remove();
  return;
}



void nghttp2_map_size(void)

{
  nghttp2_map_size();
  return;
}



void nghttp2_frame_pack_frame_hd(void)

{
  nghttp2_frame_pack_frame_hd();
  return;
}



void nghttp2_frame_unpack_frame_hd(void)

{
  nghttp2_frame_unpack_frame_hd();
  return;
}



void nghttp2_frame_hd_init(void)

{
  nghttp2_frame_hd_init();
  return;
}



void nghttp2_frame_headers_init(void)

{
  nghttp2_frame_headers_init();
  return;
}



void nghttp2_frame_headers_free(void)

{
  nghttp2_frame_headers_free();
  return;
}



void nghttp2_nv_array_del(void)

{
  nghttp2_nv_array_del();
  return;
}



void nghttp2_frame_priority_free(void)

{
  nghttp2_frame_priority_free();
  return;
}



void nghttp2_frame_rst_stream_init(void)

{
  nghttp2_frame_rst_stream_init();
  return;
}



void nghttp2_frame_rst_stream_free(void)

{
  nghttp2_frame_rst_stream_free();
  return;
}



void nghttp2_frame_settings_init(void)

{
  nghttp2_frame_settings_init();
  return;
}



void nghttp2_frame_settings_free(void)

{
  nghttp2_frame_settings_free();
  return;
}



void nghttp2_frame_push_promise_init(void)

{
  nghttp2_frame_push_promise_init();
  return;
}



void nghttp2_frame_push_promise_free(void)

{
  nghttp2_frame_push_promise_free();
  return;
}



void nghttp2_frame_ping_init(void)

{
  nghttp2_frame_ping_init();
  return;
}



void nghttp2_frame_ping_free(void)

{
  nghttp2_frame_ping_free();
  return;
}



void nghttp2_frame_goaway_init(void)

{
  nghttp2_frame_goaway_init();
  return;
}



void nghttp2_frame_goaway_free(void)

{
  nghttp2_frame_goaway_free();
  return;
}



void nghttp2_frame_window_update_init(void)

{
  nghttp2_frame_window_update_init();
  return;
}



void nghttp2_frame_window_update_free(void)

{
  nghttp2_frame_window_update_free();
  return;
}



void nghttp2_frame_trail_padlen(void)

{
  nghttp2_frame_trail_padlen();
  return;
}



void nghttp2_frame_data_init(void)

{
  nghttp2_frame_data_init();
  return;
}



void nghttp2_frame_data_free(void)

{
  nghttp2_frame_data_free();
  return;
}



void nghttp2_frame_extension_init(void)

{
  nghttp2_frame_extension_init();
  return;
}



void nghttp2_frame_extension_free(void)

{
  nghttp2_frame_extension_free();
  return;
}



void nghttp2_frame_altsvc_init(void)

{
  nghttp2_frame_altsvc_init();
  return;
}



void nghttp2_frame_altsvc_free(void)

{
  nghttp2_frame_altsvc_free();
  return;
}



void nghttp2_frame_origin_init(void)

{
  nghttp2_frame_origin_init();
  return;
}



void nghttp2_frame_origin_free(void)

{
  nghttp2_frame_origin_free();
  return;
}



void nghttp2_frame_priority_update_init(void)

{
  nghttp2_frame_priority_update_init();
  return;
}



void nghttp2_frame_priority_update_free(void)

{
  nghttp2_frame_priority_update_free();
  return;
}



void nghttp2_frame_priority_len(void)

{
  nghttp2_frame_priority_len();
  return;
}



void nghttp2_frame_pack_headers(void)

{
  nghttp2_frame_pack_headers();
  return;
}



void nghttp2_frame_unpack_headers_payload(void)

{
  nghttp2_frame_unpack_headers_payload();
  return;
}



void nghttp2_frame_pack_priority(void)

{
  nghttp2_frame_pack_priority();
  return;
}



void nghttp2_frame_pack_rst_stream(void)

{
  nghttp2_frame_pack_rst_stream();
  return;
}



void nghttp2_frame_unpack_rst_stream_payload(void)

{
  nghttp2_frame_unpack_rst_stream_payload();
  return;
}



void nghttp2_frame_pack_settings(void)

{
  nghttp2_frame_pack_settings();
  return;
}



void nghttp2_frame_pack_settings_payload(void)

{
  nghttp2_frame_pack_settings_payload();
  return;
}



void nghttp2_frame_unpack_settings_payload(void)

{
  nghttp2_frame_unpack_settings_payload();
  return;
}



void nghttp2_frame_unpack_settings_entry(void)

{
  nghttp2_frame_unpack_settings_entry();
  return;
}



void nghttp2_frame_unpack_settings_payload2(void)

{
  nghttp2_frame_unpack_settings_payload2();
  return;
}



void nghttp2_frame_pack_push_promise(void)

{
  nghttp2_frame_pack_push_promise();
  return;
}



void nghttp2_frame_unpack_push_promise_payload(void)

{
  nghttp2_frame_unpack_push_promise_payload();
  return;
}



void nghttp2_frame_pack_ping(void)

{
  nghttp2_frame_pack_ping();
  return;
}



void nghttp2_frame_unpack_ping_payload(void)

{
  nghttp2_frame_unpack_ping_payload();
  return;
}



void nghttp2_frame_pack_goaway(void)

{
  nghttp2_frame_pack_goaway();
  return;
}



void nghttp2_frame_unpack_goaway_payload(void)

{
  nghttp2_frame_unpack_goaway_payload();
  return;
}



void nghttp2_frame_pack_window_update(void)

{
  nghttp2_frame_pack_window_update();
  return;
}



void nghttp2_frame_unpack_window_update_payload(void)

{
  nghttp2_frame_unpack_window_update_payload();
  return;
}



void nghttp2_frame_pack_altsvc(void)

{
  nghttp2_frame_pack_altsvc();
  return;
}



void nghttp2_frame_unpack_altsvc_payload(void)

{
  nghttp2_frame_unpack_altsvc_payload();
  return;
}



void nghttp2_frame_pack_origin(void)

{
  nghttp2_frame_pack_origin();
  return;
}



void nghttp2_frame_unpack_origin_payload(void)

{
  nghttp2_frame_unpack_origin_payload();
  return;
}



void nghttp2_frame_pack_priority_update(void)

{
  nghttp2_frame_pack_priority_update();
  return;
}



void nghttp2_frame_unpack_priority_update_payload(void)

{
  nghttp2_frame_unpack_priority_update_payload();
  return;
}



void nghttp2_frame_iv_copy(void)

{
  nghttp2_frame_iv_copy();
  return;
}



void nghttp2_nv_array_copy(void)

{
  nghttp2_nv_array_copy();
  return;
}



void nghttp2_iv_check(void)

{
  nghttp2_iv_check();
  return;
}



void nghttp2_frame_add_pad(void)

{
  nghttp2_frame_add_pad();
  return;
}



void nghttp2_buf_init(void)

{
  nghttp2_buf_init();
  return;
}



void nghttp2_buf_free(void)

{
  nghttp2_buf_free();
  return;
}



void nghttp2_buf_reset(void)

{
  nghttp2_buf_reset();
  return;
}



void nghttp2_buf_wrap_init(void)

{
  nghttp2_buf_wrap_init();
  return;
}



void nghttp2_bufs_init3(void)

{
  nghttp2_bufs_init3();
  return;
}



void nghttp2_bufs_realloc(void)

{
  nghttp2_bufs_realloc();
  return;
}



void nghttp2_bufs_free(void)

{
  nghttp2_bufs_free();
  return;
}



void nghttp2_bufs_wrap_init(void)

{
  nghttp2_bufs_wrap_init();
  return;
}



void nghttp2_bufs_wrap_init2(void)

{
  nghttp2_bufs_wrap_init2();
  return;
}



void nghttp2_bufs_wrap_free(void)

{
  nghttp2_bufs_wrap_free();
  return;
}



void nghttp2_bufs_len(void)

{
  nghttp2_bufs_len();
  return;
}



void nghttp2_bufs_add(void)

{
  nghttp2_bufs_add();
  return;
}



void nghttp2_bufs_addb(void)

{
  nghttp2_bufs_addb();
  return;
}



void nghttp2_bufs_reset(void)

{
  nghttp2_bufs_reset();
  return;
}



void nghttp2_bufs_next_present(void)

{
  nghttp2_bufs_next_present();
  return;
}



void nghttp2_stream_init(void)

{
  nghttp2_stream_init();
  return;
}



void nghttp2_stream_free(void)

{
  nghttp2_stream_free();
  return;
}



void nghttp2_stream_shutdown(void)

{
  nghttp2_stream_shutdown();
  return;
}



void nghttp2_stream_attach_item(void)

{
  nghttp2_stream_attach_item();
  return;
}



void nghttp2_stream_detach_item(void)

{
  nghttp2_stream_detach_item();
  return;
}



void nghttp2_stream_defer_item(void)

{
  nghttp2_stream_defer_item();
  return;
}



void nghttp2_stream_resume_deferred_item(void)

{
  nghttp2_stream_resume_deferred_item();
  return;
}



void nghttp2_stream_check_deferred_item(void)

{
  nghttp2_stream_check_deferred_item();
  return;
}



void nghttp2_stream_check_deferred_by_flow_control(void)

{
  nghttp2_stream_check_deferred_by_flow_control();
  return;
}



void nghttp2_stream_update_remote_initial_window_size(void)

{
  nghttp2_stream_update_remote_initial_window_size();
  return;
}



void nghttp2_stream_update_local_initial_window_size(void)

{
  nghttp2_stream_update_local_initial_window_size();
  return;
}



void nghttp2_stream_promise_fulfilled(void)

{
  nghttp2_stream_promise_fulfilled();
  return;
}



void nghttp2_data_provider_wrap_v1(void)

{
  nghttp2_data_provider_wrap_v1();
  return;
}



void nghttp2_data_provider_wrap_v2(void)

{
  nghttp2_data_provider_wrap_v2();
  return;
}



void nghttp2_outbound_item_init(void)

{
  nghttp2_outbound_item_init();
  return;
}



void nghttp2_outbound_item_free(void)

{
  nghttp2_outbound_item_free();
  return;
}



void nghttp2_outbound_queue_push(void)

{
  nghttp2_outbound_queue_push();
  return;
}



void nghttp2_outbound_queue_pop(void)

{
  nghttp2_outbound_queue_pop();
  return;
}



void nghttp2_is_fatal(void)

{
  nghttp2_is_fatal();
  return;
}



void nghttp2_session_terminate_session(void)

{
  nghttp2_session_terminate_session();
  return;
}



void nghttp2_session_add_goaway(void)

{
  nghttp2_session_add_goaway();
  return;
}



void nghttp2_session_terminate_session_with_reason(void)

{
  nghttp2_session_terminate_session_with_reason();
  return;
}



void nghttp2_session_is_my_stream_id(void)

{
  nghttp2_session_is_my_stream_id();
  return;
}



void nghttp2_session_get_stream(void)

{
  nghttp2_session_get_stream();
  return;
}



void nghttp2_session_client_new3(void)

{
  nghttp2_session_client_new3();
  return;
}



void nghttp2_session_del(void)

{
  nghttp2_session_del();
  return;
}



void nghttp2_session_add_item(void)

{
  nghttp2_session_add_item();
  return;
}



void nghttp2_session_open_stream(void)

{
  nghttp2_session_open_stream();
  return;
}



void nghttp2_session_add_rst_stream_continue(void)

{
  nghttp2_session_add_rst_stream_continue();
  return;
}



void nghttp2_session_close_stream(void)

{
  nghttp2_session_close_stream();
  return;
}



void nghttp2_session_destroy_stream(void)

{
  nghttp2_session_destroy_stream();
  return;
}



void nghttp2_session_check_request_allowed(void)

{
  nghttp2_session_check_request_allowed();
  return;
}



void nghttp2_session_want_write(void)

{
  nghttp2_session_want_write();
  return;
}



void nghttp2_session_pack_data(void)

{
  nghttp2_session_pack_data();
  return;
}



void nghttp2_session_update_recv_stream_window_size(void)

{
  nghttp2_session_update_recv_stream_window_size();
  return;
}



void nghttp2_session_update_recv_connection_window_size(void)

{
  nghttp2_session_update_recv_connection_window_size();
  return;
}



void nghttp2_session_send(void)

{
  nghttp2_session_send();
  return;
}



void nghttp2_session_on_request_headers_received(void)

{
  nghttp2_session_on_request_headers_received();
  return;
}



void nghttp2_session_on_response_headers_received(void)

{
  nghttp2_session_on_response_headers_received();
  return;
}



void nghttp2_session_on_push_response_headers_received(void)

{
  nghttp2_session_on_push_response_headers_received();
  return;
}



void nghttp2_session_on_headers_received(void)

{
  nghttp2_session_on_headers_received();
  return;
}



void nghttp2_session_on_rst_stream_received(void)

{
  nghttp2_session_on_rst_stream_received();
  return;
}



void nghttp2_session_update_local_settings(void)

{
  nghttp2_session_update_local_settings();
  return;
}



void nghttp2_session_on_settings_received(void)

{
  nghttp2_session_on_settings_received();
  return;
}



void nghttp2_session_add_settings(void)

{
  nghttp2_session_add_settings();
  return;
}



void nghttp2_session_on_push_promise_received(void)

{
  nghttp2_session_on_push_promise_received();
  return;
}



void nghttp2_session_on_ping_received(void)

{
  nghttp2_session_on_ping_received();
  return;
}



void nghttp2_session_add_ping(void)

{
  nghttp2_session_add_ping();
  return;
}



void nghttp2_session_on_goaway_received(void)

{
  nghttp2_session_on_goaway_received();
  return;
}



void nghttp2_session_on_window_update_received(void)

{
  nghttp2_session_on_window_update_received();
  return;
}



void nghttp2_session_on_altsvc_received(void)

{
  nghttp2_session_on_altsvc_received();
  return;
}



void nghttp2_session_on_priority_update_received(void)

{
  nghttp2_session_on_priority_update_received();
  return;
}



void nghttp2_session_on_data_received(void)

{
  nghttp2_session_on_data_received();
  return;
}



void nghttp2_session_add_window_update(void)

{
  nghttp2_session_add_window_update();
  return;
}



void nghttp2_session_mem_recv(void)

{
  nghttp2_session_mem_recv();
  return;
}



void nghttp2_session_mem_recv2(void)

{
  nghttp2_session_mem_recv2();
  return;
}



void nghttp2_session_consume(void)

{
  nghttp2_session_consume();
  return;
}



void nghttp2_session_want_read(void)

{
  nghttp2_session_want_read();
  return;
}



void nghttp2_session_get_stream_user_data(void)

{
  nghttp2_session_get_stream_user_data();
  return;
}



void nghttp2_session_set_stream_user_data(void)

{
  nghttp2_session_set_stream_user_data();
  return;
}



void nghttp2_session_resume_data(void)

{
  nghttp2_session_resume_data();
  return;
}



void nghttp2_session_get_stream_effective_recv_data_length(void)

{
  nghttp2_session_get_stream_effective_recv_data_length();
  return;
}



void nghttp2_session_get_stream_effective_local_window_size(void)

{
  nghttp2_session_get_stream_effective_local_window_size();
  return;
}



void nghttp2_session_get_local_window_size(void)

{
  nghttp2_session_get_local_window_size();
  return;
}



void nghttp2_session_get_stream_remote_window_size(void)

{
  nghttp2_session_get_stream_remote_window_size();
  return;
}



void nghttp2_session_get_remote_window_size(void)

{
  nghttp2_session_get_remote_window_size();
  return;
}



void nghttp2_session_get_remote_settings(void)

{
  nghttp2_session_get_remote_settings();
  return;
}



void nghttp2_session_upgrade2(void)

{
  nghttp2_session_upgrade2();
  return;
}



void nghttp2_submit_ping(void)

{
  nghttp2_submit_ping();
  return;
}



void nghttp2_submit_priority(void)

{
  nghttp2_submit_priority();
  return;
}



void nghttp2_submit_rst_stream(void)

{
  nghttp2_submit_rst_stream();
  return;
}



void nghttp2_submit_goaway(void)

{
  nghttp2_submit_goaway();
  return;
}



void nghttp2_submit_settings(void)

{
  nghttp2_submit_settings();
  return;
}



void nghttp2_submit_window_update(void)

{
  nghttp2_submit_window_update();
  return;
}



void nghttp2_session_set_local_window_size(void)

{
  nghttp2_session_set_local_window_size();
  return;
}



void nghttp2_submit_request(void)

{
  nghttp2_submit_request();
  return;
}



void nghttp2_submit_data_shared(void)

{
  nghttp2_submit_data_shared();
  return;
}



void nghttp2_pack_settings_payload(void)

{
  nghttp2_pack_settings_payload();
  return;
}



void nghttp2_put_uint16be(void)

{
  nghttp2_put_uint16be();
  return;
}



void nghttp2_put_uint32be(void)

{
  nghttp2_put_uint32be();
  return;
}



void nghttp2_get_uint16(void)

{
  nghttp2_get_uint16();
  return;
}



void nghttp2_get_uint32(void)

{
  nghttp2_get_uint32();
  return;
}



void nghttp2_downcase(void)

{
  nghttp2_downcase();
  return;
}



void nghttp2_adjust_local_window_size(void)

{
  nghttp2_adjust_local_window_size();
  return;
}



void nghttp2_increase_local_window_size(void)

{
  nghttp2_increase_local_window_size();
  return;
}



void nghttp2_should_send_window_update(void)

{
  nghttp2_should_send_window_update();
  return;
}



void nghttp2_strerror(void)

{
  nghttp2_strerror();
  return;
}



void nghttp2_check_header_name(void)

{
  nghttp2_check_header_name();
  return;
}



void nghttp2_check_header_value(void)

{
  nghttp2_check_header_value();
  return;
}



void nghttp2_check_header_value_rfc9113(void)

{
  nghttp2_check_header_value_rfc9113();
  return;
}



void nghttp2_check_method(void)

{
  nghttp2_check_method();
  return;
}



void nghttp2_check_path(void)

{
  nghttp2_check_path();
  return;
}



void nghttp2_cpymem(void)

{
  nghttp2_cpymem();
  return;
}



void nghttp2_http2_strerror(void)

{
  nghttp2_http2_strerror();
  return;
}



void nghttp2_hd_deflate_init2(void)

{
  nghttp2_hd_deflate_init2();
  return;
}



void nghttp2_hd_inflate_init(void)

{
  nghttp2_hd_inflate_init();
  return;
}



void nghttp2_hd_deflate_free(void)

{
  nghttp2_hd_deflate_free();
  return;
}



void nghttp2_hd_inflate_free(void)

{
  nghttp2_hd_inflate_free();
  return;
}



void nghttp2_hd_deflate_change_table_size(void)

{
  nghttp2_hd_deflate_change_table_size();
  return;
}



void nghttp2_hd_inflate_change_table_size(void)

{
  nghttp2_hd_inflate_change_table_size();
  return;
}



void nghttp2_hd_deflate_hd_bufs(void)

{
  nghttp2_hd_deflate_hd_bufs();
  return;
}



void nghttp2_hd_deflate_bound(void)

{
  nghttp2_hd_deflate_bound();
  return;
}



void nghttp2_hd_deflate_new2(void)

{
  nghttp2_hd_deflate_new2();
  return;
}



void nghttp2_hd_inflate_hd_nv(void)

{
  nghttp2_hd_inflate_hd_nv();
  return;
}



void nghttp2_hd_inflate_end_headers(void)

{
  nghttp2_hd_inflate_end_headers();
  return;
}



void nghttp2_hd_inflate_new2(void)

{
  nghttp2_hd_inflate_new2();
  return;
}



void nghttp2_hd_deflate_get_dynamic_table_size(void)

{
  nghttp2_hd_deflate_get_dynamic_table_size();
  return;
}



void nghttp2_hd_inflate_get_dynamic_table_size(void)

{
  nghttp2_hd_inflate_get_dynamic_table_size();
  return;
}



void nghttp2_hd_huff_encode_count(void)

{
  nghttp2_hd_huff_encode_count();
  return;
}



void nghttp2_hd_huff_encode(void)

{
  nghttp2_hd_huff_encode();
  return;
}



void nghttp2_hd_huff_decode_context_init(void)

{
  nghttp2_hd_huff_decode_context_init();
  return;
}



void nghttp2_hd_huff_decode(void)

{
  nghttp2_hd_huff_decode();
  return;
}



void nghttp2_hd_huff_decode_failure_state(void)

{
  nghttp2_hd_huff_decode_failure_state();
  return;
}



void nghttp2_priority_spec_init(void)

{
  nghttp2_priority_spec_init();
  return;
}



void nghttp2_priority_spec_default_init(void)

{
  nghttp2_priority_spec_default_init();
  return;
}



void nghttp2_option_new(void)

{
  nghttp2_option_new();
  return;
}



void nghttp2_option_del(void)

{
  nghttp2_option_del();
  return;
}



void nghttp2_option_set_no_auto_window_update(void)

{
  nghttp2_option_set_no_auto_window_update();
  return;
}



void nghttp2_option_set_no_rfc9113_leading_and_trailing_ws_validation(void)

{
  nghttp2_option_set_no_rfc9113_leading_and_trailing_ws_validation();
  return;
}



void nghttp2_session_callbacks_new(void)

{
  nghttp2_session_callbacks_new();
  return;
}



void nghttp2_session_callbacks_del(void)

{
  nghttp2_session_callbacks_del();
  return;
}



void nghttp2_session_callbacks_set_send_callback(void)

{
  nghttp2_session_callbacks_set_send_callback();
  return;
}



void nghttp2_session_callbacks_set_on_frame_recv_callback(void)

{
  nghttp2_session_callbacks_set_on_frame_recv_callback();
  return;
}



void nghttp2_session_callbacks_set_on_invalid_frame_recv_callback(void)

{
  nghttp2_session_callbacks_set_on_invalid_frame_recv_callback();
  return;
}



void nghttp2_session_callbacks_set_on_data_chunk_recv_callback(void)

{
  nghttp2_session_callbacks_set_on_data_chunk_recv_callback();
  return;
}



void nghttp2_session_callbacks_set_on_frame_send_callback(void)

{
  nghttp2_session_callbacks_set_on_frame_send_callback();
  return;
}



void nghttp2_session_callbacks_set_on_stream_close_callback(void)

{
  nghttp2_session_callbacks_set_on_stream_close_callback();
  return;
}



void nghttp2_session_callbacks_set_on_begin_headers_callback(void)

{
  nghttp2_session_callbacks_set_on_begin_headers_callback();
  return;
}



void nghttp2_session_callbacks_set_on_header_callback(void)

{
  nghttp2_session_callbacks_set_on_header_callback();
  return;
}



void nghttp2_session_callbacks_set_error_callback(void)

{
  nghttp2_session_callbacks_set_error_callback();
  return;
}



void nghttp2_mem_default(void)

{
  nghttp2_mem_default();
  return;
}



void nghttp2_mem_malloc(void)

{
  nghttp2_mem_malloc();
  return;
}



void nghttp2_mem_free(void)

{
  nghttp2_mem_free();
  return;
}



void nghttp2_mem_free2(void)

{
  nghttp2_mem_free2();
  return;
}



void nghttp2_mem_calloc(void)

{
  nghttp2_mem_calloc();
  return;
}



void nghttp2_mem_realloc(void)

{
  nghttp2_mem_realloc();
  return;
}



void nghttp2_http_on_header(void)

{
  nghttp2_http_on_header();
  return;
}



void nghttp2_http_parse_priority(void)

{
  nghttp2_http_parse_priority();
  return;
}



void nghttp2_http_on_request_headers(void)

{
  nghttp2_http_on_request_headers();
  return;
}



void nghttp2_http_on_response_headers(void)

{
  nghttp2_http_on_response_headers();
  return;
}



void nghttp2_http_on_trailer_headers(void)

{
  nghttp2_http_on_trailer_headers();
  return;
}



void nghttp2_http_on_remote_end_stream(void)

{
  nghttp2_http_on_remote_end_stream();
  return;
}



void nghttp2_http_on_data_chunk(void)

{
  nghttp2_http_on_data_chunk();
  return;
}



void nghttp2_http_record_request_method(void)

{
  nghttp2_http_record_request_method();
  return;
}



void nghttp2_rcbuf_new(void)

{
  nghttp2_rcbuf_new();
  return;
}



void nghttp2_rcbuf_new2(void)

{
  nghttp2_rcbuf_new2();
  return;
}



void nghttp2_rcbuf_incref(void)

{
  nghttp2_rcbuf_incref();
  return;
}



void nghttp2_rcbuf_decref(void)

{
  nghttp2_rcbuf_decref();
  return;
}



void nghttp2_extpri_to_uint8(void)

{
  nghttp2_extpri_to_uint8();
  return;
}



void nghttp2_extpri_from_uint8(void)

{
  nghttp2_extpri_from_uint8();
  return;
}



void nghttp2_ratelim_init(void)

{
  nghttp2_ratelim_init();
  return;
}



void nghttp2_ratelim_update(void)

{
  nghttp2_ratelim_update();
  return;
}



void nghttp2_ratelim_drain(void)

{
  nghttp2_ratelim_drain();
  return;
}



void nghttp2_time_now_sec(void)

{
  nghttp2_time_now_sec();
  return;
}



void sfparse_parser_param(void)

{
  sfparse_parser_param();
  return;
}



void sfparse_parser_inner_list(void)

{
  sfparse_parser_inner_list();
  return;
}



void sfparse_parser_dict(void)

{
  sfparse_parser_dict();
  return;
}



void sfparse_parser_init(void)

{
  sfparse_parser_init();
  return;
}



void curl_multi_setopt(void)

{
  curl_multi_setopt();
  return;
}



void curl_multi_poll(void)

{
  curl_multi_poll();
  return;
}



void curl_easy_duphandle(void)

{
  curl_easy_duphandle();
  return;
}



void __fwrite_chk(void)

{
  __fwrite_chk();
  return;
}



void curl_msnprintf(void)

{
  curl_msnprintf();
  return;
}



void curl_mvsnprintf(void)

{
  curl_mvsnprintf();
  return;
}



void curl_strnequal(void)

{
  curl_strnequal();
  return;
}



void accept4(void)

{
  accept4();
  return;
}



void getpeername(void)

{
  getpeername();
  return;
}



void curl_maprintf(void)

{
  curl_maprintf();
  return;
}



void __assert2(void)

{
  __assert2();
  return;
}



void write(void)

{
  write();
  return;
}



void pthread_detach(void)

{
  pthread_detach();
  return;
}



void curl_mfprintf(void)

{
  curl_mfprintf();
  return;
}



void strcspn(void)

{
  strcspn();
  return;
}



void curl_strequal(void)

{
  curl_strequal();
  return;
}



void memrchr(void)

{
  memrchr();
  return;
}



void curl_easy_escape(void)

{
  curl_easy_escape();
  return;
}



void curl_easy_unescape(void)

{
  curl_easy_unescape();
  return;
}



void fstat(void)

{
  fstat();
  return;
}



void curl_formfree(void)

{
  curl_formfree();
  return;
}



void curl_getenv(void)

{
  curl_getenv();
  return;
}



void curl_mime_headers(void)

{
  curl_mime_headers();
  return;
}



void curl_url_set(void)

{
  curl_url_set();
  return;
}



void curl_url_strerror(void)

{
  curl_url_strerror();
  return;
}



void curl_url_get(void)

{
  curl_url_get();
  return;
}



void curl_url(void)

{
  curl_url();
  return;
}



void curl_url_cleanup(void)

{
  curl_url_cleanup();
  return;
}



void curl_url_dup(void)

{
  curl_url_dup();
  return;
}



void curl_mime_init(void)

{
  curl_mime_init();
  return;
}



void curl_mime_subparts(void)

{
  curl_mime_subparts();
  return;
}



void curl_mime_addpart(void)

{
  curl_mime_addpart();
  return;
}



void curl_mime_name(void)

{
  curl_mime_name();
  return;
}



void curl_mime_type(void)

{
  curl_mime_type();
  return;
}



void curl_mime_filedata(void)

{
  curl_mime_filedata();
  return;
}



void curl_mime_data(void)

{
  curl_mime_data();
  return;
}



void curl_mime_data_cb(void)

{
  curl_mime_data_cb();
  return;
}



void curl_mime_filename(void)

{
  curl_mime_filename();
  return;
}



void curl_pushheader_byname(void)

{
  curl_pushheader_byname();
  return;
}



void getifaddrs(void)

{
  getifaddrs();
  return;
}



void freeifaddrs(void)

{
  freeifaddrs();
  return;
}



void basename(void)

{
  basename();
  return;
}



void curl_mvaprintf(void)

{
  curl_mvaprintf();
  return;
}



void fputc(void)

{
  fputc();
  return;
}



void curl_multi_timeout(void)

{
  curl_multi_timeout();
  return;
}



void geteuid(void)

{
  geteuid();
  return;
}



void getpwuid_r(void)

{
  getpwuid_r();
  return;
}



void eventfd(void)

{
  eventfd();
  return;
}



void strerror_r(void)

{
  strerror_r();
  return;
}



void if_nametoindex(void)

{
  if_nametoindex();
  return;
}



void strspn(void)

{
  strspn();
  return;
}



void __fread_chk(void)

{
  __fread_chk();
  return;
}



void snprintf(void)

{
  snprintf();
  return;
}



void _ZNSt13exception_ptrC2ERKS_(void)

{
  _ZNSt13exception_ptrC2ERKS_();
  return;
}



void _ZSt17rethrow_exceptionSt13exception_ptr(void)

{
  _ZSt17rethrow_exceptionSt13exception_ptr();
  return;
}



void __cxa_demangle(void)

{
  __cxa_demangle();
  return;
}



void dwarf_dealloc_die(void)

{
  dwarf_dealloc_die();
  return;
}



void dwarf_errno(void)

{
  dwarf_errno();
  return;
}



void dwarf_errmsg(void)

{
  dwarf_errmsg();
  return;
}



void dwarf_dealloc_error(void)

{
  dwarf_dealloc_error();
  return;
}



void dwarf_dealloc(void)

{
  dwarf_dealloc();
  return;
}



void dwarf_finish(void)

{
  dwarf_finish();
  return;
}



void dwarf_srclines_dealloc_b(void)

{
  dwarf_srclines_dealloc_b();
  return;
}



void dwarf_tag(void)

{
  dwarf_tag();
  return;
}



void dwarf_offdie_b(void)

{
  dwarf_offdie_b();
  return;
}



void dwarf_get_version_of_die(void)

{
  dwarf_get_version_of_die();
  return;
}



void dwarf_get_die_infotypes_flag(void)

{
  dwarf_get_die_infotypes_flag();
  return;
}



void dwarf_attr(void)

{
  dwarf_attr();
  return;
}



void dwarf_whatform(void)

{
  dwarf_whatform();
  return;
}



void dwarf_dealloc_attribute(void)

{
  dwarf_dealloc_attribute();
  return;
}



void dwarf_global_formref(void)

{
  dwarf_global_formref();
  return;
}



void dwarf_hasattr(void)

{
  dwarf_hasattr();
  return;
}



void dwarf_formstring(void)

{
  dwarf_formstring();
  return;
}



void dwarf_child(void)

{
  dwarf_child();
  return;
}



void dwarf_srcfiles(void)

{
  dwarf_srcfiles();
  return;
}



void zng_deflateReset(void)

{
  zng_deflateReset();
  return;
}



void zng_deflateParams(void)

{
  zng_deflateParams();
  return;
}



void zng_inflateReset2(void)

{
  zng_inflateReset2();
  return;
}



void dl_iterate_phdr(void)

{
  dl_iterate_phdr();
  return;
}



void _dwarf_count_abbrev_entries(void)

{
  _dwarf_count_abbrev_entries();
  return;
}



void _dwarf_error_destructor(void)

{
  _dwarf_error_destructor();
  return;
}



void dwarfstring_destructor(void)

{
  dwarfstring_destructor();
  return;
}



void _dwarf_add_to_static_err_list(void)

{
  _dwarf_add_to_static_err_list();
  return;
}



void _dwarf_free_static_errlist(void)

{
  _dwarf_free_static_errlist();
  return;
}



void _dwarf_get_alloc(void)

{
  _dwarf_get_alloc();
  return;
}



void _dwarf_tsearch(void)

{
  _dwarf_tsearch();
  return;
}



void dwarf_set_load_preference(void)

{
  dwarf_set_load_preference();
  return;
}



void _dwarf_determine_section_allocation_type(void)

{
  _dwarf_determine_section_allocation_type();
  return;
}



void _dwarf_tfind(void)

{
  _dwarf_tfind();
  return;
}



void _dwarf_tdelete(void)

{
  _dwarf_tdelete();
  return;
}



void _dwarf_get_debug(void)

{
  _dwarf_get_debug();
  return;
}



void _dwarf_initialize_search_hash(void)

{
  _dwarf_initialize_search_hash();
  return;
}



void _dwarf_malloc_section_free(void)

{
  _dwarf_malloc_section_free();
  return;
}



void _dwarf_free_all_of_one_debug(void)

{
  _dwarf_free_all_of_one_debug();
  return;
}



void dwarf_dealloc_xu_header(void)

{
  dwarf_dealloc_xu_header();
  return;
}



void _dwarf_free_abbrev_hash_table_contents(void)

{
  _dwarf_free_abbrev_hash_table_contents();
  return;
}



void _dwarf_harmless_cleanout(void)

{
  _dwarf_harmless_cleanout();
  return;
}



void _dwarf_dealloc_rnglists_context(void)

{
  _dwarf_dealloc_rnglists_context();
  return;
}



void _dwarf_dealloc_loclists_context(void)

{
  _dwarf_dealloc_loclists_context();
  return;
}



void _dwarf_destroy_group_map(void)

{
  _dwarf_destroy_group_map();
  return;
}



void _dwarf_tdestroy(void)

{
  _dwarf_tdestroy();
  return;
}



void _dwarf_special_no_dbg_error_malloc(void)

{
  _dwarf_special_no_dbg_error_malloc();
  return;
}



void _dwarf_locdesc_c_constructor(void)

{
  _dwarf_locdesc_c_constructor();
  return;
}



void dwarf_basic_crc32(void)

{
  dwarf_basic_crc32();
  return;
}



void dwarf_crc32(void)

{
  dwarf_crc32();
  return;
}



void _dwarf_load_section(void)

{
  _dwarf_load_section();
  return;
}



void _dwarf_load_debug_info(void)

{
  _dwarf_load_debug_info();
  return;
}



void _dwarf_read_area_length_ck_wrapper(void)

{
  _dwarf_read_area_length_ck_wrapper();
  return;
}



void _dwarf_read_unaligned_ck_wrapper(void)

{
  _dwarf_read_unaligned_ck_wrapper();
  return;
}



void dwarfstring_constructor(void)

{
  dwarfstring_constructor();
  return;
}



void dwarfstring_append_printf_u(void)

{
  dwarfstring_append_printf_u();
  return;
}



void dwarfstring_string(void)

{
  dwarfstring_string();
  return;
}



void dwarf_insert_harmless_error(void)

{
  dwarf_insert_harmless_error();
  return;
}



void _dwarf_error(void)

{
  _dwarf_error();
  return;
}



void _dwarf_error_string(void)

{
  _dwarf_error_string();
  return;
}



void _dwarf_length_of_cu_header(void)

{
  _dwarf_length_of_cu_header();
  return;
}



void _dwarf_pathjoinl(void)

{
  _dwarf_pathjoinl();
  return;
}



void _dwarf_construct_linkedto_path(void)

{
  _dwarf_construct_linkedto_path();
  return;
}



void dwarf_gnu_debuglink(void)

{
  dwarf_gnu_debuglink();
  return;
}



void dwarf_add_debuglink_global_path(void)

{
  dwarf_add_debuglink_global_path();
  return;
}



void _dwarf_file_has_debug_fission_index(void)

{
  _dwarf_file_has_debug_fission_index();
  return;
}



void _dwarf_file_has_debug_fission_tu_index(void)

{
  _dwarf_file_has_debug_fission_tu_index();
  return;
}



void _dwarf_file_has_debug_fission_cu_index(void)

{
  _dwarf_file_has_debug_fission_cu_index();
  return;
}



void _dwarf_get_dwp_extra_offset(void)

{
  _dwarf_get_dwp_extra_offset();
  return;
}



void _dwarf_get_fission_addition_die(void)

{
  _dwarf_get_fission_addition_die();
  return;
}



void _dwarf_create_address_size_dwarf_error(void)

{
  _dwarf_create_address_size_dwarf_error();
  return;
}



void dwarfstring_append(void)

{
  dwarfstring_append();
  return;
}



void dwarfstring_append_printf_s(void)

{
  dwarfstring_append_printf_s();
  return;
}



void _dwarf_next_cu_header_internal(void)

{
  _dwarf_next_cu_header_internal();
  return;
}



void _dwarf_load_die_containing_section(void)

{
  _dwarf_load_die_containing_section();
  return;
}



void _dwarf_length_of_cu_header_simple(void)

{
  _dwarf_length_of_cu_header_simple();
  return;
}



void _dwarf_create_a_new_cu_context_record_on_list(void)

{
  _dwarf_create_a_new_cu_context_record_on_list();
  return;
}



void _dwarf_merge_all_base_attrs_of_cu_die(void)

{
  _dwarf_merge_all_base_attrs_of_cu_die();
  return;
}



void _dwarf_calculate_next_cu_context_offset(void)

{
  _dwarf_calculate_next_cu_context_offset();
  return;
}



void _dwarf_create_area_len_error(void)

{
  _dwarf_create_area_len_error();
  return;
}



void dwarf_get_debugfission_for_key(void)

{
  dwarf_get_debugfission_for_key();
  return;
}



void _dwarf_get_debugfission_for_offset(void)

{
  _dwarf_get_debugfission_for_offset();
  return;
}



void dwarf_attrlist(void)

{
  dwarf_attrlist();
  return;
}



void dwarf_whatattr(void)

{
  dwarf_whatattr();
  return;
}



void _dwarf_internal_global_formref_b(void)

{
  _dwarf_internal_global_formref_b();
  return;
}



void dwarf_formsig8_const(void)

{
  dwarf_formsig8_const();
  return;
}



void dwarf_die_text(void)

{
  dwarf_die_text();
  return;
}



void dwarf_die_abbrev_children_flag(void)

{
  dwarf_die_abbrev_children_flag();
  return;
}



void _dwarf_find_all_offsets_via_fission(void)

{
  _dwarf_find_all_offsets_via_fission();
  return;
}



void _dwarf_load_debug_types(void)

{
  _dwarf_load_debug_types();
  return;
}



void _dwarf_safe_strcpy(void)

{
  _dwarf_safe_strcpy();
  return;
}



void _dwarf_calculate_info_section_end_ptr(void)

{
  _dwarf_calculate_info_section_end_ptr();
  return;
}



void _dwarf_leb128_uword_wrapper(void)

{
  _dwarf_leb128_uword_wrapper();
  return;
}



void _dwarf_get_abbrev_for_code(void)

{
  _dwarf_get_abbrev_for_code();
  return;
}



void dwarfstring_constructor_static(void)

{
  dwarfstring_constructor_static();
  return;
}



void _dwarf_calculate_abbrev_section_end_ptr(void)

{
  _dwarf_calculate_abbrev_section_end_ptr();
  return;
}



void _dwarf_fill_in_attr_form_abtable(void)

{
  _dwarf_fill_in_attr_form_abtable();
  return;
}



void dwarf_get_cu_die_offset_given_cu_header_offset_b(void)

{
  dwarf_get_cu_die_offset_given_cu_header_offset_b();
  return;
}



void dwarf_siblingof_c(void)

{
  dwarf_siblingof_c();
  return;
}



void dwarf_decode_leb128(void)

{
  dwarf_decode_leb128();
  return;
}



void _dwarf_skip_leb128(void)

{
  _dwarf_skip_leb128();
  return;
}



void _dwarf_get_size_of_val(void)

{
  _dwarf_get_size_of_val();
  return;
}



void dwarf_addr_form_is_indexed(void)

{
  dwarf_addr_form_is_indexed();
  return;
}



void dwarf_formaddr(void)

{
  dwarf_formaddr();
  return;
}



void dwarf_dnames_header(void)

{
  dwarf_dnames_header();
  return;
}



void dwarf_dealloc_dnames(void)

{
  dwarf_dealloc_dnames();
  return;
}



void dwarf_dnames_sizes(void)

{
  dwarf_dnames_sizes();
  return;
}



void dwarf_dnames_cu_table(void)

{
  dwarf_dnames_cu_table();
  return;
}



void dwarf_dnames_name(void)

{
  dwarf_dnames_name();
  return;
}



void _dwarf_check_string_valid(void)

{
  _dwarf_check_string_valid();
  return;
}



void dwarf_dnames_entrypool(void)

{
  dwarf_dnames_entrypool();
  return;
}



void dwarf_dnames_entrypool_values(void)

{
  dwarf_dnames_entrypool_values();
  return;
}



void _dwarf_allow_formudata(void)

{
  _dwarf_allow_formudata();
  return;
}



void _dwarf_formudata_internal(void)

{
  _dwarf_formudata_internal();
  return;
}



void dwarf_get_FORM_name(void)

{
  dwarf_get_FORM_name();
  return;
}



void dwarf_decode_signed_leb128(void)

{
  dwarf_decode_signed_leb128();
  return;
}



void _dwarf_load_elf_symtab_symbols(void)

{
  _dwarf_load_elf_symtab_symbols();
  return;
}



void _dwarf_load_elf_symstr(void)

{
  _dwarf_load_elf_symstr();
  return;
}



void _dwarf_load_elf_relx(void)

{
  _dwarf_load_elf_relx();
  return;
}



void _dwarf_load_elf_header(void)

{
  _dwarf_load_elf_header();
  return;
}



void _dwarf_load_elf_sectheaders(void)

{
  _dwarf_load_elf_sectheaders();
  return;
}



void _dwarf_elf_nlsetup(void)

{
  _dwarf_elf_nlsetup();
  return;
}



void _dwarf_is_32bit_abs_reloc(void)

{
  _dwarf_is_32bit_abs_reloc();
  return;
}



void _dwarf_is_64bit_abs_reloc(void)

{
  _dwarf_is_64bit_abs_reloc();
  return;
}



void dwarf_errmsg_by_number(void)

{
  dwarf_errmsg_by_number();
  return;
}



void _dwarf_valid_form_we_know(void)

{
  _dwarf_valid_form_we_know();
  return;
}



void _dwarf_leb128_sword_wrapper(void)

{
  _dwarf_leb128_sword_wrapper();
  return;
}



void _dwarf_internal_find_die_given_sig8(void)

{
  _dwarf_internal_find_die_given_sig8();
  return;
}



void _dwarf_read_str_offsets_header(void)

{
  _dwarf_read_str_offsets_header();
  return;
}



void _dwarf_internal_read_rnglists_header(void)

{
  _dwarf_internal_read_rnglists_header();
  return;
}



void _dwarf_internal_read_loclists_header(void)

{
  _dwarf_internal_read_loclists_header();
  return;
}



void dwarf_load_loclists(void)

{
  dwarf_load_loclists();
  return;
}



void dwarf_get_AT_name(void)

{
  dwarf_get_AT_name();
  return;
}



void dwarf_global_formref_b(void)

{
  dwarf_global_formref_b();
  return;
}



void dwarfstring_constructor_fixed(void)

{
  dwarfstring_constructor_fixed();
  return;
}



void dwarf_die_offsets(void)

{
  dwarf_die_offsets();
  return;
}



void _dwarf_get_addr_index_itself(void)

{
  _dwarf_get_addr_index_itself();
  return;
}



void _dwarf_extract_data16(void)

{
  _dwarf_extract_data16();
  return;
}



void _dwarf_calculate_info_section_start_ptr(void)

{
  _dwarf_calculate_info_section_start_ptr();
  return;
}



void _dwarf_look_in_local_and_tied(void)

{
  _dwarf_look_in_local_and_tied();
  return;
}



void dwarf_formsdata(void)

{
  dwarf_formsdata();
  return;
}



void _dwarf_formblock_internal(void)

{
  _dwarf_formblock_internal();
  return;
}



void _dwarf_extract_string_offset_via_str_offsets(void)

{
  _dwarf_extract_string_offset_via_str_offsets();
  return;
}



void _dwarf_trial_read_dwarf_five_hdr(void)

{
  _dwarf_trial_read_dwarf_five_hdr();
  return;
}



void _dwarf_extract_local_debug_str_string_given_offset(void)

{
  _dwarf_extract_local_debug_str_string_given_offset();
  return;
}



void _dwarf_get_string_from_tied(void)

{
  _dwarf_get_string_from_tied();
  return;
}



void dwarf_formexprloc(void)

{
  dwarf_formexprloc();
  return;
}



void _dwarf_reference_outside_section(void)

{
  _dwarf_reference_outside_section();
  return;
}



void _dwarf_validate_register_numbers(void)

{
  _dwarf_validate_register_numbers();
  return;
}



void _dwarf_exec_frame_instr(void)

{
  _dwarf_exec_frame_instr();
  return;
}



void _dwarf_get_return_address_reg(void)

{
  _dwarf_get_return_address_reg();
  return;
}



void dwarf_get_fde_info_for_all_regs3_b(void)

{
  dwarf_get_fde_info_for_all_regs3_b();
  return;
}



void dwarf_get_fde_info_for_reg3_c(void)

{
  dwarf_get_fde_info_for_reg3_c();
  return;
}



void dwarf_get_fde_info_for_cfa_reg3_c(void)

{
  dwarf_get_fde_info_for_cfa_reg3_c();
  return;
}



void _dwarf_int64_mult(void)

{
  _dwarf_int64_mult();
  return;
}



void _dwarf_uint64_mult(void)

{
  _dwarf_uint64_mult();
  return;
}



void _dwarf_get_fde_list_internal(void)

{
  _dwarf_get_fde_list_internal();
  return;
}



void dwarf_get_die_address_size(void)

{
  dwarf_get_die_address_size();
  return;
}



void _dwarf_read_cie_fde_prefix(void)

{
  _dwarf_read_cie_fde_prefix();
  return;
}



void _dwarf_create_fde_from_after_start(void)

{
  _dwarf_create_fde_from_after_start();
  return;
}



void _dwarf_create_cie_from_after_start(void)

{
  _dwarf_create_cie_from_after_start();
  return;
}



void dwarf_globals_by_type(void)

{
  dwarf_globals_by_type();
  return;
}



void dwarfstring_append_length(void)

{
  dwarfstring_append_length();
  return;
}



void dwarf_gnu_index_dealloc(void)

{
  dwarf_gnu_index_dealloc();
  return;
}



void _dwarf_insert_in_group_map(void)

{
  _dwarf_insert_in_group_map();
  return;
}



void _dwarf_section_get_target_group_from_map(void)

{
  _dwarf_section_get_target_group_from_map();
  return;
}



void _dwarf_dwo_groupnumber_given_name(void)

{
  _dwarf_dwo_groupnumber_given_name();
  return;
}



void _dwarf_section_in_group_by_name(void)

{
  _dwarf_section_in_group_by_name();
  return;
}



void _dwarf_twalk(void)

{
  _dwarf_twalk();
  return;
}



void _dwarf_harmless_init(void)

{
  _dwarf_harmless_init();
  return;
}



void dwarf_init_path_dl_a(void)

{
  dwarf_init_path_dl_a();
  return;
}



void dwarf_object_detector_path_dSYM(void)

{
  dwarf_object_detector_path_dSYM();
  return;
}



void dwarf_object_detector_path_b(void)

{
  dwarf_object_detector_path_b();
  return;
}



void _dwarf_openr(void)

{
  _dwarf_openr();
  return;
}



void _dwarf_closer(void)

{
  _dwarf_closer();
  return;
}



void _dwarf_macho_setup(void)

{
  _dwarf_macho_setup();
  return;
}



void _dwarf_pe_setup(void)

{
  _dwarf_pe_setup();
  return;
}



void dwarf_init_path(void)

{
  dwarf_init_path();
  return;
}



void _dwarf_object_detector_fd_a(void)

{
  _dwarf_object_detector_fd_a();
  return;
}



void dwarf_object_finish(void)

{
  dwarf_object_finish();
  return;
}



void _dwarf_memcpy_swap_bytes(void)

{
  _dwarf_memcpy_swap_bytes();
  return;
}



void dwarf_object_init_b(void)

{
  dwarf_object_init_b();
  return;
}



void _dwarf_object_read_random(void)

{
  _dwarf_object_read_random();
  return;
}



void _dwarf_ignorethissection(void)

{
  _dwarf_ignorethissection();
  return;
}



void dwarfstring_strlen(void)

{
  dwarfstring_strlen();
  return;
}



void dwarfstring_reset(void)

{
  dwarfstring_reset();
  return;
}



void _dwarf_startswith(void)

{
  _dwarf_startswith();
  return;
}



void _dwarf_enter_section_in_de_debug_sections_array(void)

{
  _dwarf_enter_section_in_de_debug_sections_array();
  return;
}



void dwarf_get_xu_index_header(void)

{
  dwarf_get_xu_index_header();
  return;
}



void ZSTD_decompress(void)

{
  ZSTD_decompress();
  return;
}



void dwarf_get_section_info_by_name_a(void)

{
  dwarf_get_section_info_by_name_a();
  return;
}



void dwarf_get_section_info_by_index_a(void)

{
  dwarf_get_section_info_by_index_a();
  return;
}



void _dwarf_file_name_is_full_path(void)

{
  _dwarf_file_name_is_full_path();
  return;
}



void _dwarf_internal_get_die_comp_dir(void)

{
  _dwarf_internal_get_die_comp_dir();
  return;
}



void dwarf_srclines_files_indexes(void)

{
  dwarf_srclines_files_indexes();
  return;
}



void _dwarf_decode_line_string_form(void)

{
  _dwarf_decode_line_string_form();
  return;
}



void _dwarf_decode_line_udata_form(void)

{
  _dwarf_decode_line_udata_form();
  return;
}



void _dwarf_report_bad_lnct(void)

{
  _dwarf_report_bad_lnct();
  return;
}



void _dwarf_internal_srclines(void)

{
  _dwarf_internal_srclines();
  return;
}



void _dwarf_get_address_size(void)

{
  _dwarf_get_address_size();
  return;
}



void _dwarf_printf(void)

{
  _dwarf_printf();
  return;
}



void dwarfstring_append_printf_i(void)

{
  dwarfstring_append_printf_i();
  return;
}



void _dwarf_free_chain_entries(void)

{
  _dwarf_free_chain_entries();
  return;
}



void dwarf_get_LNCT_name(void)

{
  dwarf_get_LNCT_name();
  return;
}



void _dwarf_loc_block_sanity_check(void)

{
  _dwarf_loc_block_sanity_check();
  return;
}



void _dwarf_fill_in_locdesc_op_c(void)

{
  _dwarf_fill_in_locdesc_op_c();
  return;
}



void _dwarf_what_section_are_we(void)

{
  _dwarf_what_section_are_we();
  return;
}



void _dwarf_read_loc_expr_op(void)

{
  _dwarf_read_loc_expr_op();
  return;
}



void _dwarf_loclists_fill_in_lle_head(void)

{
  _dwarf_loclists_fill_in_lle_head();
  return;
}



void dwarf_dealloc_loc_head_c(void)

{
  dwarf_dealloc_loc_head_c();
  return;
}



void _dwarf_look_in_local_and_tied_by_index(void)

{
  _dwarf_look_in_local_and_tied_by_index();
  return;
}



void _dwarf_search_for_signature(void)

{
  _dwarf_search_for_signature();
  return;
}



void dwarf_get_OP_name(void)

{
  dwarf_get_OP_name();
  return;
}



void _dwarf_load_macho_header(void)

{
  _dwarf_load_macho_header();
  return;
}



void _dwarf_load_macho_commands(void)

{
  _dwarf_load_macho_commands();
  return;
}



void dwarf_dealloc_macro_context(void)

{
  dwarf_dealloc_macro_context();
  return;
}



void dwarf_get_LNAME_name(void)

{
  dwarf_get_LNAME_name();
  return;
}



void _dwarf_seekr(void)

{
  _dwarf_seekr();
  return;
}



void _dwarf_readr(void)

{
  _dwarf_readr();
  return;
}



void _dwarf_get_addr_from_tied(void)

{
  _dwarf_get_addr_from_tied();
  return;
}



void dwarf_get_form_class(void)

{
  dwarf_get_form_class();
  return;
}



void dwarf_language_version_data(void)

{
  dwarf_language_version_data();
  return;
}



void dwarf_load_rnglists(void)

{
  dwarf_load_rnglists();
  return;
}



void _dwarf_format_TAG_err_msg(void)

{
  _dwarf_format_TAG_err_msg();
  return;
}



void dwarf_get_xu_hash_entry(void)

{
  dwarf_get_xu_hash_entry();
  return;
}



void dwarf_get_xu_section_names(void)

{
  dwarf_get_xu_section_names();
  return;
}



void dwarf_get_xu_section_offset(void)

{
  dwarf_get_xu_section_offset();
  return;
}



void FSE_readNCount_bmi2(void)

{
  FSE_readNCount_bmi2();
  return;
}



void FSE_readNCount(void)

{
  FSE_readNCount();
  return;
}



void HUF_readStats_wksp(void)

{
  HUF_readStats_wksp();
  return;
}



void ERR_getErrorString(void)

{
  ERR_getErrorString();
  return;
}



void FSE_decompress_wksp_bmi2(void)

{
  FSE_decompress_wksp_bmi2();
  return;
}



void ZSTD_XXH64(void)

{
  ZSTD_XXH64();
  return;
}



void ZSTD_XXH64_reset(void)

{
  ZSTD_XXH64_reset();
  return;
}



void ZSTD_XXH64_update(void)

{
  ZSTD_XXH64_update();
  return;
}



void ZSTD_XXH64_digest(void)

{
  ZSTD_XXH64_digest();
  return;
}



void ZSTD_getErrorCode(void)

{
  ZSTD_getErrorCode();
  return;
}



void HUF_readDTableX1_wksp(void)

{
  HUF_readDTableX1_wksp();
  return;
}



void HUF_readDTableX2_wksp(void)

{
  HUF_readDTableX2_wksp();
  return;
}



void HUF_decompress1X1_DCtx_wksp(void)

{
  HUF_decompress1X1_DCtx_wksp();
  return;
}



void HUF_decompress1X_usingDTable(void)

{
  HUF_decompress1X_usingDTable();
  return;
}



void HUF_decompress4X_usingDTable(void)

{
  HUF_decompress4X_usingDTable();
  return;
}



void HUF_decompress4X_hufOnly_wksp(void)

{
  HUF_decompress4X_hufOnly_wksp();
  return;
}



void ZSTD_DDict_dictContent(void)

{
  ZSTD_DDict_dictContent();
  return;
}



void ZSTD_DDict_dictSize(void)

{
  ZSTD_DDict_dictSize();
  return;
}



void ZSTD_copyDDictParameters(void)

{
  ZSTD_copyDDictParameters();
  return;
}



void ZSTD_createDDict_advanced(void)

{
  ZSTD_createDDict_advanced();
  return;
}



void ZSTD_freeDDict(void)

{
  ZSTD_freeDDict();
  return;
}



void ZSTD_sizeof_DDict(void)

{
  ZSTD_sizeof_DDict();
  return;
}



void ZSTD_getDictID_fromDDict(void)

{
  ZSTD_getDictID_fromDDict();
  return;
}



void ZSTD_freeDCtx(void)

{
  ZSTD_freeDCtx();
  return;
}



void ZSTD_getFrameHeader_advanced(void)

{
  ZSTD_getFrameHeader_advanced();
  return;
}



void ZSTD_decompressBegin_usingDict(void)

{
  ZSTD_decompressBegin_usingDict();
  return;
}



void ZSTD_getcBlockSize(void)

{
  ZSTD_getcBlockSize();
  return;
}



void ZSTD_checkContinuity(void)

{
  ZSTD_checkContinuity();
  return;
}



void ZSTD_trace_decompress_begin(void)

{
  ZSTD_trace_decompress_begin();
  return;
}



void ZSTD_decompressBlock_internal(void)

{
  ZSTD_decompressBlock_internal();
  return;
}



void ZSTD_trace_decompress_end(void)

{
  ZSTD_trace_decompress_end();
  return;
}



void ZSTD_nextInputType(void)

{
  ZSTD_nextInputType();
  return;
}



void ZSTD_decompressContinue(void)

{
  ZSTD_decompressContinue();
  return;
}



void ZSTD_loadDEntropy(void)

{
  ZSTD_loadDEntropy();
  return;
}



void ZSTD_buildFSETable(void)

{
  ZSTD_buildFSETable();
  return;
}



void ZSTD_DCtx_refDDict(void)

{
  ZSTD_DCtx_refDDict();
  return;
}



void ZSTD_decompressStream(void)

{
  ZSTD_decompressStream();
  return;
}



void ZSTD_decodeSeqHeaders(void)

{
  ZSTD_decodeSeqHeaders();
  return;
}



void pthread_cond_wait(void)

{
  pthread_cond_wait();
  return;
}



void pthread_cond_broadcast(void)

{
  pthread_cond_broadcast();
  return;
}



void _ZNSt6__ndk114error_categoryD2Ev(void)

{
  _ZNSt6__ndk114error_categoryD2Ev();
  return;
}



void _ZSt18uncaught_exceptionv(void)

{
  _ZSt18uncaught_exceptionv();
  return;
}



void _ZNSt13exception_ptraSERKS_(void)

{
  _ZNSt13exception_ptraSERKS_();
  return;
}



void _ZNSt13exception_ptr31__from_native_exception_pointerEPv(void)

{
  _ZNSt13exception_ptr31__from_native_exception_pointerEPv();
  return;
}



void __cxa_uncaught_exceptions(void)

{
  __cxa_uncaught_exceptions();
  return;
}



void __cxa_decrement_exception_refcount(void)

{
  __cxa_decrement_exception_refcount();
  return;
}



void __cxa_increment_exception_refcount(void)

{
  __cxa_increment_exception_refcount();
  return;
}



void __cxa_current_primary_exception(void)

{
  __cxa_current_primary_exception();
  return;
}



void _ZNSt16nested_exceptionD1Ev(void)

{
  _ZNSt16nested_exceptionD1Ev();
  return;
}



void __cxa_rethrow_primary_exception(void)

{
  __cxa_rethrow_primary_exception();
  return;
}



void _ZNSt6__ndk112bad_weak_ptrD1Ev(void)

{
  _ZNSt6__ndk112bad_weak_ptrD1Ev();
  return;
}



void _ZNSt6__ndk119__shared_weak_countD1Ev(void)

{
  _ZNSt6__ndk119__shared_weak_countD1Ev();
  return;
}



void _ZSt17__throw_bad_allocv(void)

{
  _ZSt17__throw_bad_allocv();
  return;
}



void _ZNSt12domain_errorD1Ev(void)

{
  _ZNSt12domain_errorD1Ev();
  return;
}



void _ZNSt12experimental19bad_optional_accessD1Ev(void)

{
  _ZNSt12experimental19bad_optional_accessD1Ev();
  return;
}



void _ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (void)

{
  _ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  return;
}



void _ZNSt11logic_errorC2ERKS_(void)

{
  _ZNSt11logic_errorC2ERKS_();
  return;
}



void _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (void)

{
  _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  return;
}



void _ZNSt6__ndk121__throw_runtime_errorEPKc(void)

{
  _ZNSt6__ndk121__throw_runtime_errorEPKc();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
               (void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
            ();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKwm(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKwm();
  return;
}



void wmemchr(void)

{
  wmemchr();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmmw(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmmw();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKwm(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKwm();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw();
  return;
}



void wmemcmp(void)

{
  wmemcmp();
  return;
}



void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(void)

{
  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev();
  return;
}



void strtold(void)

{
  strtold();
  return;
}



void wcstol(void)

{
  wcstol();
  return;
}



void wcstoul(void)

{
  wcstoul();
  return;
}



void wcstoll(void)

{
  wcstoll();
  return;
}



void wcstoull(void)

{
  wcstoull();
  return;
}



void wcstof(void)

{
  wcstof();
  return;
}



void wcstod(void)

{
  wcstod();
  return;
}



void wcstold(void)

{
  wcstold();
  return;
}



void swprintf(void)

{
  swprintf();
  return;
}



void _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED1Ev(void)

{
  _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED1Ev();
  return;
}



void _ZNSt12domain_errorD1Ev(void)

{
  _ZNSt12domain_errorD1Ev();
  return;
}



void _ZNKSt6__ndk110error_code7messageEv(void)

{
  _ZNKSt6__ndk110error_code7messageEv();
  return;
}



void _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
               (void)

{
  _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            ();
  return;
}



void _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc(void)

{
  _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc();
  return;
}



void _ZNSt6__ndk112system_errorD2Ev(void)

{
  _ZNSt6__ndk112system_errorD2Ev();
  return;
}



void _ZNSt11range_errorD1Ev(void)

{
  _ZNSt11range_errorD1Ev();
  return;
}



void _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc(void)

{
  _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc();
  return;
}



void pthread_cond_destroy(void)

{
  pthread_cond_destroy();
  return;
}



void pthread_cond_signal(void)

{
  pthread_cond_signal();
  return;
}



void pthread_cond_timedwait(void)

{
  pthread_cond_timedwait();
  return;
}



void _ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE
               (void)

{
  _ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE();
  return;
}



void _ZNSt6__ndk117__assoc_sub_state9set_valueEv(void)

{
  _ZNSt6__ndk117__assoc_sub_state9set_valueEv();
  return;
}



void _ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv(void)

{
  _ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv();
  return;
}



void _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE(void)

{
  _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE();
  return;
}



void _ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr(void)

{
  _ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr();
  return;
}



void _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr(void)

{
  _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr();
  return;
}



void _ZNSt6__ndk117__assoc_sub_state12__make_readyEv(void)

{
  _ZNSt6__ndk117__assoc_sub_state12__make_readyEv();
  return;
}



void _ZNSt6__ndk117__assoc_sub_state4copyEv(void)

{
  _ZNSt6__ndk117__assoc_sub_state4copyEv();
  return;
}



void __cxa_init_primary_exception(void)

{
  __cxa_init_primary_exception();
  return;
}



void _ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE(void)

{
  _ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE();
  return;
}



void pthread_mutex_trylock(void)

{
  pthread_mutex_trylock();
  return;
}



void pthread_mutexattr_destroy(void)

{
  pthread_mutexattr_destroy();
  return;
}



void nanosleep(void)

{
  nanosleep();
  return;
}



void ioctl(void)

{
  ioctl();
  return;
}



void _ZNSt6__ndk18ios_base7failureD1Ev(void)

{
  _ZNSt6__ndk18ios_base7failureD1Ev();
  return;
}



void _ZNSt6__ndk18ios_base16__call_callbacksENS0_5eventE(void)

{
  _ZNSt6__ndk18ios_base16__call_callbacksENS0_5eventE();
  return;
}



void _ZNSt6__ndk18ios_baseD1Ev(void)

{
  _ZNSt6__ndk18ios_baseD1Ev();
  return;
}



void _ZNSt6__ndk18ios_baseD1Ev(void)

{
  _ZNSt6__ndk18ios_baseD1Ev();
  return;
}



void _ZNSt6__ndk18ios_base7failureC2EPKcRKNS_10error_codeE(void)

{
  _ZNSt6__ndk18ios_base7failureC2EPKcRKNS_10error_codeE();
  return;
}



void _ZNSt6__ndk18ios_base7copyfmtERKS0_(void)

{
  _ZNSt6__ndk18ios_base7copyfmtERKS0_();
  return;
}



void _ZNSt6__ndk18ios_base34__set_failbit_and_consider_rethrowEv(void)

{
  _ZNSt6__ndk18ios_base34__set_failbit_and_consider_rethrowEv();
  return;
}



void _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED1Ev(void)

{
  _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED1Ev();
  return;
}



void _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED1Ev(void)

{
  _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED1Ev();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPclc(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPclc();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EEc(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EEc();
  return;
}



void _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7getlineEPclc(void)

{
  _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7getlineEPclc();
  return;
}



void _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED1Ev(void)

{
  _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED1Ev();
  return;
}



void _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED1Ev(void)

{
  _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED1Ev();
  return;
}



void _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED1Ev(void)

{
  _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED1Ev();
  return;
}



void _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED1Ev(void)

{
  _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED1Ev();
  return;
}



void _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC1Ev(void)

{
  _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC1Ev();
  return;
}



void _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5flushEv(void)

{
  _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5flushEv();
  return;
}



void _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryC2ERS3_(void)

{
  _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryC2ERS3_();
  return;
}



void _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD1Ev(void)

{
  _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD1Ev();
  return;
}



void _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC2ERS3_b(void)

{
  _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC2ERS3_b();
  return;
}



void _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEv(void)

{
  _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEv();
  return;
}



void _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwlw(void)

{
  _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwlw();
  return;
}



void _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EEw(void)

{
  _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EEw();
  return;
}



void _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwlw(void)

{
  _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwlw();
  return;
}



void _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEOS5_(void)

{
  _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEOS5_();
  return;
}



void _ZNKSt6__ndk16locale9has_facetERNS0_2idE(void)

{
  _ZNKSt6__ndk16locale9has_facetERNS0_2idE();
  return;
}



void _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void)

{
  _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4syncEv();
  return;
}



void _ZNSt8bad_castC1Ev(void)

{
  _ZNSt8bad_castC1Ev();
  return;
}



void _ZNSt8bad_castD1Ev(void)

{
  _ZNSt8bad_castD1Ev();
  return;
}



void ungetc(void)

{
  ungetc();
  return;
}



void getc(void)

{
  getc();
  return;
}



void ungetwc(void)

{
  ungetwc();
  return;
}



void getwc(void)

{
  getwc();
  return;
}



void fputwc(void)

{
  fputwc();
  return;
}



void _ZNSt6__ndk18ios_base4InitC1Ev(void)

{
  _ZNSt6__ndk18ios_base4InitC1Ev();
  return;
}



void _ZNSt6__ndk17collateIcED1Ev(void)

{
  _ZNSt6__ndk17collateIcED1Ev();
  return;
}



void _ZNSt6__ndk17collateIwED1Ev(void)

{
  _ZNSt6__ndk17collateIwED1Ev();
  return;
}



void _ZNSt6__ndk19__num_getIcE17__stage2_int_prepERNS_8ios_baseEPcRc(void)

{
  _ZNSt6__ndk19__num_getIcE17__stage2_int_prepERNS_8ios_baseEPcRc();
  return;
}



void _ZNSt6__ndk19__num_getIcE17__stage2_int_loopEciPcRS2_RjcRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_S2_
               (void)

{
  _ZNSt6__ndk19__num_getIcE17__stage2_int_loopEciPcRS2_RjcRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_S2_
            ();
  return;
}



void _ZNSt6__ndk116__check_groupingERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjS8_Rj
               (void)

{
  _ZNSt6__ndk116__check_groupingERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjS8_Rj
            ();
  return;
}



void _ZNSt6__ndk19__num_getIcE19__stage2_float_prepERNS_8ios_baseEPcRcS5_(void)

{
  _ZNSt6__ndk19__num_getIcE19__stage2_float_prepERNS_8ios_baseEPcRcS5_();
  return;
}



void _ZNSt6__ndk19__num_getIcE19__stage2_float_loopEcRbRcPcRS4_ccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjS4_
               (void)

{
  _ZNSt6__ndk19__num_getIcE19__stage2_float_loopEcRbRcPcRS4_ccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjS4_
            ();
  return;
}



void newlocale(void)

{
  newlocale();
  return;
}



void uselocale(void)

{
  uselocale();
  return;
}



void vsscanf(void)

{
  vsscanf();
  return;
}



void _ZNSt6__ndk19__num_getIwE17__stage2_int_prepERNS_8ios_baseEPwRw(void)

{
  _ZNSt6__ndk19__num_getIwE17__stage2_int_prepERNS_8ios_baseEPwRw();
  return;
}



void _ZNSt6__ndk19__num_getIwE17__stage2_int_loopEwiPcRS2_RjwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_Pw
               (void)

{
  _ZNSt6__ndk19__num_getIwE17__stage2_int_loopEwiPcRS2_RjwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_Pw
            ();
  return;
}



void _ZNSt6__ndk19__num_getIwE19__stage2_float_prepERNS_8ios_baseEPwRwS5_(void)

{
  _ZNSt6__ndk19__num_getIwE19__stage2_float_prepERNS_8ios_baseEPwRwS5_();
  return;
}



void _ZNSt6__ndk19__num_getIwE19__stage2_float_loopEwRbRcPcRS4_wwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjPw
               (void)

{
  _ZNSt6__ndk19__num_getIwE19__stage2_float_loopEwRbRcPcRS4_wwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjPw
            ();
  return;
}



void _ZNSt6__ndk19__num_putIcE21__widen_and_group_intEPcS2_S2_S2_RS2_S3_RKNS_6localeE(void)

{
  _ZNSt6__ndk19__num_putIcE21__widen_and_group_intEPcS2_S2_S2_RS2_S3_RKNS_6localeE();
  return;
}



void _ZNSt6__ndk19__num_putIcE23__widen_and_group_floatEPcS2_S2_S2_RS2_S3_RKNS_6localeE(void)

{
  _ZNSt6__ndk19__num_putIcE23__widen_and_group_floatEPcS2_S2_S2_RS2_S3_RKNS_6localeE();
  return;
}



void _ZNSt6__ndk19__num_putIwE21__widen_and_group_intEPcS2_S2_PwRS3_S4_RKNS_6localeE(void)

{
  _ZNSt6__ndk19__num_putIwE21__widen_and_group_intEPcS2_S2_PwRS3_S4_RKNS_6localeE();
  return;
}



void _ZNSt6__ndk19__num_putIwE23__widen_and_group_floatEPcS2_S2_PwRS3_S4_RKNS_6localeE(void)

{
  _ZNSt6__ndk19__num_putIwE23__widen_and_group_floatEPcS2_S2_PwRS3_S4_RKNS_6localeE();
  return;
}



void _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE
               (void)

{
  _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE
            ();
  return;
}



void _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIcEE
               (void)

{
  _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIcEE
            ();
  return;
}



void _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKwSC_
               (void)

{
  _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKwSC_
            ();
  return;
}



void _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIwEE
               (void)

{
  _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIwEE
            ();
  return;
}



void _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIwEE
               (void)

{
  _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIwEE
            ();
  return;
}



void strftime_l(void)

{
  strftime_l();
  return;
}



void _ZNKSt6__ndk110__time_put8__do_putEPwRS1_PK2tmcc(void)

{
  _ZNKSt6__ndk110__time_put8__do_putEPwRS1_PK2tmcc();
  return;
}



void mbsrtowcs(void)

{
  mbsrtowcs();
  return;
}



void _ZNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIcEERNS_10unique_ptrIcPFvPvEEERPcSM_
               (void)

{
  _ZNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIcEERNS_10unique_ptrIcPFvPvEEERPcSM_
            ();
  return;
}



void _ZNSt6__ndk111__money_getIcE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_SF_Ri
               (void)

{
  _ZNSt6__ndk111__money_getIcE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_SF_Ri
            ();
  return;
}



void _ZNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIwEERNS_10unique_ptrIwPFvPvEEERPwSM_
               (void)

{
  _ZNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIwEERNS_10unique_ptrIwPFvPvEEERPwSM_
            ();
  return;
}



void _ZNSt6__ndk111__money_getIwE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_SJ_Ri
               (void)

{
  _ZNSt6__ndk111__money_getIwE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_SJ_Ri
            ();
  return;
}



void _ZNSt6__ndk111__money_putIcE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_Ri
               (void)

{
  _ZNSt6__ndk111__money_putIcE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_Ri
            ();
  return;
}



void _ZNSt6__ndk111__money_putIcE8__formatEPcRS2_S3_jPKcS5_RKNS_5ctypeIcEEbRKNS_10money_base7patternEccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESL_SL_i
               (void)

{
  _ZNSt6__ndk111__money_putIcE8__formatEPcRS2_S3_jPKcS5_RKNS_5ctypeIcEEbRKNS_10money_base7patternEccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESL_SL_i
            ();
  return;
}



void _ZNSt6__ndk111__money_putIwE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_Ri
               (void)

{
  _ZNSt6__ndk111__money_putIwE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_Ri
            ();
  return;
}



void _ZNSt6__ndk111__money_putIwE8__formatEPwRS2_S3_jPKwS5_RKNS_5ctypeIwEEbRKNS_10money_base7patternEwwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNSE_IwNSF_IwEENSH_IwEEEESQ_i
               (void)

{
  _ZNSt6__ndk111__money_putIwE8__formatEPwRS2_S3_jPKwS5_RKNS_5ctypeIwEEbRKNS_10money_base7patternEwwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNSE_IwNSF_IwEENSH_IwEEEESQ_i
            ();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk114codecvt_bynameIDsDu9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk114codecvt_bynameIDsDu9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk114codecvt_bynameIDiDu9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk114codecvt_bynameIDiDu9mbstate_tED1Ev();
  return;
}



void _ZNSt6__ndk15ctypeIcEC1EPKmbm(void)

{
  _ZNSt6__ndk15ctypeIcEC1EPKmbm();
  return;
}



void _ZNSt6__ndk17codecvtIwc9mbstate_tEC1Em(void)

{
  _ZNSt6__ndk17codecvtIwc9mbstate_tEC1Em();
  return;
}



void _ZNSt6__ndk18numpunctIcEC1Em(void)

{
  _ZNSt6__ndk18numpunctIcEC1Em();
  return;
}



void _ZNSt6__ndk18numpunctIwEC1Em(void)

{
  _ZNSt6__ndk18numpunctIwEC1Em();
  return;
}



void _ZNSt6__ndk114collate_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk114collate_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm();
  return;
}



void _ZNSt6__ndk114collate_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk114collate_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm();
  return;
}



void _ZNSt6__ndk112ctype_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk112ctype_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm();
  return;
}



void _ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm();
  return;
}



void _ZNSt6__ndk17codecvtIwc9mbstate_tEC2EPKcm(void)

{
  _ZNSt6__ndk17codecvtIwc9mbstate_tEC2EPKcm();
  return;
}



void _ZNSt6__ndk115numpunct_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk115numpunct_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm()
  ;
  return;
}



void _ZNSt6__ndk115numpunct_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk115numpunct_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm()
  ;
  return;
}



void _ZNSt6__ndk118__time_get_storageIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
               (void)

{
  _ZNSt6__ndk118__time_get_storageIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            ();
  return;
}



void _ZNSt6__ndk118__time_get_storageIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
               (void)

{
  _ZNSt6__ndk118__time_get_storageIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            ();
  return;
}



void _ZNSt6__ndk110__time_putC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void)

{
  _ZNSt6__ndk110__time_putC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
  return;
}



void _ZNSt6__ndk16locale7classicEv(void)

{
  _ZNSt6__ndk16locale7classicEv();
  return;
}



void _ZNSt6__ndk117moneypunct_bynameIcLb0EE4initEPKc(void)

{
  _ZNSt6__ndk117moneypunct_bynameIcLb0EE4initEPKc();
  return;
}



void _ZNSt6__ndk117moneypunct_bynameIcLb1EE4initEPKc(void)

{
  _ZNSt6__ndk117moneypunct_bynameIcLb1EE4initEPKc();
  return;
}



void _ZNSt6__ndk117moneypunct_bynameIwLb0EE4initEPKc(void)

{
  _ZNSt6__ndk117moneypunct_bynameIwLb0EE4initEPKc();
  return;
}



void _ZNSt6__ndk117moneypunct_bynameIwLb1EE4initEPKc(void)

{
  _ZNSt6__ndk117moneypunct_bynameIwLb1EE4initEPKc();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void freelocale(void)

{
  freelocale();
  return;
}



void _ZNSt6__ndk114collate_bynameIcED1Ev(void)

{
  _ZNSt6__ndk114collate_bynameIcED1Ev();
  return;
}



void strcoll_l(void)

{
  strcoll_l();
  return;
}



void strxfrm_l(void)

{
  strxfrm_l();
  return;
}



void _ZNSt6__ndk114collate_bynameIwED1Ev(void)

{
  _ZNSt6__ndk114collate_bynameIwED1Ev();
  return;
}



void wcscoll_l(void)

{
  wcscoll_l();
  return;
}



void wcsxfrm_l(void)

{
  wcsxfrm_l();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void iswlower_l(void)

{
  iswlower_l();
  return;
}



void _ZNSt6__ndk15ctypeIcED1Ev(void)

{
  _ZNSt6__ndk15ctypeIcED1Ev();
  return;
}



void _ZNSt6__ndk15ctypeIcED1Ev(void)

{
  _ZNSt6__ndk15ctypeIcED1Ev();
  return;
}



void _ZNSt6__ndk112ctype_bynameIcEC2EPKcm(void)

{
  _ZNSt6__ndk112ctype_bynameIcEC2EPKcm();
  return;
}



void _ZNSt6__ndk112ctype_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk112ctype_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm();
  return;
}



void _ZNSt6__ndk112ctype_bynameIcED1Ev(void)

{
  _ZNSt6__ndk112ctype_bynameIcED1Ev();
  return;
}



void _ZNSt6__ndk112ctype_bynameIwEC2EPKcm(void)

{
  _ZNSt6__ndk112ctype_bynameIwEC2EPKcm();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm
               (void)

{
  _ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm();
  return;
}



void _ZNSt6__ndk112ctype_bynameIwED1Ev(void)

{
  _ZNSt6__ndk112ctype_bynameIwED1Ev();
  return;
}



void iswspace_l(void)

{
  iswspace_l();
  return;
}



void iswprint_l(void)

{
  iswprint_l();
  return;
}



void iswblank_l(void)

{
  iswblank_l();
  return;
}



void iswcntrl_l(void)

{
  iswcntrl_l();
  return;
}



void iswupper_l(void)

{
  iswupper_l();
  return;
}



void iswalpha_l(void)

{
  iswalpha_l();
  return;
}



void iswdigit_l(void)

{
  iswdigit_l();
  return;
}



void iswpunct_l(void)

{
  iswpunct_l();
  return;
}



void iswxdigit_l(void)

{
  iswxdigit_l();
  return;
}



void towupper_l(void)

{
  towupper_l();
  return;
}



void towlower_l(void)

{
  towlower_l();
  return;
}



void btowc(void)

{
  btowc();
  return;
}



void wctob(void)

{
  wctob();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev(void)

{
  _ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev();
  return;
}



void wcsnrtombs(void)

{
  wcsnrtombs();
  return;
}



void wcrtomb(void)

{
  wcrtomb();
  return;
}



void mbsnrtowcs(void)

{
  mbsnrtowcs();
  return;
}



void mbrtowc(void)

{
  mbrtowc();
  return;
}



void mbtowc(void)

{
  mbtowc();
  return;
}



void __ctype_get_mb_cur_max(void)

{
  __ctype_get_mb_cur_max();
  return;
}



void mbrlen(void)

{
  mbrlen();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk16locale5facetD1Ev(void)

{
  _ZNSt6__ndk16locale5facetD1Ev();
  return;
}



void _ZNSt6__ndk18numpunctIcED1Ev(void)

{
  _ZNSt6__ndk18numpunctIcED1Ev();
  return;
}



void _ZNSt6__ndk18numpunctIcED1Ev(void)

{
  _ZNSt6__ndk18numpunctIcED1Ev();
  return;
}



void _ZNSt6__ndk18numpunctIwED1Ev(void)

{
  _ZNSt6__ndk18numpunctIwED1Ev();
  return;
}



void _ZNSt6__ndk18numpunctIwED1Ev(void)

{
  _ZNSt6__ndk18numpunctIwED1Ev();
  return;
}



void _ZNSt6__ndk115numpunct_bynameIcE6__initEPKc(void)

{
  _ZNSt6__ndk115numpunct_bynameIcE6__initEPKc();
  return;
}



void _ZNSt6__ndk18numpunctIcED1Ev(void)

{
  _ZNSt6__ndk18numpunctIcED1Ev();
  return;
}



void _ZNSt6__ndk115numpunct_bynameIwE6__initEPKc(void)

{
  _ZNSt6__ndk115numpunct_bynameIwE6__initEPKc();
  return;
}



void _ZNSt6__ndk18numpunctIwED1Ev(void)

{
  _ZNSt6__ndk18numpunctIwED1Ev();
  return;
}



void _ZNSt6__ndk110__time_getC1EPKc(void)

{
  _ZNSt6__ndk110__time_getC1EPKc();
  return;
}



void _ZNSt6__ndk110__time_getC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void)

{
  _ZNSt6__ndk110__time_getC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE();
  return;
}



void _ZNSt6__ndk110__time_getD1Ev(void)

{
  _ZNSt6__ndk110__time_getD1Ev();
  return;
}



void _ZNSt6__ndk118__time_get_storageIcE9__analyzeEcRKNS_5ctypeIcEE(void)

{
  _ZNSt6__ndk118__time_get_storageIcE9__analyzeEcRKNS_5ctypeIcEE();
  return;
}



void _ZNSt6__ndk118__time_get_storageIwE9__analyzeEcRKNS_5ctypeIwEE(void)

{
  _ZNSt6__ndk118__time_get_storageIwE9__analyzeEcRKNS_5ctypeIwEE();
  return;
}



void _ZNSt6__ndk118__time_get_storageIcE4initERKNS_5ctypeIcEE(void)

{
  _ZNSt6__ndk118__time_get_storageIcE4initERKNS_5ctypeIcEE();
  return;
}



void _ZNSt6__ndk118__time_get_storageIwE4initERKNS_5ctypeIwEE(void)

{
  _ZNSt6__ndk118__time_get_storageIwE4initERKNS_5ctypeIwEE();
  return;
}



void _ZNSt6__ndk112ctype_bynameIcED1Ev(void)

{
  _ZNSt6__ndk112ctype_bynameIcED1Ev();
  return;
}



void _ZNSt6__ndk112ctype_bynameIwED1Ev(void)

{
  _ZNSt6__ndk112ctype_bynameIwED1Ev();
  return;
}



void _ZNKSt6__ndk118__time_get_storageIcE15__do_date_orderEv(void)

{
  _ZNKSt6__ndk118__time_get_storageIcE15__do_date_orderEv();
  return;
}



void _ZNKSt6__ndk118__time_get_storageIwE15__do_date_orderEv(void)

{
  _ZNKSt6__ndk118__time_get_storageIwE15__do_date_orderEv();
  return;
}



void _ZNSt6__ndk110__time_putD1Ev(void)

{
  _ZNSt6__ndk110__time_putD1Ev();
  return;
}



void strtoll_l(void)

{
  strtoll_l();
  return;
}



void strtoull_l(void)

{
  strtoull_l();
  return;
}



void strtold_l(void)

{
  strtold_l();
  return;
}



void __cxa_get_globals_fast(void)

{
  __cxa_get_globals_fast();
  return;
}



void __cxa_get_globals(void)

{
  __cxa_get_globals();
  return;
}



void syscall(void)

{
  syscall();
  return;
}



void _ZSt14get_unexpectedv(void)

{
  _ZSt14get_unexpectedv();
  return;
}



void _ZSt13get_terminatev(void)

{
  _ZSt13get_terminatev();
  return;
}



void _ZNSt13bad_exceptionD1Ev(void)

{
  _ZNSt13bad_exceptionD1Ev();
  return;
}



void _ZNSt13bad_exceptionD1Ev(void)

{
  _ZNSt13bad_exceptionD1Ev();
  return;
}



void _ZNSt12domain_errorD1Ev(void)

{
  _ZNSt12domain_errorD1Ev();
  return;
}



void _ZNSt11range_errorD1Ev(void)

{
  _ZNSt11range_errorD1Ev();
  return;
}



void _ZNSt9type_infoD1Ev(void)

{
  _ZNSt9type_infoD1Ev();
  return;
}



void _ZNSt9type_infoD1Ev(void)

{
  _ZNSt9type_infoD1Ev();
  return;
}



void _ZNSt10bad_typeidD1Ev(void)

{
  _ZNSt10bad_typeidD1Ev();
  return;
}



void vfprintf(void)

{
  vfprintf();
  return;
}



void android_set_abort_message(void)

{
  android_set_abort_message();
  return;
}



void openlog(void)

{
  openlog();
  return;
}



void syslog(void)

{
  syslog();
  return;
}



void closelog(void)

{
  closelog();
  return;
}



void __cxa_thread_atexit_impl(void)

{
  __cxa_thread_atexit_impl();
  return;
}



void pthread_once(void)

{
  pthread_once();
  return;
}



void getauxval(void)

{
  getauxval();
  return;
}



void __system_property_get(void)

{
  __system_property_get();
  return;
}



void pthread_rwlock_wrlock(void)

{
  pthread_rwlock_wrlock();
  return;
}



void pthread_rwlock_unlock(void)

{
  pthread_rwlock_unlock();
  return;
}



void pthread_rwlock_rdlock(void)

{
  pthread_rwlock_rdlock();
  return;
}


