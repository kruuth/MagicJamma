typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined7;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct game game, *Pgame;

struct game { // PlaceHolder Class Structure
};

typedef struct logger logger, *Plogger;

struct logger { // PlaceHolder Class Structure
};

typedef struct bad_lemon bad_lemon, *Pbad_lemon;

struct bad_lemon { // PlaceHolder Class Structure
};

typedef struct layout layout, *Playout;

struct layout { // PlaceHolder Class Structure
};

typedef struct options options, *Poptions;

struct options { // PlaceHolder Class Structure
};

typedef struct lemon_menu lemon_menu, *Plemon_menu;

struct lemon_menu { // PlaceHolder Class Structure
};

typedef struct log_buf log_buf, *Plog_buf;

struct log_buf { // PlaceHolder Class Structure
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct vector<ll--item*,std--allocator<ll--item*>> vector<ll--item*,std--allocator<ll--item*>>, *Pvector<ll--item*,std--allocator<ll--item*>>;

struct vector<ll--item*,std--allocator<ll--item*>> { // PlaceHolder Class Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Class Structure
};

typedef struct basic_string<char,std--char_traits<char>,std--allocator<char>> basic_string<char,std--char_traits<char>,std--allocator<char>>, *Pbasic_string<char,std--char_traits<char>,std--allocator<char>>;

struct basic_string<char,std--char_traits<char>,std--allocator<char>> { // PlaceHolder Class Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Class Structure
};

typedef struct basic_ostream<char,std--char_traits<char>> basic_ostream<char,std--char_traits<char>>, *Pbasic_ostream<char,std--char_traits<char>>;

struct basic_ostream<char,std--char_traits<char>> { // PlaceHolder Class Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Class Structure
};

typedef struct stat stat, *Pstat;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone * __timezone_ptr_t;

typedef struct _IO_FILE FILE;

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef uint __useconds_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef dword long_long;

typedef struct _TTF_Font _TTF_Font, *P_TTF_Font;

struct _TTF_Font { // PlaceHolder Structure
};

typedef struct SDL_Rect SDL_Rect, *PSDL_Rect;

struct SDL_Rect { // PlaceHolder Structure
};

typedef dword SDL_Color;

typedef struct cfg_t cfg_t, *Pcfg_t;

struct cfg_t { // PlaceHolder Structure
};

typedef struct cfg_opt_t cfg_opt_t, *Pcfg_opt_t;

struct cfg_opt_t { // PlaceHolder Structure
};

typedef struct SDL_Surface SDL_Surface, *PSDL_Surface;

struct SDL_Surface { // PlaceHolder Structure
};

typedef struct SHA1_CTX SHA1_CTX, *PSHA1_CTX;

struct SHA1_CTX { // PlaceHolder Structure
};

typedef struct item item, *Pitem;

struct item { // PlaceHolder Structure
};

typedef struct menu menu, *Pmenu;

struct menu { // PlaceHolder Structure
};

typedef struct basic_streambuf basic_streambuf, *Pbasic_streambuf;

struct basic_streambuf { // PlaceHolder Structure
};

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef dword _Ios_Openmode;

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef dword _Ios_Iostate;

typedef dword fpos;

typedef dword _Ios_Seekdir;

typedef dword __normal_iterator;

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_ARM {
    PT_ARM_EXIDX=1879048192,
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_ARM {
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_OVERLAYSECTION=1879048197,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_ARM;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf32_DynTag_ARM {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf32_DynTag_ARM;

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



void SDL_FreeSurface(void)

{
  SDL_FreeSurface();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



void cfg_getnint(void)

{
  cfg_getnint();
  return;
}



void SDL_JoystickOpen(void)

{
  SDL_JoystickOpen();
  return;
}



void cfg_set_validate_func(void)

{
  cfg_set_validate_func();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
  return pvVar1;
}



void __thiscall operator__(basic_ostream_char_std__char_traits_char__ *this,int param_1)

{
  operator__(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __throw_bad_cast(void)

{
  __throw_bad_cast();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE6xsgetnEPci(char *param_1,int param_2)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __thiscall ios_base(ios_base *this)

{
  ios_base(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE9underflowEv(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void cfg_getnsec(void)

{
  cfg_getnsec();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _M_dispose(allocator *param_1)

{
  _M_dispose(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _M_widen_init(void)

{
  _M_widen_init();
  return;
}



void cfg_getint(void)

{
  cfg_getint();
  return;
}



void SDL_ShowCursor(void)

{
  SDL_ShowCursor();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE5imbueERKSt6locale(locale *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



void rotozoomSurface(void)

{
  rotozoomSurface();
  return;
}



void __printf_chk(void)

{
  __printf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



void __thiscall Init(Init *this)

{
  Init(this);
  return;
}



void cfg_title(void)

{
  cfg_title();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = pclose(__stream);
  return iVar1;
}



void TTF_Init(void)

{
  TTF_Init();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



void SDL_GetTicks(void)

{
  SDL_GetTicks();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void SDL_PollEvent(void)

{
  SDL_PollEvent();
  return;
}



void SDL_AddTimer(void)

{
  SDL_AddTimer();
  return;
}



void __cxa_end_cleanup(void)

{
  __cxa_end_cleanup();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void basic_string(basic_string *param_1)

{
  basic_string(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __throw_out_of_range(char *param_1)

{
  __throw_out_of_range(param_1);
  return;
}



void SDL_FillRect(void)

{
  SDL_FillRect();
  return;
}



void SDL_JoystickEventState(void)

{
  SDL_JoystickEventState();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void basic_string(basic_string *param_1,uint param_2,uint param_3)

{
  basic_string(param_1,param_2,param_3);
  return;
}



void SDL_SetVideoMode(void)

{
  SDL_SetVideoMode();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void insert(uint param_1,char *param_2,uint param_3)

{
  insert(param_1,param_2,param_3);
  return;
}



void cfg_size(void)

{
  cfg_size();
  return;
}



void __thiscall _ZNSt8ios_base4InitD1Ev(Init *this)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator___std__char_traits_char__(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



void TTF_RenderText_Solid(void)

{
  TTF_RenderText_Solid();
  return;
}



void __thiscall _ZNSsD1Ev(basic_string_char_std__char_traits_char__std__allocator_char__ *this)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



void SDL_SetAlpha(void)

{
  SDL_SetAlpha();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = access(__name,__type);
  return iVar1;
}



void cfg_getbool(void)

{
  cfg_getbool();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _M_destroy(allocator *param_1)

{
  _M_destroy(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = gettimeofday(__tv,__tz);
  return iVar1;
}



void cfg_getsec(void)

{
  cfg_getsec();
  return;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



void SDL_UpperBlit(void)

{
  SDL_UpperBlit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void find(char *param_1,uint param_2,uint param_3)

{
  find(param_1,param_2,param_3);
  return;
}



void TTF_OpenFontRW(void)

{
  TTF_OpenFontRW();
  return;
}



void SDL_Init(void)

{
  SDL_Init();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE5uflowEv(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __read_chk(void)

{
  __read_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void replace(uint param_1,uint param_2,char *param_3,uint param_4)

{
  replace(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE9showmanycEv(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void cfg_error(void)

{
  cfg_error();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void rfind(char param_1,uint param_2)

{
  rfind(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void cfg_init(void)

{
  cfg_init();
  return;
}



void TTF_RenderUTF8_Solid(void)

{
  TTF_RenderUTF8_Solid();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void TTF_SetFontStyle(void)

{
  TTF_SetFontStyle();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void basic_string(char *param_1,allocator *param_2)

{
  basic_string(param_1,param_2);
  return;
}



// std::basic_ostream<char, std::char_traits<char>>::~basic_ostream()

void __thiscall _basic_ostream(basic_ostream_char_std__char_traits_char__ *this)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE9pbackfailEi(int param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



void SDL_RemoveTimer(void)

{
  SDL_RemoveTimer();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}



void cfg_getstr(void)

{
  cfg_getstr();
  return;
}



void __aeabi_uidiv(void)

{
  __aeabi_uidiv();
  return;
}



void __thiscall locale(locale *this)

{
  locale(this);
  return;
}



void SDL_WM_ToggleFullScreen(void)

{
  SDL_WM_ToggleFullScreen();
  return;
}



void SDL_RWFromMem(void)

{
  SDL_RWFromMem();
  return;
}



// virtual thunk to std::basic_ostream<char, std::char_traits<char>>::~basic_ostream()

void _basic_ostream(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_pure_virtual(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



void TTF_OpenFont(void)

{
  TTF_OpenFont();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



void SDL_CreateRGBSurface(void)

{
  SDL_CreateRGBSurface();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void init(basic_streambuf *param_1)

{
  init(param_1);
  return;
}



void cfg_free(void)

{
  cfg_free();
  return;
}



void IMG_Load(void)

{
  IMG_Load();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE6setbufEPci(char *param_1,int param_2)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void SDL_EnableKeyRepeat(void)

{
  SDL_EnableKeyRepeat();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _M_mutate(uint param_1,uint param_2,uint param_3)

{
  _M_mutate(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void flush(void)

{
  flush();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __thiscall _ios_base(ios_base *this)

{
  _ios_base(this);
  return;
}



void __cxa_allocate_exception(void)

{
  __cxa_allocate_exception();
  return;
}



void SDL_UpdateRect(void)

{
  SDL_UpdateRect();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _M_replace_aux(uint param_1,uint param_2,uint param_3,char param_4)

{
  _M_replace_aux(param_1,param_2,param_3,param_4);
  return;
}



void __thiscall _exception(exception *this)

{
  _exception(this);
  return;
}



void __cxa_free_exception(void)

{
  __cxa_free_exception();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void assign(basic_string *param_1)

{
  assign(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = sleep(__seconds);
  return uVar1;
}



void SDL_DisplayFormat(void)

{
  SDL_DisplayFormat();
  return;
}



void rotozoomSurfaceXY(void)

{
  rotozoomSurfaceXY();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void assign(char *param_1,uint param_2)

{
  assign(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void TTF_Quit(void)

{
  TTF_Quit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = popen(__command,__modes);
  return pFVar1;
}



void __aeabi_atexit(void)

{
  __aeabi_atexit();
  return;
}



// std::basic_ostream<char, std::char_traits<char>>::~basic_ostream()

void __thiscall _basic_ostream(basic_ostream_char_std__char_traits_char__ *this)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void clear(_Ios_Iostate param_1)

{
  clear(param_1);
  return;
}



// virtual thunk to std::basic_ostream<char, std::char_traits<char>>::~basic_ostream()

void _basic_ostream(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE7seekposESt4fposI11__mbstate_tESt13_Ios_Openmode
               (fpos param_1,_Ios_Openmode param_2)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_throw(void)

{
                    // WARNING: Subroutine does not return
  __cxa_throw();
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



void SDL_Delay(void)

{
  SDL_Delay();
  return;
}



void SDL_Quit(void)

{
  SDL_Quit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = fork();
  return _Var1;
}



void __cxa_end_catch(void)

{
  __cxa_end_catch();
  return;
}



void __aeabi_idiv(void)

{
  __aeabi_idiv();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



void cfg_parse(void)

{
  cfg_parse();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode
               (long_long param_1,_Ios_Seekdir param_2,_Ios_Openmode param_3)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = munmap(__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * endl_char_std__char_traits_char__(basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  
  pbVar1 = endl_char_std__char_traits_char__(param_1);
  return pbVar1;
}



void __cxa_begin_catch(void)

{
  __cxa_begin_catch();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void append(char *param_1,uint param_2)

{
  append(param_1,param_2);
  return;
}



void SDL_JoystickClose(void)

{
  SDL_JoystickClose();
  return;
}



void __sprintf_chk(void)

{
  __sprintf_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



void SDL_GetError(void)

{
  SDL_GetError();
  return;
}



void __strcpy_chk(void)

{
  __strcpy_chk();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZNSt15basic_streambufIcSt11char_traitsIcEE6xsputnEPKci(char *param_1,int param_2)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __thiscall _locale(locale *this)

{
  _locale(this);
  return;
}



void cfg_parse_buf(void)

{
  cfg_parse_buf();
  return;
}



void SDL_PushEvent(void)

{
  SDL_PushEvent();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = tolower(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void put(char param_1)

{
  put(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream *
__ostream_insert_char_std__char_traits_char__(basic_ostream *param_1,char *param_2,int param_3)

{
  basic_ostream *pbVar1;
  
  pbVar1 = __ostream_insert_char_std__char_traits_char__(param_1,param_2,param_3);
  return pbVar1;
}



void TTF_CloseFont(void)

{
  TTF_CloseFont();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::basic_ostream<char, std::char_traits<char>>&
// std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char
// const*) [clone .part.10]

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)clear((_Ios_Iostate)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::basic_ostream<char, std::char_traits<char>>&
// std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char
// const*) [clone .part.7]

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)clear((_Ios_Iostate)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
  return pbVar1;
}



// WARNING: Removing unreachable block (ram,0x0000b734)
// WARNING: Restarted to delay deadcode elimination for space: ram

int main(int param_1,int param_2)

{
  bool bVar1;
  int __fd;
  int iVar2;
  undefined4 uVar3;
  SDL_Surface *pSVar4;
  FILE *__stream;
  size_t sVar5;
  int extraout_r1;
  int iVar6;
  undefined1 *puVar7;
  int *this;
  uint uVar8;
  uchar *puVar9;
  uint uVar10;
  char *local_134;
  timeval tStack304;
  timezone tStack296;
  int local_120;
  int local_11c;
  uchar auStack128 [68];
  int local_3c;
  
  local_3c = __stack_chk_guard;
  __fd = access("/tmp/VERT",0);
  if (((__fd == 0) && (__fd = access("/tmp/BOOTOVER",0), __fd != 0)) &&
     (__fd = access("./xhidemv",0), __fd == 0)) {
    system("./xhidemv");
    goto LAB_0000b1ce;
  }
  puts("\nxhidemh V1.953AW VGA.");
  __fd = access("./xlevel",0);
  if (__fd == 0) {
    max_menuitem = 3;
  }
  else {
    max_menuitem = 2;
    puts("Editing game difficulty not support. ");
  }
  __fd = access("/tmp/BIT1",0);
  if (__fd == 0) {
LAB_0000b1e6:
    is_bit2_flip = 0;
    __fd = access("/tmp/BIT2",0);
    if (__fd == 0) {
      is_bit2_flip = 1;
    }
    if (param_1 < 2) {
      uVar10 = 0;
    }
    else {
      __fd = strcasecmp(*(char **)(param_2 + 4),"ab12");
      uVar10 = count_leading_zeroes(__fd);
      uVar10 = uVar10 >> 5;
    }
    __fd = 3;
    lktbad = 0;
    do {
      iVar2 = lkticc_init();
      if (0 < iVar2) {
        system("reboot -f");
      }
      if (uVar10 == 0) {
        usleep((__useconds_t)&DAT_000186a0);
        iVar2 = Get_Ready_For_COMM(5);
        if (iVar2 < 1) {
          system("reboot -f");
        }
        __stream = fopen("/sdcard/sn.bin","r");
        lktbad = count_leading_zeroes(__stream);
        lktbad = lktbad >> 5;
        if (lktbad == 0) {
          sVar5 = fread(auStack128,1,0x40,__stream);
          if ((int)sVar5 < 0x40) {
            lktbad = 1;
          }
          fclose(__stream);
        }
        else {
          memset(auStack128,0,0x40);
        }
        gettimeofday(&tStack304,(__timezone_ptr_t)&tStack296);
        srand(tStack304.tv_usec);
        iVar2 = rand();
        uVar8 = SUB84(ROUND((double)(longlong)iVar2 * 10.00000000 * 0.00000000),0) + 1U & 7;
        puVar9 = auStack128 + uVar8 * 8;
        iVar2 = Verify_sndata(puVar9,uVar8);
        if ((7 < iVar2) || (iVar2 = Verify_sndata(puVar9,uVar8), 7 < iVar2)) {
          dip_val = 0;
          dip_val = read_dipsw_Y2_16();
          lkticc_close();
          break;
        }
        lktbad = 1;
        dip_val = 0;
        dip_val = read_dipsw_Y2_16();
        lkticc_close();
      }
      else {
        dip_val = 0;
        dip_val = read_dipsw_Y2_16();
        lkticc_close();
        if (7 < iVar2) break;
      }
      __fd = __fd + -1;
    } while (__fd != 0);
    setgame_len = Read_nvram_setgame(setgame);
    __fd = access("/tmp/BIT1",0);
    iVar2 = __fd;
    if (__fd == 0) {
      do {
        needto_reboot = iVar2;
        needto_editgamelist = __fd;
        __fd = lkticc_init();
        if (0 < __fd) {
          system("reboot -f");
        }
        is_home_mode = 0;
        __fd = access("/tmp/HOME",0);
        if (__fd == 0) {
          is_home_mode = 1;
        }
        else {
          if ((is_home_mode == 0) && (uVar10 == 0)) {
            __fd = 5;
            do {
              iVar2 = access("/dev/input/event3",0);
              if (iVar2 == 0) {
                is_home_mode = 1;
                system("echo 1 >> /tmp/HOME");
                break;
              }
              SDL_Delay(1000);
              __fd = __fd + -1;
            } while (__fd != 0);
          }
        }
        is_cn = 0;
        __fd = access("/tmp/BIT8",0);
        if (__fd == 0) {
          is_cn = 1;
        }
        basic_string((char *)&local_134,(allocator *)"./xrun");
        load((options *)&g_opts,local_134);
        puVar7 = log;
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x20) = 0;
        SDL_Init(0x231);
        s3c_fb_g2d_init();
        SDL_ShowCursor(0);
        SDL_EnableKeyRepeat(500,0x1e);
        __fd = open("/dev/fb0",2);
        if (__fd < 0) {
          puts("Error : Can not open framebuffer device");
LAB_0000b5a6:
          xres = get_int((char *)&g_opts);
          yres = get_int((char *)&g_opts);
        }
        else {
          iVar2 = ioctl(__fd,0x4600,&local_120);
          if (iVar2 != 0) {
            puts("Error reading variable information");
            close(__fd);
            goto LAB_0000b5a6;
          }
          xres = local_120;
          yres = local_11c;
          close(__fd);
          if (local_120 < 1) goto LAB_0000b5a6;
        }
        is_cga = 0;
        if (xres - 0x141U < 0x13f) {
          is_cga = 0x180;
        }
        else {
          if ((xres < 0x280) && (yres < 0x1e0)) {
            is_cga = 1;
          }
        }
        uVar3 = get_int((char *)&g_opts);
        get_bool((char *)&g_opts);
        pSVar4 = (SDL_Surface *)SDL_SetVideoMode(xres,yres,uVar3);
        if (pSVar4 == (SDL_Surface *)0x0) {
LAB_0000b676:
          __fd = 1;
LAB_0000b67a:
          _M_dispose((allocator *)(local_134 + -0xc));
          goto LAB_0000b1ce;
        }
        SDL_JoystickEventState(1);
        if (is_home_mode == 0) {
          uVar3 = SDL_JoystickOpen();
        }
        else {
          uVar3 = SDL_JoystickOpen(2);
        }
        if (uVar10 != 0) {
          lktbad = 0;
        }
        __fd = TTF_Init();
        if (__fd != 0) {
          SDL_Quit();
          goto LAB_0000b676;
        }
        this = (int *)operator_new(0x38);
        lemon_menu((lemon_menu *)this,pSVar4);
        if (is_home_mode == 0) {
          main_loop((lemon_menu *)this);
        }
        else {
          main_loop_wireless((lemon_menu *)this);
        }
        while( true ) {
          if (this != (int *)0x0) {
            _lemon_menu((lemon_menu *)this);
            operator_delete(this);
          }
          TTF_Quit();
          SDL_JoystickClose(uVar3);
          SDL_Quit();
          s3c_fb_g2d_free();
          lkticc_close();
          if (0 < needto_reboot) {
            needto_reboot = 0;
            goto LAB_0000b454;
          }
          if (needto_editgamelist < 1) goto LAB_0000b67a;
          *(undefined4 *)(*(int *)((int)puVar7 + *(int *)(*(int *)puVar7 + -0xc) + 0x78) + 0x24) = 4
          ;
          __ostream_insert_char_std__char_traits_char__
                    ((basic_ostream *)log,"handle_run(SDL_Quit()): ",0x18);
          this = (int *)__ostream_insert_char_std__char_traits_char__
                                  ((basic_ostream *)log,save_cmd,*(int *)(save_cmd + -0xc));
          puVar7 = *(undefined1 **)((int)this + *(int *)(*this + -0xc) + 0x7c);
          if ((int *)puVar7 != (int *)0x0) break;
          __throw_bad_cast();
          do {
            _M_dispose((allocator *)(local_134 + -0xc));
            __cxa_end_cleanup();
          } while (extraout_r1 != 1);
          __cxa_begin_catch();
          __cxa_end_catch();
        }
        if (*(char *)((int *)puVar7 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*(int *)puVar7 + 0x18))(puVar7,10);
        }
        put((char)this);
        flush();
        system(save_cmd);
        needto_editgamelist = 0;
LAB_0000b454:
        __fd = needto_editgamelist;
        iVar2 = needto_reboot;
        if ((allocator *)(local_134 + -0xc) != (allocator *)_S_empty_rep_storage) {
          this = (int *)(local_134 + -4);
          DataMemoryBarrier(0x1f);
          do {
            ExclusiveAccess(this);
            iVar6 = *this;
            bVar1 = (bool)hasExclusiveAccess(this);
          } while (!bVar1);
          *this = iVar6 + -1;
          DataMemoryBarrier(0x1f);
          __fd = needto_editgamelist;
          iVar2 = needto_reboot;
          if (iVar6 < 1) {
            _M_destroy((allocator *)(local_134 + -0xc));
            __fd = needto_editgamelist;
            iVar2 = needto_reboot;
          }
        }
      } while( true );
    }
  }
  else {
    gettimeofday(&tStack304,(__timezone_ptr_t)&tStack296);
    srand(tStack304.tv_usec);
    __fd = rand();
    if ((SUB84(ROUND((double)(longlong)__fd * 10.00000000 * 0.00000000),0) + 1U & 7) == 1)
    goto LAB_0000b1e6;
  }
  __fd = 0;
LAB_0000b1ce:
  if (local_3c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __fd;
}



void _GLOBAL__sub_I_dip_val(void)

{
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  save_cmd = 0x2942c;
  __aeabi_atexit(&save_cmd,_ZNSsD1Ev,&__dso_handle);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// _GLOBAL__sub_I_get_flip180_pixel(void)

void _GLOBAL__sub_I_get_flip180_pixel(void)

{
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// _GLOBAL__sub_I_cb_dimension(void)

void _GLOBAL__sub_I_cb_dimension(void)

{
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  return;
}



// ll::menu::_GLOBAL__sub_I_~menu(void)

void _GLOBAL__sub_I__menu(void)

{
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  return;
}



// ll::game::_GLOBAL__sub_I_snapshot(void)

void _GLOBAL__sub_I_snapshot(void)

{
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  return;
}



// ll::_GLOBAL__sub_I_g_opts(void)

void _GLOBAL__sub_I_g_opts(void)

{
  undefined4 in_r3;
  
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  g_opts._4_4_ = 0;
  __aeabi_atexit(&g_opts,0x12fed,&__dso_handle,in_r3);
  return;
}



// ll::_GLOBAL__sub_I_log(void)

void _GLOBAL__sub_I_log(void)

{
  undefined **ppuVar1;
  
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  ios_base((ios_base *)(log + 4));
  log._4_4_ = (undefined **)0x292b8;
  log._116_4_ = 0;
  log[120] = 0;
  log[121] = 0;
  log._124_4_ = 0;
  log._128_4_ = 0;
  log._132_4_ = 0;
  log._136_4_ = 0;
  ppuVar1 = (undefined **)operator_new(0x28);
  ppuVar1[1] = (undefined *)0x0;
  ppuVar1[2] = (undefined *)0x0;
  *ppuVar1 = (undefined *)0x293e8;
  ppuVar1[3] = (undefined *)0x0;
  ppuVar1[4] = (undefined *)0x0;
  ppuVar1[5] = (undefined *)0x0;
  ppuVar1[6] = (undefined *)0x0;
  locale((locale *)(ppuVar1 + 7));
  *(undefined ***)ppuVar1 = &PTR__log_buf_1_00027388;
  log._0_4_ = &PTR__basic_ostream_000273cc;
  log._4_4_ = &PTR__basic_ostream_000273e0;
  init((basic_streambuf *)(log + 4));
  log._0_4_ = (undefined **)&DAT_00027404;
  log._4_4_ = (undefined **)&DAT_00027418;
  __aeabi_atexit(log,0x13695,&__dso_handle);
  return;
}



void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(0xb111,in_stack_00000000,&stack0x00000004,0x17db9,0x17df9,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x0000b990)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x0000b9b2)
// WARNING: Removing unreachable block (ram,0x0000b9be)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0000b9e2)
// WARNING: Removing unreachable block (ram,0x0000b9ee)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_9528 == '\0') {
    deregister_tm_clones();
    completed_9528 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0000ba20)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// Get_FB_Resolution(int*, int*)

int Get_FB_Resolution(int *param_1,int *param_2)

{
  int __fd;
  int iVar1;
  int local_b0;
  int local_ac;
  
  __fd = open("/dev/fb0",2);
  if (__fd < 0) {
    puts("Error : Can not open framebuffer device");
    return 0;
  }
  iVar1 = ioctl(__fd,0x4600,&local_b0);
  if (iVar1 == 0) {
    *param_1 = local_b0;
    *param_2 = local_ac;
    close(__fd);
    return local_b0;
  }
  puts("Error reading variable information");
  close(__fd);
  return 0;
}



// cmp_item(ll::item*, ll::item*)

uint cmp_item(item *param_1,item *param_2)

{
  char *__s1;
  char *__s2;
  uint uVar1;
  
  __s1 = (char *)(**(code **)(*(int *)param_1 + 8))();
  __s2 = (char *)(**(code **)(*(int *)param_2 + 8))(param_2);
  uVar1 = strcmp(__s1,__s2);
  return uVar1 >> 0x1f;
}



// snap_timer_callback(unsigned int, void*)

undefined4 snap_timer_callback(uint param_1,void *param_2)

{
  undefined local_20 [4];
  undefined4 local_1c;
  
  local_20[0] = 0x18;
  local_1c = 1;
  SDL_PushEvent(local_20);
  return 0;
}



// enable_osd_timer_callback(unsigned int, void*)

undefined4 enable_osd_timer_callback(uint param_1,void *param_2)

{
  if (can_show_osd != 0) {
    osd_cmd(1,0);
    SDL_Delay(10);
    osd_cmd(1,0);
    return 0;
  }
  osd_cmd(2,0);
  SDL_Delay(10);
  osd_cmd(2,0);
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, bool (*)(ll::item*,
// ll::item*)>(__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, __gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, bool (*)(ll::item*, ll::item*)) [clone .constprop.46]

void 
     __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
               (__normal_iterator param_1,__normal_iterator param_2,FuncDef2 *param_3)

{
  int **ppiVar1;
  char *__s1;
  char *__s2;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  if (param_1 != param_2) {
    ppiVar7 = (int **)(param_1 + 4);
    ppiVar1 = (int **)param_1;
    while ((int **)param_2 != ppiVar7) {
      ppiVar1 = ppiVar1 + 1;
      ppiVar6 = ppiVar7 + 1;
      piVar3 = *(int **)param_1;
      __s1 = (char *)(**(code **)(**ppiVar1 + 8))();
      __s2 = (char *)(**(code **)(*piVar3 + 8))(piVar3);
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 < 0) {
        piVar3 = *ppiVar7;
        iVar2 = (int)((int)ppiVar1 - param_1) >> 2;
        if (iVar2 != 0) {
          memmove(ppiVar6 + iVar2 * 0x3fffffff,(void *)param_1,iVar2 * 4);
        }
        *(int **)param_1 = piVar3;
        ppiVar7 = ppiVar6;
      }
      else {
        piVar3 = *ppiVar7;
        while( true ) {
          ppiVar4 = ppiVar7 + -1;
          piVar5 = *ppiVar4;
          __s1 = (char *)(**(code **)(*piVar3 + 8))(piVar3);
          __s2 = (char *)(**(code **)(*piVar5 + 8))(piVar5);
          iVar2 = strcmp(__s1,__s2);
          if (-1 < iVar2) break;
          *ppiVar7 = *ppiVar4;
          ppiVar7 = ppiVar4;
        }
        *ppiVar7 = piVar3;
        ppiVar7 = ppiVar6;
      }
    }
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, int, bool (*)(ll::item*,
// ll::item*)>(__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, __gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, int, bool (*)(ll::item*, ll::item*)) [clone .constprop.41]

void 
     __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
               (__normal_iterator param_1,__normal_iterator param_2,int param_3,FuncDef3 *param_4)

{
  bool bVar1;
  char *__s1;
  char *__s2;
  int iVar2;
  uint uVar3;
  int iVar4;
  item *extraout_r1;
  item *piVar5;
  item *extraout_r1_00;
  undefined4 uVar6;
  int **ppiVar7;
  FuncDef3 *param_4_00;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int **param_2_00;
  int local_4c;
  int **local_48;
  
  uVar3 = (int **)(param_2 - param_1);
  if ((int)uVar3 < 0x44) {
    return;
  }
  if (param_3 != 0) {
    ppiVar7 = (int **)(param_1 + 4);
    param_2_00 = (int **)param_2;
    do {
      param_3 = param_3 + -1;
      iVar9 = ((int)(int **)((int)param_2_00 - param_1) >> 2) -
              ((int)(int **)((int)param_2_00 - param_1) >> 0x1f) >> 1;
      piVar12 = *(int **)(param_1 + iVar9 * 4);
      __s1 = (char *)(**(code **)(**(int **)(param_1 + 4) + 8))();
      __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
      iVar2 = strcmp(__s1,__s2);
      param_2 = (__normal_iterator)ppiVar7;
      uVar3 = param_2_00;
      if (iVar2 < 0) {
        piVar12 = param_2_00[-1];
        __s1 = (char *)(**(code **)(**(int **)(param_1 + iVar9 * 4) + 8))();
        __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
        iVar2 = strcmp(__s1,__s2);
        if (iVar2 < 0) {
          uVar6 = *(undefined4 *)param_1;
          *(undefined4 *)param_1 = *(undefined4 *)(param_1 + iVar9 * 4);
          *(undefined4 *)(param_1 + iVar9 * 4) = uVar6;
          piVar12 = *(int **)param_1;
        }
        else {
          piVar12 = param_2_00[-1];
          __s1 = (char *)(**(code **)(**(int **)(param_1 + 4) + 8))();
          __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
          iVar2 = strcmp(__s1,__s2);
          if (-1 < iVar2) goto LAB_0000bcee;
          piVar12 = *(int **)param_1;
          *(int **)param_1 = param_2_00[-1];
          param_2_00[-1] = piVar12;
          piVar12 = *(int **)param_1;
        }
      }
      else {
        piVar12 = param_2_00[-1];
        __s1 = (char *)(**(code **)(**(int **)(param_1 + 4) + 8))();
        __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
        iVar2 = strcmp(__s1,__s2);
        if (iVar2 < 0) {
LAB_0000bcee:
          piVar12 = *(int **)(param_1 + 4);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)param_1;
          *(int **)param_1 = piVar12;
        }
        else {
          piVar12 = param_2_00[-1];
          __s1 = (char *)(**(code **)(**(int **)(param_1 + iVar9 * 4) + 8))();
          __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
          iVar2 = strcmp(__s1,__s2);
          piVar12 = *(int **)param_1;
          if (iVar2 < 0) {
            *(int **)param_1 = param_2_00[-1];
            param_2_00[-1] = piVar12;
          }
          else {
            *(undefined4 *)param_1 = *(undefined4 *)(param_1 + iVar9 * 4);
            *(int **)(param_1 + iVar9 * 4) = piVar12;
          }
          piVar12 = *(int **)param_1;
        }
      }
      while( true ) {
        while( true ) {
          __s1 = (char *)(**(code **)(**(int **)param_2 + 8))();
          __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
          iVar2 = strcmp(__s1,__s2);
          piVar5 = extraout_r1;
          if (-1 < iVar2) break;
          piVar12 = *(int **)param_1;
          param_2 = (__normal_iterator)((int **)param_2 + 1);
        }
        do {
          uVar3 = uVar3 + -1;
          piVar12 = *uVar3;
          param_4_00 = *(FuncDef3 **)(**(int **)param_1 + 8);
          bVar1 = (*param_4_00)((item *)*(int **)param_1,piVar5);
          __s1 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
          iVar2 = strcmp((char *)(uint)bVar1,__s1);
          piVar5 = extraout_r1_00;
        } while (iVar2 < 0);
        if (uVar3 <= param_2) break;
        piVar12 = *(int **)param_2;
        *(int **)param_2 = *uVar3;
        *uVar3 = piVar12;
        piVar12 = *(int **)param_1;
        param_2 = (__normal_iterator)((int **)param_2 + 1);
      }
            
      __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
                (param_2,(__normal_iterator)param_2_00,param_3,param_4_00);
      uVar3 = (int **)(param_2 - param_1);
      if ((int)uVar3 < 0x44) {
        return;
      }
      param_2_00 = (int **)param_2;
    } while (param_3 != 0);
  }
  uVar3 = (int)uVar3 >> 2;
  iVar2 = (int)(uVar3 - 2) >> 1;
  iVar9 = iVar2 * 2 + 1;
  uVar3 = (int **)(param_1 + iVar2 * 4);
  param_2_00 = (int **)(param_1 + iVar9 * 4);
  local_4c = iVar2;
  local_48 = uVar3;
  do {
    ppiVar7 = local_48 + -1;
    piVar12 = *local_48;
    iVar10 = local_4c;
    while (iVar10 < (int)(uVar3 - 1) >> 1) {
      iVar8 = iVar10 + 1;
      iVar13 = iVar8 * 2 + -1;
      piVar11 = *(int **)(param_1 + iVar13 * 4);
      __s1 = (char *)(**(code **)(**(int **)(param_1 + iVar8 * 8) + 8))();
      __s2 = (char *)(**(code **)(*piVar11 + 8))(piVar11);
      iVar4 = strcmp(__s1,__s2);
      iVar14 = iVar13 * 4;
      if (-1 < iVar4) {
        iVar14 = iVar8 * 8;
      }
      local_48 = (int **)(param_1 + iVar14);
      if (-1 < iVar4) {
        iVar13 = iVar8 * 2;
      }
      *(int **)(param_1 + iVar10 * 4) = *local_48;
      iVar10 = iVar13;
    }
    if (((uVar3 & 1) == 0) && (iVar2 == iVar10)) {
      *uVar3 = *param_2_00;
      iVar10 = iVar9;
      local_48 = param_2_00;
    }
    while (local_4c < iVar10) {
      iVar13 = (iVar10 + -1) / 2;
      __s1 = (char *)(**(code **)(**(int **)(param_1 + iVar13 * 4) + 8))();
      __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
      iVar14 = strcmp(__s1,__s2);
      if (-1 < iVar14) {
        local_48 = (int **)(param_1 + iVar10 * 4);
        break;
      }
      *(undefined4 *)(param_1 + iVar10 * 4) = *(undefined4 *)(param_1 + iVar13 * 4);
      iVar10 = iVar13;
      local_48 = (int **)(param_1 + iVar13 * 4);
    }
    *local_48 = piVar12;
    local_48 = (int **)param_2;
    if (local_4c == 0) break;
    local_4c = local_4c + -1;
    local_48 = ppiVar7;
  } while( true );
LAB_0000bd9a:
  piVar12 = local_48[-1];
  local_48 = local_48 + -1;
  *local_48 = *(int **)param_1;
  iVar9 = (int)(int **)((int)local_48 - param_1) >> 2;
  iVar2 = (iVar9 + -1) / 2;
  if (iVar2 < 1) {
    iVar10 = 0;
    uVar3 = (int **)param_1;
  }
  else {
    iVar14 = 0;
    do {
      iVar8 = iVar14 + 1;
      iVar10 = iVar8 * 2 + -1;
      piVar11 = *(int **)(param_1 + iVar10 * 4);
      __s1 = (char *)(**(code **)(**(int **)(param_1 + iVar8 * 8) + 8))();
      __s2 = (char *)(**(code **)(*piVar11 + 8))(piVar11);
      iVar4 = strcmp(__s1,__s2);
      iVar13 = iVar10 * 4;
      if (-1 < iVar4) {
        iVar13 = iVar8 * 8;
      }
      uVar3 = (int **)(param_1 + iVar13);
      if (-1 < iVar4) {
        iVar10 = iVar8 * 2;
      }
      *(int **)(param_1 + iVar14 * 4) = *uVar3;
      iVar14 = iVar10;
    } while (iVar10 < iVar2);
  }
  if ((iVar9 << 0x1f < 0) || (iVar10 != (iVar9 + -2) / 2)) {
    if (0 < iVar10) goto LAB_0000bf58;
  }
  else {
    iVar10 = iVar10 * 2 + 1;
    *uVar3 = *(int **)(param_1 + iVar10 * 4);
LAB_0000bf58:
    iVar2 = iVar10 + -1;
    do {
      iVar14 = iVar2 >> 1;
      uVar3 = (int **)(param_1 + iVar14 * 4);
      __s1 = (char *)(**(code **)(**(int **)(param_1 + iVar14 * 4) + 8))();
      __s2 = (char *)(**(code **)(*piVar12 + 8))(piVar12);
      iVar9 = strcmp(__s1,__s2);
      iVar2 = (iVar14 + -1) - (iVar14 + -1 >> 0x1f);
      if (-1 < iVar9) {
        uVar3 = (int **)(param_1 + iVar10 * 4);
        break;
      }
      *(undefined4 *)(param_1 + iVar10 * 4) = *(undefined4 *)(param_1 + iVar14 * 4);
      iVar10 = iVar14;
    } while (iVar14 != 0);
  }
  *uVar3 = piVar12;
  if ((int)(int **)((int)local_48 - param_1) < 8) {
    return;
  }
  goto LAB_0000bd9a;
}



// get_flip180_pixel(int, int, int*)

undefined4 get_flip180_pixel(int param_1,int param_2,int *param_3)

{
  *param_3 = (xres - param_1) + 1;
  param_3[1] = (yres - param_2) + 1;
  return 0;
}



// ll::lemon_menu::init_osd_for_mplayer()

void __thiscall init_osd_for_mplayer(lemon_menu *this)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_24 = 0x10;
  if (is_bit2_flip == 0) {
    iVar1 = *(int *)(this + 0x10);
    local_20 = (int)*(short *)(iVar1 + 0x94);
    local_1c = (int)*(short *)(iVar1 + 0x96);
    local_18 = (uint)*(ushort *)(iVar1 + 0x98);
    local_14 = (uint)*(ushort *)(iVar1 + 0x9a);
  }
  else {
    iVar1 = *(int *)(this + 0x10);
    local_18 = (uint)*(ushort *)(iVar1 + 0x98);
    local_14 = (uint)*(ushort *)(iVar1 + 0x9a);
    local_20 = (xres - ((int)*(short *)(iVar1 + 0x94) + local_18)) + 1;
    local_1c = (yres - ((int)*(short *)(iVar1 + 0x96) + local_14)) + 1;
  }
  osd_init(&local_24);
  can_show_osd = 1;
  return;
}



// ll::lemon_menu::~lemon_menu()

lemon_menu * __thiscall _lemon_menu(lemon_menu *this)

{
  layout *this_00;
  
  this_00 = *(layout **)(this + 0x10);
  if (this_00 != (layout *)0x0) {
    _layout(this_00);
    operator_delete(this_00);
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
  }
  return this;
}



// my_strcmp(char const*, char const*)

uint my_strcmp(char *param_1,char *param_2)

{
  ushort **ppuVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  ppuVar1 = __ctype_b_loc();
  iVar3 = 0;
  puVar4 = *ppuVar1;
  do {
    uVar2 = (uint)(byte)param_2[iVar3];
    if ((int)((uint)puVar4[(uint)(byte)param_1[iVar3]] << 0x1c) < 0) {
      if (-1 < (int)((uint)puVar4[uVar2] << 0x1c)) {
        return 1;
      }
      if ((uint)(byte)param_1[iVar3] != uVar2) {
        return 1;
      }
    }
    else {
      if ((puVar4[uVar2] & 8) != 0) {
        return 1;
      }
      if (iVar3 != 0) {
        return (uint)(puVar4[uVar2] & 8);
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



// ll::lemon_menu::render_g2d()

void __thiscall render_g2d(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render_all()

void __thiscall render_all(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  render_background(*(menu **)(this + 0x10));
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  show_help(*(menu **)(this + 0x10));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render()

void __thiscall render(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  render(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render_list()

void __thiscall render_list(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render_time_count()

void __thiscall render_time_count(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render_coin()

void __thiscall render_coin(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  show_coin(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render_help()

void __thiscall render_help(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  show_help(*(menu **)(this + 0x10));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::render_snap()

void __thiscall render_snap(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  show_snap(*(menu **)(this + 0x10));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000c86a
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::lemon_menu::wait_dialog()

undefined4 __thiscall wait_dialog(lemon_menu *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_s0_00;
  undefined8 uVar6;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  double dVar7;
  char local_38 [28];
  
  uVar4 = show_waitingdlg(*(layout **)(this + 0x10),*(menu **)(this + 0x24),5);
  if (*(int *)(this + 0x28) == 0) {
    uVar4 = SDL_UpperBlit(uVar4,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,
                          0);
    uVar6 = SDL_UpdateRect(uVar4,*(undefined4 *)this,0,0,0,0);
  }
  else {
    dVar7 = (double)(longlong)*(int *)(this + 0x28);
    uVar4 = rotozoomSurface(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar5 = SDL_UpperBlit(extraout_s0_00,uVar4,0,*(undefined4 *)this,0);
    uVar5 = SDL_UpdateRect(uVar5,*(undefined4 *)this,0,0,0,0);
    uVar6 = SDL_FreeSurface(uVar5,uVar4);
  }
  iVar3 = 5;
  do {
    iVar1 = SDL_GetTicks((int)uVar6);
    next_time = iVar1 + 1000;
    uVar6 = extraout_d0;
    do {
      iVar1 = SDL_PollEvent((int)uVar6,local_38);
      uVar6 = extraout_d0_01;
      if (iVar1 != 0) goto LAB_0000c7b8;
      uVar2 = SDL_GetTicks((int)extraout_d0_01);
      uVar6 = extraout_d0_00;
    } while (uVar2 < next_time);
    if (iVar3 < 1) {
LAB_0000c7b8:
      if (local_38[0] == '\v') {
        return 1;
      }
      if (local_38[0] == '\f') {
        this[0x14] = (lemon_menu)0x0;
      }
      else {
        if (local_38[0] == '\x03') {
          return 1;
        }
      }
      if (iVar3 < 1) {
        return 0;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      uVar4 = show_waitingdlg(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar3);
      if (*(int *)(this + 0x28) == 0) {
        uVar4 = SDL_UpperBlit(uVar4,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,
                              *(undefined4 *)this,0);
        uVar6 = SDL_UpdateRect(uVar4,*(undefined4 *)this,0,0,0,0);
      }
      else {
        dVar7 = (double)(longlong)*(int *)(this + 0x28);
        uVar4 = rotozoomSurface(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),0,
                                *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
        uVar5 = SDL_UpperBlit(extraout_s0,uVar4,0,*(undefined4 *)this,0);
        uVar5 = SDL_UpdateRect(uVar5,*(undefined4 *)this,0,0,0,0);
        uVar6 = SDL_FreeSurface(uVar5,uVar4);
      }
    }
  } while( true );
}



// ll::lemon_menu::toggle_show_hide()

void __thiscall toggle_show_hide(lemon_menu *this)

{
  void *__dest;
  layout *this_00;
  int iVar1;
  undefined4 uVar2;
  menu *pmVar3;
  uint uVar4;
  
  pmVar3 = *(menu **)(this + 0x24);
  this_00 = *(layout **)(this + 0x10);
  *(uint *)(pmVar3 + *(int *)(pmVar3 + 0x18) * 4 + 0x20) =
       (uint)(*(int *)(pmVar3 + *(int *)(pmVar3 + 0x18) * 4 + 0x20) < 1);
  show_list_topindex(this_00,pmVar3);
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  iVar1 = *(int *)(this + 0x28);
  uVar4 = (uint)(iVar1 == 0xb4 || iVar1 == 0);
  if (iVar1 != 0xb4 && iVar1 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar4,*(undefined4 *)this,uVar4);
    SDL_UpdateRect(*(undefined4 *)this,uVar4,uVar4,uVar4,uVar4);
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
      s3c_g2d_copy_normal();
      return;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
    s3c_g2d_copy_normal();
    return;
  }
  if (xres == 800) {
    uVar2 = 600;
    iVar1 = xres;
  }
  else {
    iVar1 = 0x280;
    uVar2 = 0x1e0;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar1,uVar2);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::show_or_hide_all(int)

void __thiscall show_or_hide_all(lemon_menu *this,int param_1)

{
  menu *pmVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  pmVar1 = *(menu **)(this + 0x24);
  iVar3 = *(int *)(pmVar1 + 0x10) - *(int *)(pmVar1 + 0xc) >> 2;
  if (0 < iVar3) {
    piVar2 = (int *)(pmVar1 + 0x1c);
    piVar4 = piVar2 + iVar3;
    do {
      piVar2 = piVar2 + 1;
      *piVar2 = param_1;
    } while (piVar2 != piVar4);
  }
  show_list_topindex(*(layout **)(this + 0x10),pmVar1);
  render_g2d(this);
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000cae4
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::lemon_menu::save_showlist()

uint __thiscall save_showlist(lemon_menu *this)

{
  int iVar1;
  FILE *__stream;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 extraout_d0;
  double dVar9;
  byte local_38 [2];
  char local_36;
  int local_30;
  
  can_show_osd = 0;
  uVar6 = osd_cmd(2,0);
  uVar6 = SDL_Delay(uVar6,10);
  osd_cmd(uVar6,2,0);
  uVar6 = show_savelistdlg(*(menu **)(this + 0x10));
  if (*(int *)(this + 0x28) == 0) {
    uVar6 = SDL_UpperBlit(uVar6,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,
                          0);
    uVar8 = SDL_UpdateRect(uVar6,*(undefined4 *)this,0,0,0,0);
  }
  else {
    dVar9 = (double)(longlong)*(int *)(this + 0x28);
    uVar6 = rotozoomSurface(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar7 = SDL_UpperBlit(extraout_s0,uVar6,0,*(undefined4 *)this,0);
    uVar7 = SDL_UpdateRect(uVar7,*(undefined4 *)this,0,0,0,0);
    uVar8 = SDL_FreeSurface(uVar7,uVar6);
  }
  while( true ) {
    while( true ) {
      do {
        iVar1 = SDL_PollEvent((int)uVar8,local_38);
        uVar8 = extraout_d0;
      } while (iVar1 == 0);
      if (local_38[0] == 0xb) break;
      if (local_38[0] == 0xc) {
        this[0x14] = (lemon_menu)0x0;
      }
      else {
        if (local_38[0] == 3) {
          if (local_30 == 0x38) goto LAB_0000ca5a;
          if (local_30 == 0x39) {
            can_show_osd = 1;
            return 2;
          }
          if (local_30 == 0x30) {
            can_show_osd = 1;
            return (uint)local_38[0];
          }
        }
      }
    }
    if (local_36 == '\0') break;
    if (local_36 == '\x01') {
      can_show_osd = 1;
      return 2;
    }
    if (local_36 == '\x02') {
      can_show_osd = 1;
      return 3;
    }
  }
LAB_0000ca5a:
  __stream = fopen("./showroms.lst","w");
  if (__stream != (FILE *)0x0) {
    iVar2 = *(int *)(this + 0x24);
    iVar1 = *(int *)(iVar2 + 0xc);
    iVar5 = *(int *)(iVar2 + 0x10) - iVar1 >> 2;
    iVar3 = 0;
    if (0 < iVar5) {
      while( true ) {
        if (0 < *(int *)(iVar2 + (iVar3 + 8) * 4)) {
          fputs(*(char **)(*(int *)(iVar1 + iVar3 * 4) + 8),__stream);
          fputc(10,__stream);
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar5) break;
        iVar2 = *(int *)(this + 0x24);
        iVar1 = *(int *)(iVar2 + 0xc);
      }
    }
    fclose(__stream);
    system("sync");
    can_show_osd = 1;
    return 1;
  }
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"./showroms.lst file open error .",0x20);
  piVar4 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar4 == (int *)0x0) {
    __throw_bad_cast();
  }
  else {
    if (*(char *)(piVar4 + 7) != '\0') goto LAB_0000cb44;
  }
  uVar6 = _M_widen_init();
  (**(code **)(*piVar4 + 0x18))(uVar6,piVar4,10);
LAB_0000cb44:
  put(-0x1c);
  flush();
  can_show_osd = 1;
  return 1;
}



// ll::lemon_menu::init_showhide_flags()

void __thiscall init_showhide_flags(lemon_menu *this)

{
  FILE *__stream;
  int iVar1;
  ushort **ppuVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *__dest;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  char local_9c80 [40000];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  __stream = fopen("./showroms.lst","r");
  if (__stream == (FILE *)0x0) {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"./showroms.lst file open error .",0x20);
    endl_char_std__char_traits_char__((basic_ostream *)log);
  }
  else {
    iVar9 = 0;
    __dest = local_9c80;
    while (iVar1 = feof(__stream), iVar1 == 0) {
      iVar9 = iVar9 + 1;
      local_40 = iVar1;
      local_3c = iVar1;
      local_38 = iVar1;
      local_34 = iVar1;
      local_30 = iVar1;
      fgets((char *)&local_40,0xf,__stream);
      strcpy(__dest,(char *)&local_40);
      __dest = __dest + 0x14;
    }
    fclose(__stream);
    iVar1 = *(int *)(this + 0x24);
    iVar7 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2;
    if (0 < iVar7) {
      piVar11 = (int *)(*(int *)(iVar1 + 0xc) + -4);
      piVar8 = piVar11 + iVar7;
      puVar10 = (undefined4 *)(iVar1 + 0x20);
      do {
        piVar11 = piVar11 + 1;
        iVar1 = *piVar11;
        *puVar10 = 0;
        if (iVar9 != 0) {
          iVar7 = *(int *)(iVar1 + 8);
          ppuVar2 = __ctype_b_loc();
          __dest = local_9c80;
          iVar1 = 0;
          puVar3 = *ppuVar2;
          do {
            iVar6 = 0;
LAB_0000cc98:
            uVar4 = (uint)*(byte *)(iVar7 + iVar6);
            uVar5 = (uint)(byte)__dest[iVar6];
            if ((puVar3[uVar4] & 8) != 0) {
              if (((puVar3[uVar5] & 8) == 0) || (uVar4 != uVar5)) goto joined_r0x0000ccca;
LAB_0000ccb4:
              iVar6 = iVar6 + 1;
              goto LAB_0000cc98;
            }
            if ((int)((uint)puVar3[uVar5] << 0x1c) < 0) goto joined_r0x0000ccca;
            if (iVar6 == 0) goto LAB_0000ccb4;
            *puVar10 = 1;
joined_r0x0000ccca:
            __dest = __dest + 0x14;
            iVar1 = iVar1 + 1;
          } while (iVar1 != iVar9);
        }
        puVar10 = puVar10 + 1;
      } while (piVar11 != piVar8);
    }
  }
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::lemon_menu::handle_up()

void __thiscall handle_up(lemon_menu *this)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar2 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar2 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar2);
  iVar2 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar2 == 0xb4 || iVar2 == 0);
  if (iVar2 != 0xb4 && iVar2 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga == 0) {
    if (xres == 800) {
      uVar1 = 600;
      iVar2 = xres;
    }
    else {
      iVar2 = 0x280;
      uVar1 = 0x1e0;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar2,uVar1);
    s3c_g2d_copy_normal();
    return;
  }
  if (is_cga < 0x65) {
    s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
    s3c_g2d_copy_normal();
    return;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::handle_up_moving()

void __thiscall handle_up_moving(lemon_menu *this)

{
  int iVar1;
  
  iVar1 = select_previous_with_top_index
                    (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c));
  if (iVar1 == 0) {
    return;
  }
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// ll::lemon_menu::handle_down()

void __thiscall handle_down(lemon_menu *this)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar2 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar2 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar2);
  iVar2 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar2 == 0xb4 || iVar2 == 0);
  if (iVar2 != 0xb4 && iVar2 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga == 0) {
    if (xres == 800) {
      uVar1 = 600;
      iVar2 = xres;
    }
    else {
      iVar2 = 0x280;
      uVar1 = 0x1e0;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar2,uVar1);
    s3c_g2d_copy_normal();
    return;
  }
  if (is_cga < 0x65) {
    s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
    s3c_g2d_copy_normal();
    return;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::handle_down_moving()

void __thiscall handle_down_moving(lemon_menu *this)

{
  int iVar1;
  
  iVar1 = select_next_with_top_index
                    (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c));
  if (iVar1 == 0) {
    return;
  }
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// ll::lemon_menu::handle_pgup()

void __thiscall handle_pgup(lemon_menu *this)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar2 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar2 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar2);
  iVar2 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar2 == 0xb4 || iVar2 == 0);
  if (iVar2 != 0xb4 && iVar2 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga == 0) {
    if (xres == 800) {
      uVar1 = 600;
      iVar2 = xres;
    }
    else {
      iVar2 = 0x280;
      uVar1 = 0x1e0;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar2,uVar1);
    s3c_g2d_copy_normal();
    return;
  }
  if (is_cga < 0x65) {
    s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
    s3c_g2d_copy_normal();
    return;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::handle_pgup_moving()

void __thiscall handle_pgup_moving(lemon_menu *this)

{
  int iVar1;
  
  iVar1 = select_previous_with_top_index
                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                     *(int *)(*(int *)(this + 0x10) + 0x5c));
  if (iVar1 == 0) {
    return;
  }
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// ll::lemon_menu::handle_pgdown()

void __thiscall handle_pgdown(lemon_menu *this)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar2 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar2 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar2);
  iVar2 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar2 == 0xb4 || iVar2 == 0);
  if (iVar2 != 0xb4 && iVar2 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga == 0) {
    if (xres == 800) {
      uVar1 = 600;
      iVar2 = xres;
    }
    else {
      iVar2 = 0x280;
      uVar1 = 0x1e0;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar2,uVar1);
    s3c_g2d_copy_normal();
    return;
  }
  if (is_cga < 0x65) {
    s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
    s3c_g2d_copy_normal();
    return;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::handle_pgdown_moving()

void __thiscall handle_pgdown_moving(lemon_menu *this)

{
  int iVar1;
  
  iVar1 = select_next_with_top_index
                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                     *(int *)(*(int *)(this + 0x10) + 0x5c));
  if (iVar1 == 0) {
    return;
  }
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// ll::lemon_menu::handle_alphaup()

void __thiscall handle_alphaup(lemon_menu *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = select_next_alpha(*(menu **)(this + 0x24));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar2;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// ll::lemon_menu::handle_alphadown()

void __thiscall handle_alphadown(lemon_menu *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = select_previous_alpha(*(menu **)(this + 0x24));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar2;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// WARNING: Removing unreachable block (ram,0x0000d7aa)
// WARNING: Removing unreachable block (ram,0x0000d7b8)
// ll::lemon_menu::handle_run()

void __thiscall handle_run(lemon_menu *this)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  __pid_t _Var7;
  undefined4 uVar8;
  allocator *paVar9;
  bad_lemon *this_00;
  char *__s;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  int *__pid;
  allocator aaStack64 [4];
  char *local_3c;
  char *local_38;
  undefined auStack52 [24];
  
  __pid = *(int **)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                   *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  paVar9 = (allocator *)get_string((char *)&g_opts);
  puVar10 = log;
  basic_string((char *)&local_3c,paVar9);
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 2;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"handle_run: launching game ",0x1b);
  __s = (char *)(**(code **)(*__pid + 8))(__pid);
  if (__s == (char *)0x0) goto LAB_0000d5d0;
  sVar3 = strlen(__s);
  __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,__s,sVar3);
LAB_0000d262:
  __s = (char *)(*(int *)(*(int *)puVar10 + -0xc) + (int)puVar10);
  piVar11 = *(int **)(__s + 0x7c);
  if (piVar11 == (int *)0x0) {
    __throw_bad_cast();
LAB_0000d7d2:
    __throw_bad_cast();
    _M_dispose((allocator *)(local_38 + -0xc));
LAB_0000d73c:
    puVar10 = aaStack64;
    _M_dispose((allocator *)(local_3c + -0xc));
    paVar9 = (allocator *)__cxa_end_cleanup();
LAB_0000d74a:
    __pid = (int *)(__s + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(__pid);
      iVar4 = *__pid;
      bVar1 = (bool)hasExclusiveAccess(__pid);
    } while (!bVar1);
    *__pid = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar9);
    }
LAB_0000d4ac:
    if ((allocator *)(local_3c + -0xc) != (allocator *)puVar10) {
      __pid = (int *)(local_3c + -4);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(__pid);
        iVar4 = *__pid;
        bVar1 = (bool)hasExclusiveAccess(__pid);
      } while (!bVar1);
      *__pid = iVar4 + -1;
      DataMemoryBarrier(0x1f);
      if (iVar4 < 1) {
        _M_destroy((allocator *)(local_3c + -0xc));
      }
    }
    return;
  }
  if (*(char *)(piVar11 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar11 + 0x18))(piVar11,10);
  }
  put(-0x1c);
  flush();
  iVar4 = get_bool((char *)&g_opts);
  if (iVar4 != 0) {
    SDL_WM_ToggleFullScreen(*(undefined4 *)this);
  }
  uVar5 = find((char *)&local_3c,(uint)&DAT_00018074,0);
  if (uVar5 == 0xffffffff) goto LAB_0000d706;
  iVar6 = find((char *)&local_3c,(uint)&DAT_00018098,0);
  if (iVar6 == -1) {
LAB_0000d7f0:
    this_00 = (bad_lemon *)__cxa_allocate_exception(8);
    bad_lemon(this_00,"mame path missing ./ specifier");
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&typeinfo,0xf9f9);
  }
  if (*(uint *)(local_3c + -0xc) < iVar6 + 2U) {
    __throw_out_of_range("basic_string::substr");
    goto LAB_0000d7f0;
  }
  basic_string((basic_string *)&local_38,(uint)&local_3c,iVar6 + 2U);
  insert((uint)&local_38,(char *)0x0,(uint)"killall ");
  __s = (char *)__pid[2];
  strlen(__s);
  replace((uint)&local_3c,uVar5,(char *)0x2,(uint)__s);
  *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4;
  __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"handle_run: ",0xc);
  __pid = (int *)__ostream_insert_char_std__char_traits_char__
                           ((basic_ostream *)log,local_3c,*(int *)(local_3c + -0xc));
  __s = (char *)(*(int *)(*__pid + -0xc) + (int)__pid);
  piVar11 = *(int **)(__s + 0x7c);
  if (piVar11 == (int *)0x0) goto LAB_0000d7d2;
  if (*(char *)(piVar11 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar11 + 0x18))(piVar11,10);
  }
  put((char)__pid);
  flush();
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  __pid = (int *)fork();
  if ((int)__pid < 0) {
    *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"error in fork() - first. ",0x19);
    puVar10 = *(undefined1 **)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x7c);
    if ((int *)puVar10 == (int *)0x0) goto code_r0x0000d5cc;
LAB_0000d43c:
    if (*(char *)((int *)puVar10 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*(int *)puVar10 + 0x18))(puVar10,10);
    }
    put(-0x1c);
    flush();
LAB_0000d458:
    uVar8 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
    *(undefined4 *)(this + 4) = uVar8;
    if (iVar4 != 0) {
      SDL_WM_ToggleFullScreen(*(undefined4 *)this);
    }
    do {
      iVar4 = SDL_PollEvent(auStack52);
    } while (iVar4 != 0);
    render_background(*(menu **)(this + 0x10));
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    show_help(*(menu **)(this + 0x10));
    render_g2d(this);
    puVar10 = _S_empty_rep_storage;
    paVar9 = (allocator *)(local_38 + -0xc);
    __s = local_38;
    if (paVar9 == (allocator *)_S_empty_rep_storage) goto LAB_0000d4ac;
    goto LAB_0000d74a;
  }
  if (__pid == (int *)0x0) {
    _Var7 = getpid();
    *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"i am the first child process, my process id is  ",0x30);
    __pid = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,_Var7);
    piVar11 = *(int **)((int)__pid + *(int *)(*__pid + -0xc) + 0x7c);
    if (piVar11 != (int *)0x0) {
      if (*(char *)(piVar11 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar11 + 0x18))(piVar11,10);
      }
      put((char)__pid);
      flush();
      _Var7 = fork();
      if (_Var7 < 0) {
        cVar2 = '\x04';
        *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4
        ;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"error in fork() - second. ",0x1a);
        puVar10 = *(undefined1 **)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x7c);
        if ((int *)puVar10 != (int *)0x0) goto LAB_0000d43c;
        __throw_bad_cast();
LAB_0000d6d2:
        _M_widen_init();
        (**(code **)(*(int *)this + 0x18))(this,10);
      }
      else {
        if (_Var7 != 0) goto LAB_0000d526;
        _Var7 = getpid();
        *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4
        ;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"i am the second child process, my process id is  ",0x31);
        __pid = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,_Var7);
        cVar2 = (char)__pid;
        __s = (char *)(*(int *)(*__pid + -0xc) + (int)__pid);
        this = *(lemon_menu **)(__s + 0x7c);
        if ((int *)this == (int *)0x0) {
          __throw_bad_cast();
          goto LAB_0000d73c;
        }
        if (*(lemon_menu *)((int *)this + 7) == (lemon_menu)0x0) goto LAB_0000d6d2;
      }
      put(cVar2);
      flush();
      sleep(1);
      system(local_38);
      *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"After killall mame4all.arm.g2d.joy. ",0x24);
      __pid = *(int **)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x7c);
      if (__pid != (int *)0x0) {
        if (*(char *)(__pid + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*__pid + 0x18))(__pid,10);
        }
        put(-0x1c);
        flush();
LAB_0000d526:
                    // WARNING: Subroutine does not return
        exit(0);
      }
      __throw_bad_cast();
      goto LAB_0000d6fe;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"i am the parent process, my process id is  ",0x2b);
    _Var7 = getpid();
    piVar11 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,_Var7);
    __s = (char *)(*(int *)(*piVar11 + -0xc) + (int)piVar11);
    piVar12 = *(int **)(__s + 0x7c);
    if (piVar12 == (int *)0x0) {
      __throw_bad_cast();
      __cxa_free_exception(puVar10);
      goto LAB_0000d73c;
    }
    if (*(char *)(piVar12 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar12 + 0x18))(piVar12,10);
    }
    put((char)piVar11);
    flush();
    system(local_3c);
    piVar11 = (int *)waitpid((__pid_t)__pid,(int *)0x0,0);
    if (__pid == piVar11) goto LAB_0000d458;
    *(undefined4 *)(*(int *)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"Waitpid error! ",0xf);
    puVar10 = *(undefined1 **)((int)puVar10 + *(int *)(*(int *)puVar10 + -0xc) + 0x7c);
    if ((int *)puVar10 != (int *)0x0) goto LAB_0000d43c;
LAB_0000d6fe:
    __throw_bad_cast();
  }
  __throw_bad_cast();
LAB_0000d706:
  this_00 = (bad_lemon *)__cxa_allocate_exception(8);
  bad_lemon(this_00,"mame path missing %r specifier");
                    // WARNING: Subroutine does not return
  __cxa_throw(this_00,&typeinfo,0xf9f9);
code_r0x0000d5cc:
  __throw_bad_cast();
LAB_0000d5d0:
  clear(*(int *)(*(int *)puVar10 + -0xc) + (int)puVar10);
  goto LAB_0000d262;
}



// ll::lemon_menu::handle_activate()

void __thiscall handle_activate(lemon_menu *this)

{
  if (*(int *)(*(int *)(this + 0x24) + 0xc) != *(int *)(*(int *)(this + 0x24) + 0x10)) {
    handle_run(this);
    render_background(*(menu **)(this + 0x10));
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    show_help(*(menu **)(this + 0x10));
    render_g2d(this);
    return;
  }
  return;
}



// ll::lemon_menu::do_timer60_timeover()

void __thiscall do_timer60_timeover(lemon_menu *this)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x1c) < 1) {
    if (*(int *)(*(int *)(this + 0x24) + 0xc) != *(int *)(*(int *)(this + 0x24) + 0x10)) {
      handle_run(this);
      render_background(*(menu **)(this + 0x10));
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      show_help(*(menu **)(this + 0x10));
      render_g2d(this);
    }
    *(undefined4 *)(this + 0x1c) = 0x3c;
    return;
  }
  iVar2 = *(int *)(this + 0x1c) + -1;
  *(int *)(this + 0x1c) = iVar2;
  show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar2);
  __dest = map_ram_base;
  iVar2 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x80));
  memcpy(__dest,*(void **)(iVar2 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar2);
  iVar2 = *(int *)(this + 0x28);
  uVar3 = (uint)(iVar2 == 0xb4 || iVar2 == 0);
  if (iVar2 != 0xb4 && iVar2 != 0) {
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),uVar3,*(undefined4 *)this,uVar3);
    SDL_UpdateRect(*(undefined4 *)this,uVar3,uVar3,uVar3,uVar3);
    return;
  }
  if (is_cga == 0) {
    if (xres == 800) {
      uVar1 = 600;
      iVar2 = xres;
    }
    else {
      iVar2 = 0x280;
      uVar1 = 0x1e0;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(iVar2,uVar1);
    s3c_g2d_copy_normal();
    return;
  }
  if (is_cga < 0x65) {
    s3c_g2d_copy_normal_ROT_once_horizontal_320240(0xa0);
    s3c_g2d_copy_normal();
    return;
  }
  s3c_g2d_copy_normal_ROT_once_horizontal_384240(0xc0);
  s3c_g2d_copy_normal();
  return;
}



// ll::lemon_menu::handle_up_menu()

void __thiscall handle_up_menu(lemon_menu *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x24) != *(int *)(this + 0x20)) {
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(*(int *)(this + 0x24) + 4);
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
    *(undefined4 *)(this + 4) = uVar1;
    render_background(*(menu **)(this + 0x10));
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    show_help(*(menu **)(this + 0x10));
    render_g2d(this);
    return;
  }
  return;
}



// ll::lemon_menu::handle_down_menu()

void __thiscall handle_down_menu(lemon_menu *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x24) =
       *(undefined4 *)
        (*(int *)(*(int *)(this + 0x24) + 0xc) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  render_background(*(menu **)(this + 0x10));
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  show_help(*(menu **)(this + 0x10));
  render_g2d(this);
  return;
}



// WARNING: Removing unreachable block (ram,0x0000db8c)
// ll::lemon_menu::update_snap()

void __thiscall update_snap(lemon_menu *this)

{
  bool bVar1;
  SDL_Surface *pSVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  layout *this_00;
  char *__s1;
  char *local_214;
  char acStack528 [500];
  int local_1c;
  
  iVar7 = *(int *)(this + 0x24);
  local_1c = __stack_chk_guard;
  if (*(int *)(iVar7 + 0xc) != *(int *)(iVar7 + 0x10)) {
    this_00 = *(layout **)(this + 0x10);
    piVar8 = *(int **)(*(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x18) * 4);
    pSVar2 = (SDL_Surface *)(**(code **)(*piVar8 + 0x18))(piVar8);
    snap(this_00,pSVar2);
    show_snap(*(menu **)(this + 0x10));
    render_g2d(this);
    __s1 = *(char **)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                              *(int *)(*(int *)(this + 0x24) + 0x18) * 4) + 8);
    iVar7 = strcmp(__s1,save_rom);
    if ((iVar7 != 0) || (*(int *)(this + 0x34) == 0)) {
      __strcpy_chk(save_rom,__s1,0xb);
      (**(code **)(*piVar8 + 0x1c))(&local_214,piVar8);
      iVar7 = access(local_214,0);
      if (iVar7 == 0) {
        uVar5 = (uint)*(ushort *)(*(int *)(this + 0x10) + 0x98);
        uVar6 = (uint)*(ushort *)(*(int *)(this + 0x10) + 0x9a);
        if (is_bit2_flip == 0) {
          __sprintf_chk(acStack528,1,500,
                                                
                        "mplayer  -vo fbdev  -framedrop -slave  -nodouble -really-quiet -x %d -y %d -zoom %s -osdw %d -loop 0"
                        ,uVar5,uVar6,local_214,uVar5);
        }
        else {
          __sprintf_chk(acStack528,1,500,
                                                
                        "mplayer  -vo fbdev  -framedrop -vf-add flip  -vf-add mirror -slave  -nodouble -really-quiet -x %d -y %d -zoom %s -osdw %d -loop 0"
                        ,uVar5,uVar6,local_214,uVar5);
        }
        if (*(int *)(this + 0x34) != 0) {
          fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
          pclose(*(FILE **)(this + 0x30));
          *(undefined4 *)(this + 0x34) = 0;
        }
        pFVar3 = popen(acStack528,"w");
        *(FILE **)(this + 0x30) = pFVar3;
        *(undefined4 *)(this + 0x34) = 1;
      }
      if ((allocator *)(local_214 + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar8 = (int *)(local_214 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar8);
          iVar7 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar7 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar7 < 1) {
          _M_destroy((allocator *)(local_214 + -0xc));
        }
      }
    }
    if (*(int *)(this + 0xc) != 0) {
      SDL_RemoveTimer();
    }
    uVar4 = SDL_AddTimer(1000,0xbac9,0);
    *(undefined4 *)(this + 0xc) = uVar4;
  }
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::lemon_menu::reset_snap_timer()

void __thiscall reset_snap_timer(lemon_menu *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  return;
}



// timer_60_callback(unsigned int, void*)

uint timer_60_callback(uint param_1,void *param_2)

{
  undefined local_20 [4];
  undefined4 local_1c;
  
  if (1999 < param_1) {
    local_20[0] = 0x18;
    local_1c = 3;
    SDL_PushEvent(local_20);
  }
  return param_1;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000dc24
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::lemon_menu::render_waitdlg()

void __thiscall render_waitdlg(lemon_menu *this)

{
  undefined4 uVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  double dVar3;
  
  if (*(int *)(this + 0x28) != 0) {
    dVar3 = (double)(longlong)*(int *)(this + 0x28);
    uVar1 = rotozoomSurface(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar2 = SDL_UpperBlit(extraout_s0,uVar1,0,*(undefined4 *)this,0);
    uVar2 = SDL_UpdateRect(uVar2,*(undefined4 *)this,0,0,0,0);
    SDL_FreeSurface(uVar2,uVar1);
    return;
  }
  uVar1 = SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,0);
  SDL_UpdateRect(uVar1,*(undefined4 *)this,0,0,0,0);
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000dd5a
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::lemon_menu::loop_config_menu()

int __thiscall loop_config_menu(lemon_menu *this)

{
  int iVar1;
  int local_38;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_s0;
  undefined4 uVar4;
  undefined4 extraout_s0_00;
  undefined8 uVar5;
  undefined8 extraout_d0;
  char local_30 [2];
  char local_2e;
  
  uVar3 = show_menudlg(*(layout **)(this + 0x10),*(menu **)(this + 0x24),0);
  local_38 = *(int *)(this + 0x28);
  if (local_38 == 0) {
    uVar3 = SDL_UpperBlit(uVar3,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,
                          0);
    uVar5 = SDL_UpdateRect(uVar3,*(undefined4 *)this,0,0,0,0);
  }
  else {
    uVar3 = rotozoomSurface(SUB84((double)(longlong)local_38,0),
                            (int)((ulonglong)(double)(longlong)local_38 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar4 = SDL_UpperBlit(extraout_s0_00,uVar3,0,*(undefined4 *)this,0);
    local_38 = 0;
    uVar4 = SDL_UpdateRect(uVar4,*(undefined4 *)this,0,0,0,0);
    uVar5 = SDL_FreeSurface(uVar4,uVar3);
  }
  iVar2 = 0;
  do {
    while( true ) {
      while( true ) {
        do {
          iVar1 = SDL_PollEvent((int)uVar5,local_30);
          uVar5 = extraout_d0;
        } while (iVar1 == 0);
        if (local_30[0] == '\v') break;
        if (local_30[0] == '\f') {
          this[0x14] = (lemon_menu)0x0;
        }
        else {
          if (local_30[0] == '\x03') {
            return iVar2;
          }
        }
      }
      if (local_2e != '\x06') break;
      if (iVar2 < 1) {
        iVar2 = max_menuitem;
      }
      iVar2 = iVar2 + -1;
LAB_0000dcd2:
      uVar3 = show_menudlg(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar2);
      iVar1 = *(int *)(this + 0x28);
      if (iVar1 == 0) {
        uVar3 = SDL_UpperBlit(uVar3,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,
                              *(undefined4 *)this,0,local_38);
        uVar5 = SDL_UpdateRect(uVar3,*(undefined4 *)this,0,0,0);
        local_38 = iVar1;
      }
      else {
        uVar3 = rotozoomSurface(SUB84((double)(longlong)iVar1,0),
                                (int)((ulonglong)(double)(longlong)iVar1 >> 0x20),0,
                                *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
        uVar4 = SDL_UpperBlit(extraout_s0,uVar3,0,*(undefined4 *)this,0);
        local_38 = 0;
        uVar4 = SDL_UpdateRect(uVar4,*(undefined4 *)this,0,0,0,0);
        uVar5 = SDL_FreeSurface(uVar4,uVar3);
      }
    }
    if (local_2e == '\a') {
      if (iVar2 < max_menuitem + -1) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = 0;
      }
      goto LAB_0000dcd2;
    }
    if (local_2e == '\0') {
      return iVar2;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0000e478)
// WARNING: Could not reconcile some variable overlaps
// ll::lemon_menu::main_loop()

void __thiscall main_loop(lemon_menu *this)

{
  lemon_menu lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  menu *pmVar7;
  int iVar8;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  if (lktbad < 1) {
    iVar3 = loop_config_menu(this);
    if (iVar3 != 0) {
      if (iVar3 != 2) {
        render_all(this);
        if (*(int *)(this + 4) != 0) {
          SDL_RemoveTimer();
        }
        uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
        *(undefined4 *)(this + 4) = uVar4;
        render_list(this);
        local_40 = 0x10;
        if (is_bit2_flip == 0) {
          iVar3 = *(int *)(this + 0x10);
          local_3c = (int)*(short *)(iVar3 + 0x94);
          local_38 = (int)*(short *)(iVar3 + 0x96);
          local_34 = (uint)*(ushort *)(iVar3 + 0x98);
          local_30 = (uint)*(ushort *)(iVar3 + 0x9a);
        }
        else {
          iVar3 = *(int *)(this + 0x10);
          local_34 = (uint)*(ushort *)(iVar3 + 0x98);
          local_30 = (uint)*(ushort *)(iVar3 + 0x9a);
          local_3c = (xres - ((int)*(short *)(iVar3 + 0x94) + local_34)) + 1;
          local_38 = (yres - ((int)*(short *)(iVar3 + 0x96) + local_30)) + 1;
        }
        osd_init(&local_40);
        this[0x14] = (lemon_menu)0x1;
        can_show_osd = 1;
        update_snap(this);
        down_counter = 0x14;
        moving_thread_exit = 1;
        lock_thread = 0;
        iVar3 = SDL_GetTicks();
        lVar1 = this[0x14];
        next_time = iVar3 + 0x5dc;
joined_r0x0000df3e:
        if (lVar1 == (lemon_menu)0x0) {
LAB_0000e152:
          if (*(int *)(this + 0x34) != 0) {
            fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
            fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
            pclose(*(FILE **)(this + 0x30));
            *(undefined4 *)(this + 0x34) = 0;
          }
          osd_quit();
          if (*(int *)(this + 4) != 0) {
            SDL_RemoveTimer();
          }
          uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
          *(undefined4 *)(this + 4) = uVar4;
          return;
        }
        while (iVar3 = SDL_PollEvent(&local_40), iVar3 == 0) {
          if ((is_cga == 0) && (is_cn != 0)) {
LAB_0000df60:
            if (moving_thread_exit == 0) {
              if (is_pagemove == 0) {
                if (is_up == 0) {
                  iVar3 = select_next_with_top_index
                                    (*(menu **)(this + 0x24),1,
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
                else {
                  iVar3 = select_previous_with_top_index
                                    (*(menu **)(this + 0x24),1,
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
              }
              else {
                if (is_left == 0) {
                  iVar3 = select_next_with_top_index
                                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
                else {
                  iVar3 = select_previous_with_top_index
                                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
              }
              if (iVar3 != 0) {
                show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                render_g2d(this);
              }
              if (is_cga != 0) {
                SDL_Delay(0x14);
              }
            }
          }
          else {
            do {
              if (down_counter < 1) goto LAB_0000df60;
              SDL_Delay(1);
              if (moving_thread_exit != 0) goto LAB_0000df88;
              down_counter = down_counter + -1;
              iVar3 = SDL_PollEvent(&local_40);
            } while (iVar3 == 0);
            if (((char)local_40 != '\v') || (3 < (local_40 >> 0x10 & 0xff) - 6)) goto LAB_0000df60;
            if (*(int *)(this + 4) != 0) {
              SDL_RemoveTimer();
            }
            uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
            moving_thread_exit = 1;
            *(undefined4 *)(this + 4) = uVar4;
          }
LAB_0000df88:
          uVar5 = SDL_GetTicks();
          if (next_time <= uVar5) {
            iVar3 = SDL_GetTicks();
            next_time = iVar3 + 0x5dc;
          }
        }
        switch(local_40 & 0xff) {
        case 7:
          __printf_chk(1,"event.jaxis.value = %d , event.jaxis.axis = %d .\n ",(int)(short)local_3c,
                       (uint)local_40._2_1_);
          break;
        case 10:
          if (local_40._2_1_ == 6) {
            iVar3 = select_previous_with_top_index
                              (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c));
            if (iVar3 != 0) {
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
            }
            moving_thread_exit = 0;
            is_pagemove = 0;
            is_up = 1;
            SDL_Delay(0x3c);
            lVar1 = this[0x14];
            goto joined_r0x0000df3e;
          }
          if (local_40._2_1_ == 7) {
            iVar3 = select_next_with_top_index
                              (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c));
            if (iVar3 != 0) {
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
            }
            SDL_Delay(0x3c);
            lVar1 = this[0x14];
            moving_thread_exit = 0;
            is_up = 0;
            is_pagemove = 0;
            goto joined_r0x0000df3e;
          }
          if (local_40._2_1_ == 8) {
            iVar3 = select_previous_with_top_index
                              (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                               *(int *)(*(int *)(this + 0x10) + 0x5c));
            if (iVar3 != 0) {
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
            }
            is_left = 1;
            is_pagemove = 1;
            moving_thread_exit = 0;
            SDL_Delay(0x3c);
            lVar1 = this[0x14];
            goto joined_r0x0000df3e;
          }
          if (local_40._2_1_ == 9) {
            iVar3 = select_next_with_top_index
                              (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                               *(int *)(*(int *)(this + 0x10) + 0x5c));
            if (iVar3 != 0) {
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
            }
            moving_thread_exit = 0;
            is_left = 0;
            is_pagemove = 1;
            SDL_Delay(0x3c);
            lVar1 = this[0x14];
            goto joined_r0x0000df3e;
          }
          break;
        case 0xb:
          uVar5 = (uint)local_40._2_1_;
          if ((((local_40._2_1_ == 6) || (local_40._2_1_ == 7)) || (local_40._2_1_ == 9)) ||
             (local_40._2_1_ == 8)) {
            moving_thread_exit = 1;
            down_counter = 0x14;
            if (*(int *)(this + 4) != 0) {
              SDL_RemoveTimer();
            }
            uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
            *(undefined4 *)(this + 4) = uVar4;
            render_list(this);
            uVar5 = local_40 >> 0x10 & 0xff;
          }
          else {
            if (local_40._2_1_ == 0xb) {
              iVar3 = save_showlist(this);
              if (iVar3 != 1) {
                if (iVar3 == 2) {
                  render_all(this);
                  update_snap(this);
                  uVar5 = local_40 >> 0x10 & 0xff;
                  goto LAB_0000e0d4;
                }
                if (iVar3 != 3) goto LAB_0000e30e;
              }
              needto_reboot = 1;
              this[0x14] = (lemon_menu)0x0;
              uVar5 = local_40 >> 0x10 & 0xff;
            }
            else {
              if (local_40._2_1_ == 0) {
                iVar3 = *(int *)(this + 0x24) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4;
                *(uint *)(iVar3 + 0x20) = (uint)(*(int *)(iVar3 + 0x20) < 1);
                render_list(this);
                uVar5 = local_40 >> 0x10 & 0xff;
              }
              else {
                if (local_40._2_1_ == 1) {
                  show_or_hide_all(this,uVar5);
LAB_0000e30e:
                  uVar5 = local_40 >> 0x10 & 0xff;
                }
              }
            }
          }
LAB_0000e0d4:
          if (uVar5 == 2) {
            pmVar7 = *(menu **)(this + 0x24);
            iVar3 = *(int *)(pmVar7 + 0x10) - *(int *)(pmVar7 + 0xc) >> 2;
            if (0 < iVar3) {
              memset(pmVar7 + 0x20,0,iVar3 << 2);
            }
            show_list_topindex(*(layout **)(this + 0x10),pmVar7);
            render_g2d(this);
            uVar5 = local_40 >> 0x10 & 0xff;
          }
          if (uVar5 == 3) {
            iVar8 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                            *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
            iVar3 = Write_nvram_setgame(*(char **)(iVar8 + 8));
            if (9 < iVar3) {
              __strcpy_chk(setgame,*(undefined4 *)(iVar8 + 8),0xb);
            }
            if (*(int *)(this + 4) != 0) {
              SDL_RemoveTimer();
            }
            uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
            *(undefined4 *)(this + 4) = uVar4;
            show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
            render_g2d(this);
            lVar1 = this[0x14];
            goto joined_r0x0000df3e;
          }
          if (uVar5 == 10) {
            iVar3 = *(int *)(this + 0x24) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4;
            *(uint *)(iVar3 + 0x20) = (uint)(*(int *)(iVar3 + 0x20) < 1);
            render_list(this);
            lVar1 = this[0x14];
            goto joined_r0x0000df3e;
          }
          break;
        case 0xc:
          this[0x14] = (lemon_menu)0x0;
          goto LAB_0000e152;
        case 0x18:
          if (local_3c != 1) break;
          update_snap(this);
          lVar1 = this[0x14];
          goto joined_r0x0000df3e;
        }
        lVar1 = this[0x14];
        goto joined_r0x0000df3e;
      }
      basic_string((char *)&local_40,(allocator *)"cd /sdcard; ./xlevel ");
      if (*(int *)(this + 4) != 0) {
        SDL_RemoveTimer();
      }
      assign((basic_string *)&save_cmd);
      needto_editgamelist = 1;
      needto_reboot = 0;
      if ((allocator *)(local_40 + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar6 = (int *)(local_40 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar6);
          iVar3 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_40 + -0xc));
        }
      }
    }
  }
  else {
    iVar3 = access("/tmp/reboot",0);
    if (iVar3 == 0) {
      system("rm  /tmp/reboot");
    }
    system("ln -s  /bin/busybox  /tmp/reboot");
    system("/tmp/reboot -f");
  }
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000e64a
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::lemon_menu::loop_config_menu_wireless()

int __thiscall loop_config_menu_wireless(lemon_menu *this)

{
  int iVar1;
  uint uVar2;
  int local_40;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 extraout_d0;
  undefined local_38;
  char local_37;
  byte local_36;
  ushort local_34;
  
  uVar4 = show_menudlg(*(layout **)(this + 0x10),*(menu **)(this + 0x24),0);
  local_40 = *(int *)(this + 0x28);
  if (local_40 == 0) {
    uVar4 = SDL_UpperBlit(uVar4,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,
                          0);
    uVar6 = SDL_UpdateRect(uVar4,*(undefined4 *)this,0,0,0,0);
  }
  else {
    uVar4 = rotozoomSurface(SUB84((double)(longlong)local_40,0),
                            (int)((ulonglong)(double)(longlong)local_40 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar5 = SDL_UpperBlit(extraout_s0_00,uVar4,0,*(undefined4 *)this,0);
    local_40 = 0;
    uVar5 = SDL_UpdateRect(uVar5,*(undefined4 *)this,0,0,0,0);
    uVar6 = SDL_FreeSurface(uVar5,uVar4);
  }
  iVar3 = 0;
switchD_0000e4ee_caseD_4:
  do {
    iVar1 = SDL_PollEvent((int)uVar6,&local_38);
    uVar6 = extraout_d0;
  } while (iVar1 == 0);
  switch(local_38) {
  case 3:
    goto switchD_0000e4ee_caseD_3;
  default:
    goto switchD_0000e4ee_caseD_4;
  case 7:
    if (local_37 != '\x02') goto switchD_0000e4ee_caseD_4;
    uVar2 = (uint)local_36;
    if (local_36 != 1) {
      if (local_36 == 0) {
        iVar1 = (int)(short)local_34;
        if (iVar1 + 32000 < 0 == SCARRY4(iVar1,32000)) {
          if (iVar1 < 0x7d01) {
            if (local_34 == 0) {
              if (left_is_down != 0) {
                left_is_down = (uint)local_34;
              }
              if (right_is_down != 0) {
                right_is_down = 0;
              }
            }
          }
          else {
            if ((int)right_is_down < 1) {
              right_is_down = 1;
              left_is_down = uVar2;
            }
          }
        }
        else {
          if ((int)left_is_down < 1) {
            left_is_down = 1;
            right_is_down = uVar2;
          }
        }
      }
      goto switchD_0000e4ee_caseD_4;
    }
    iVar1 = (int)(short)local_34;
    if (iVar1 + 32000 < 0 != SCARRY4(iVar1,32000)) {
      if ((int)up_is_down < 1) {
        down_is_down = 0;
        left_is_down = 0;
        right_is_down = 0;
        up_is_down = uVar2;
        goto LAB_0000e62a;
      }
      goto switchD_0000e4ee_caseD_4;
    }
    if (iVar1 < 0x7d01) {
      if (local_34 == 0) {
        if (up_is_down != 0) {
          up_is_down = (uint)local_34;
        }
        if (down_is_down != 0) {
          down_is_down = 0;
        }
      }
      goto switchD_0000e4ee_caseD_4;
    }
    if (0 < (int)down_is_down) goto switchD_0000e4ee_caseD_4;
    up_is_down = 0;
    left_is_down = 0;
    right_is_down = 0;
    down_is_down = uVar2;
    if (max_menuitem + -1 <= iVar3) goto LAB_0000e60a;
LAB_0000e534:
    iVar3 = iVar3 + 1;
    break;
  case 0xb:
    if (local_36 == 6) {
LAB_0000e62a:
      if (iVar3 < 1) {
        iVar3 = max_menuitem;
      }
      iVar3 = iVar3 + -1;
    }
    else {
      if (local_36 != 7) {
        if (local_36 == 0) {
          return iVar3;
        }
        goto switchD_0000e4ee_caseD_4;
      }
      if (iVar3 < max_menuitem + -1) goto LAB_0000e534;
LAB_0000e60a:
      iVar3 = 0;
    }
    break;
  case 0xc:
    this[0x14] = (lemon_menu)0x0;
    goto switchD_0000e4ee_caseD_4;
  }
  uVar4 = show_menudlg(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar3);
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) {
    uVar4 = SDL_UpperBlit(uVar4,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,
                          0,local_40);
    uVar6 = SDL_UpdateRect(uVar4,*(undefined4 *)this,0,0,0);
    local_40 = iVar1;
  }
  else {
    uVar4 = rotozoomSurface(SUB84((double)(longlong)iVar1,0),
                            (int)((ulonglong)(double)(longlong)iVar1 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar5 = SDL_UpperBlit(extraout_s0,uVar4,0,*(undefined4 *)this,0);
    local_40 = 0;
    uVar5 = SDL_UpdateRect(uVar5,*(undefined4 *)this,0,0,0,0);
    uVar6 = SDL_FreeSurface(uVar5,uVar4);
  }
  goto switchD_0000e4ee_caseD_4;
switchD_0000e4ee_caseD_3:
  return iVar3;
}



// WARNING: Removing unreachable block (ram,0x0000edda)
// WARNING: Could not reconcile some variable overlaps
// ll::lemon_menu::main_loop_wireless()

void __thiscall main_loop_wireless(lemon_menu *this)

{
  lemon_menu lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  menu *pmVar9;
  int iVar10;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  if (lktbad < 1) {
    iVar3 = loop_config_menu_wireless(this);
    if (iVar3 != 0) {
      if (iVar3 != 2) {
        render_all(this);
        if (*(int *)(this + 4) != 0) {
          SDL_RemoveTimer();
        }
        uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
        *(undefined4 *)(this + 4) = uVar4;
        render_list(this);
        local_40 = 0x10;
        if (is_bit2_flip == 0) {
          iVar3 = *(int *)(this + 0x10);
          local_3c = SEXT24(*(short *)(iVar3 + 0x94));
          local_38 = (int)*(short *)(iVar3 + 0x96);
          local_34 = (uint)*(ushort *)(iVar3 + 0x98);
          local_30 = (uint)*(ushort *)(iVar3 + 0x9a);
        }
        else {
          iVar3 = *(int *)(this + 0x10);
          local_34 = (uint)*(ushort *)(iVar3 + 0x98);
          local_30 = (uint)*(ushort *)(iVar3 + 0x9a);
          local_3c = (xres - ((int)*(short *)(iVar3 + 0x94) + local_34)) + 1;
          local_38 = (yres - ((int)*(short *)(iVar3 + 0x96) + local_30)) + 1;
        }
        osd_init(&local_40);
        this[0x14] = (lemon_menu)0x1;
        can_show_osd = 1;
        update_snap(this);
        down_counter = 0x14;
        moving_thread_exit = 1;
        lock_thread = 0;
        iVar3 = SDL_GetTicks();
        lVar1 = this[0x14];
        next_time = iVar3 + 0x5dc;
joined_r0x0000e872:
        if (lVar1 == (lemon_menu)0x0) {
LAB_0000e9f6:
          if (*(int *)(this + 0x34) != 0) {
            fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
            fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
            pclose(*(FILE **)(this + 0x30));
            *(undefined4 *)(this + 0x34) = 0;
          }
          osd_quit();
          if (*(int *)(this + 4) != 0) {
            SDL_RemoveTimer();
          }
          uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
          *(undefined4 *)(this + 4) = uVar4;
          return;
        }
LAB_0000e882:
        iVar3 = SDL_PollEvent(&local_40);
        do {
          if (iVar3 != 0) {
            local_40._2_1_ = (byte)(local_40 >> 0x10);
            switch(local_40 & 0xff) {
            case 7:
              local_40._1_1_ = (char)(local_40 >> 8);
              if (local_40._1_1_ != '\x02') goto switchD_0000e904_caseD_8;
              uVar5 = (uint)local_40._2_1_;
              if (local_40._2_1_ == 1) {
                iVar3 = (int)(short)local_3c;
                if (iVar3 + 32000 < 0 != SCARRY4(iVar3,32000)) {
                  if (0 < (int)up_is_down) goto switchD_0000e904_caseD_8;
                  down_is_down = 0;
                  left_is_down = 0;
                  right_is_down = 0;
                  up_is_down = uVar5;
                  handle_up_moving(this);
                  moving_thread_exit = 0;
                  is_pagemove = 0;
                  is_up = uVar5;
                  SDL_Delay(0xb4);
                  lVar1 = this[0x14];
                  goto joined_r0x0000e872;
                }
                if (32000 < iVar3) {
                  if (0 < (int)down_is_down) goto switchD_0000e904_caseD_8;
                  up_is_down = 0;
                  left_is_down = 0;
                  right_is_down = 0;
                  down_is_down = uVar5;
                  handle_down_moving(this);
                  SDL_Delay(0xb4);
                  lVar1 = this[0x14];
                  moving_thread_exit = 0;
                  is_up = 0;
                  is_pagemove = 0;
                  goto joined_r0x0000e872;
                }
                if ((short)local_3c != 0) goto switchD_0000e904_caseD_8;
                if (up_is_down != 0) {
                  down_counter = 0x14;
                  moving_thread_exit = uVar5;
                  up_is_down = local_3c & 0xffff;
                  reset_snap_timer(this);
                  render_list(this);
                }
                if (down_is_down == 0) goto switchD_0000e904_caseD_8;
                down_is_down = 0;
              }
              else {
                if (local_40._2_1_ != 0) goto switchD_0000e904_caseD_8;
                iVar3 = (int)(short)local_3c;
                if (iVar3 + 32000 < 0 != SCARRY4(iVar3,32000)) {
                  if (0 < (int)left_is_down) goto switchD_0000e904_caseD_8;
                  left_is_down = 1;
                  right_is_down = uVar5;
                  handle_pgup_moving(this);
                  is_left = 1;
                  is_pagemove = 1;
                  moving_thread_exit = uVar5;
                  SDL_Delay(0xb4);
                  lVar1 = this[0x14];
                  goto joined_r0x0000e872;
                }
                if (32000 < iVar3) {
                  if (0 < (int)right_is_down) goto switchD_0000e904_caseD_8;
                  right_is_down = 1;
                  left_is_down = uVar5;
                  handle_pgdown_moving(this);
                  is_pagemove = 1;
                  moving_thread_exit = uVar5;
                  is_left = uVar5;
                  SDL_Delay(0xb4);
                  lVar1 = this[0x14];
                  goto joined_r0x0000e872;
                }
                if ((short)local_3c != 0) goto switchD_0000e904_caseD_8;
                if (left_is_down != 0) {
                  moving_thread_exit = 1;
                  down_counter = 0x14;
                  left_is_down = local_3c & 0xffff;
                  reset_snap_timer(this);
                  render_list(this);
                }
                if (right_is_down == 0) goto switchD_0000e904_caseD_8;
                right_is_down = 0;
              }
              moving_thread_exit = 1;
              down_counter = 0x14;
              reset_snap_timer(this);
              render_list(this);
            default:
              goto switchD_0000e904_caseD_8;
            case 0xb:
              goto switchD_0000e904_caseD_b;
            case 0xc:
              this[0x14] = (lemon_menu)0x0;
              goto LAB_0000e9f6;
            case 0x18:
              if (local_3c != 1) goto switchD_0000e904_caseD_8;
              update_snap(this);
              lVar1 = this[0x14];
              goto joined_r0x0000e872;
            }
          }
          do {
            if (down_counter < 1) goto LAB_0000e8ac;
            SDL_Delay(1);
            if (moving_thread_exit != 0) goto LAB_0000e8d2;
            down_counter = down_counter + -1;
            iVar3 = SDL_PollEvent(&local_40);
          } while (iVar3 == 0);
          if ((((char)local_40 == '\a') && (local_40._2_1_ < 2)) && ((short)local_3c == 0)) {
            if (*(int *)(this + 4) != 0) {
              SDL_RemoveTimer();
            }
            uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
            moving_thread_exit = 1;
            *(undefined4 *)(this + 4) = uVar4;
          }
          else {
LAB_0000e8ac:
            if (moving_thread_exit == 0) {
              if (is_pagemove == 0) {
                if (is_up == 0) {
                  iVar3 = select_next_with_top_index
                                    (*(menu **)(this + 0x24),1,
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
                else {
                  iVar3 = select_previous_with_top_index
                                    (*(menu **)(this + 0x24),1,
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
              }
              else {
                if (is_left == 0) {
                  iVar3 = select_next_with_top_index
                                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
                else {
                  iVar3 = select_previous_with_top_index
                                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                }
              }
              if (iVar3 != 0) {
                show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                render_g2d(this);
              }
              SDL_Delay(0x19);
            }
          }
LAB_0000e8d2:
          uVar5 = SDL_GetTicks();
          if (uVar5 < next_time) goto LAB_0000e882;
          iVar3 = SDL_GetTicks();
          next_time = iVar3 + 0x5dc;
          iVar3 = SDL_PollEvent(&local_40);
        } while( true );
      }
      basic_string((char *)&local_40,(allocator *)"cd /sdcard; ./xlevel ");
      if (*(int *)(this + 4) != 0) {
        SDL_RemoveTimer();
      }
      assign((basic_string *)&save_cmd);
      needto_editgamelist = 1;
      needto_reboot = 0;
      if ((allocator *)(local_40 + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar7 = (int *)(local_40 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar7);
          iVar3 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_40 + -0xc));
        }
      }
    }
  }
  else {
    iVar3 = access("/tmp/reboot",0);
    if (iVar3 == 0) {
      system("rm  /tmp/reboot");
    }
    system("ln -s  /bin/busybox  /tmp/reboot");
    system("/tmp/reboot -f");
  }
  return;
switchD_0000e904_caseD_b:
  uVar5 = (uint)local_40._2_1_;
  if (local_40._2_1_ != 9) {
    if (local_40._2_1_ == 0) {
      iVar3 = *(int *)(this + 0x24) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4;
      *(uint *)(iVar3 + 0x20) = (uint)(*(int *)(iVar3 + 0x20) < 1);
      render_list(this);
LAB_0000eb14:
      uVar5 = local_40 >> 0x10 & 0xff;
    }
    else {
      if (local_40._2_1_ == 1) {
        pmVar9 = *(menu **)(this + 0x24);
        iVar3 = *(int *)(pmVar9 + 0x10) - *(int *)(pmVar9 + 0xc) >> 2;
        if (0 < iVar3) {
          puVar8 = (undefined4 *)(pmVar9 + 0x1c);
          puVar6 = puVar8 + iVar3;
          do {
            puVar8 = puVar8 + 1;
            *puVar8 = 1;
          } while (puVar8 != puVar6);
        }
        show_list_topindex(*(layout **)(this + 0x10),pmVar9);
        render_g2d(this);
        uVar5 = local_40 >> 0x10 & 0xff;
      }
    }
    goto LAB_0000ea8c;
  }
  iVar3 = save_showlist(this);
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      render_all(this);
      update_snap(this);
      uVar5 = local_40 >> 0x10 & 0xff;
      goto LAB_0000ea8c;
    }
    if (iVar3 != 3) goto LAB_0000eb14;
  }
  needto_reboot = 1;
  uVar5 = local_40 >> 0x10 & 0xff;
  this[0x14] = (lemon_menu)0x0;
LAB_0000ea8c:
  if (uVar5 == 2) {
    pmVar9 = *(menu **)(this + 0x24);
    iVar3 = *(int *)(pmVar9 + 0x10) - *(int *)(pmVar9 + 0xc) >> 2;
    if (0 < iVar3) {
      memset(pmVar9 + 0x20,0,iVar3 << 2);
    }
    show_list_topindex(*(layout **)(this + 0x10),pmVar9);
    render_g2d(this);
    uVar5 = local_40 >> 0x10 & 0xff;
  }
  if (uVar5 == 3) {
    iVar10 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                     *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
    iVar3 = Write_nvram_setgame(*(char **)(iVar10 + 8));
    if (9 < iVar3) {
      __strcpy_chk(setgame,*(undefined4 *)(iVar10 + 8),0xb);
    }
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar4 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
    *(undefined4 *)(this + 4) = uVar4;
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    lVar1 = this[0x14];
  }
  else {
    if (uVar5 == 8) {
      iVar3 = *(int *)(this + 0x24) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4;
      *(uint *)(iVar3 + 0x20) = (uint)(*(int *)(iVar3 + 0x20) < 1);
      render_list(this);
      lVar1 = this[0x14];
    }
    else {
switchD_0000e904_caseD_8:
      lVar1 = this[0x14];
    }
  }
  goto joined_r0x0000e872;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0000ef1c
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::lemon_menu::loop_show_sn()

undefined4 __thiscall loop_show_sn(lemon_menu *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 extraout_d0;
  double dVar5;
  char local_60 [2];
  char local_5e;
  char acStack76 [32];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (save_nr_get_reset < 0x11) {
    __memcpy_chk(acStack76,"Failed ! Please reboot and retry.",0x22,0x1e);
  }
  else {
    __sprintf_chk(acStack76,1,0x1e,"%02x%02x%02x%02x%02x%02x%02x%02x",
                  (uint)lkt_reset_answer[9] ^ 0x55,(uint)lkt_reset_answer[10] ^ 0xaa,
                  (uint)lkt_reset_answer[11] ^ 0x55,(uint)lkt_reset_answer[12] ^ 0xaa,
                  (uint)lkt_reset_answer[13] ^ 0x55,(uint)lkt_reset_answer[14] ^ 0xaa,
                  (uint)lkt_reset_answer[15] ^ 0x55,(uint)lkt_reset_answer[16] ^ 0xaa);
  }
  uVar2 = show_serialnumber(*(layout **)(this + 0x10),*(menu **)(this + 0x24),acStack76);
  if (*(int *)(this + 0x28) == 0) {
    uVar2 = SDL_UpperBlit(uVar2,*(undefined4 *)(*(int *)(this + 0x10) + 0x80),0,*(undefined4 *)this,
                          0);
    uVar4 = SDL_UpdateRect(uVar2,*(undefined4 *)this,0,0,0,0);
  }
  else {
    dVar5 = (double)(longlong)*(int *)(this + 0x28);
    uVar2 = rotozoomSurface(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),0,
                            *(undefined4 *)(*(int *)(this + 0x10) + 0x80),0);
    uVar3 = SDL_UpperBlit(extraout_s0,uVar2,0,*(undefined4 *)this,0);
    uVar3 = SDL_UpdateRect(uVar3,*(undefined4 *)this,0,0,0,0);
    uVar4 = SDL_FreeSurface(uVar3,uVar2);
  }
  do {
    while( true ) {
      do {
        iVar1 = SDL_PollEvent((int)uVar4,local_60);
        uVar4 = extraout_d0;
      } while (iVar1 == 0);
      if (local_60[0] == '\v') break;
      if (local_60[0] == '\f') {
        this[0x14] = (lemon_menu)0x0;
      }
      else {
        if (local_60[0] == '\x03') goto LAB_0000eec8;
      }
    }
  } while (local_5e != '\v');
  system("reboot -f");
LAB_0000eec8:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 1;
}



// ll::lemon_menu::get_serial_number()

undefined4 get_serial_number(void)

{
  return save_nr_get_reset;
}



// ll::lemon_menu::handle_setgame()

void __thiscall handle_setgame(lemon_menu *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                  *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  iVar1 = Write_nvram_setgame(*(char **)(iVar3 + 8));
  if (9 < iVar1) {
    __strcpy_chk(setgame,*(undefined4 *)(iVar3 + 8),0xb);
  }
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar2;
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// WARNING: Removing unreachable block (ram,0x0000f044)
// ll::lemon_menu::handle_run_with_sdl_quit_xlevel()

void __thiscall handle_run_with_sdl_quit_xlevel(lemon_menu *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  
  basic_string((char *)&local_14,(allocator *)"cd /sdcard; ./xlevel ");
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  assign((basic_string *)&save_cmd);
  needto_editgamelist = 1;
  needto_reboot = 0;
  if ((allocator *)(local_14 + -0xc) != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(local_14 + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar2 < 1) {
      _M_destroy((allocator *)(local_14 + -0xc));
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0000f6e8)
// WARNING: Could not reconcile some variable overlaps
// ll::lemon_menu::load_menus()

void __thiscall load_menus(lemon_menu *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  allocator *__s;
  int iVar6;
  size_t sVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  allocator *paVar11;
  allocator *paVar12;
  allocator *paVar13;
  char *__s1;
  char *__s2;
  bad_lemon *this_00;
  undefined **ppuVar14;
  undefined **ppuVar15;
  FuncDef2 *pFVar16;
  undefined **ppuVar17;
  FuncDef3 *pFVar18;
  int **ppiVar19;
  int **ppiVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  int **ppiVar24;
  int **ppiVar25;
  int local_384;
  int local_36c;
  undefined **local_368;
  undefined **local_364;
  undefined *local_360;
  undefined4 local_35c;
  undefined4 local_350;
  char **local_34c;
  char *local_2c0;
  undefined4 local_2bc;
  undefined4 local_298;
  undefined *local_270;
  undefined4 local_26c;
  undefined4 local_260;
  undefined **local_25c;
  undefined *local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c0;
  char *local_180;
  undefined4 local_17c;
  undefined4 local_170;
  char *local_130;
  undefined4 local_12c;
  undefined *local_104;
  undefined *local_e0;
  undefined4 local_dc;
  undefined *local_b4;
  undefined4 local_40;
  undefined4 uStack60;
  undefined4 uStack56;
  undefined local_34;
  int local_2c;
  
  local_25c = &local_1d0;
  local_34c = &local_2c0;
  local_2c = __stack_chk_guard;
  memset(local_25c,0,400);
  local_180 = "title";
  local_130 = "params";
  local_104 = &DAT_00027614;
  local_e0 = &DAT_00018428;
  local_b4 = &DAT_0001842c;
  local_1c0 = 0x10;
  local_1cc = 3;
  local_17c = 3;
  local_12c = 3;
  local_dc = 3;
  local_170 = 0x10;
  local_1d0 = &DAT_00018414;
  memset(local_34c,0,0xf0);
  local_270 = &DAT_0001843c;
  local_2bc = 4;
  local_2c0 = "sorted";
  local_26c = 5;
  local_298 = 1;
  local_260 = 1;
  memset(&local_360,0,0xa0);
  local_360 = &DAT_00018444;
  local_35c = 5;
  local_350 = 9;
  uVar2 = cfg_init(&local_360,0);
  if (is_cn == 0) {
    uStack60 = 0x6f632e7a;
    uStack56 = CONCAT13(uStack56._3_1_,0x666e);
  }
  else {
    uStack60 = 0x2e6e6373;
    uStack56 = 0x666e6f63;
    local_34 = 0;
  }
  local_40 = 0x656d6167;
  basic_string((char *)&local_36c,(allocator *)&local_40);
  resolve((options *)&g_opts,(basic_string *)&local_36c);
  iVar3 = cfg_parse(uVar2,local_36c);
  if (iVar3 == -1) {
    *(undefined4 *)(*(int *)(log + *(int *)((int)log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"load_menus: file error, using defaults",0x26);
    piVar21 = *(int **)(log + *(int *)((int)log._0_4_ + -0xc) + 0x7c);
    if (piVar21 == (int *)0x0) {
      __throw_bad_cast();
      goto LAB_0000f618;
    }
    if (*(char *)(piVar21 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar21 + 0x18))(piVar21,10);
    }
    put(-0x1c);
    flush();
    cfg_parse_buf(uVar2,&DAT_00027614);
  }
  else {
    if (iVar3 == 1) {
LAB_0000f618:
      this_00 = (bad_lemon *)__cxa_allocate_exception(8);
      bad_lemon(this_00,"load_menus: parse error");
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&typeinfo,0xf9f9);
    }
  }
  ppuVar4 = (undefined **)operator_new(0x138a0);
  ppuVar4[1] = (undefined *)0x0;
  *(undefined ***)ppuVar4 = &PTR__menu_1_000270e0;
  basic_string((char *)(ppuVar4 + 2),(allocator *)"Arcade Games");
  ppuVar4[3] = (undefined *)0x0;
  ppuVar4[4] = (undefined *)0x0;
  ppuVar4[5] = (undefined *)0x0;
  ppuVar4[6] = (undefined *)0x0;
  ppuVar4[7] = (undefined *)0x0;
  *(undefined ***)(this + 0x20) = ppuVar4;
  iVar3 = cfg_size(uVar2,&DAT_00018444);
  if (0 < iVar3) {
    local_384 = 0;
    do {
      uVar5 = cfg_getnsec(uVar2,&DAT_00018444,local_384);
      __s = (allocator *)cfg_title();
      iVar6 = cfg_getbool(uVar5,"sorted");
      *(undefined4 *)(*(int *)(log + *(int *)((int)log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log," --------------",0xf);
      if (__s == (allocator *)0x0) {
        clear((_Ios_Iostate)(log + *(int *)((int)log._0_4_ + -0xc)));
      }
      else {
        sVar7 = strlen((char *)__s);
        __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,(char *)__s,sVar7);
      }
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log," --------------",0xf);
      piVar21 = *(int **)(log + *(int *)((int)log._0_4_ + -0xc) + 0x7c);
      if (piVar21 == (int *)0x0) {
        __throw_bad_cast();
        log._0_4_ = &PTR__item_1_00017fd8;
        operator_delete(log);
        do {
          _M_dispose((allocator *)(local_36c + -0xc));
          __cxa_end_cleanup();
          __cxa_free_exception(__s);
        } while( true );
      }
      if (*(char *)(piVar21 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar21 + 0x18))(piVar21,10);
      }
      put(-0x1c);
      flush();
      if ((*__s != (allocator)0x2e) || (this[0x15] != (lemon_menu)0x0)) {
        ppuVar4 = (undefined **)operator_new(0x138a0);
        ppuVar4[1] = (undefined *)0x0;
        *(undefined ***)ppuVar4 = &PTR__menu_1_000270e0;
        basic_string((char *)(ppuVar4 + 2),__s);
        ppuVar17 = (undefined **)0x0;
        puVar8 = *(undefined **)(this + 0x20);
        ppuVar4[4] = (undefined *)0x0;
        ppuVar4[5] = (undefined *)0x0;
        ppuVar4[1] = puVar8;
        ppuVar14 = *(undefined ***)(puVar8 + 0x10);
        ppuVar15 = *(undefined ***)(puVar8 + 0x14);
        ppuVar4[3] = (undefined *)0x0;
        ppuVar4[6] = (undefined *)0x0;
        ppuVar4[7] = (undefined *)0x0;
        local_368 = ppuVar4;
        if (ppuVar14 == ppuVar15) {
          _M_insert_aux((vector_ll__item__std__allocator_ll__item___ *)(puVar8 + 0xc),
                        (__normal_iterator)ppuVar14,(item **)&local_368);
        }
        else {
          if (ppuVar14 != (undefined **)0x0) {
            *(undefined ***)ppuVar14 = ppuVar4;
            ppuVar14 = *(undefined ***)(puVar8 + 0x10);
          }
          *(undefined ***)(puVar8 + 0x10) = ppuVar14 + 1;
        }
        iVar9 = cfg_size(uVar5,&DAT_0001843c);
        if (0 < iVar9) {
          iVar22 = 0;
          do {
            while( true ) {
              uVar10 = cfg_getnsec(uVar5,&DAT_0001843c,iVar22);
              __s = (allocator *)cfg_getstr(uVar10,&DAT_00018414);
              paVar11 = (allocator *)cfg_getstr(uVar10,"title");
              paVar12 = (allocator *)cfg_getstr(uVar10,"params");
              paVar13 = (allocator *)cfg_getstr(uVar10,&DAT_00018428);
              if ((*paVar11 != (allocator)0x2e) ||
                 (ppuVar17 = (undefined **)(uint)(byte)this[0x15], this[0x15] != (lemon_menu)0x0))
              break;
LAB_0000f316:
              iVar22 = iVar22 + 1;
              if (iVar9 == iVar22) goto LAB_0000f3da;
            }
            ppuVar14 = (undefined **)operator_new(0x18);
            ppuVar14[1] = (undefined *)0x0;
            *(undefined ***)ppuVar14 = &PTR__game_1_00027148;
            basic_string((char *)(ppuVar14 + 2),__s);
            basic_string((char *)(ppuVar14 + 3),paVar11);
            basic_string((char *)(ppuVar14 + 4),paVar12);
            basic_string((char *)(ppuVar14 + 5),paVar13);
            *(undefined ***)(ppuVar14 + 1) = ppuVar4;
            ppuVar15 = (undefined **)ppuVar4[4];
            ppuVar17 = (undefined **)ppuVar4[5];
            local_364 = ppuVar14;
            if (ppuVar15 != ppuVar17) {
              if (ppuVar15 != (undefined **)0x0) {
                *(undefined ***)ppuVar15 = ppuVar14;
                ppuVar15 = (undefined **)ppuVar4[4];
              }
              *(undefined ***)(ppuVar4 + 4) = ppuVar15 + 1;
              goto LAB_0000f316;
            }
            _M_insert_aux((vector_ll__item__std__allocator_ll__item___ *)(ppuVar4 + 3),
                          (__normal_iterator)ppuVar15,(item **)&local_364);
            iVar22 = iVar22 + 1;
          } while (iVar9 != iVar22);
        }
LAB_0000f3da:
        if (iVar6 == 1) {
          ppiVar19 = (int **)ppuVar4[3];
          ppiVar25 = (int **)ppuVar4[4];
          if (ppiVar19 != ppiVar25) {
            iVar6 = count_leading_zeroes((int)(int **)((int)ppiVar25 - (int)ppiVar19) >> 2);
            pFVar16 = (FuncDef2 *)((0x1f - iVar6) * 2);
                        
            __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
                      ((__normal_iterator)ppiVar19,(__normal_iterator)ppiVar25,(int)pFVar16,
                       (FuncDef3 *)ppuVar17);
            if ((int)(int **)((int)ppiVar25 - (int)ppiVar19) < 0x44) {
                            
              __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                        ((__normal_iterator)ppiVar19,(__normal_iterator)ppiVar25,pFVar16);
            }
            else {
                            
              __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                        ((__normal_iterator)ppiVar19,(__normal_iterator)(ppiVar19 + 0x10),pFVar16);
              ppiVar19 = ppiVar19 + 0x10;
              while (ppiVar25 != ppiVar19) {
                piVar21 = *ppiVar19;
                ppiVar24 = ppiVar19;
                while( true ) {
                  ppiVar20 = ppiVar24 + -1;
                  piVar23 = *ppiVar20;
                  __s1 = (char *)(**(code **)(*piVar21 + 8))(piVar21);
                  __s2 = (char *)(**(code **)(*piVar23 + 8))(piVar23);
                  iVar6 = strcmp(__s1,__s2);
                  if (-1 < iVar6) break;
                  *ppiVar24 = *ppiVar20;
                  ppiVar24 = ppiVar20;
                }
                *ppiVar24 = piVar21;
                ppiVar19 = ppiVar19 + 1;
              }
            }
          }
        }
      }
      local_384 = local_384 + 1;
    } while (iVar3 != local_384);
  }
  pFVar18 = *(FuncDef3 **)(this + 0x20);
  ppiVar19 = *(int ***)(pFVar18 + 0xc);
  ppiVar25 = *(int ***)(pFVar18 + 0x10);
  if (ppiVar19 != ppiVar25) {
    iVar3 = count_leading_zeroes((int)(int **)((int)ppiVar25 - (int)ppiVar19) >> 2);
    pFVar16 = (FuncDef2 *)((0x1f - iVar3) * 2);
        
    __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
              ((__normal_iterator)ppiVar19,(__normal_iterator)ppiVar25,(int)pFVar16,pFVar18);
    if ((int)(int **)((int)ppiVar25 - (int)ppiVar19) < 0x44) {
            
      __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                ((__normal_iterator)ppiVar19,(__normal_iterator)ppiVar25,pFVar16);
      pFVar18 = *(FuncDef3 **)(this + 0x20);
    }
    else {
            
      __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                ((__normal_iterator)ppiVar19,(__normal_iterator)(ppiVar19 + 0x10),pFVar16);
      ppiVar19 = ppiVar19 + 0x10;
      while (ppiVar25 != ppiVar19) {
        piVar21 = *ppiVar19;
        ppiVar24 = ppiVar19;
        while( true ) {
          ppiVar20 = ppiVar24 + -1;
          piVar23 = *ppiVar20;
          __s1 = (char *)(**(code **)(*piVar21 + 8))(piVar21);
          __s2 = (char *)(**(code **)(*piVar23 + 8))(piVar23);
          iVar3 = strcmp(__s1,__s2);
          if (-1 < iVar3) break;
          *ppiVar24 = *ppiVar20;
          ppiVar24 = ppiVar20;
        }
        *ppiVar24 = piVar21;
        ppiVar19 = ppiVar19 + 1;
      }
      pFVar18 = *(FuncDef3 **)(this + 0x20);
    }
  }
  *(FuncDef3 **)(this + 0x24) = pFVar18;
  cfg_free(uVar2);
  if ((allocator *)(local_36c + -0xc) != (allocator *)_S_empty_rep_storage) {
    piVar21 = (int *)(local_36c + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar21);
      iVar3 = *piVar21;
      bVar1 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar1);
    *piVar21 = iVar3 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar3 < 1) {
      _M_destroy((allocator *)(local_36c + -0xc));
      if (local_2c == __stack_chk_guard) {
        return;
      }
      goto LAB_0000f6e4;
    }
  }
  if (local_2c == __stack_chk_guard) {
    return;
  }
LAB_0000f6e4:
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::lemon_menu::lemon_menu(SDL_Surface*)

lemon_menu * __thiscall lemon_menu(lemon_menu *this,SDL_Surface *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  layout *this_00;
  int iVar3;
  int iVar4;
  
  *(SDL_Surface **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x15] = (lemon_menu)0x0;
  uVar1 = get_int((char *)&g_opts);
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = get_int((char *)&g_opts);
  iVar3 = is_bit2_flip;
  iVar4 = *(int *)(param_1 + 8);
  *(undefined4 *)(this + 0x30) = 0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xb4;
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar1;
  if (iVar4 == 0x140) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != 0xf0) goto LAB_0000f81a;
    if (is_cn == 0) {
      this_00 = (layout *)operator_new(0xac);
      layout(this_00,"./xrun/xhide320240.conf",0x140,0xf0,*(int *)(this + 0x28));
    }
    else {
      this_00 = (layout *)operator_new(0xac);
      layout(this_00,"./xrun/xhide320240cn.conf",0x140,0xf0,*(int *)(this + 0x28));
    }
LAB_0000f8be:
    *(layout **)(this + 0x10) = this_00;
  }
  else {
    if (iVar4 < 0x280) {
      iVar3 = *(int *)(param_1 + 0xc);
LAB_0000f81a:
      if (0x1df < iVar3) goto LAB_0000f778;
      if (is_cn == 0) {
        this_00 = (layout *)operator_new(0xac);
        layout(this_00,"./xrun/xhide384240.conf",0x180,0xf0,*(int *)(this + 0x28));
      }
      else {
        this_00 = (layout *)operator_new(0xac);
        layout(this_00,"./xrun/xhide384240cn.conf",0x180,0xf0,*(int *)(this + 0x28));
      }
    }
    else {
LAB_0000f778:
      if (xres == 800) {
        if (is_cn == 0) {
          this_00 = (layout *)operator_new(0xac);
          layout(this_00,"./xrun/xhide800600.conf",800,600,*(int *)(this + 0x28));
        }
        else {
          this_00 = (layout *)operator_new(0xac);
          layout(this_00,"./xrun/xhide800600cn.conf",800,600,*(int *)(this + 0x28));
        }
        goto LAB_0000f8be;
      }
      if (is_cn == 0) {
        this_00 = (layout *)operator_new(0xac);
        layout(this_00,"./xrun/xhide640480.conf",0x280,0x1e0,*(int *)(this + 0x28));
      }
      else {
        this_00 = (layout *)operator_new(0xac);
        layout(this_00,"./xrun/xhide640480cn.conf",0x280,0x1e0,*(int *)(this + 0x28));
      }
    }
    *(layout **)(this + 0x10) = this_00;
  }
  load_menus(this);
  *(undefined4 *)(this + 0x24) =
       *(undefined4 *)
        (*(int *)(*(int *)(this + 0x24) + 0xc) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xbaad,0);
  *(undefined4 *)(this + 4) = uVar1;
  render_background(*(menu **)(this + 0x10));
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  show_help(*(menu **)(this + 0x10));
  render_g2d(this);
  init_showhide_flags(this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3c;
  return this;
}



// ll::lemon_menu::handle_show_hide()

void __thiscall handle_show_hide(lemon_menu *this)

{
  undefined **ppuVar1;
  int *piVar2;
  
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 2;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"handle_show_hide: changing hidden status",0x28);
  piVar2 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar2 == (int *)0x0) {
    ppuVar1 = (undefined **)__throw_bad_cast();
    *(undefined ***)ppuVar1 = &PTR__item_1_00017fd8;
    return;
  }
  if (*(char *)(piVar2 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar2 + 0x18))(piVar2,10);
  }
  put(-0x1c);
  flush();
  *(byte *)(this + 0x15) = (byte)this[0x15] ^ 1;
  load_menus(this);
  render_background(*(menu **)(this + 0x10));
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  show_help(*(menu **)(this + 0x10));
  render_g2d(this);
  return;
}



// ll::item::~item()

void __thiscall _item(item *this)

{
  *(undefined ***)this = &PTR__item_1_00017fd8;
  return;
}



// ll::bad_lemon::what() const

undefined4 __thiscall what(bad_lemon *this)

{
  return *(undefined4 *)(this + 4);
}



// ll::item::~item()

item * __thiscall _item(item *this)

{
  *(undefined ***)this = &PTR__item_1_00017fd8;
  operator_delete(this);
  return this;
}



// ll::bad_lemon::~bad_lemon()

bad_lemon * __thiscall _bad_lemon(bad_lemon *this)

{
  *(undefined ***)this = &PTR__bad_lemon_1_00018000;
  _exception((exception *)this);
  return this;
}



// ll::bad_lemon::~bad_lemon()

bad_lemon * __thiscall _bad_lemon(bad_lemon *this)

{
  *(undefined ***)this = &PTR__bad_lemon_1_00018000;
  _exception((exception *)this);
  operator_delete(this);
  return this;
}



// ll::bad_lemon::bad_lemon(char const*)

undefined4 * __thiscall bad_lemon(bad_lemon *this,char *param_1)

{
  void **__src;
  undefined4 *puVar1;
  void *__dest;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *__dest_00;
  size_t __n;
  uint uVar7;
  
  iVar3 = log._0_4_;
  *(char **)(this + 4) = param_1;
  *(undefined ***)this = &PTR__bad_lemon_1_00018000;
  ppvVar4 = *(void ***)(log + *(int *)(iVar3 + -0xc) + 0x78);
  ppvVar4[9] = (void *)0x1;
  if (param_1 == (char *)0x0) {
    clear((_Ios_Iostate)(log + *(int *)(iVar3 + -0xc)));
  }
  else {
    ppvVar4 = (void **)strlen(param_1);
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,param_1,(int)ppvVar4);
  }
  piVar6 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar6 != (int *)0x0) {
    if (*(char *)(piVar6 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar6 + 0x18))(piVar6,10);
    }
    put(-0x1c);
    flush();
    return (undefined4 *)this;
  }
  __throw_bad_cast();
  _exception((exception *)this);
  __src = (void **)__cxa_end_cleanup();
  *(short *)__src = (short)__src;
  puVar5 = (undefined4 *)__src[1];
  if (puVar5 != (undefined4 *)__src[2]) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar5[-1];
      puVar5 = (undefined4 *)__src[1];
    }
    puVar1 = puVar5 + 1;
    *(undefined4 **)(__src + 1) = puVar1;
    __dest_00 = *ppvVar4;
    iVar3 = (int)puVar5 + (-4 - (int)__src) >> 2;
    if (iVar3 != 0) {
      puVar1 = (undefined4 *)memmove(puVar5 + iVar3 * 0x3fffffff,__src,iVar3 * 4);
    }
    *__src = __dest_00;
    return puVar1;
  }
  __dest_00 = *__src;
  pvVar2 = (void *)((int)((int)puVar5 - (int)__dest_00) >> 2);
  if (pvVar2 == (void *)0x0) {
    uVar7 = 4;
    iVar3 = (int)((int)__src - (int)__dest_00) >> 2;
  }
  else {
    __dest = (void *)((int)pvVar2 * 2);
    iVar3 = (int)((int)__src - (int)__dest_00) >> 2;
    if ((__dest < pvVar2) || ((void *)0x3fffffff < __dest)) {
      uVar7 = 0xfffffffc;
    }
    else {
      uVar7 = (int)pvVar2 << 3;
      if (__dest == (void *)0x0) goto LAB_0000fb1a;
    }
  }
  __dest = operator_new(uVar7);
LAB_0000fb1a:
  if ((void *)((int)__dest + iVar3 * 4) != (void *)0x0) {
    *(void **)((int)__dest + iVar3 * 4) = *ppvVar4;
  }
  __n = (int)((int)__src - (int)*__src) >> 2;
  if (__n != 0) {
    __n = __n << 2;
    memmove(__dest,*__src,__n);
  }
  __dest_00 = (void *)((int)__dest + __n + 4);
  __n = (int)((int)__src[1] - (int)__src) >> 2;
  if (__n != 0) {
    __n = __n << 2;
    __dest_00 = memmove(__dest_00,__src,__n);
  }
  pvVar2 = *__src;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  *__src = __dest;
  __src[2] = (void *)((int)__dest + uVar7);
  __src[1] = (void *)(__n + (int)__dest_00);
  return (undefined4 *)pvVar2;
}



// std::vector<ll::item*,
// std::allocator<ll::item*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<ll::item**,
// std::vector<ll::item*, std::allocator<ll::item*>>>, ll::item* const&)

void __thiscall
_M_insert_aux(vector_ll__item__std__allocator_ll__item___ *this,__normal_iterator param_1,
             item **param_2)

{
  void *__dest;
  void *__dest_00;
  int iVar1;
  undefined4 *puVar2;
  item *piVar3;
  size_t __n;
  uint uVar4;
  
  puVar2 = *(undefined4 **)(this + 4);
  if (puVar2 != *(undefined4 **)(this + 8)) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar2[-1];
      puVar2 = *(undefined4 **)(this + 4);
    }
    *(undefined4 **)(this + 4) = puVar2 + 1;
    piVar3 = *param_2;
    iVar1 = (int)((int)puVar2 + (-4 - param_1)) >> 2;
    if (iVar1 != 0) {
      memmove(puVar2 + iVar1 * 0x3fffffff,(void *)param_1,iVar1 * 4);
    }
    *(item **)param_1 = piVar3;
    return;
  }
  iVar1 = *(int *)this;
  __dest_00 = (void *)((int)((int)puVar2 - iVar1) >> 2);
  if (__dest_00 == (void *)0x0) {
    uVar4 = 4;
    iVar1 = (int)(param_1 - iVar1) >> 2;
  }
  else {
    __dest = (void *)((int)__dest_00 * 2);
    iVar1 = (int)(param_1 - iVar1) >> 2;
    if ((__dest < __dest_00) || ((void *)0x3fffffff < __dest)) {
      uVar4 = 0xfffffffc;
    }
    else {
      uVar4 = (int)__dest_00 << 3;
      if (__dest == (void *)0x0) goto LAB_0000fb1a;
    }
  }
  __dest = operator_new(uVar4);
LAB_0000fb1a:
  if ((void *)((int)__dest + iVar1 * 4) != (void *)0x0) {
    *(item **)((int)__dest + iVar1 * 4) = *param_2;
  }
  __n = (int)(param_1 - (int)*(void **)this) >> 2;
  if (__n != 0) {
    __n = __n << 2;
    memmove(__dest,*(void **)this,__n);
  }
  __dest_00 = (void *)((int)__dest + __n + 4);
  __n = (int)(*(int *)(this + 4) - param_1) >> 2;
  if (__n != 0) {
    __n = __n << 2;
    __dest_00 = memmove(__dest_00,(void *)param_1,__n);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(void **)this = __dest;
  *(uint *)(this + 8) = (int)__dest + uVar4;
  *(size_t *)(this + 4) = __n + (int)__dest_00;
  return;
}



// cb_dimension(cfg_t*, cfg_opt_t*, char const*, void*)

undefined4 cb_dimension(cfg_t *param_1,cfg_opt_t *param_2,char *param_3,void *param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp(param_3,"full");
  if (iVar1 == 0) {
    *(undefined4 *)param_4 = 0xffffffff;
    return 0;
  }
  lVar2 = strtol(param_3,(char **)0x0,10);
  *(long *)param_4 = lVar2;
  return 0;
}



// cb_justify(cfg_t*, cfg_opt_t*, char const*, void*)

undefined4 cb_justify(cfg_t *param_1,cfg_opt_t *param_2,char *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = param_4;
  iVar1 = strcmp(param_3,"left");
  if (iVar1 == 0) {
    *(undefined4 *)param_4 = 0;
    return 0;
  }
  iVar1 = strcmp(param_3,"right");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_3,"center");
    if (iVar1 == 0) {
      *(undefined4 *)param_4 = 2;
      return 0;
    }
    cfg_error(param_1,"invalid value for option %s: %s",*(undefined4 *)param_2,param_3,pvVar2);
    return 0xffffffff;
  }
  *(undefined4 *)param_4 = 1;
  return 0;
}



// cb_validate_pos_dims(cfg_t*, cfg_opt_t*)

undefined4 cb_validate_pos_dims(cfg_t *param_1,cfg_opt_t *param_2)

{
  int iVar1;
  
  iVar1 = cfg_size(*(undefined4 *)**(undefined4 **)(param_2 + 0xc),"position");
  if (iVar1 != 2) {
    cfg_error(param_1,"position must have two values in section \'%s\'",*(undefined4 *)param_2);
    return 0xffffffff;
  }
  iVar1 = cfg_size(*(undefined4 *)**(undefined4 **)(param_2 + 0xc),"dimensions");
  if (iVar1 == 2) {
    return 0;
  }
  cfg_error(param_1,"dimensions must have two values in section \'%s\'",*(undefined4 *)param_2);
  return 0xffffffff;
}



// WARNING: Removing unreachable block (ram,0x00010d6c)
// WARNING: Removing unreachable block (ram,0x00010d7a)
// ll::layout::layout(char const*, unsigned short, unsigned short, int)

layout * __thiscall layout(layout *this,char *param_1,ushort param_2,ushort param_3,int param_4)

{
  bool bVar1;
  layout lVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  size_t sVar9;
  bad_lemon *this_00;
  allocator *paVar10;
  basic_ostream *pbVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  undefined1 *puVar16;
  short sVar17;
  int *piVar18;
  int *piVar19;
  bool bVar20;
  char *local_f38;
  int local_f34;
  stat sStack3888;
  char *local_ed8;
  undefined4 local_ed4;
  undefined4 local_ec8;
  char *local_ea8;
  char *local_e88;
  undefined4 local_e84;
  undefined4 local_e78;
  char *local_e58;
  undefined4 local_e48;
  char *local_e38;
  undefined4 local_e34;
  undefined4 local_e20;
  char *local_d98;
  undefined4 local_d94;
  undefined4 local_d88;
  char *local_d68;
  char *local_d48;
  undefined4 local_d44;
  undefined4 local_d38;
  char *local_d18;
  undefined4 local_d08;
  char *local_cf8;
  undefined4 local_cf4;
  undefined4 local_ce0;
  char *local_ca8;
  undefined4 local_ca4;
  undefined4 local_c90;
  undefined4 local_c68;
  char *local_c58;
  undefined4 local_c54;
  undefined4 local_c40;
  char *local_bb8;
  undefined4 local_bb4;
  undefined4 local_ba8;
  char *local_b88;
  char *local_b68;
  undefined4 local_b64;
  undefined4 local_b58;
  char *local_b38;
  undefined4 local_b28;
  char *local_b18;
  undefined4 local_b14;
  undefined4 local_b00;
  char *local_ac8;
  undefined4 local_ac4;
  undefined4 local_ab0;
  undefined4 local_a88;
  char *local_a78;
  undefined4 local_a74;
  undefined4 local_a60;
  char *local_9d8;
  undefined4 local_9d4;
  undefined4 local_9c8;
  char *local_9a8;
  char *local_988;
  undefined4 local_984;
  undefined4 local_978;
  char *local_958;
  undefined4 local_948;
  char *local_938;
  undefined4 local_934;
  undefined4 local_920;
  char *local_8e8;
  undefined4 local_8e4;
  undefined4 local_8d0;
  undefined4 local_8a8;
  char *local_898;
  undefined4 local_894;
  undefined4 local_880;
  char *local_7f8;
  undefined4 local_7f4;
  undefined4 local_7e8;
  char *local_7c8;
  char *local_7a8;
  undefined4 local_7a4;
  undefined4 local_798;
  char *local_778;
  undefined4 local_768;
  char *local_758;
  undefined4 local_754;
  undefined4 local_740;
  char *local_708;
  undefined4 local_704;
  undefined4 local_6f0;
  char *local_6b8;
  undefined4 local_6b4;
  undefined4 local_6a0;
  undefined4 local_678;
  char *local_668;
  undefined4 local_664;
  undefined4 local_650;
  char *local_618;
  undefined4 local_614;
  undefined4 local_600;
  char *local_578;
  undefined4 local_574;
  undefined4 local_568;
  char *local_548;
  char *local_528;
  undefined4 local_524;
  undefined4 local_518;
  char *local_4f8;
  undefined4 local_4e8;
  char *local_4d8;
  undefined4 local_4d4;
  undefined4 local_4c0;
  char *local_488;
  undefined4 local_484;
  undefined4 local_470;
  char *local_438;
  undefined4 local_434;
  undefined4 local_420;
  undefined4 local_3f8;
  char *local_3e8;
  undefined4 local_3e4;
  undefined4 local_3d0;
  char *local_398;
  undefined4 local_394;
  undefined4 local_380;
  undefined *local_2f8;
  undefined4 local_2f4;
  undefined *local_2cc;
  char *local_2a8;
  undefined4 local_2a4;
  undefined *local_27c;
  char *local_258;
  undefined4 local_254;
  char **local_244;
  undefined *local_208;
  undefined4 local_204;
  char **local_1f4;
  char *local_1b8;
  undefined4 local_1b4;
  char **local_1a4;
  char *local_168;
  undefined4 local_164;
  char **local_154;
  char *local_118;
  undefined4 local_114;
  char **local_104;
  undefined *local_c8;
  undefined4 local_c4;
  char **local_b4;
  
  bVar20 = param_4 != 0x5a;
  bVar1 = param_4 != 0x10e;
  uVar13 = (uint)param_3;
  if (!bVar20 || !bVar1) {
    uVar13 = (uint)param_2;
  }
  *(undefined4 *)this = 0x2942c;
  *(short *)(this + 0xe) = (short)uVar13;
  uVar12 = 0x2942c;
  if (!bVar20 || !bVar1) {
    uVar12 = (uint)param_3;
  }
  *(undefined4 *)(this + 0x7c) = 0;
  if (bVar20 && bVar1) {
    uVar12 = (uint)param_2;
  }
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0;
  *(short *)(this + 0xc) = (short)uVar12;
  iVar4 = SDL_CreateRGBSurface(0,uVar12,uVar13,0x10,0xf800,0x7e0,0x1f,0);
  *(int *)(this + 0x80) = iVar4;
  if (iVar4 == 0) {
    this_00 = (bad_lemon *)__cxa_allocate_exception(8);
    bad_lemon(this_00,"layout: unable to create back buffer");
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&typeinfo,0xf9f9);
  }
  local_244 = &local_d98;
  memset(local_244,0,0x1e0);
  local_ce0 = 0x28;
  local_d98 = "position";
  local_d68 = "{0,0}";
  local_d48 = "dimensions";
  local_d18 = "{full,56}";
  local_d08 = 0xfb89;
  local_cf8 = "font_height";
  local_d88 = 2;
  local_d38 = 2;
  local_ca8 = "justify";
  local_1a4 = &local_ed8;
  local_d94 = 1;
  local_154 = &local_bb8;
  local_d44 = 1;
  local_104 = &local_9d8;
  local_cf4 = 1;
  local_ca4 = 1;
  local_c54 = 1;
  local_c68 = 0xfbb9;
  local_c58 = "color";
  local_c40 = 0xefefef;
  local_c90 = 2;
  memset(&local_7f8,0,0x280);
  local_7a8 = "dimensions";
  local_548 = "{0,56}";
  local_768 = 0xfb89;
  local_4f8 = "{full,full}";
  local_758 = "font_height";
  local_488 = "spacing";
  local_6b8 = "justify";
  local_3d0 = 0xc2f4ff;
  local_678 = 0xfbb9;
  local_398 = "hover_color";
  local_668 = "color";
  local_b4 = &local_578;
  local_7f4 = 1;
  local_7e8 = 2;
  local_380 = 0x32e4ff;
  local_7a4 = 1;
  local_798 = 2;
  local_754 = 1;
  local_7f8 = "position";
  local_704 = 1;
  local_6f0 = 4;
  local_6b4 = 1;
  local_740 = 0x1c;
  local_6a0 = 2;
  local_664 = 1;
  local_614 = 1;
  local_7c8 = local_548;
  local_778 = local_4f8;
  local_708 = local_488;
  local_650 = local_3d0;
  local_618 = local_398;
  local_600 = local_380;
  memset(local_1a4,0,0x140);
  local_ed8 = "position";
  local_ed4 = 1;
  local_ec8 = 2;
  local_e84 = 1;
  local_e78 = 2;
  local_e88 = "dimensions";
  local_e34 = 1;
  local_e38 = "alpha";
  local_e48 = 0xfb89;
  local_e20 = 0x96;
  local_ea8 = local_548;
  local_e58 = local_4f8;
  memset(local_154,0,0x1e0);
  local_bb8 = "position";
  local_b88 = "{0,0}";
  local_b68 = "dimensions";
  local_bb4 = 1;
  local_ba8 = 2;
  local_b38 = "{full,56}";
  local_b64 = 1;
  local_b58 = 2;
  local_b28 = 0xfb89;
  local_b14 = 1;
  local_ac4 = 1;
  local_b18 = "font_height";
  local_ab0 = 2;
  local_a74 = 1;
  local_ac8 = "justify";
  local_a88 = 0xfbb9;
  local_a78 = "color";
  local_a60 = 0xefefef;
  local_b00 = 0x1c;
  memset(local_104,0,0x1e0);
  local_9a8 = "{0,0}";
  local_9d4 = 1;
  local_9c8 = 2;
  local_9d8 = "position";
  local_984 = 1;
  local_978 = 2;
  local_988 = "dimensions";
  local_934 = 1;
  local_8e4 = 1;
  local_958 = "{full,56}";
  local_8d0 = 2;
  local_894 = 1;
  local_948 = 0xfb89;
  local_938 = "font_height";
  local_8e8 = "justify";
  local_8a8 = 0xfbb9;
  local_898 = "color";
  local_880 = 0xefefef;
  local_920 = 0x1c;
  memset(local_b4,0,0x280);
  local_568 = 2;
  local_518 = 2;
  local_578 = "position";
  local_574 = 1;
  local_524 = 1;
  local_4d4 = 1;
  local_528 = "dimensions";
  local_4e8 = 0xfb89;
  local_4d8 = "font_height";
  local_438 = "justify";
  local_3f8 = 0xfbb9;
  local_3e8 = "color";
  local_484 = 1;
  local_434 = 1;
  local_420 = 2;
  local_3e4 = 1;
  local_394 = 1;
  local_4c0 = 10;
  local_470 = 5;
  memset(&local_2f8,0,0x2d0);
  local_254 = 5;
  local_204 = 5;
  local_2f8 = &DAT_00026c7c;
  local_1b4 = 5;
  local_2a8 = "background";
  local_164 = 5;
  local_258 = "title";
  local_114 = 5;
  local_208 = &DAT_00026c90;
  local_c4 = 5;
  local_1f4 = &local_7f8;
  local_1b8 = "snapshot";
  local_168 = "coinnum";
  local_118 = "timecount";
  local_c8 = &DAT_00026cb8;
  local_2cc = &DAT_00027614;
  local_27c = &DAT_00027614;
  local_2f4 = 3;
  local_2a4 = 3;
  uVar5 = cfg_init(&local_2f8,0);
  cfg_set_validate_func(uVar5,"title",0xfc1d);
  cfg_set_validate_func(uVar5,&DAT_00026c90,0xfc1d);
  cfg_set_validate_func(uVar5,"snapshot",0xfc1d);
  iVar4 = cfg_parse(uVar5,param_1);
  if (iVar4 == -1) {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"layout: file error, using defaults",0x22);
    piVar18 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar18 != (int *)0x0) {
      if (*(char *)(piVar18 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar18 + 0x18))(piVar18,10);
      }
      put(-0x1c);
      flush();
      cfg_parse_buf(uVar5,&DAT_00027614);
      goto LAB_000101ea;
    }
LAB_00010d46:
    __throw_bad_cast();
LAB_00010d4a:
    __throw_bad_cast();
    __cxa_free_exception(&local_2f8);
LAB_00010bd4:
    puVar16 = (undefined1 *)&local_2f8;
    _M_dispose((allocator *)(*(int *)this + -0xc));
    paVar10 = (allocator *)__cxa_end_cleanup();
  }
  else {
    if (iVar4 == 1) {
LAB_00010c74:
      this_00 = (bad_lemon *)__cxa_allocate_exception(8);
      bad_lemon(this_00,"layout: parse error");
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&typeinfo,0xf9f9);
    }
    strlen(param_1);
    assign((char *)this,(uint)param_1);
    iVar4 = rfind((char)this,0x2f);
    uVar13 = iVar4 + 1;
    if (*(uint *)(*(int *)this + -0xc) < uVar13) {
      __throw_out_of_range("basic_string::erase");
      goto LAB_00010c74;
    }
    _M_mutate((uint)this,uVar13,*(uint *)(*(int *)this + -0xc) - uVar13);
LAB_000101ea:
    local_f38 = _S_empty_rep_storage + 0xc;
    local_f34 = 0x2942c;
    __s = (char *)cfg_getstr(uVar5,&DAT_00026c7c);
    if (*__s == '/' || *__s == '\0') {
      strlen(__s);
      assign((char *)&local_f38,(uint)__s);
    }
    else {
      assign((basic_string *)&local_f38);
      strlen(__s);
      append((char *)&local_f38,(uint)__s);
    }
    __s = (char *)cfg_getstr(uVar5,"background");
    if (*__s == '/' || *__s == '\0') {
      strlen(__s);
      assign((char *)&local_f34,(uint)__s);
    }
    else {
      assign((basic_string *)&local_f34);
      strlen(__s);
      append((char *)&local_f34,(uint)__s);
    }
    __s = local_f38;
    iVar4 = IMG_Load(local_f34);
    *(int *)(this + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"layout: background image not found",0x22);
      piVar18 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar18 != (int *)0x0) {
        if (*(char *)(piVar18 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*piVar18 + 0x18))(piVar18,10);
        }
        put(-0x1c);
        flush();
        goto LAB_0001025c;
      }
      goto LAB_00010d4a;
    }
LAB_0001025c:
    uVar6 = cfg_getsec(uVar5,"title");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x34) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x36) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar17 = (short)iVar4;
    sVar15 = 1;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar15 = *(short *)(this + 0x34);
      sVar17 = *(short *)(this + 0xc) - sVar15;
    }
    if (iVar7 != -1) {
      sVar14 = (short)iVar7;
    }
    else {
      sVar14 = *(short *)(this + 0x36);
      sVar15 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x38) = sVar17;
    if (iVar7 == -1) {
      sVar14 = sVar15 - sVar14;
    }
    *(short *)(this + 0x3a) = sVar14;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x40) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x44) = uVar8;
    uVar6 = cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x3c) = uVar6;
    uVar6 = cfg_getsec(uVar5,&DAT_00026c90);
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x9c) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x9e) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar15 = (short)iVar4;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar15 = *(short *)(this + 0xc) - *(short *)(this + 0x9c);
    }
    iVar4 = iVar7 + 1;
    sVar17 = (short)iVar4;
    if (iVar4 != 0) {
      sVar14 = (short)iVar7;
    }
    else {
      sVar14 = *(short *)(this + 0x9e);
      sVar17 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0xa0) = sVar15;
    if (iVar4 == 0) {
      sVar14 = sVar17 - sVar14;
    }
    *(short *)(this + 0xa2) = sVar14;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x50) = uVar8;
    uVar8 = cfg_getint(uVar6,"spacing");
    *(undefined4 *)(this + 0x54) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    puVar16 = log;
    *(undefined4 *)(this + 0x58) = uVar8;
    uVar8 = __aeabi_idiv((uint)*(ushort *)(this + 0xa2),
                         *(int *)(this + 0x50) + *(int *)(this + 0x54));
    iVar4 = log._0_4_;
    *(undefined4 *)(this + 0x5c) = uVar8;
    *(undefined4 *)(*(int *)(log + *(int *)(iVar4 + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"_page_size= ",0xc);
    piVar18 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,
                                *(int *)(this + 0x5c));
    piVar19 = *(int **)((int)piVar18 + *(int *)(*piVar18 + -0xc) + 0x7c);
    if (piVar19 == (int *)0x0) {
      __throw_bad_cast();
      _M_dispose((allocator *)(local_f34 + -0xc));
      _M_dispose((allocator *)(local_f38 + -0xc));
      goto LAB_00010bd4;
    }
    if (*(char *)(piVar19 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar19 + 0x18))(piVar19,10);
    }
    put((char)piVar18);
    flush();
    iVar4 = cfg_getint(uVar6,"color");
    iVar7 = cfg_getint(uVar6,"color");
    lVar2 = (layout)cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x48) = 0;
    this[0x4a] = lVar2;
    this[0x48] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x49] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    iVar4 = cfg_getint(uVar6,"hover_color");
    iVar7 = cfg_getint(uVar6,"hover_color");
    lVar2 = (layout)cfg_getint(uVar6,"hover_color");
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x4e] = lVar2;
    this[0x4c] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x4d] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    uVar6 = cfg_getsec(uVar5,"snapshot");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x94) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x96) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar17 = (short)iVar4;
    sVar15 = 1;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar15 = *(short *)(this + 0x94);
      sVar17 = *(short *)(this + 0xc) - sVar15;
    }
    if (iVar7 != -1) {
      sVar14 = (short)iVar7;
    }
    else {
      sVar14 = *(short *)(this + 0x96);
      sVar15 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x98) = sVar17;
    if (iVar7 == -1) {
      sVar14 = sVar15 - sVar14;
    }
    *(short *)(this + 0x9a) = sVar14;
    lVar2 = (layout)cfg_getint(uVar6,"alpha");
    this[0x78] = lVar2;
    uVar6 = cfg_getsec(uVar5,"coinnum");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x84) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x86) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar17 = (short)iVar4;
    sVar15 = 1;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar15 = *(short *)(this + 0x84);
      sVar17 = *(short *)(this + 0xc) - sVar15;
    }
    if (iVar7 != -1) {
      sVar14 = (short)iVar7;
    }
    else {
      sVar14 = *(short *)(this + 0x86);
      sVar15 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x88) = sVar17;
    if (iVar7 == -1) {
      sVar14 = sVar15 - sVar14;
    }
    *(short *)(this + 0x8a) = sVar14;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x20) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x24) = uVar8;
    uVar6 = cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x1c) = uVar6;
    uVar6 = cfg_getsec(uVar5,"timecount");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x8c) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x8e) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar15 = (short)iVar4;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar15 = *(short *)(this + 0xc) - *(short *)(this + 0x8c);
    }
    iVar4 = iVar7 + 1;
    sVar17 = (short)iVar4;
    if (iVar4 != 0) {
      sVar14 = (short)iVar7;
    }
    else {
      sVar14 = *(short *)(this + 0x8e);
      sVar17 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x90) = sVar15;
    if (iVar4 == 0) {
      sVar14 = sVar17 - sVar14;
    }
    *(short *)(this + 0x92) = sVar14;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x2c) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x30) = uVar8;
    uVar6 = cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x28) = uVar6;
    uVar6 = cfg_getsec(uVar5,&DAT_00026cb8);
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0xa4) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0xa6) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar17 = (short)iVar4;
    sVar15 = 1;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar15 = *(short *)(this + 0xa4);
      sVar17 = *(short *)(this + 0xc) - sVar15;
    }
    if (iVar7 != -1) {
      sVar14 = (short)iVar7;
    }
    else {
      sVar14 = *(short *)(this + 0xa6);
      sVar15 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0xa8) = sVar17;
    if (iVar7 == -1) {
      sVar14 = sVar15 - sVar14;
    }
    *(short *)(this + 0xaa) = sVar14;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x68) = uVar8;
    uVar8 = cfg_getint(uVar6,"spacing");
    *(undefined4 *)(this + 0x6c) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x70) = uVar8;
    uVar8 = __aeabi_idiv((uint)*(ushort *)(this + 0xaa),
                         *(int *)(this + 0x68) + *(int *)(this + 0x6c));
    *(undefined4 *)(this + 0x74) = uVar8;
    iVar4 = cfg_getint(uVar6,"color");
    iVar7 = cfg_getint(uVar6,"color");
    lVar2 = (layout)cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x60) = 0;
    this[0x62] = lVar2;
    this[0x60] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x61] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    iVar4 = cfg_getint(uVar6,"hover_color");
    iVar7 = cfg_getint(uVar6,"hover_color");
    lVar2 = (layout)cfg_getint(uVar6,"hover_color");
    *(undefined4 *)(this + 100) = 0;
    this[0x66] = lVar2;
    this[100] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x65] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    iVar4 = __xstat(3,__s,&sStack3888);
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"layout: using font file ",0x18);
      if (__s == (char *)0x0) {
        clear((_Ios_Iostate)(log + *(int *)(log._0_4_ + -0xc)));
      }
      else {
        sVar9 = strlen(__s);
        __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,__s,sVar9);
      }
      piVar18 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar18 == (int *)0x0) {
LAB_00010cf0:
        __throw_bad_cast();
LAB_00010cf4:
        *(undefined4 *)(*(int *)((int)puVar16 + *(int *)(*(int *)puVar16 + -0xc) + 0x78) + 0x24) = 1
        ;
        __s = (char *)SDL_GetError();
        pbVar11 = operator___std__char_traits_char__((basic_ostream *)log,__s);
        endl_char_std__char_traits_char__(pbVar11);
        this_00 = (bad_lemon *)__cxa_allocate_exception(8);
        bad_lemon(this_00,"layout: unable to create title font");
                    // WARNING: Subroutine does not return
        __cxa_throw(this_00,&typeinfo,0xf9f9);
      }
      if (*(char *)(piVar18 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar18 + 0x18))(piVar18,10);
      }
      put(-0x1c);
      flush();
      iVar4 = TTF_OpenFont(__s,*(undefined4 *)(this + 0x20));
      *(int *)(this + 0x10) = iVar4;
      if (iVar4 == 0) goto LAB_00010cf4;
      iVar4 = TTF_OpenFont(__s,*(undefined4 *)(this + 0x50));
      *(int *)(this + 0x14) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 1;
        __s = (char *)SDL_GetError();
        pbVar11 = operator___std__char_traits_char__((basic_ostream *)log,__s);
        endl_char_std__char_traits_char__(pbVar11);
        this_00 = (bad_lemon *)__cxa_allocate_exception(8);
        bad_lemon(this_00,"layout: unable to create list font");
                    // WARNING: Subroutine does not return
        __cxa_throw(this_00,&typeinfo,0xf9f9);
      }
      TTF_SetFontStyle(*(undefined4 *)(this + 0x10),1);
    }
    else {
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"layout: \"",9);
      if (__s == (char *)0x0) {
        clear((_Ios_Iostate)(log + *(int *)(log._0_4_ + -0xc)));
      }
      else {
        sVar9 = strlen(__s);
        __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,__s,sVar9);
      }
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"\" not found",0xb);
      piVar18 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar18 == (int *)0x0) {
        __throw_bad_cast();
        goto LAB_00010d46;
      }
      if (*(char *)(piVar18 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar18 + 0x18))(piVar18,10);
      }
      put(-0x1c);
      flush();
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"layout: using default font",0x1a);
      puVar16 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if ((int *)puVar16 == (int *)0x0) {
        __throw_bad_cast();
        goto LAB_00010cf0;
      }
      if (*(char *)((int *)puVar16 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*(int *)puVar16 + 0x18))(puVar16,10);
      }
      put(-0x1c);
      flush();
      uVar6 = SDL_RWFromMem(&default_font,0xe55c);
      uVar6 = TTF_OpenFontRW(uVar6,0,*(undefined4 *)(this + 0x20));
      *(undefined4 *)(this + 0x10) = uVar6;
      uVar6 = SDL_RWFromMem(&default_font,0xe55c);
      uVar6 = TTF_OpenFontRW(uVar6,0,*(undefined4 *)(this + 0x50));
      *(undefined4 *)(this + 0x14) = uVar6;
    }
    cfg_free(uVar5);
    puVar16 = _S_empty_rep_storage;
    paVar10 = (allocator *)(local_f34 + -0xc);
    if (paVar10 == (allocator *)_S_empty_rep_storage) goto LAB_0001095a;
  }
  piVar18 = (int *)(paVar10 + 8);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar18);
    iVar4 = *piVar18;
    bVar1 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar1);
  *piVar18 = iVar4 + -1;
  DataMemoryBarrier(0x1f);
  if (iVar4 < 1) {
    _M_destroy(paVar10);
  }
LAB_0001095a:
  if (local_f38 + -0xc != puVar16) {
    piVar18 = (int *)(local_f38 + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar18);
      iVar4 = *piVar18;
      bVar1 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar1);
    *piVar18 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy((allocator *)(local_f38 + -0xc));
    }
  }
  return this;
}



// WARNING: Removing unreachable block (ram,0x00010e06)
// ll::layout::~layout()

layout * __thiscall _layout(layout *this)

{
  bool bVar1;
  allocator *paVar2;
  int iVar3;
  int *piVar4;
  
  SDL_FreeSurface(*(undefined4 *)(this + 4));
  SDL_FreeSurface(*(undefined4 *)(this + 0x80));
  TTF_CloseFont(*(undefined4 *)(this + 0x10));
  TTF_CloseFont(*(undefined4 *)(this + 0x14));
  if (*(int *)(this + 0x7c) != 0) {
    SDL_FreeSurface();
  }
  paVar2 = (allocator *)(*(int *)this + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar4 = (int *)(*(int *)this + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar4);
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar3 < 1) {
      _M_destroy(paVar2);
    }
  }
  return this;
}



// ll::layout::snap(SDL_Surface*)

void __thiscall snap(layout *this,SDL_Surface *param_1)

{
  if (*(int *)(this + 0x7c) != 0) {
    SDL_FreeSurface();
  }
  *(SDL_Surface **)(this + 0x7c) = param_1;
  return;
}



// ll::layout::parse_dimensions(SDL_Rect*, cfg_t*)

void parse_dimensions(SDL_Rect *param_1,cfg_t *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = cfg_getnint();
  sVar3 = (short)iVar1;
  iVar2 = cfg_getnint();
  if (iVar1 == -1) {
    sVar3 = *(short *)(param_1 + 0xc) - *(short *)param_2;
  }
  *(short *)(param_2 + 4) = sVar3;
  if (iVar2 == -1) {
    sVar3 = *(short *)(param_1 + 0xe) - *(short *)(param_2 + 2);
  }
  else {
    sVar3 = (short)iVar2;
  }
  *(short *)(param_2 + 6) = sVar3;
  return;
}



// ll::layout::normalize(char const*, std::basic_string<char, std::char_traits<char>,
// std::allocator<char>>&)

void __thiscall normalize(layout *this,char *param_1,basic_string *param_2)

{
  if (*param_1 != '/' && *param_1 != '\0') {
    assign(param_2);
    strlen(param_1);
    append((char *)param_2,(uint)param_1);
    return;
  }
  strlen(param_1);
  assign((char *)param_2,(uint)param_1);
  return;
}



// ll::layout::show_coin(ll::menu*, int)

void __thiscall show_coin(layout *this,menu *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined auStack36 [8];
  int local_1c;
  
  puVar2 = (undefined4 *)(this + 0x84);
  local_1c = __stack_chk_guard;
  if (*(int *)(this + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(this + 0x80),puVar2,0);
  }
  else {
    SDL_UpperBlit(*(int *)(this + 4),puVar2,*(undefined4 *)(this + 0x80),puVar2);
  }
  __sprintf_chk(auStack36,1,8,&DAT_00026dd8,param_2);
  uVar1 = TTF_RenderUTF8_Solid(*(undefined4 *)(this + 0x14),auStack36,*(undefined4 *)(this + 0x48));
  local_2c = *puVar2;
  uStack40 = *(undefined4 *)(this + 0x88);
  SDL_UpperBlit(uVar1,0,*(undefined4 *)(this + 0x80),&local_2c);
  SDL_FreeSurface(uVar1);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::layout::show_time(ll::menu*, int)

void __thiscall show_time(layout *this,menu *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined auStack36 [8];
  int local_1c;
  
  puVar2 = (undefined4 *)(this + 0x8c);
  local_1c = __stack_chk_guard;
  if (*(int *)(this + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(this + 0x80),puVar2,0);
  }
  else {
    SDL_UpperBlit(*(int *)(this + 4),puVar2,*(undefined4 *)(this + 0x80),puVar2);
  }
  __sprintf_chk(auStack36,1,8,&DAT_00026dd8,param_2);
  uVar1 = TTF_RenderUTF8_Solid(*(undefined4 *)(this + 0x10),auStack36,*(undefined4 *)(this + 0x48));
  local_2c = *puVar2;
  uStack40 = *(undefined4 *)(this + 0x90);
  SDL_UpperBlit(uVar1,0,*(undefined4 *)(this + 0x80),&local_2c);
  SDL_FreeSurface(uVar1);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001102e
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::layout::show_snap(ll::menu*)

void show_snap(menu *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_fpscr;
  byte bVar4;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar6;
  float fVar7;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  bVar4 = (byte)((uint)in_fpscr >> 0x18);
  if (*(int *)(param_1 + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(param_1 + 0x80),param_1 + 0x94,0);
    uVar5 = extraout_s1_00;
  }
  else {
    SDL_UpperBlit(*(int *)(param_1 + 4),param_1 + 0x94,*(undefined4 *)(param_1 + 0x80),
                  param_1 + 0x94);
    uVar5 = extraout_s1;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    fVar6 = (float)(ulonglong)*(ushort *)(param_1 + 0x98) / (float)(longlong)*(int *)(iVar2 + 8);
    fVar7 = (float)(ulonglong)*(ushort *)(param_1 + 0x9a) / (float)(longlong)*(int *)(iVar2 + 0xc);
    bVar1 = (byte)(((uint)(fVar6 == fVar7) << 0x1e) >> 0x18);
    bVar4 = bVar4 & 0xf | (byte)(((uint)(fVar6 < fVar7) << 0x1f) >> 0x18) | bVar1 |
            (byte)(((uint)(fVar7 <= fVar6) << 0x1d) >> 0x18);
    bVar3 = (bool)(bVar1 >> 6);
    if (!bVar3 && -1 < (char)bVar4) {
      fVar6 = fVar7;
    }
    if ((bVar3 || (char)bVar4 < '\0') && ((char)bVar4 < '\0')) {
      fVar7 = fVar6;
    }
    iVar2 = rotozoomSurfaceXY(0,uVar5,SUB84((double)fVar6,0),(int)((ulonglong)(double)fVar6 >> 0x20)
                              ,SUB84((double)fVar7,0));
    local_24 = (undefined2)*(uint *)(iVar2 + 8);
    local_22 = (undefined2)*(uint *)(iVar2 + 0xc);
    local_28 = *(short *)(param_1 + 0x94) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x98) - (*(uint *)(iVar2 + 8) & 0xffff)) /
                      2);
    local_26 = *(short *)(param_1 + 0x96) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x9a) - (*(uint *)(iVar2 + 0xc) & 0xffff))
                      / 2);
    uVar5 = SDL_UpperBlit(extraout_s0,iVar2,0,*(undefined4 *)(param_1 + 0x80),&local_28);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c) = 0;
    uVar5 = SDL_FillRect(uVar5,iVar2,0,0);
    uVar5 = SDL_SetAlpha(uVar5,iVar2,0x10000,(uint)(byte)param_1[0x78]);
    uVar5 = SDL_UpperBlit(uVar5,iVar2,0,*(undefined4 *)(param_1 + 0x80),&local_28);
    SDL_FreeSurface(uVar5,iVar2);
  }
  return;
}



// ll::layout::render_item(SDL_Surface*, ll::item*, int)

void __thiscall render_item(layout *this,SDL_Surface *param_1,item *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short local_30;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  undefined2 local_22;
  
  iVar2 = (**(code **)(*(int *)param_2 + 0xc))
                    (param_2,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                     *(undefined4 *)(this + 0x4c));
  uVar4 = (uint)*(ushort *)(this + 0xa0);
  iVar5 = *(int *)(this + 0x58);
  local_28 = 0;
  local_26 = 0;
  local_24 = (ushort)*(int *)(iVar2 + 8);
  if ((int)uVar4 <= *(int *)(iVar2 + 8)) {
    local_24 = *(ushort *)(this + 0xa0);
  }
  local_22 = (undefined2)*(undefined4 *)(iVar2 + 0xc);
  if (iVar5 == 0) {
    local_30 = *(short *)(this + 0x9c);
  }
  else {
    if (iVar5 != 1) {
      iVar3 = uVar4 - (uint)local_24;
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      uVar1 = *(ushort *)(this + 0x9c);
    }
    else {
      uVar1 = *(ushort *)(this + 0x9c);
      iVar3 = (uVar4 + uVar1) - (uint)local_24;
    }
    local_30 = (short)iVar3;
    if (iVar5 != 1) {
      local_30 = uVar1 + (short)(iVar3 >> 1);
    }
  }
  local_2e = (undefined2)param_3;
  SDL_UpperBlit(iVar2,&local_28,param_1,&local_30);
  SDL_FreeSurface(iVar2);
  return;
}



// ll::layout::show_list(ll::menu*)

void __thiscall show_list(layout *this,menu *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int **ppiVar9;
  undefined4 uVar10;
  int iVar11;
  int **ppiVar12;
  short local_38;
  undefined2 local_36;
  undefined2 local_30;
  undefined2 local_2e;
  ushort local_2c;
  undefined2 local_2a;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    if (*(int *)(this + 4) == 0) {
      SDL_FillRect(*(undefined4 *)(this + 0x80),this + 0x9c,0);
    }
    else {
      SDL_UpperBlit(*(int *)(this + 4),this + 0x9c,*(undefined4 *)(this + 0x80),this + 0x9c);
    }
    piVar4 = *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) * 4);
    iVar11 = (int)*(short *)(this + 0x9e) +
             (int)((uint)*(ushort *)(this + 0xa2) - *(int *)(this + 0x50)) / 2;
    uVar10 = *(undefined4 *)(this + 0x80);
    iVar5 = (**(code **)(*piVar4 + 0xc))
                      (piVar4,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                       *(undefined4 *)(this + 0x4c));
    uVar7 = (uint)*(ushort *)(this + 0xa0);
    iVar6 = *(int *)(this + 0x58);
    local_30 = 0;
    local_2c = (ushort)*(int *)(iVar5 + 8);
    if ((int)uVar7 <= *(int *)(iVar5 + 8)) {
      local_2c = *(ushort *)(this + 0xa0);
    }
    local_2a = (undefined2)*(undefined4 *)(iVar5 + 0xc);
    local_2e = 0;
    if (iVar6 == 0) {
      local_38 = *(short *)(this + 0x9c);
    }
    else {
      if (iVar6 != 1) {
        iVar8 = uVar7 - (uint)local_2c;
        iVar8 = iVar8 - (iVar8 >> 0x1f);
        uVar1 = *(ushort *)(this + 0x9c);
      }
      else {
        uVar1 = *(ushort *)(this + 0x9c);
        iVar8 = (uVar7 + uVar1) - (uint)local_2c;
      }
      local_38 = (short)iVar8;
      if (iVar6 != 1) {
        local_38 = uVar1 + (short)(iVar8 >> 1);
      }
    }
    local_36 = (undefined2)iVar11;
    SDL_UpperBlit(iVar5,&local_30,uVar10,&local_38);
    SDL_FreeSurface(iVar5);
    iVar6 = *(int *)(this + 0x50);
    ppiVar9 = *(int ***)(param_1 + 0xc);
    ppiVar12 = ppiVar9 + *(int *)(param_1 + 0x18);
    sVar3 = *(short *)(this + 0x9e);
    uVar1 = *(ushort *)(this + 0xa2);
    iVar8 = (iVar11 - iVar6) - *(int *)(this + 0x54);
    iVar5 = iVar11 + iVar6 + *(int *)(this + 0x54);
    if (ppiVar9 != ppiVar12) {
      do {
        ppiVar12 = ppiVar12 + -1;
        uVar10 = *(undefined4 *)(this + 0x80);
        iVar6 = (**(code **)(**ppiVar12 + 0xc))
                          (*ppiVar12,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                           *(undefined4 *)(this + 0x4c));
        uVar2 = *(ushort *)(this + 0xa0);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar6 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar6 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x9c);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar2 + *(short *)(this + 0x9c)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x9c) + (short)((int)((uint)uVar2 - (uint)local_2c) / 2);
          }
        }
        local_36 = (undefined2)iVar8;
        SDL_UpperBlit(iVar6,&local_30,uVar10,&local_38);
        SDL_FreeSurface(iVar6);
        iVar6 = *(int *)(this + 0x50);
        iVar8 = iVar8 - (*(int *)(this + 0x54) + iVar6);
        if (ppiVar12 == *(int ***)(param_1 + 0xc)) {
          ppiVar9 = ppiVar12 + *(int *)(param_1 + 0x18);
          goto LAB_000112ee;
        }
      } while ((int)sVar3 < iVar8);
      ppiVar9 = *(int ***)(param_1 + 0xc) + *(int *)(param_1 + 0x18);
    }
LAB_000112ee:
    if (ppiVar9 + 1 != *(int ***)(param_1 + 0x10)) {
      iVar6 = iVar6 + iVar5;
      ppiVar12 = ppiVar9 + 1;
      do {
        if ((int)((uint)uVar1 + (int)sVar3) <= iVar6) {
          return;
        }
        ppiVar9 = ppiVar12 + 1;
        uVar10 = *(undefined4 *)(this + 0x80);
        iVar6 = (**(code **)(**ppiVar12 + 0xc))
                          (*ppiVar12,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                           *(undefined4 *)(this + 0x4c));
        iVar11 = *(int *)(this + 0x58);
        uVar2 = *(ushort *)(this + 0xa0);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar6 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar6 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar6 + 0xc);
        iVar8 = (uint)uVar2 - (uint)local_2c;
        if (iVar11 == 0) {
          local_38 = *(short *)(this + 0x9c);
        }
        else {
          uVar7 = iVar8 - (iVar8 >> 0x1f);
          if (iVar11 == 1) {
            uVar7 = (uint)*(ushort *)(this + 0x9c);
          }
          if (iVar11 == 1) {
            local_38 = (uVar2 + (short)uVar7) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x9c) + (short)((int)uVar7 >> 1);
          }
        }
        local_36 = (undefined2)iVar5;
        SDL_UpperBlit(iVar6,&local_30,uVar10,&local_38);
        SDL_FreeSurface(iVar6);
        iVar5 = iVar5 + *(int *)(this + 0x54) + *(int *)(this + 0x50);
        iVar6 = *(int *)(this + 0x50) + iVar5;
        ppiVar12 = ppiVar9;
      } while (*(int ***)(param_1 + 0x10) != ppiVar9);
    }
  }
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011448
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::layout::render(ll::menu*)

void __thiscall render(layout *this,menu *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int **ppiVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int **ppiVar12;
  bool bVar13;
  undefined4 in_fpscr;
  byte bVar14;
  undefined4 uVar15;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined8 in_d0;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  short local_38;
  undefined2 local_36;
  short local_30;
  short local_2e;
  ushort local_2c;
  undefined2 local_2a;
  
  bVar14 = (byte)((uint)in_fpscr >> 0x18);
  if (*(int *)(this + 4) == 0) {
    uVar15 = SDL_FillRect(*(undefined4 *)(this + 0x80),this + 8,0);
  }
  else {
    uVar15 = SDL_UpperBlit(*(int *)(this + 4),0,*(undefined4 *)(this + 0x80),this + 8);
  }
  iVar5 = *(int *)(this + 0x7c);
  if (iVar5 != 0) {
    fVar17 = (float)(ulonglong)*(ushort *)(this + 0x98) / (float)(longlong)*(int *)(iVar5 + 8);
    fVar18 = (float)(ulonglong)*(ushort *)(this + 0x9a) / (float)(longlong)*(int *)(iVar5 + 0xc);
    bVar4 = (byte)(((uint)(fVar17 == fVar18) << 0x1e) >> 0x18);
    bVar14 = bVar14 & 0xf | (byte)(((uint)(fVar17 < fVar18) << 0x1f) >> 0x18) | bVar4 |
             (byte)(((uint)(fVar18 <= fVar17) << 0x1d) >> 0x18);
    bVar13 = (bool)(bVar4 >> 6);
    if (!bVar13 && -1 < (char)bVar14) {
      fVar17 = fVar18;
    }
    if ((bVar13 || (char)bVar14 < '\0') && ((char)bVar14 < '\0')) {
      fVar18 = fVar17;
    }
    iVar5 = rotozoomSurfaceXY(0,(int)((ulonglong)in_d0 >> 0x20),SUB84((double)fVar17,0),
                              (int)((ulonglong)(double)fVar17 >> 0x20),SUB84((double)fVar18,0));
    local_2a = (undefined2)*(uint *)(iVar5 + 0xc);
    local_2c = (ushort)*(uint *)(iVar5 + 8);
    local_2e = *(short *)(this + 0x96) +
               (short)((int)((uint)*(ushort *)(this + 0x9a) - (*(uint *)(iVar5 + 0xc) & 0xffff)) / 2
                      );
    local_30 = *(short *)(this + 0x94) +
               (short)((int)((uint)*(ushort *)(this + 0x98) - (*(uint *)(iVar5 + 8) & 0xffff)) / 2);
    uVar15 = SDL_UpperBlit(extraout_s0,iVar5,0,*(undefined4 *)(this + 0x80),&local_30);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x1c) = 0;
    uVar15 = SDL_FillRect(uVar15,iVar5,0,0);
    uVar15 = SDL_SetAlpha(uVar15,iVar5,0x10000,(uint)(byte)this[0x78]);
    uVar15 = SDL_UpperBlit(uVar15,iVar5,0,*(undefined4 *)(this + 0x80),&local_30);
    uVar15 = SDL_FreeSurface(uVar15,iVar5);
  }
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    piVar6 = *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) * 4);
    iVar11 = (int)*(short *)(this + 0x9e) +
             (int)((uint)*(ushort *)(this + 0xa2) - *(int *)(this + 0x50)) / 2;
    uVar9 = *(undefined4 *)(this + 0x80);
    iVar5 = (**(code **)(*piVar6 + 0xc))
                      (uVar15,piVar6,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                       *(undefined4 *)(this + 0x4c));
    uVar1 = *(ushort *)(this + 0xa0);
    local_30 = 0;
    local_2c = (ushort)*(int *)(iVar5 + 8);
    if ((int)(uint)uVar1 <= *(int *)(iVar5 + 8)) {
      local_2c = uVar1;
    }
    local_2a = (undefined2)*(undefined4 *)(iVar5 + 0xc);
    local_2e = 0;
    if (*(int *)(this + 0x58) == 0) {
      local_38 = *(short *)(this + 0x9c);
    }
    else {
      if (*(int *)(this + 0x58) == 1) {
        local_38 = (uVar1 + *(short *)(this + 0x9c)) - local_2c;
      }
      else {
        local_38 = *(short *)(this + 0x9c) + (short)((int)((uint)uVar1 - (uint)local_2c) / 2);
      }
    }
    local_36 = (undefined2)iVar11;
    uVar15 = SDL_UpperBlit(extraout_s0_00,iVar5,&local_30,uVar9,&local_38);
    uVar16 = SDL_FreeSurface(uVar15,iVar5);
    iVar7 = *(int *)(this + 0x50);
    ppiVar8 = *(int ***)(param_1 + 0xc);
    ppiVar12 = ppiVar8 + *(int *)(param_1 + 0x18);
    sVar3 = *(short *)(this + 0x9e);
    uVar1 = *(ushort *)(this + 0xa2);
    iVar10 = (iVar11 - iVar7) - *(int *)(this + 0x54);
    iVar5 = iVar11 + iVar7 + *(int *)(this + 0x54);
    if (ppiVar8 != ppiVar12) {
      do {
        ppiVar12 = ppiVar12 + -1;
        uVar15 = *(undefined4 *)(this + 0x80);
        iVar11 = (**(code **)(**ppiVar12 + 0xc))
                           ((int)uVar16,*ppiVar12,*(undefined4 *)(this + 0x14),
                            *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c));
        uVar2 = *(ushort *)(this + 0xa0);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar11 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar11 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar11 + 0xc);
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x9c);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar2 + *(short *)(this + 0x9c)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x9c) + (short)((int)((uint)uVar2 - (uint)local_2c) / 2);
          }
        }
        local_36 = (undefined2)iVar10;
        uVar15 = SDL_UpperBlit(extraout_s0_01,iVar11,&local_30,uVar15,&local_38);
        uVar16 = SDL_FreeSurface(uVar15,iVar11);
        iVar7 = *(int *)(this + 0x50);
        iVar10 = iVar10 - (*(int *)(this + 0x54) + iVar7);
        if (ppiVar12 == *(int ***)(param_1 + 0xc)) {
          ppiVar8 = ppiVar12 + *(int *)(param_1 + 0x18);
          goto LAB_00011636;
        }
      } while ((int)sVar3 < iVar10);
      ppiVar8 = *(int ***)(param_1 + 0xc) + *(int *)(param_1 + 0x18);
    }
LAB_00011636:
    if (ppiVar8 + 1 != *(int ***)(param_1 + 0x10)) {
      iVar7 = iVar7 + iVar5;
      ppiVar12 = ppiVar8 + 1;
      do {
        if ((int)((uint)uVar1 + (int)sVar3) <= iVar7) {
          return;
        }
        ppiVar8 = ppiVar12 + 1;
        uVar15 = *(undefined4 *)(this + 0x80);
        iVar11 = (**(code **)(**ppiVar12 + 0xc))
                           ((int)uVar16,*ppiVar12,*(undefined4 *)(this + 0x14),
                            *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c));
        uVar2 = *(ushort *)(this + 0xa0);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar11 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar11 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar11 + 0xc);
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x9c);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar2 + *(short *)(this + 0x9c)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x9c) + (short)((int)((uint)uVar2 - (uint)local_2c) / 2);
          }
        }
        local_36 = (undefined2)iVar5;
        uVar15 = SDL_UpperBlit(extraout_s0_02,iVar11,&local_30,uVar15,&local_38);
        uVar16 = SDL_FreeSurface(uVar15,iVar11);
        iVar5 = iVar5 + *(int *)(this + 0x54) + *(int *)(this + 0x50);
        iVar7 = *(int *)(this + 0x50) + iVar5;
        ppiVar12 = ppiVar8;
      } while (*(int ***)(param_1 + 0x10) != ppiVar8);
    }
  }
  return;
}



// ll::layout::render_item_prefix(SDL_Surface*, ll::item*, int, int)

void __thiscall
render_item_prefix(layout *this,SDL_Surface *param_1,item *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short local_30;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  undefined2 local_22;
  
  iVar2 = (**(code **)(*(int *)param_2 + 0x10))
                    (param_2,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                     *(undefined4 *)(this + 0x4c),param_4);
  uVar4 = (uint)*(ushort *)(this + 0xa0);
  iVar5 = *(int *)(this + 0x58);
  local_28 = 0;
  local_26 = 0;
  local_24 = (ushort)*(int *)(iVar2 + 8);
  if ((int)uVar4 <= *(int *)(iVar2 + 8)) {
    local_24 = *(ushort *)(this + 0xa0);
  }
  local_22 = (undefined2)*(undefined4 *)(iVar2 + 0xc);
  if (iVar5 == 0) {
    local_30 = *(short *)(this + 0x9c);
  }
  else {
    if (iVar5 != 1) {
      iVar3 = uVar4 - (uint)local_24;
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      uVar1 = *(ushort *)(this + 0x9c);
    }
    else {
      uVar1 = *(ushort *)(this + 0x9c);
      iVar3 = (uVar4 + uVar1) - (uint)local_24;
    }
    local_30 = (short)iVar3;
    if (iVar5 != 1) {
      local_30 = uVar1 + (short)(iVar3 >> 1);
    }
  }
  local_2e = (undefined2)param_3;
  SDL_UpperBlit(iVar2,&local_28,param_1,&local_30);
  SDL_FreeSurface(iVar2);
  return;
}



// ll::layout::render_item_prefix_showhide(SDL_Surface*, ll::item*, int, int, int, int)

void __thiscall
render_item_prefix_showhide
          (layout *this,SDL_Surface *param_1,item *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short local_30;
  undefined2 local_2e;
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  undefined2 local_22;
  
  iVar2 = (**(code **)(*(int *)param_2 + 0x14))
                    (param_2,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                     *(undefined4 *)(this + 0x4c),param_4,param_5,param_6);
  uVar4 = (uint)*(ushort *)(this + 0xa0);
  iVar5 = *(int *)(this + 0x58);
  local_28 = 0;
  local_26 = 0;
  local_24 = (ushort)*(int *)(iVar2 + 8);
  if ((int)uVar4 <= *(int *)(iVar2 + 8)) {
    local_24 = *(ushort *)(this + 0xa0);
  }
  local_22 = (undefined2)*(undefined4 *)(iVar2 + 0xc);
  if (iVar5 == 0) {
    local_30 = *(short *)(this + 0x9c);
  }
  else {
    if (iVar5 != 1) {
      iVar3 = uVar4 - (uint)local_24;
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      uVar1 = *(ushort *)(this + 0x9c);
    }
    else {
      uVar1 = *(ushort *)(this + 0x9c);
      iVar3 = (uVar4 + uVar1) - (uint)local_24;
    }
    local_30 = (short)iVar3;
    if (iVar5 != 1) {
      local_30 = uVar1 + (short)(iVar3 >> 1);
    }
  }
  local_2e = (undefined2)param_3;
  SDL_UpperBlit(iVar2,&local_28,param_1,&local_30);
  SDL_FreeSurface(iVar2);
  return;
}



// ll::layout::show_list_topindex(ll::menu*)

void __thiscall show_list_topindex(layout *this,menu *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int **ppiVar11;
  undefined4 uVar12;
  short local_38;
  undefined2 local_36;
  undefined2 local_30;
  undefined2 local_2e;
  ushort local_2c;
  undefined2 local_2a;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    if (*(int *)(this + 4) == 0) {
      SDL_FillRect(*(undefined4 *)(this + 0x80),this + 0x9c,0);
    }
    else {
      SDL_UpperBlit(*(int *)(this + 4),this + 0x9c,*(undefined4 *)(this + 0x80),this + 0x9c);
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_1 + 0xc);
    iVar10 = iVar4 * 4;
    iVar9 = (int)*(short *)(this + 0x9e);
    ppiVar11 = (int **)(iVar6 + iVar10);
    iVar2 = (uint)*(ushort *)(this + 0xa2) + iVar9;
    if ((ppiVar11 != *(int ***)(param_1 + 0x10)) && (*(int *)(this + 0x50) + iVar9 < iVar2)) {
      while( true ) {
        iVar4 = iVar4 + 1;
        iVar6 = my_strcmp(*(char **)(*(int *)(iVar6 + iVar10) + 8),setgame);
        piVar3 = *ppiVar11;
        if (iVar6 == 0) {
          uVar12 = *(undefined4 *)(this + 0x80);
          iVar6 = (**(code **)(*piVar3 + 0x14))
                            (piVar3,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                             *(undefined4 *)(this + 0x4c),iVar4,
                             *(undefined4 *)(param_1 + iVar10 + 0x20),1);
          uVar7 = (uint)*(ushort *)(this + 0xa0);
          iVar5 = *(int *)(this + 0x58);
          local_2c = (ushort)*(int *)(iVar6 + 8);
          if ((int)uVar7 <= *(int *)(iVar6 + 8)) {
            local_2c = *(ushort *)(this + 0xa0);
          }
          local_2a = (undefined2)*(undefined4 *)(iVar6 + 0xc);
          if (iVar5 == 0) {
            local_38 = *(short *)(this + 0x9c);
          }
          else {
            if (iVar5 != 1) {
              iVar8 = uVar7 - (uint)local_2c;
              iVar8 = iVar8 - (iVar8 >> 0x1f);
              uVar1 = *(ushort *)(this + 0x9c);
            }
            else {
              uVar1 = *(ushort *)(this + 0x9c);
              iVar8 = (uVar7 + uVar1) - (uint)local_2c;
            }
            local_38 = (short)iVar8;
            if (iVar5 != 1) {
              local_38 = uVar1 + (short)(iVar8 >> 1);
            }
          }
        }
        else {
          uVar12 = *(undefined4 *)(this + 0x80);
          iVar6 = (**(code **)(*piVar3 + 0x14))
                            (piVar3,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                             *(undefined4 *)(this + 0x4c),iVar4,
                             *(undefined4 *)(param_1 + iVar10 + 0x20),0);
          uVar1 = *(ushort *)(this + 0xa0);
          iVar5 = *(int *)(this + 0x58);
          local_2c = (ushort)*(int *)(iVar6 + 8);
          if ((int)(uint)uVar1 <= *(int *)(iVar6 + 8)) {
            local_2c = uVar1;
          }
          local_2a = (undefined2)*(undefined4 *)(iVar6 + 0xc);
          uVar7 = (uint)local_2c;
          if (iVar5 == 0) {
            local_38 = *(short *)(this + 0x9c);
          }
          else {
            if (iVar5 != 1) {
              iVar8 = (uint)uVar1 - uVar7;
              local_38 = *(short *)(this + 0x9c);
              uVar7 = iVar8 - (iVar8 >> 0x1f);
            }
            else {
              local_38 = *(short *)(this + 0x9c);
            }
            if (iVar5 != 1) {
              local_38 = local_38 + (short)((int)uVar7 >> 1);
            }
            else {
              local_38 = (uVar1 + local_38) - (short)uVar7;
            }
          }
        }
        local_2e = 0;
        local_30 = 0;
        local_36 = (undefined2)iVar9;
        SDL_UpperBlit(iVar6,&local_30,uVar12,&local_38);
        SDL_FreeSurface(iVar6);
        iVar9 = iVar9 + *(int *)(this + 0x54) + *(int *)(this + 0x50);
        if ((*(int ***)(param_1 + 0x10) == ppiVar11 + 1) ||
           (iVar10 = iVar10 + 4, iVar2 <= *(int *)(this + 0x50) + iVar9)) break;
        iVar6 = *(int *)(param_1 + 0xc);
        ppiVar11 = ppiVar11 + 1;
      }
    }
  }
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011a7a
// WARNING: Restarted to delay deadcode elimination for space: register
// ll::layout::render_background(ll::menu*)

void render_background(menu *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_fpscr;
  byte bVar4;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar6;
  float fVar7;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  bVar4 = (byte)((uint)in_fpscr >> 0x18);
  if (*(int *)(param_1 + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(param_1 + 0x80),param_1 + 8,0);
    uVar5 = extraout_s1_00;
  }
  else {
    SDL_UpperBlit(*(int *)(param_1 + 4),0,*(undefined4 *)(param_1 + 0x80),param_1 + 8);
    uVar5 = extraout_s1;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    fVar6 = (float)(ulonglong)*(ushort *)(param_1 + 0x98) / (float)(longlong)*(int *)(iVar2 + 8);
    fVar7 = (float)(ulonglong)*(ushort *)(param_1 + 0x9a) / (float)(longlong)*(int *)(iVar2 + 0xc);
    bVar1 = (byte)(((uint)(fVar6 == fVar7) << 0x1e) >> 0x18);
    bVar4 = bVar4 & 0xf | (byte)(((uint)(fVar6 < fVar7) << 0x1f) >> 0x18) | bVar1 |
            (byte)(((uint)(fVar7 <= fVar6) << 0x1d) >> 0x18);
    bVar3 = (bool)(bVar1 >> 6);
    if (!bVar3 && -1 < (char)bVar4) {
      fVar6 = fVar7;
    }
    if ((bVar3 || (char)bVar4 < '\0') && ((char)bVar4 < '\0')) {
      fVar7 = fVar6;
    }
    iVar2 = rotozoomSurfaceXY(0,uVar5,SUB84((double)fVar6,0),(int)((ulonglong)(double)fVar6 >> 0x20)
                              ,SUB84((double)fVar7,0));
    local_24 = (undefined2)*(uint *)(iVar2 + 8);
    local_22 = (undefined2)*(uint *)(iVar2 + 0xc);
    local_28 = *(short *)(param_1 + 0x94) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x98) - (*(uint *)(iVar2 + 8) & 0xffff)) /
                      2);
    local_26 = *(short *)(param_1 + 0x96) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x9a) - (*(uint *)(iVar2 + 0xc) & 0xffff))
                      / 2);
    uVar5 = SDL_UpperBlit(extraout_s0,iVar2,0,*(undefined4 *)(param_1 + 0x80),&local_28);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c) = 0;
    uVar5 = SDL_FillRect(uVar5,iVar2,0,0);
    uVar5 = SDL_SetAlpha(uVar5,iVar2,0x10000,(uint)(byte)param_1[0x78]);
    uVar5 = SDL_UpperBlit(uVar5,iVar2,0,*(undefined4 *)(param_1 + 0x80),&local_28);
    SDL_FreeSurface(uVar5,iVar2);
  }
  return;
}



// ll::layout::show_waitingdlg(ll::menu*, int)

void __thiscall show_waitingdlg(layout *this,menu *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 in_r12;
  undefined2 local_30;
  ushort local_2e;
  ushort local_2c;
  undefined2 local_2a;
  undefined auStack36 [8];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  SDL_FillRect(*(undefined4 *)(this + 0x80),this + 8,0);
  __sprintf_chk(auStack36,1,8,&DAT_00026dd8,param_2);
  if (is_cn == 0) {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),"Press any key for menu.",
                       *(undefined4 *)(this + 0x48));
  }
  else {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),&DAT_00026ddc,*(undefined4 *)(this + 0x48));
  }
  iVar2 = *(int *)(iVar1 + 8);
  local_2c = *(ushort *)(this + 0xc);
  uVar4 = (uint)local_2c;
  iVar3 = iVar2;
  if (iVar2 < (int)uVar4) {
    iVar3 = uVar4 - iVar2;
  }
  if (iVar2 < (int)uVar4) {
    iVar3 = iVar3 - (iVar3 >> 0x1f);
  }
  else {
    in_r12 = 0;
  }
  local_2e = (*(ushort *)(this + 0xe) >> 1) - 0x1e;
  if (iVar2 < (int)uVar4) {
    in_r12 = (undefined2)((uint)(iVar3 << 0xf) >> 0x10);
  }
  local_2a = 0x32;
  local_30 = in_r12;
  SDL_UpperBlit(iVar1,0,*(undefined4 *)(this + 0x80),&local_30);
  SDL_FreeSurface(iVar1);
  iVar1 = TTF_RenderUTF8_Solid(*(undefined4 *)(this + 0x14),auStack36,*(undefined4 *)(this + 0x48));
  local_2c = *(ushort *)(this + 0xc);
  local_2a = 0x32;
  local_2e = *(ushort *)(this + 0xe) >> 1;
  local_30 = (undefined2)((int)((uint)local_2c - *(int *)(iVar1 + 8)) / 2);
  SDL_UpperBlit(iVar1,0,*(undefined4 *)(this + 0x80),&local_30);
  SDL_FreeSurface(iVar1);
  if (local_1c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// ll::layout::show_savelistdlg(ll::menu*)

void show_savelistdlg(menu *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 local_20;
  ushort local_1e;
  ushort local_1c;
  undefined2 local_1a;
  
  SDL_FillRect(*(undefined4 *)(param_1 + 0x80),param_1 + 8,0);
  if (is_cn == 0) {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"Confirm your selection   ?   ",
                       *(undefined4 *)(param_1 + 0x48));
  }
  else {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00026e10,*(undefined4 *)(param_1 + 0x48)
                      );
  }
  iVar4 = *(int *)(iVar1 + 8);
  local_1c = *(ushort *)(param_1 + 0xc);
  uVar6 = (uint)local_1c;
  iVar5 = iVar4;
  if (iVar4 < (int)uVar6) {
    iVar5 = uVar6 - iVar4;
  }
  if (iVar4 < (int)uVar6) {
    iVar5 = iVar5 - (iVar5 >> 0x1f);
  }
  else {
    iVar5 = 0;
  }
  uVar3 = (undefined2)iVar5;
  local_1e = (*(ushort *)(param_1 + 0xe) >> 1) - 0x46;
  if (iVar4 < (int)uVar6) {
    uVar3 = (undefined2)((uint)(iVar5 << 0xf) >> 0x10);
  }
  local_1a = 0x32;
  local_20 = uVar3;
  SDL_UpperBlit(iVar1,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  SDL_FreeSurface(iVar1);
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"1P-A : Save and Quit.",
                       *(undefined4 *)(param_1 + 0x48));
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00026e50,*(undefined4 *)(param_1 + 0x48)
                      );
  }
  local_1c = *(ushort *)(param_1 + 0xc);
  local_1e = (*(ushort *)(param_1 + 0xe) >> 1) - 0x14;
  local_1a = 0x32;
  local_20 = uVar3;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  SDL_FreeSurface(uVar2);
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"1P-B : Cancel .",
                       *(undefined4 *)(param_1 + 0x48));
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00026e84,*(undefined4 *)(param_1 + 0x48)
                      );
  }
  local_1c = *(ushort *)(param_1 + 0xc);
  local_1e = *(ushort *)(param_1 + 0xe) >> 1;
  local_1a = 0x32;
  local_20 = uVar3;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  SDL_FreeSurface(uVar2);
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"1P-C : Quit without saving.",
                       *(undefined4 *)(param_1 + 0x48));
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00026ea4,*(undefined4 *)(param_1 + 0x48)
                      );
  }
  local_1c = *(ushort *)(param_1 + 0xc);
  local_1e = (*(ushort *)(param_1 + 0xe) >> 1) + 0x19;
  local_1a = 0x32;
  local_20 = uVar3;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  SDL_FreeSurface(uVar2);
  return;
}



// ll::layout::show_menudlg(ll::menu*, int)

void __thiscall show_menudlg(layout *this,menu *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  undefined2 local_28;
  short local_26;
  ushort local_24;
  undefined2 local_22;
  
  SDL_FillRect(*(undefined4 *)(this + 0x80),this + 8,0);
  if (is_cn == 0) {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),"1P_A  to  Enter  Submenu.",
                       *(undefined4 *)(this + 0x48));
  }
  else {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),&DAT_00026ee4,*(undefined4 *)(this + 0x48));
  }
  iVar4 = *(int *)(iVar1 + 8);
  local_24 = *(ushort *)(this + 0xc);
  uVar7 = (uint)local_24;
  iVar5 = iVar4;
  if (iVar4 < (int)uVar7) {
    iVar5 = uVar7 - iVar4;
  }
  sVar6 = (short)*(undefined4 *)(this + 0x50) + 10;
  if (iVar4 < (int)uVar7) {
    local_28 = (undefined2)((uint)((iVar5 - (iVar5 >> 0x1f)) * 0x8000) >> 0x10);
  }
  else {
    local_28 = 0;
  }
  local_22 = 0x1e;
  local_26 = sVar6;
  SDL_UpperBlit(iVar1,0,*(undefined4 *)(this + 0x80),&local_28);
  SDL_FreeSurface(iVar1);
  sVar6 = (short)*(undefined4 *)(this + 0x50) + 10 + sVar6;
  if (param_2 == 0) {
    if (is_cn == 0) {
      uVar2 = TTF_RenderUTF8_Solid
                        (*(undefined4 *)(this + 0x14),"1 - Exit . ",*(undefined4 *)(this + 0x4c));
    }
    else {
      uVar2 = TTF_RenderUTF8_Solid
                        (*(undefined4 *)(this + 0x14),&DAT_00026f18,*(undefined4 *)(this + 0x4c));
    }
    local_24 = *(ushort *)(this + 0xc);
    local_28 = 0x1e;
    local_22 = 0x14;
    local_26 = sVar6;
    SDL_UpperBlit(uVar2,0,*(undefined4 *)(this + 0x80),&local_28);
    SDL_FreeSurface(uVar2);
    sVar6 = sVar6 + (short)*(undefined4 *)(this + 0x50) + 10;
  }
  else {
    if (is_cn == 0) {
      uVar2 = TTF_RenderUTF8_Solid
                        (*(undefined4 *)(this + 0x14),"1 - Exit . ",*(undefined4 *)(this + 0x48));
    }
    else {
      uVar2 = TTF_RenderUTF8_Solid
                        (*(undefined4 *)(this + 0x14),&DAT_00026f18,*(undefined4 *)(this + 0x48));
    }
    local_24 = *(ushort *)(this + 0xc);
    local_28 = 0x1e;
    local_22 = 0x14;
    local_26 = sVar6;
    SDL_UpperBlit(uVar2,0,*(undefined4 *)(this + 0x80),&local_28);
    SDL_FreeSurface(uVar2);
    sVar6 = sVar6 + (short)*(undefined4 *)(this + 0x50) + 10;
    if (param_2 == 1) {
      if (is_cn == 0) {
        uVar2 = TTF_RenderUTF8_Solid
                          (*(undefined4 *)(this + 0x14),"2 - Edit game list .",
                           *(undefined4 *)(this + 0x4c));
      }
      else {
        uVar2 = TTF_RenderUTF8_Solid
                          (*(undefined4 *)(this + 0x14),&DAT_00026f34,*(undefined4 *)(this + 0x4c));
      }
      goto LAB_00011efa;
    }
  }
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),"2 - Edit game list .",
                       *(undefined4 *)(this + 0x48));
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),&DAT_00026f34,*(undefined4 *)(this + 0x48));
  }
LAB_00011efa:
  local_24 = *(ushort *)(this + 0xc);
  local_28 = 0x1e;
  local_22 = 0x14;
  local_26 = sVar6;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(this + 0x80),&local_28);
  SDL_FreeSurface(uVar2);
  if (2 < max_menuitem) {
    uVar2 = *(undefined4 *)(this + 0x50);
    if (param_2 == 2) {
      if (is_cn == 0) {
        uVar3 = TTF_RenderUTF8_Solid
                          (*(undefined4 *)(this + 0x14),"3 - Edit game difficulty .",
                           *(undefined4 *)(this + 0x4c));
      }
      else {
        uVar3 = TTF_RenderUTF8_Solid
                          (*(undefined4 *)(this + 0x14),&DAT_00026f68,*(undefined4 *)(this + 0x4c));
      }
    }
    else {
      if (is_cn == 0) {
        uVar3 = TTF_RenderUTF8_Solid
                          (*(undefined4 *)(this + 0x14),"3 - Edit game difficulty .",
                           *(undefined4 *)(this + 0x48));
      }
      else {
        uVar3 = TTF_RenderUTF8_Solid
                          (*(undefined4 *)(this + 0x14),&DAT_00026f68,*(undefined4 *)(this + 0x48));
      }
    }
    local_24 = *(ushort *)(this + 0xc);
    local_28 = 0x1e;
    local_22 = 0x14;
    local_26 = sVar6 + (short)uVar2 + 10;
    SDL_UpperBlit(uVar3,0,*(undefined4 *)(this + 0x80),&local_28);
    SDL_FreeSurface(uVar3);
  }
  return;
}



// ll::layout::show_serialnumber(ll::menu*, char const*)

void __thiscall show_serialnumber(layout *this,menu *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_r7;
  undefined2 local_20;
  undefined2 local_1e;
  ushort local_1c;
  undefined2 local_1a;
  
  SDL_FillRect(*(undefined4 *)(this + 0x80),this + 8,0);
  iVar2 = TTF_RenderUTF8_Solid(*(undefined4 *)(this + 0x14),param_2,*(undefined4 *)(this + 0x48));
  local_1c = *(ushort *)(this + 0xc);
  uVar4 = (uint)local_1c;
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 < (int)uVar4) {
    iVar1 = uVar4 - iVar3;
  }
  else {
    unaff_r7 = 0;
    iVar1 = iVar3;
  }
  local_1a = 0x1e;
  if (iVar3 < (int)uVar4) {
    unaff_r7 = (undefined2)((uint)((iVar1 - (iVar1 >> 0x1f)) * 0x8000) >> 0x10);
  }
  local_1e = 0x78;
  local_20 = unaff_r7;
  SDL_UpperBlit(iVar2,0,*(undefined4 *)(this + 0x80),&local_20);
  SDL_FreeSurface(iVar2);
  if (is_cn == 0) {
    iVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),"Press 1P_START to reboot.",
                       *(undefined4 *)(this + 0x48));
  }
  else {
    iVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(this + 0x14),&DAT_00026fa0,*(undefined4 *)(this + 0x48));
  }
  local_1c = *(ushort *)(this + 0xc);
  local_1a = 0x1e;
  if (*(int *)(iVar2 + 8) < (int)(uint)local_1c) {
    iVar3 = (uint)local_1c - *(int *)(iVar2 + 8);
    local_20 = (undefined2)((uint)((iVar3 - (iVar3 >> 0x1f)) * 0x8000) >> 0x10);
  }
  else {
    local_20 = 0;
  }
  local_1e = 0xaa;
  SDL_UpperBlit(iVar2,0,*(undefined4 *)(this + 0x80),&local_20);
  SDL_FreeSurface(iVar2);
  return;
}



// ll::layout::show_message(ll::menu*)

void show_message(menu *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_20;
  undefined2 local_1e;
  ushort local_1c;
  undefined2 local_1a;
  
  SDL_FillRect(*(undefined4 *)(param_1 + 0x80),param_1 + 8,0);
  if (is_cn == 0) {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"Saving...Don\'t Poweroff!",
                       *(undefined4 *)(param_1 + 0x48));
  }
  else {
    iVar1 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00026fd0,*(undefined4 *)(param_1 + 0x48)
                      );
  }
  local_1c = *(ushort *)(param_1 + 0xc);
  local_1a = 0x1e;
  if (*(int *)(iVar1 + 8) < (int)(uint)local_1c) {
    iVar2 = (uint)local_1c - *(int *)(iVar1 + 8);
    local_20 = (undefined2)((uint)((iVar2 - (iVar2 >> 0x1f)) * 0x8000) >> 0x10);
  }
  else {
    local_20 = 0;
  }
  local_1e = 100;
  SDL_UpperBlit(iVar1,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  SDL_FreeSurface(iVar1);
  return;
}



// ll::layout::show_help(ll::menu*)

void show_help(menu *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 local_20;
  short local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  if (*(int *)(param_1 + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(param_1 + 0x80),param_1 + 0xa4,0);
  }
  else {
    SDL_UpperBlit(*(int *)(param_1 + 4),param_1 + 0xa4,*(undefined4 *)(param_1 + 0x80),
                  param_1 + 0xa4);
  }
  sVar1 = *(short *)(param_1 + 0xa6);
  local_20 = *(undefined2 *)(param_1 + 0xa4);
  local_1c = *(undefined2 *)(param_1 + 0xa8);
  local_1a = (undefined2)*(undefined4 *)(param_1 + 0x68);
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"1P Controls:",
                       *(undefined4 *)(param_1 + 0x60));
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_0002700c,*(undefined4 *)(param_1 + 0x60)
                      );
  }
  local_1e = sVar1;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  sVar1 = sVar1 + 5 +
          (short)*(undefined4 *)(param_1 + 0x6c) + (short)*(undefined4 *)(param_1 + 0x50);
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"A: Show or Hide",
                       *(undefined4 *)(param_1 + 0x60));
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00027028,*(undefined4 *)(param_1 + 0x60)
                      );
  }
  local_1e = sVar1;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  sVar1 = sVar1 + (short)*(undefined4 *)(param_1 + 0x50) + (short)*(undefined4 *)(param_1 + 0x6c);
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"B: Show All",*(undefined4 *)(param_1 + 0x60)
                      );
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00027050,*(undefined4 *)(param_1 + 0x60)
                      );
  }
  local_1e = sVar1;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  sVar1 = (short)*(undefined4 *)(param_1 + 0x50) + (short)*(undefined4 *)(param_1 + 0x6c) + sVar1;
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"C: Hide All",*(undefined4 *)(param_1 + 0x60)
                      );
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_0002706c,*(undefined4 *)(param_1 + 0x60)
                      );
  }
  local_1e = sVar1;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  sVar1 = (short)*(undefined4 *)(param_1 + 0x50) + (short)*(undefined4 *)(param_1 + 0x6c) + sVar1;
  if (is_cn == 0) {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"D: Set Game",*(undefined4 *)(param_1 + 0x60)
                      );
  }
  else {
    uVar2 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_00027088,*(undefined4 *)(param_1 + 0x60)
                      );
  }
  local_1e = sVar1;
  SDL_UpperBlit(uVar2,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  if (is_cn == 0) {
    uVar3 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),"START: Save,Quit",
                       *(undefined4 *)(param_1 + 0x60));
  }
  else {
    uVar3 = TTF_RenderUTF8_Solid
                      (*(undefined4 *)(param_1 + 0x14),&DAT_000270ac,*(undefined4 *)(param_1 + 0x60)
                      );
  }
  local_1e = sVar1 + (short)uVar4 + (short)uVar2;
  SDL_UpperBlit(uVar3,0,*(undefined4 *)(param_1 + 0x80),&local_20);
  SDL_FreeSurface(uVar3);
  return;
}



// ll::menu::draw(_TTF_Font*, SDL_Color, SDL_Color) const

void __thiscall draw(menu *this,_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3)

{
  undefined4 uVar1;
  int iVar2;
  SDL_Color *pSVar3;
  SDL_Color local_20;
  SDL_Color local_1c [2];
  SDL_Color local_14;
  
  pSVar3 = &local_20;
  local_1c[0] = param_2;
  local_20 = param_3;
  iVar2 = *(int *)(this + 4);
  if ((iVar2 == 0) || (this != *(menu **)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) * 4))) {
    pSVar3 = local_1c;
  }
  local_14 = *pSVar3;
  uVar1 = (**(code **)(*(int *)this + 8))(this);
  TTF_RenderUTF8_Solid(param_1,uVar1,local_14);
  return;
}



// ll::menu::draw_prefix(_TTF_Font*, SDL_Color, SDL_Color, int) const

void __thiscall
draw_prefix(menu *this,_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  SDL_Color *pSVar3;
  SDL_Color local_90;
  SDL_Color local_8c [2];
  SDL_Color local_84;
  undefined auStack128 [100];
  int local_1c;
  
  local_8c[0] = param_2;
  local_90 = param_3;
  iVar2 = *(int *)(this + 4);
  local_1c = __stack_chk_guard;
  if ((iVar2 == 0) || (this != *(menu **)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) * 4))) {
    pSVar3 = local_8c;
  }
  else {
    pSVar3 = &local_90;
  }
  local_84 = *pSVar3;
  memset(auStack128,0,100);
  uVar1 = (**(code **)(*(int *)this + 8))(this);
  __sprintf_chk(auStack128,1,100,"%03d. %s",param_4,uVar1);
  TTF_RenderUTF8_Solid(param_1,auStack128,local_84);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::menu::draw_prefix_showhide(_TTF_Font*, SDL_Color, SDL_Color, int, int, int) const

void draw_prefix_showhide
               (_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3,int param_4,int param_5,
               int param_6)

{
  undefined4 uVar1;
  int iVar2;
  SDL_Color *pSVar3;
  char *pcVar4;
  SDL_Color local_90;
  SDL_Color local_8c [2];
  SDL_Color local_84;
  undefined auStack128 [100];
  int local_1c;
  
  local_8c[0] = param_3;
  local_90 = param_4;
  iVar2 = *(int *)(param_1 + 4);
  local_1c = __stack_chk_guard;
  if ((iVar2 == 0) ||
     (pSVar3 = &local_90,
     param_1 != *(_TTF_Font **)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) * 4))) {
    pSVar3 = local_8c;
  }
  local_84 = *pSVar3;
  memset(auStack128,0,100);
  if (param_6 < 1) {
    uVar1 = (**(code **)(*(int *)param_1 + 8))(param_1);
    pcVar4 = "  %03d. %s";
  }
  else {
    uVar1 = (**(code **)(*(int *)param_1 + 8))();
    pcVar4 = "* %03d. %s";
  }
  __sprintf_chk(auStack128,1,100,pcVar4,param_5,uVar1);
  TTF_RenderText_Solid(param_2,auStack128,local_84);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Removing unreachable block (ram,0x000125bc)
// ll::menu::~menu()

menu * __thiscall _menu(menu *this)

{
  bool bVar1;
  allocator *paVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar6 = *(int ***)(this + 0xc);
  ppiVar4 = *(int ***)(this + 0x10);
  *(undefined ***)this = &PTR__menu_1_000270e0;
  if (ppiVar6 != ppiVar4) {
    do {
      ppiVar7 = ppiVar6 + 1;
      if (*ppiVar6 != (int *)0x0) {
        (**(code **)(**ppiVar6 + 4))();
        ppiVar4 = *(int ***)(this + 0x10);
      }
      ppiVar6 = ppiVar7;
    } while (ppiVar4 != ppiVar7);
    ppiVar6 = *(int ***)(this + 0xc);
  }
  if (ppiVar6 != (int **)0x0) {
    operator_delete(ppiVar6);
  }
  paVar2 = (allocator *)(*(int *)(this + 8) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar5 = (int *)(*(int *)(this + 8) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar5);
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar3 < 1) {
      _M_destroy(paVar2);
    }
  }
  *(undefined ***)this = &PTR__item_1_00017fd8;
  return this;
}



// ll::menu::~menu()

menu * __thiscall _menu(menu *this)

{
  _menu(this);
  operator_delete(this);
  return this;
}



// ll::menu::select_next(int)

undefined4 __thiscall select_next(menu *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2) + -1;
  if (*(int *)(this + 0x18) < iVar2) {
    param_1 = param_1 + *(int *)(this + 0x18);
    uVar1 = 1;
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    *(int *)(this + 0x18) = param_1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ll::menu::select_previous(int)

uint __thiscall select_previous(menu *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x18);
  uVar2 = uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1 - param_1 & ~((int)(uVar1 - param_1) >> 0x1f);
  }
  if (0 < (int)uVar1) {
    *(uint *)(this + 0x18) = uVar2;
  }
  return (uint)(0 < (int)uVar1);
}



// ll::menu::select_next_alpha()

undefined4 __thiscall select_next_alpha(menu *this)

{
  int **ppiVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pbVar2 = (byte *)(**(code **)(**(int **)(*(int *)(this + 0xc) + *(int *)(this + 0x18) * 4) + 8))()
  ;
  iVar3 = tolower((uint)*pbVar2);
  iVar4 = *(int *)(this + 0xc);
  iVar5 = *(int *)(this + 0x18);
  iVar7 = (*(int *)(this + 0x10) - iVar4 >> 2) + -1;
  if (iVar5 <= iVar7) {
    iVar6 = iVar5 << 2;
    while( true ) {
      ppiVar1 = (int **)(iVar4 + iVar6);
      iVar6 = iVar6 + 4;
      pbVar2 = (byte *)(**(code **)(**ppiVar1 + 8))();
      iVar4 = tolower((uint)*pbVar2);
      if (iVar3 < iVar4) {
        *(int *)(this + 0x18) = iVar5;
        return 1;
      }
      iVar5 = iVar5 + 1;
      if (iVar7 < iVar5) break;
      iVar4 = *(int *)(this + 0xc);
    }
  }
  return 0;
}



// ll::menu::select_previous_alpha()

undefined4 __thiscall select_previous_alpha(menu *this)

{
  int **ppiVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  pbVar2 = (byte *)(**(code **)(**(int **)(*(int *)(this + 0xc) + *(int *)(this + 0x18) * 4) + 8))()
  ;
  iVar3 = tolower((uint)*pbVar2);
  iVar5 = *(int *)(this + 0x18);
  if (-1 < iVar5) {
    iVar6 = iVar5 << 2;
    do {
      ppiVar1 = (int **)(*(int *)(this + 0xc) + iVar6);
      iVar6 = iVar6 + -4;
      pbVar2 = (byte *)(**(code **)(**ppiVar1 + 8))();
      iVar4 = tolower((uint)*pbVar2);
      if (iVar4 < iVar3) {
        *(int *)(this + 0x18) = iVar5;
        return 1;
      }
      bVar7 = iVar5 != 0;
      iVar5 = iVar5 + -1;
    } while (bVar7);
  }
  return 0;
}



// ll::menu::select_next_with_top_index(int, int)

uint __thiscall select_next_with_top_index(menu *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(this + 0x18);
  iVar1 = (*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2) + -1;
  bVar4 = iVar1 == iVar3;
  if (iVar3 < iVar1) {
    iVar2 = param_1 + iVar3;
    if (iVar1 <= param_1 + iVar3) {
      iVar2 = iVar1;
    }
    *(int *)(this + 0x18) = iVar2;
    if (*(int *)(this + 0x1c) + param_2 + -1 < iVar2) {
      if (iVar2 < param_2) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + (1 - param_2);
      }
      *(int *)(this + 0x1c) = iVar2;
    }
    return 1;
  }
  if (bVar4) {
    param_2 = 0;
  }
  if (bVar4) {
    *(int *)(this + 0x18) = param_2;
  }
  if (bVar4) {
    *(int *)(this + 0x1c) = param_2;
  }
  return (uint)bVar4;
}



// ll::menu::select_previous_with_top_index(int, int)

undefined4 __thiscall select_previous_with_top_index(menu *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = (*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2) + -1;
      *(int *)(this + 0x18) = iVar1;
      uVar3 = iVar1 + (1 - param_2);
      *(uint *)(this + 0x1c) = uVar3 & ~((int)uVar3 >> 0x1f);
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar3 = iVar1 - param_1 & ~(iVar1 - param_1 >> 0x1f);
    *(uint *)(this + 0x18) = uVar3;
    if ((int)uVar3 < *(int *)(this + 0x1c)) {
      *(uint *)(this + 0x1c) = uVar3;
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ll::menu::text() const

undefined4 __thiscall text(menu *this)

{
  return *(undefined4 *)(this + 8);
}



// ll::menu::snapshot()

undefined4 snapshot(void)

{
  return 0;
}



// ll::menu::avipath()

menu * __thiscall avipath(menu *this)

{
  basic_string((char *)this,(allocator *)0x0);
  return this;
}



// ll::game::draw(_TTF_Font*, SDL_Color, SDL_Color) const

void __thiscall draw(game *this,_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3)

{
  undefined4 uVar1;
  SDL_Color *pSVar2;
  SDL_Color local_20;
  SDL_Color local_1c [2];
  SDL_Color local_14;
  
  local_1c[0] = param_2;
  local_20 = param_3;
  pSVar2 = local_1c;
  if (this == *(game **)(*(int *)(*(int *)(this + 4) + 0xc) +
                        *(int *)(*(int *)(this + 4) + 0x18) * 4)) {
    pSVar2 = &local_20;
  }
  local_14 = *pSVar2;
  uVar1 = (**(code **)(*(int *)this + 8))(this);
  TTF_RenderUTF8_Solid(param_1,uVar1,local_14);
  return;
}



// ll::game::draw_prefix(_TTF_Font*, SDL_Color, SDL_Color, int) const

void __thiscall
draw_prefix(game *this,_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  SDL_Color *pSVar3;
  SDL_Color local_90;
  SDL_Color local_8c [2];
  SDL_Color local_84;
  undefined auStack128 [100];
  int local_1c;
  
  local_8c[0] = param_2;
  local_90 = param_3;
  iVar2 = *(int *)(this + 4);
  local_1c = __stack_chk_guard;
  if ((iVar2 == 0) || (this != *(game **)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) * 4))) {
    pSVar3 = local_8c;
  }
  else {
    pSVar3 = &local_90;
  }
  local_84 = *pSVar3;
  memset(auStack128,0,100);
  uVar1 = (**(code **)(*(int *)this + 8))(this);
  __sprintf_chk(auStack128,1,100,&DAT_00027138,param_4,uVar1);
  TTF_RenderUTF8_Solid(param_1,auStack128,local_84);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::game::draw_prefix_showhide(_TTF_Font*, SDL_Color, SDL_Color, int, int, int) const

void __thiscall
draw_prefix_showhide
          (game *this,_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3,int param_4,int param_5
          ,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  SDL_Color *pSVar3;
  code *pcVar4;
  char *pcVar5;
  SDL_Color local_90;
  SDL_Color local_8c [2];
  SDL_Color local_84;
  undefined auStack128 [100];
  int local_1c;
  
  local_8c[0] = param_2;
  local_90 = param_3;
  iVar2 = *(int *)(this + 4);
  local_1c = __stack_chk_guard;
  if ((iVar2 == 0) ||
     (pSVar3 = &local_90, this != *(game **)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) * 4))) {
    pSVar3 = local_8c;
  }
  local_84 = *pSVar3;
  memset(auStack128,0,100);
  pcVar4 = *(code **)(*(int *)this + 8);
  if (param_5 < 1) {
    if (param_6 == 0) {
      uVar1 = (*pcVar4)();
      pcVar5 = "  %s";
    }
    else {
      uVar1 = (*pcVar4)(this);
      pcVar5 = "  SET.%s";
    }
  }
  else {
    if (param_6 == 0) {
      uVar1 = (*pcVar4)();
      pcVar5 = "* %s";
    }
    else {
      uVar1 = (*pcVar4)();
      pcVar5 = "* SET.%s";
    }
  }
  __sprintf_chk(auStack128,1,100,pcVar5,uVar1);
  TTF_RenderUTF8_Solid(param_1,auStack128,local_84);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// ll::game::avipath()

void avipath(void)

{
  bool bVar1;
  basic_string *in_r0;
  uint uVar2;
  allocator *paVar3;
  int in_r1;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *__s;
  int local_14;
  
  paVar3 = (allocator *)get_string((char *)&g_opts);
  basic_string((char *)&local_14,paVar3);
  uVar2 = find((char *)&local_14,(uint)&DAT_00018074,0);
  if (uVar2 == 0xffffffff) {
    iVar4 = 0x2b;
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"game::avi: snap option missing %r specifier",0x2b);
    piVar6 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar6 == (int *)0x0) {
      __throw_bad_cast();
      _M_dispose((allocator *)(local_14 + -0xc));
      paVar3 = (allocator *)__cxa_end_cleanup();
      iVar5 = *(int *)(iVar4 + -4);
      *(int *)(iVar4 + -4) = iVar5 + -1;
      goto LAB_000129ea;
    }
    if (*(char *)(piVar6 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar6 + 0x18))(piVar6,10);
    }
    put(-0x1c);
    flush();
    basic_string((char *)in_r0,(allocator *)0x0);
  }
  else {
    __s = *(char **)(in_r1 + 8);
    strlen(__s);
    replace((uint)&local_14,uVar2,(char *)0x2,(uint)__s);
    basic_string(in_r0);
  }
  paVar3 = (allocator *)(local_14 + -0xc);
  if (paVar3 == (allocator *)_S_empty_rep_storage) {
    return;
  }
  piVar6 = (int *)(local_14 + -4);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar6);
    iVar5 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar5 + -1;
  DataMemoryBarrier(0x1f);
LAB_000129ea:
  if (iVar5 < 1) {
    _M_destroy(paVar3);
  }
  return;
}



// ll::game::snapshot()

int * __thiscall snapshot(game *this)

{
  bool bVar1;
  uint uVar2;
  allocator *paVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *__s;
  int local_1c [2];
  
  if (is_cga == 0) {
    paVar3 = (allocator *)get_string((char *)&g_opts);
    basic_string((char *)local_1c,paVar3);
    uVar2 = find((char *)local_1c,(uint)&DAT_00018074,0);
    if (uVar2 == 0xffffffff) {
      iVar4 = 0x30;
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"game::snapshot: snap option missing %r specifier",0x30);
      piVar7 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar7 == (int *)0x0) {
        __throw_bad_cast();
LAB_00012d48:
        __throw_bad_cast();
LAB_00012d28:
        _M_dispose((allocator *)(local_1c[0] + -0xc));
        paVar3 = (allocator *)__cxa_end_cleanup();
        iVar5 = *(int *)(iVar4 + -4);
        *(int *)(iVar4 + -4) = iVar5 + -1;
        goto LAB_00012b34;
      }
      if (*(char *)(piVar7 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar7 + 0x18))(piVar7,10);
      }
      put(-0x1c);
      flush();
      piVar7 = (int *)0x0;
    }
    else {
      __s = *(char **)(this + 8);
      strlen(__s);
      replace((uint)local_1c,uVar2,(char *)0x2,(uint)__s);
      piVar7 = (int *)IMG_Load(local_1c[0]);
    }
    paVar3 = (allocator *)(local_1c[0] + -0xc);
    if (paVar3 == (allocator *)_S_empty_rep_storage) {
      return piVar7;
    }
    piVar6 = (int *)(local_1c[0] + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar6);
      iVar5 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar5 + -1;
  }
  else {
    if (is_cga < 0x65) {
      paVar3 = (allocator *)get_string((char *)&g_opts);
      basic_string((char *)local_1c,paVar3);
      uVar2 = find((char *)local_1c,(uint)&DAT_00018074,0);
      if (uVar2 == 0xffffffff) {
        iVar4 = 0x30;
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"game::snapshot: snap option missing %r specifier",0x30);
        piVar7 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
        if (piVar7 == (int *)0x0) goto LAB_00012d48;
        if (*(char *)(piVar7 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*piVar7 + 0x18))(piVar7,10);
        }
        put(-0x1c);
        flush();
        piVar7 = (int *)0x0;
      }
      else {
        __s = *(char **)(this + 8);
        strlen(__s);
        replace((uint)local_1c,uVar2,(char *)0x2,(uint)__s);
        piVar7 = (int *)IMG_Load(local_1c[0]);
      }
      paVar3 = (allocator *)(local_1c[0] + -0xc);
      if (paVar3 == (allocator *)_S_empty_rep_storage) {
        return piVar7;
      }
      piVar6 = (int *)(local_1c[0] + -4);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar6);
        iVar5 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar5 + -1;
    }
    else {
      paVar3 = (allocator *)get_string((char *)&g_opts);
      basic_string((char *)local_1c,paVar3);
      uVar2 = find((char *)local_1c,(uint)&DAT_00018074,0);
      if (uVar2 == 0xffffffff) {
        iVar4 = 0x30;
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"game::snapshot: snap option missing %r specifier",0x30);
        piVar7 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
        if (piVar7 == (int *)0x0) {
          __throw_bad_cast();
          goto LAB_00012d28;
        }
        if (*(char *)(piVar7 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*piVar7 + 0x18))(piVar7,10);
        }
        put(-0x1c);
        flush();
        piVar7 = (int *)0x0;
      }
      else {
        __s = *(char **)(this + 8);
        strlen(__s);
        replace((uint)local_1c,uVar2,(char *)0x2,(uint)__s);
        piVar7 = (int *)IMG_Load(local_1c[0]);
      }
      paVar3 = (allocator *)(local_1c[0] + -0xc);
      if (paVar3 == (allocator *)_S_empty_rep_storage) {
        return piVar7;
      }
      piVar6 = (int *)(local_1c[0] + -4);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar6);
        iVar5 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar5 + -1;
    }
  }
  DataMemoryBarrier(0x1f);
LAB_00012b34:
  if (iVar5 < 1) {
    _M_destroy(paVar3);
  }
  return piVar7;
}



// ll::game::text() const

undefined4 __thiscall text(game *this)

{
  return *(undefined4 *)(this + 0xc);
}



// WARNING: Removing unreachable block (ram,0x00012e86)
// WARNING: Removing unreachable block (ram,0x00012e5c)
// WARNING: Removing unreachable block (ram,0x00012e6a)
// WARNING: Removing unreachable block (ram,0x00012e78)
// ll::game::~game()

game * __thiscall _game(game *this)

{
  bool bVar1;
  allocator *paVar2;
  int *piVar3;
  int iVar4;
  
  paVar2 = (allocator *)(*(int *)(this + 0x14) + -0xc);
  *(undefined ***)this = &PTR__game_1_00027148;
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 0x14) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  paVar2 = (allocator *)(*(int *)(this + 0x10) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 0x10) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  paVar2 = (allocator *)(*(int *)(this + 0xc) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 0xc) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  paVar2 = (allocator *)(*(int *)(this + 8) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 8) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  *(undefined ***)this = &PTR__item_1_00017fd8;
  return this;
}



// WARNING: Removing unreachable block (ram,0x00012fd4)
// WARNING: Removing unreachable block (ram,0x00012faa)
// WARNING: Removing unreachable block (ram,0x00012fb8)
// WARNING: Removing unreachable block (ram,0x00012fc6)
// ll::game::~game()

game * __thiscall _game(game *this)

{
  bool bVar1;
  allocator *paVar2;
  int *piVar3;
  int iVar4;
  
  paVar2 = (allocator *)(*(int *)(this + 0x14) + -0xc);
  *(undefined ***)this = &PTR__game_1_00027148;
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 0x14) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  paVar2 = (allocator *)(*(int *)(this + 0x10) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 0x10) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  paVar2 = (allocator *)(*(int *)(this + 0xc) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 0xc) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  paVar2 = (allocator *)(*(int *)(this + 8) + -0xc);
  if (paVar2 != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(*(int *)(this + 8) + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy(paVar2);
    }
  }
  *(undefined ***)this = &PTR__item_1_00017fd8;
  operator_delete(this);
  return this;
}



// ll::options::~options()

options * __thiscall _options(options *this)

{
  cfg_free(*(undefined4 *)(this + 4));
  return this;
}



// cb_rotate(cfg_t*, cfg_opt_t*, char const*, void*)

undefined4 cb_rotate(cfg_t *param_1,cfg_opt_t *param_2,char *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = param_4;
  iVar1 = strcmp(param_3,"none");
  if (iVar1 == 0) {
    *(undefined4 *)param_4 = 0;
    return 0;
  }
  iVar1 = strcmp(param_3,"right");
  if (iVar1 == 0) {
    *(undefined4 *)param_4 = 0x5a;
    return 0;
  }
  iVar1 = strcmp(param_3,"left");
  if (iVar1 == 0) {
    *(undefined4 *)param_4 = 0x10e;
    return 0;
  }
  iVar1 = strcmp(param_3,"flip");
  if (iVar1 == 0) {
    *(undefined4 *)param_4 = 0xb4;
    return 0;
  }
  cfg_error(param_1,"invalid value for option %s: %s",*(undefined4 *)param_2,param_3,pvVar2);
  return 0xffffffff;
}



// ll::options::options()

void __thiscall options(options *this)

{
  *(undefined4 *)(this + 4) = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x000135b8)
// ll::options::load(char const*)

void __thiscall load(options *this,char *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *__s;
  int *piVar5;
  int local_d9c;
  char *local_d98;
  undefined4 local_d94;
  undefined4 local_d80;
  char *local_d48;
  undefined4 local_d44;
  undefined4 local_d30;
  char *local_cf8;
  undefined4 local_cf4;
  undefined4 local_ce0;
  char *local_ca8;
  undefined4 local_ca4;
  undefined4 local_c90;
  char *local_c58;
  undefined4 local_c54;
  char *local_c08;
  undefined4 local_c04;
  undefined4 local_bc8;
  char *local_bb8;
  undefined4 local_bb4;
  undefined *local_b8c;
  char *local_b68;
  undefined4 local_b64;
  undefined4 local_b50;
  undefined *local_b18;
  undefined4 local_b14;
  char *local_aec;
  undefined *local_ac8;
  undefined4 local_ac4;
  char *local_a9c;
  undefined *local_a78;
  undefined4 local_a74;
  char *local_a4c;
  undefined *local_a28;
  undefined4 local_a24;
  char *local_9fc;
  undefined *local_9d8;
  undefined4 local_9d4;
  char *local_9ac;
  undefined *local_988;
  undefined4 local_984;
  char *local_95c;
  undefined *local_938;
  undefined4 local_934;
  char *local_90c;
  undefined *local_8e8;
  undefined4 local_8e4;
  char *local_8bc;
  undefined *local_898;
  undefined4 local_894;
  char *local_86c;
  undefined *local_848;
  undefined4 local_844;
  char *local_81c;
  char *local_7f8;
  undefined4 local_7f4;
  char *local_7cc;
  char *local_7a8;
  undefined4 local_7a4;
  char *local_77c;
  char *local_758;
  undefined4 local_754;
  char *local_72c;
  char *local_708;
  undefined4 local_704;
  char *local_6dc;
  char *local_6b8;
  undefined4 local_6b4;
  char *local_68c;
  char *local_668;
  undefined4 local_664;
  char *local_63c;
  char *local_618;
  undefined4 local_614;
  char *local_5ec;
  char *local_5c8;
  undefined4 local_5c4;
  char *local_59c;
  char *local_578;
  undefined4 local_574;
  char *local_54c;
  char *local_528;
  undefined4 local_524;
  char *local_4fc;
  undefined *local_4d8;
  undefined4 local_4d4;
  undefined *local_4ac;
  char *local_488;
  undefined4 local_484;
  undefined *local_45c;
  char *local_438;
  undefined4 local_434;
  undefined *local_40c;
  undefined *local_3e8;
  undefined4 local_3e4;
  undefined *local_3bc;
  undefined *local_398;
  undefined4 local_394;
  undefined4 local_380;
  undefined *local_348;
  undefined4 local_344;
  undefined4 local_330;
  undefined *local_2f8;
  undefined4 local_2f4;
  undefined4 local_2e0;
  undefined *local_2a8;
  undefined4 local_2a4;
  undefined4 local_290;
  char *local_258;
  undefined4 local_254;
  undefined4 local_240;
  char *local_208;
  undefined4 local_204;
  undefined4 local_1f0;
  char *local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a0;
  char *local_168;
  undefined4 local_164;
  undefined4 local_150;
  undefined *local_118;
  undefined4 local_114;
  undefined4 local_100;
  char *local_c8;
  undefined4 local_c4;
  undefined4 local_b0;
  
  *(char **)this = param_1;
  memset(&local_d98,0,0xd70);
  local_c58 = "fullscreen";
  local_c54 = 4;
  local_d98 = "loglevel";
  local_d48 = "width";
  local_d80 = 2;
  local_cf8 = "height";
  local_d30 = 0x280;
  local_ce0 = 0x1e0;
  local_ca8 = "bitdepth";
  local_c08 = "rotate";
  local_c90 = 0x18;
  local_bc8 = 0x12ffd;
  local_bb8 = "theme";
  local_b68 = "snapshot_delay";
  local_b18 = &DAT_0001842c;
  local_b50 = 500;
  local_ac8 = &DAT_00027264;
  local_a78 = &DAT_0002726c;
  local_a28 = &DAT_00027274;
  local_d94 = 1;
  local_d44 = 1;
  local_cf4 = 1;
  local_ca4 = 1;
  local_c04 = 1;
  local_b64 = 1;
  local_bb4 = 3;
  local_b14 = 3;
  local_ac4 = 3;
  local_a74 = 3;
  local_b8c = &DAT_00027614;
  local_aec = "cd /sdcard; ./clsemuh %r ";
  local_a9c = "cd /sdcard; ./clsemuh %r ";
  local_a4c = "cd /sdcard; ./clsemuh %r ";
  local_a24 = 3;
  local_9fc = "cd /sdcard; ./clsemuh %r ";
  local_9ac = "cd /sdcard; ./clsemuh %r ";
  local_95c = "cd /sdcard; ./clsemuh %r ";
  local_90c = "cd /sdcard; ./clsemuh %r ";
  local_8bc = "cd /sdcard; ./clsemuh %r ";
  local_86c = "cd /sdcard; ./clsemuh %r ";
  local_81c = "cd /sdcard; ./clsemuh %r ";
  local_7cc = "cd /sdcard; ./clsemuh %r ";
  local_77c = "cd /sdcard; ./clsemuh %r ";
  local_72c = "cd /sdcard; ./clsemuh %r ";
  local_6dc = "cd /sdcard; ./clsemuh %r ";
  local_9d4 = 3;
  local_984 = 3;
  local_934 = 3;
  local_8e4 = 3;
  local_894 = 3;
  local_844 = 3;
  local_7f4 = 3;
  local_7a4 = 3;
  local_754 = 3;
  local_704 = 3;
  local_6b4 = 3;
  local_9d8 = &DAT_0002727c;
  local_988 = &DAT_00027284;
  local_938 = &DAT_0002728c;
  local_8e8 = &DAT_00027294;
  local_898 = &DAT_0002729c;
  local_848 = &DAT_000272a4;
  local_7f8 = "emu10";
  local_7a8 = "emu11";
  local_758 = "emu12";
  local_6b8 = "emu14";
  local_68c = "cd /sdcard; ./clsemuh %r ";
  local_708 = "emu13";
  local_63c = "cd /sdcard; ./clsemuh %r ";
  local_5ec = "cd /sdcard; ./clsemuh %r ";
  local_59c = "cd /sdcard; ./clsemuh %r ";
  local_54c = "cd /sdcard; ./clsemuh %r ";
  local_4fc = "cd /sdcard; ./clsemuh %r ";
  local_4ac = &DAT_00027614;
  local_45c = &DAT_00027614;
  local_40c = &DAT_00027614;
  local_3bc = &DAT_00027614;
  local_664 = 3;
  local_614 = 3;
  local_5c4 = 3;
  local_574 = 3;
  local_524 = 3;
  local_4d4 = 3;
  local_484 = 3;
  local_434 = 3;
  local_3e4 = 3;
  local_394 = 1;
  local_344 = 1;
  local_668 = "emu15";
  local_618 = "emu16";
  local_5c8 = "emu17";
  local_578 = "emu18";
  local_528 = "emu19";
  local_4d8 = &DAT_0002721c;
  local_488 = "snapx";
  local_438 = "snap384";
  local_3e8 = &DAT_000271a8;
  local_398 = &DAT_000182e8;
  local_348 = &DAT_000182f0;
  local_380 = 0x1b;
  local_c8 = "alphamod";
  local_330 = 0x111;
  local_2f8 = &DAT_000182f4;
  local_2f4 = 1;
  local_2a4 = 1;
  local_254 = 1;
  local_204 = 1;
  local_1b4 = 1;
  local_164 = 1;
  local_114 = 1;
  local_c4 = 1;
  local_2e0 = 0x112;
  local_2a8 = &DAT_000182fc;
  local_258 = "pgdown";
  local_240 = 0x113;
  local_208 = "reload";
  local_150 = 0x31;
  local_118 = &DAT_00018328;
  local_b0 = 0x40;
  local_290 = 0x114;
  local_1f0 = 0x35;
  local_1b8 = "showhide";
  local_1a0 = 0x36;
  local_168 = "select";
  local_100 = 0x32;
  uVar2 = cfg_init(&local_d98,0);
  *(undefined4 *)(this + 4) = uVar2;
  basic_string((char *)&local_d9c,(allocator *)"xrunh.conf");
  uVar3 = _M_replace_aux((uint)&local_d9c,0,0,'\x01');
  __s = *(char **)this;
  strlen(__s);
  insert(uVar3,(char *)0x0,(uint)__s);
  iVar4 = cfg_parse(*(undefined4 *)(this + 4),local_d9c);
  if (iVar4 == -1) {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"options: file error, using defaults",0x23);
    piVar5 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar5 != (int *)0x0) {
      if (*(char *)(piVar5 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar5 + 0x18))(piVar5,10);
      }
      put(-0x1c);
      flush();
      cfg_parse_buf(*(undefined4 *)(this + 4),&DAT_00027614);
      goto LAB_0001346a;
    }
LAB_000135a0:
    __throw_bad_cast();
  }
  else {
    if (iVar4 != 1) {
LAB_0001346a:
      if ((allocator *)(local_d9c + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar5 = (int *)(local_d9c + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar5);
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar4 < 1) {
          _M_destroy((allocator *)(local_d9c + -0xc));
        }
      }
      return;
    }
    this = (options *)__cxa_allocate_exception(8);
    iVar4 = *(int *)(log._0_4_ + -0xc);
    ((undefined **)this)[1] = (undefined *)0x2732c;
    *(undefined ***)this = &PTR__bad_lemon_1_00018000;
    *(undefined4 *)(*(int *)(log + iVar4 + 0x78) + 0x24) = 1;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"options: parse error",0x14);
    piVar5 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar5 == (int *)0x0) {
      __throw_bad_cast();
      _exception((exception *)this);
      __cxa_free_exception(this);
      _M_dispose((allocator *)(local_d9c + -0xc));
      __cxa_end_cleanup();
      goto LAB_000135a0;
    }
    if (*(char *)(piVar5 + 7) != '\0') goto LAB_0001356c;
  }
  _M_widen_init();
  (**(code **)(*piVar5 + 0x18))(piVar5,10);
LAB_0001356c:
  put(-0x1c);
  flush();
                    // WARNING: Subroutine does not return
  __cxa_throw(this,&typeinfo,0xf9f9);
}



// ll::options::get_bool(char const*) const

uint get_bool(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = cfg_getbool(*(undefined4 *)(param_1 + 4));
  uVar2 = count_leading_zeroes(iVar1 + -1);
  return uVar2 >> 5;
}



// ll::options::get_int(char const*) const

void get_int(char *param_1)

{
  cfg_getint(*(undefined4 *)(param_1 + 4));
  return;
}



// ll::options::get_string(char const*) const

void get_string(char *param_1)

{
  cfg_getstr(*(undefined4 *)(param_1 + 4));
  return;
}



// ll::options::resolve(std::basic_string<char, std::char_traits<char>, std::allocator<char>>&)
// const

void __thiscall resolve(options *this,basic_string *param_1)

{
  uint uVar1;
  char *__s;
  
  uVar1 = _M_replace_aux((uint)param_1,0,0,'\x01');
  __s = *(char **)this;
  strlen(__s);
  insert(uVar1,(char *)0x0,(uint)__s);
  return;
}



// ll::log_buf::sync()

undefined4 __thiscall sync(log_buf *this)

{
  *(undefined4 *)(this + 0x24) = 0;
  return 0;
}



// ll::log_buf::overflow(int)

int __thiscall overflow(log_buf *this,int param_1)

{
  if (*(int *)(this + 0x24) <= *(int *)(this + 0x20)) {
    put('\b');
  }
  return param_1;
}



// ll::log_buf::~log_buf()

log_buf * __thiscall _log_buf(log_buf *this)

{
  *(undefined4 *)this = 0x293e8;
  _locale((locale *)(this + 0x1c));
  return this;
}



// ll::log_buf::~log_buf()

log_buf * __thiscall _log_buf(log_buf *this)

{
  *(undefined4 *)this = 0x293e8;
  _locale((locale *)(this + 0x1c));
  operator_delete(this);
  return this;
}



// ll::logger::~logger()

logger * __thiscall _logger(logger *this)

{
  *(undefined ***)this = &PTR__basic_ostream_000273cc;
  *(undefined4 *)(this + 4) = 0x292b8;
  _ios_base((ios_base *)(this + 4));
  return this;
}



// virtual thunk to ll::logger::~logger()

void __thiscall _logger(logger *this)

{
  _logger(this + *(int *)(*(int *)this + -0xc));
  return;
}



// ll::logger::~logger()

logger * __thiscall _logger(logger *this)

{
  *(undefined ***)this = &PTR__basic_ostream_000273cc;
  *(undefined4 *)(this + 4) = 0x292b8;
  _ios_base((ios_base *)(this + 4));
  operator_delete(this);
  return this;
}



// virtual thunk to ll::logger::~logger()

void __thiscall _logger(logger *this)

{
  _logger(this + *(int *)(*(int *)this + -0xc));
  return;
}



// execute_icc_cmd_delaylong(unsigned char*, unsigned char, unsigned char*) [clone .constprop.0]

uint execute_icc_cmd_delaylong(uchar *param_1,uchar param_2,uchar *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_130;
  undefined local_12c;
  undefined4 local_128;
  byte local_124;
  char local_120;
  byte local_11f;
  int local_1c;
  
  local_130 = 0x880;
  local_12c = 1;
  local_128 = 0xc000;
  local_1c = __stack_chk_guard;
  local_124 = 0x10;
  ioctl(fd,0xb,1);
  local_12c = SUB41(param_1,0);
  write(fd,&local_130,5);
  uVar2 = read(fd,&local_120,1);
  if (((uVar2 & 0xff) != 0) && (local_120 == local_130._1_1_)) {
    usleep(30000);
    __printf_chk(1,"\n             ");
    ioctl(fd,0xb,2);
    write(fd,cmdbuf,(size_t)param_1);
    uVar2 = read(fd,&local_120,2);
    if (((uVar2 & 0xff) != 0) && (local_120 == 'a')) {
      usleep((__useconds_t)&DAT_000186a0);
      __printf_chk(1,"\n            ");
      ioctl(fd,0xb,(uint)local_11f + 3);
      local_124 = local_11f;
      write(fd,&local_128,5);
      bVar1 = __read_chk(fd,&local_120,(uint)local_11f + 3,0x100);
      uVar2 = (uint)bVar1;
      if (bVar1 != 0) {
        usleep(10000);
        __memcpy_chk(backbuf,&local_120,uVar2,0x100);
        goto LAB_00013762;
      }
    }
  }
  uVar2 = 0;
LAB_00013762:
  if (local_1c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// SHA1Transform(unsigned long*, unsigned char*)

void SHA1Transform(ulong *param_1,uchar *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_68 [7];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar18 = (uint *)param_2;
  puVar23 = local_68;
  do {
    puVar19 = puVar18 + 4;
    uVar3 = puVar18[1];
    uVar8 = puVar18[2];
    uVar11 = puVar18[3];
    *puVar23 = *puVar18;
    puVar23[1] = uVar3;
    puVar23[2] = uVar8;
    puVar23[3] = uVar11;
    puVar18 = puVar19;
    puVar23 = puVar23 + 4;
  } while (puVar19 != (uint *)(param_2 + 0x40));
  uVar4 = param_1[1];
  uVar12 = param_1[3];
  uVar20 = *param_1;
  uVar9 = param_1[2];
  uVar3 = uVar4 >> 2 | uVar4 << 0x1e;
  uVar21 = local_68[1] << 0x18 | (local_68[1] >> 8 & 0xff) << 0x10 |
           (local_68[1] >> 0x10 & 0xff) << 8 | local_68[1] >> 0x18;
  uVar27 = local_68[0] << 0x18 | (local_68[0] >> 8 & 0xff) << 0x10 |
           (local_68[0] >> 0x10 & 0xff) << 8 | local_68[0] >> 0x18;
  uVar8 = uVar20 >> 2 | uVar20 << 0x1e;
  uVar24 = ((uVar12 ^ uVar9) & uVar4 ^ uVar12) +
           param_1[4] + 0x5a827999 + (uVar20 >> 0x1b | uVar20 << 5) + uVar27;
  uVar29 = ((uVar3 ^ uVar9) & uVar20 ^ uVar9) + uVar12 + 0x5a827999 + uVar21 +
           (uVar24 >> 0x1b | uVar24 * 0x20);
  uVar11 = uVar24 >> 2 | uVar24 * 0x40000000;
  uVar26 = local_68[2] << 0x18 | (local_68[2] >> 8 & 0xff) << 0x10 |
           (local_68[2] >> 0x10 & 0xff) << 8 | local_68[2] >> 0x18;
  uVar5 = local_68[3] << 0x18 | (local_68[3] >> 8 & 0xff) << 0x10 |
          (local_68[3] >> 0x10 & 0xff) << 8 | local_68[3] >> 0x18;
  uVar22 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar24 = uVar9 + 0x5a827999 + uVar26 + (uVar24 & (uVar8 ^ uVar3) ^ uVar3) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar13 = local_68[4] << 0x18 | (local_68[4] >> 8 & 0xff) << 0x10 |
           (local_68[4] >> 0x10 & 0xff) << 8 | local_68[4] >> 0x18;
  uVar14 = local_68[5] << 0x18 | (local_68[5] >> 8 & 0xff) << 0x10 |
           (local_68[5] >> 0x10 & 0xff) << 8 | local_68[5] >> 0x18;
  uVar29 = ((uVar11 ^ uVar8) & uVar29 ^ uVar8) + uVar5 + uVar3 + 0x5a827999 +
           (uVar24 >> 0x1b | uVar24 * 0x20);
  uVar3 = uVar24 >> 2 | uVar24 * 0x40000000;
  uVar15 = local_68[6] << 0x18 | (local_68[6] >> 8 & 0xff) << 0x10 |
           (local_68[6] >> 0x10 & 0xff) << 8 | local_68[6] >> 0x18;
  uVar30 = uVar8 + 0x5a827999 + uVar13 + ((uVar22 ^ uVar11) & uVar24 ^ uVar11) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar8 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar16 = local_4c << 0x18 | (local_4c >> 8 & 0xff) << 0x10 | (local_4c >> 0x10 & 0xff) << 8 |
           local_4c >> 0x18;
  uVar24 = uVar30 >> 2 | uVar30 * 0x40000000;
  uVar29 = ((uVar3 ^ uVar22) & uVar29 ^ uVar22) + uVar11 + uVar14 + 0x5a827999 +
           (uVar30 >> 0x1b | uVar30 * 0x20);
  uVar22 = ((uVar8 ^ uVar3) & uVar30 ^ uVar3) + uVar15 + 0x5a827999 + uVar22 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar11 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar6 = local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
          local_48 >> 0x18;
  uVar28 = uVar16 + 0x5a827999 + uVar3 + ((uVar24 ^ uVar8) & uVar29 ^ uVar8) +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar3 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar30 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
           local_44 >> 0x18;
  uVar17 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
           local_40 >> 0x18;
  uVar29 = ((uVar11 ^ uVar24) & uVar22 ^ uVar24) + uVar8 + uVar6 + 0x5a827999 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar8 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar24 = ((uVar3 ^ uVar11) & uVar28 ^ uVar11) + uVar30 + 0x5a827999 + uVar24 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar22 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar28 = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
           local_3c >> 0x18;
  uVar29 = uVar17 + 0x5a827999 + uVar11 + ((uVar8 ^ uVar3) & uVar29 ^ uVar3) +
           (uVar24 >> 0x1b | uVar24 * 0x20);
  uVar10 = local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18;
  uVar11 = uVar24 >> 2 | uVar24 * 0x40000000;
  uVar24 = ((uVar22 ^ uVar8) & uVar24 ^ uVar8) + uVar28 + 0x5a827999 + uVar3 +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar3 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar7 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  uVar1 = local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
          local_30 >> 0x18;
  uVar25 = ((uVar11 ^ uVar22) & uVar29 ^ uVar22) + uVar10 + 0x5a827999 + uVar8 +
           (uVar24 >> 0x1b | uVar24 * 0x20);
  uVar8 = uVar24 >> 2 | uVar24 * 0x40000000;
  uVar2 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  uVar29 = uVar7 + 0x5a827999 + uVar22 + ((uVar3 ^ uVar11) & uVar24 ^ uVar11) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar22 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar24 = uVar26 ^ uVar27 ^ uVar6 ^ uVar7;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar27 = uVar1 + 0x5a827999 + uVar11 + ((uVar8 ^ uVar3) & uVar25 ^ uVar3) +
           (uVar29 >> 0x1b | uVar29 * 0x20);
  uVar11 = uVar29 >> 2 | uVar29 * 0x40000000;
  uVar21 = uVar5 ^ uVar21 ^ uVar30 ^ uVar1;
  uVar31 = uVar13 ^ uVar26 ^ uVar17 ^ uVar2;
  uVar21 = uVar21 >> 0x1f | uVar21 << 1;
  uVar25 = uVar2 + 0x5a827999 + uVar3 + ((uVar22 ^ uVar8) & uVar29 ^ uVar8) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar3 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar26 = uVar8 + uVar24 + 0x5a827999 + ((uVar11 ^ uVar22) & uVar27 ^ uVar22) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar27 = uVar15 ^ uVar13 ^ uVar10 ^ uVar21;
  uVar13 = uVar14 ^ uVar5 ^ uVar28 ^ uVar24;
  uVar5 = uVar31 >> 0x1f | uVar31 << 1;
  uVar29 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar25 = uVar21 + 0x5a827999 + uVar22 + ((uVar3 ^ uVar11) & uVar25 ^ uVar11) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar22 = uVar13 >> 0x1f | uVar13 << 1;
  uVar31 = uVar5 + 0x5a827999 + uVar11 + ((uVar8 ^ uVar3) & uVar26 ^ uVar3) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar13 = uVar27 >> 0x1f | uVar27 << 1;
  uVar27 = uVar6 ^ uVar15 ^ uVar1 ^ uVar22;
  uVar25 = uVar22 + 0x5a827999 + uVar3 + ((uVar29 ^ uVar8) & uVar25 ^ uVar8) +
           (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar3 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar26 = uVar30 ^ uVar16 ^ uVar2 ^ uVar13;
  uVar15 = uVar7 ^ uVar16 ^ uVar14 ^ uVar5;
  uVar14 = uVar27 >> 0x1f | uVar27 << 1;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar31 = uVar13 + 0x6ed9eba1 + uVar8 + (uVar11 ^ uVar29 ^ uVar31) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar16 = uVar26 >> 0x1f | uVar26 << 1;
  uVar27 = uVar17 ^ uVar6 ^ uVar24 ^ uVar15;
  uVar26 = uVar29 + uVar15 + 0x6ed9eba1 + (uVar3 ^ uVar11 ^ uVar25) +
           (uVar31 >> 0x1b | uVar31 * 0x20);
  uVar29 = uVar31 >> 2 | uVar31 * 0x40000000;
  uVar6 = uVar28 ^ uVar30 ^ uVar21 ^ uVar14;
  uVar30 = uVar27 >> 0x1f | uVar27 << 1;
  uVar25 = (uVar8 ^ uVar3 ^ uVar31) + uVar11 + uVar14 + 0x6ed9eba1 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar17 = uVar10 ^ uVar17 ^ uVar5 ^ uVar16;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar26 = uVar3 + uVar16 + 0x6ed9eba1 + (uVar29 ^ uVar8 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar3 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar28 = uVar7 ^ uVar28 ^ uVar22 ^ uVar30;
  uVar25 = (uVar11 ^ uVar29 ^ uVar25) + uVar8 + uVar30 + 0x6ed9eba1 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar8 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar10 = uVar1 ^ uVar10 ^ uVar13 ^ uVar6;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar27 = (uVar3 ^ uVar11 ^ uVar26) + uVar29 + uVar6 + 0x6ed9eba1 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar29 = uVar10 >> 0x1f | uVar10 << 1;
  uVar10 = uVar2 ^ uVar7 ^ uVar15 ^ uVar17;
  uVar7 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar26 = (uVar8 ^ uVar3 ^ uVar25) + uVar11 + uVar17 + 0x6ed9eba1 +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar11 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar1 = uVar24 ^ uVar1 ^ uVar14 ^ uVar28;
  uVar25 = (uVar7 ^ uVar8 ^ uVar27) + uVar3 + uVar28 + 0x6ed9eba1 + (uVar26 >> 0x1b | uVar26 * 0x20)
  ;
  uVar3 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = uVar8 + uVar29 + 0x6ed9eba1 + (uVar11 ^ uVar7 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar2 = uVar21 ^ uVar2 ^ uVar16 ^ uVar29;
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar26 = uVar10 + 0x6ed9eba1 + uVar7 + (uVar3 ^ uVar11 ^ uVar25) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar7 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar24 = uVar5 ^ uVar24 ^ uVar30 ^ uVar10;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar21 = uVar21 ^ uVar22 ^ uVar6 ^ uVar1;
  uVar25 = uVar11 + uVar1 + 0x6ed9eba1 + (uVar8 ^ uVar3 ^ uVar27) + (uVar26 >> 0x1b | uVar26 * 0x20)
  ;
  uVar5 = uVar5 ^ uVar13 ^ uVar17 ^ uVar2;
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar26 = uVar3 + uVar2 + 0x6ed9eba1 + (uVar7 ^ uVar8 ^ uVar26) + (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar3 = uVar21 >> 0x1f | uVar21 << 1;
  uVar21 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar22 = uVar22 ^ uVar15 ^ uVar28 ^ uVar24;
  uVar25 = uVar8 + uVar24 + 0x6ed9eba1 + (uVar11 ^ uVar7 ^ uVar25) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar8 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar27 = uVar7 + uVar3 + 0x6ed9eba1 + (uVar21 ^ uVar11 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar7 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar13 = uVar13 ^ uVar14 ^ uVar29 ^ uVar3;
  uVar15 = uVar15 ^ uVar16 ^ uVar10 ^ uVar5;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar26 = uVar11 + uVar5 + 0x6ed9eba1 + (uVar8 ^ uVar21 ^ uVar25) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar11 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar14 = uVar30 ^ uVar14 ^ uVar1 ^ uVar22;
  uVar25 = uVar21 + uVar22 + 0x6ed9eba1 + (uVar7 ^ uVar8 ^ uVar27) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar21 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar16 = uVar6 ^ uVar16 ^ uVar2 ^ uVar13;
  uVar26 = uVar8 + uVar13 + 0x6ed9eba1 + (uVar11 ^ uVar7 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar7 + uVar15 + 0x6ed9eba1 + (uVar21 ^ uVar11 ^ uVar25) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar7 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar30 = uVar17 ^ uVar30 ^ uVar24 ^ uVar15;
  uVar30 = uVar30 >> 0x1f | uVar30 << 1;
  uVar26 = uVar11 + uVar14 + 0x6ed9eba1 + (uVar8 ^ uVar21 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar6 = uVar28 ^ uVar6 ^ uVar3 ^ uVar14;
  uVar25 = (uVar7 ^ uVar8 ^ uVar25) + uVar21 + uVar16 + 0x6ed9eba1 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar21 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar17 = uVar29 ^ uVar17 ^ uVar5 ^ uVar16;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar28 = uVar10 ^ uVar28 ^ uVar22 ^ uVar30;
  uVar26 = uVar8 + uVar30 + 0x8f1bbcdc + ((uVar26 | uVar11) & uVar7 | uVar26 & uVar11) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar8 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar27 = ((uVar25 | uVar21) & uVar11 | uVar25 & uVar21) + uVar7 + uVar6 + 0x8f1bbcdc +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar7 = uVar1 ^ uVar29 ^ uVar13 ^ uVar6;
  uVar29 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar10 = uVar2 ^ uVar10 ^ uVar15 ^ uVar17;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar25 = uVar11 + uVar17 + 0x8f1bbcdc + ((uVar26 | uVar8) & uVar21 | uVar26 & uVar8) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar11 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar26 = uVar21 + uVar28 + 0x8f1bbcdc + ((uVar27 | uVar29) & uVar8 | uVar27 & uVar29) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar21 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar1 = uVar24 ^ uVar1 ^ uVar14 ^ uVar28;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar25 = ((uVar25 | uVar11) & uVar29 | uVar25 & uVar11) + uVar7 + 0x8f1bbcdc + uVar8 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar8 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar2 = uVar3 ^ uVar2 ^ uVar16 ^ uVar7;
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  uVar27 = ((uVar26 | uVar21) & uVar11 | uVar26 & uVar21) + uVar29 + uVar10 + 0x8f1bbcdc +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar29 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar26 = uVar5 ^ uVar24 ^ uVar30 ^ uVar10;
  uVar25 = uVar11 + uVar1 + 0x8f1bbcdc + ((uVar25 | uVar8) & uVar21 | uVar25 & uVar8) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar11 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar24 = uVar22 ^ uVar3 ^ uVar6 ^ uVar1;
  uVar3 = uVar26 >> 0x1f | uVar26 << 1;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar5 = uVar13 ^ uVar5 ^ uVar17 ^ uVar2;
  uVar26 = ((uVar27 | uVar29) & uVar8 | uVar27 & uVar29) + uVar21 + uVar2 + 0x8f1bbcdc +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar21 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar22 = uVar15 ^ uVar22 ^ uVar28 ^ uVar3;
  uVar25 = ((uVar25 | uVar11) & uVar29 | uVar25 & uVar11) + uVar8 + uVar3 + 0x8f1bbcdc +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar8 = uVar22 >> 0x1f | uVar22 << 1;
  uVar22 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar26 = ((uVar26 | uVar21) & uVar11 | uVar26 & uVar21) + uVar29 + uVar24 + 0x8f1bbcdc +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar29 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar13 = uVar14 ^ uVar13 ^ uVar7 ^ uVar24;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar15 = uVar16 ^ uVar15 ^ uVar10 ^ uVar5;
  uVar25 = ((uVar25 | uVar22) & uVar21 | uVar25 & uVar22) + uVar11 + uVar5 + 0x8f1bbcdc +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar11 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = uVar15 >> 0x1f | uVar15 << 1;
  uVar26 = uVar21 + uVar8 + 0x8f1bbcdc + ((uVar26 | uVar29) & uVar22 | uVar26 & uVar29) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar21 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar14 = uVar30 ^ uVar14 ^ uVar1 ^ uVar8;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar25 = ((uVar25 | uVar11) & uVar29 | uVar25 & uVar11) + uVar22 + uVar13 + 0x8f1bbcdc +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar22 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar16 = uVar6 ^ uVar16 ^ uVar2 ^ uVar13;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar31 = uVar17 ^ uVar30 ^ uVar3 ^ uVar15;
  uVar26 = uVar29 + uVar15 + 0x8f1bbcdc + ((uVar26 | uVar21) & uVar11 | uVar26 & uVar21) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar29 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar30 = uVar28 ^ uVar6 ^ uVar24 ^ uVar14;
  uVar27 = uVar14 + 0x8f1bbcdc + uVar11 + ((uVar25 | uVar22) & uVar21 | uVar25 & uVar22) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar11 = uVar30 >> 0x1f | uVar30 << 1;
  uVar30 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar6 = uVar31 >> 0x1f | uVar31 << 1;
  uVar17 = uVar7 ^ uVar17 ^ uVar5 ^ uVar16;
  uVar25 = uVar21 + uVar16 + 0x8f1bbcdc + ((uVar26 | uVar29) & uVar22 | uVar26 & uVar29) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar21 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar27 = uVar6 + 0x8f1bbcdc + uVar22 + ((uVar27 | uVar30) & uVar29 | uVar27 & uVar30) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar22 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar28 = uVar10 ^ uVar28 ^ uVar8 ^ uVar6;
  uVar28 = uVar28 >> 0x1f | uVar28 << 1;
  uVar26 = uVar1 ^ uVar7 ^ uVar13 ^ uVar11;
  uVar25 = ((uVar25 | uVar21) & uVar30 | uVar25 & uVar21) + uVar29 + uVar11 + 0x8f1bbcdc +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar29 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar7 = uVar2 ^ uVar10 ^ uVar15 ^ uVar17;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar10 = uVar26 >> 0x1f | uVar26 << 1;
  uVar1 = uVar3 ^ uVar1 ^ uVar14 ^ uVar28;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = uVar24 ^ uVar2 ^ uVar16 ^ uVar10;
  uVar26 = uVar17 + 0x8f1bbcdc + uVar30 + ((uVar27 | uVar22) & uVar21 | uVar27 & uVar22) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar30 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar27 = uVar5 ^ uVar3 ^ uVar6 ^ uVar7;
  uVar25 = uVar28 + 0x8f1bbcdc + uVar21 + ((uVar25 | uVar29) & uVar22 | uVar25 & uVar29) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar3 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar21 = uVar2 >> 0x1f | uVar2 << 1;
  uVar2 = uVar27 >> 0x1f | uVar27 << 1;
  uVar26 = uVar10 + 0xca62c1d6 + uVar22 + (uVar30 ^ uVar29 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar22 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar24 = uVar8 ^ uVar24 ^ uVar11 ^ uVar1;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar25 = uVar7 + 0xca62c1d6 + uVar29 + (uVar3 ^ uVar30 ^ uVar25) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar31 = uVar13 ^ uVar5 ^ uVar17 ^ uVar21;
  uVar5 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar30 = uVar30 + uVar1 + 0xca62c1d6 + (uVar22 ^ uVar3 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar29 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar27 = uVar15 ^ uVar8 ^ uVar28 ^ uVar2;
  uVar26 = uVar3 + uVar21 + 0xca62c1d6 + (uVar5 ^ uVar22 ^ uVar25) +
           (uVar30 >> 0x1b | uVar30 * 0x20);
  uVar13 = uVar14 ^ uVar13 ^ uVar10 ^ uVar24;
  uVar3 = uVar30 >> 2 | uVar30 * 0x40000000;
  uVar8 = uVar31 >> 0x1f | uVar31 << 1;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar25 = uVar16 ^ uVar15 ^ uVar7 ^ uVar8;
  uVar30 = uVar22 + uVar2 + 0xca62c1d6 + (uVar29 ^ uVar5 ^ uVar30) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar22 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar15 = uVar27 >> 0x1f | uVar27 << 1;
  uVar26 = uVar5 + uVar24 + 0xca62c1d6 + (uVar3 ^ uVar29 ^ uVar26) +
           (uVar30 >> 0x1b | uVar30 * 0x20);
  uVar5 = uVar30 >> 2 | uVar30 * 0x40000000;
  uVar27 = uVar29 + uVar8 + 0xca62c1d6 + (uVar22 ^ uVar3 ^ uVar30) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar29 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar30 = uVar25 >> 0x1f | uVar25 << 1;
  uVar25 = uVar3 + uVar15 + 0xca62c1d6 + (uVar5 ^ uVar22 ^ uVar26) +
           (uVar27 >> 0x1b | uVar27 * 0x20);
  uVar14 = uVar6 ^ uVar14 ^ uVar1 ^ uVar15;
  uVar3 = uVar27 >> 2 | uVar27 * 0x40000000;
  uVar16 = uVar11 ^ uVar16 ^ uVar21 ^ uVar13;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar26 = uVar22 + uVar13 + 0xca62c1d6 + (uVar29 ^ uVar5 ^ uVar27) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar22 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar25 = (uVar3 ^ uVar29 ^ uVar25) + uVar5 + uVar30 + 0xca62c1d6 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar5 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar27 = uVar28 ^ uVar11 ^ uVar24 ^ uVar14;
  uVar11 = uVar17 ^ uVar6 ^ uVar2 ^ uVar30;
  uVar26 = (uVar16 ^ uVar3 ^ uVar26) + uVar29 + uVar14 + 0xca62c1d6 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar29 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar6 = uVar10 ^ uVar17 ^ uVar8 ^ uVar22;
  uVar8 = uVar27 >> 0x1f | uVar27 << 1;
  uVar25 = (uVar5 ^ uVar16 ^ uVar25) + uVar3 + uVar22 + 0xca62c1d6 +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar3 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar28 = uVar7 ^ uVar28 ^ uVar15 ^ uVar11;
  uVar15 = uVar11 + 0xca62c1d6 + uVar16 + (uVar29 ^ uVar5 ^ uVar26) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar17 = uVar13 ^ uVar1 ^ uVar10 ^ uVar8;
  uVar13 = uVar28 >> 0x1f | uVar28 << 1;
  uVar16 = uVar8 + 0xca62c1d6 + uVar5 + (uVar3 ^ uVar29 ^ uVar25) + (uVar15 >> 0x1b | uVar15 * 0x20)
  ;
  uVar8 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar30 = uVar21 ^ uVar7 ^ uVar30 ^ uVar6;
  uVar5 = uVar17 >> 0x1f | uVar17 << 1;
  uVar15 = (uVar11 ^ uVar3 ^ uVar15) + uVar29 + uVar6 + 0xca62c1d6 +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar29 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar14 = uVar13 ^ uVar2 ^ uVar1 ^ uVar14;
  uVar24 = uVar5 ^ uVar24 ^ uVar21 ^ uVar22;
  uVar21 = uVar3 + uVar13 + 0xca62c1d6 + (uVar8 ^ uVar11 ^ uVar16) +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar3 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar22 = (uVar29 ^ uVar8 ^ uVar15) + uVar11 + uVar5 + 0xca62c1d6 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar11 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar21 = (uVar3 ^ uVar29 ^ uVar21) + uVar8 + (uVar30 >> 0x1f | uVar30 << 1) + 0xca62c1d6 +
           (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar8 = uVar22 >> 2 | uVar22 * 0x40000000;
  uVar22 = (uVar11 ^ uVar3 ^ uVar22) + uVar29 + (uVar14 >> 0x1f | uVar14 << 1) + 0xca62c1d6 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  param_1[3] = uVar12 + uVar8;
  param_1[2] = uVar9 + (uVar21 >> 2 | uVar21 * 0x40000000);
  *param_1 = uVar20 + 0xca62c1d6 + (uVar24 >> 0x1f | uVar24 << 1) + uVar3 +
             (uVar8 ^ uVar11 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20);
  param_1[4] = uVar11 + param_1[4];
  param_1[1] = uVar4 + uVar22;
  memset(local_68,0,0x40);
  return;
}



// SHA1Reset(SHA1_CTX*)

void SHA1Reset(SHA1_CTX *param_1)

{
  *(undefined4 *)param_1 = 0x67452301;
  *(undefined4 *)(param_1 + 4) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x10325476;
  *(undefined4 *)(param_1 + 8) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0xc3d2e1f0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// SHA1Input(SHA1_CTX*, unsigned char*, unsigned long)

void SHA1Input(SHA1_CTX *param_1,uchar *param_2,ulong param_3)

{
  size_t sVar1;
  size_t sVar2;
  SHA1_CTX *__dest;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_3 * 8;
  uVar3 = uVar6 + *(int *)(param_1 + 0x14);
  uVar7 = (uint)(*(int *)(param_1 + 0x14) << 0x17) >> 0x1a;
  iVar4 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar3;
  if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
    iVar4 = iVar4 + 1;
  }
  *(ulong *)(param_1 + 0x18) = iVar4 + (param_3 >> 0x1d);
  if (param_3 + uVar7 < 0x40) {
    sVar5 = 0;
    __dest = param_1 + uVar7 + 0x1c;
  }
  else {
    __dest = param_1 + 0x1c;
    memcpy(param_1 + uVar7 + 0x1c,param_2,0x40 - uVar7);
    SHA1Transform((ulong *)param_1,(uchar *)__dest);
    sVar2 = 0x40 - uVar7;
    sVar1 = -uVar7;
    while (sVar5 = sVar2, sVar1 + 0x7f < param_3) {
      SHA1Transform((ulong *)param_1,param_2 + sVar5);
      sVar2 = sVar5 + 0x40;
      sVar1 = sVar5;
    }
  }
  memcpy(__dest,param_2 + sVar5,param_3 - sVar5);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// SHA1Result(SHA1_CTX*, unsigned char*)

void SHA1Result(SHA1_CTX *param_1,uchar *param_2)

{
  SHA1_CTX *__dest;
  uint uVar1;
  undefined *__src;
  uint *__src_00;
  int iVar2;
  size_t __n;
  int iVar3;
  uint uVar4;
  uint uVar5;
  SHA1_CTX *__s;
  bool bVar6;
  uint local_2c;
  uint local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = iVar3 + 8;
  local_28 = iVar3 << 0x18;
  uVar4 = (uint)(iVar3 << 0x17) >> 0x1a;
  local_2c = CONCAT13((char)iVar2,
                      CONCAT12((char)((uint)iVar2 >> 8),
                               CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18))));
  if (uVar1 < 8) {
    iVar2 = iVar2 + 1;
  }
  if (uVar1 < 8) {
    *(int *)(param_1 + 0x18) = iVar2;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  local_28 = local_28 |
             CONCAT12((char)((uint)iVar3 >> 8),
                      CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18)));
  if (uVar4 == 0x3f) {
    __dest = param_1 + 0x1c;
    param_1[0x5b] = (SHA1_CTX)0x80;
    SHA1Transform((ulong *)param_1,(uchar *)__dest);
    __src = &DAT_00027565;
  }
  else {
    __dest = param_1 + uVar4 + 0x1c;
    __src = &DAT_00027564;
  }
  __s = param_1 + 0x1c;
  memcpy(__dest,__src,(uint)(uVar4 != 0x3f));
  uVar1 = *(uint *)(param_1 + 0x14);
  while ((uVar1 & 0x1f8) != 0x1c0) {
    uVar4 = uVar1 + 8;
    *(uint *)(param_1 + 0x14) = uVar4;
    uVar5 = (uVar1 << 0x17) >> 0x1a;
    uVar1 = uVar4;
    if (uVar4 < 8) {
      uVar1 = *(int *)(param_1 + 0x18) + 1;
    }
    if (uVar4 < 8) {
      *(uint *)(param_1 + 0x18) = uVar1;
    }
    if (uVar5 != 0x3f) {
      __src = &DAT_00027430;
      __dest = param_1 + uVar5 + 0x1c;
    }
    else {
      param_1[0x5b] = (SHA1_CTX)0x0;
      SHA1Transform((ulong *)param_1,(uchar *)__s);
      __src = &DAT_00027431;
      __dest = __s;
    }
    memcpy(__dest,__src,(uint)(uVar5 != 0x3f));
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  uVar4 = uVar1 + 0x40;
  uVar5 = (uVar1 << 0x17) >> 0x1a;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 < 0x40) {
    uVar1 = *(int *)(param_1 + 0x18) + 1;
  }
  if (uVar4 < 0x40) {
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  if (uVar5 + 8 < 0x40) {
    __src_00 = &local_2c;
    __n = 8;
    __dest = param_1 + uVar5 + 0x1c;
  }
  else {
    memcpy(param_1 + uVar5 + 0x1c,&local_2c,0x40 - uVar5);
    SHA1Transform((ulong *)param_1,(uchar *)__s);
    __src_00 = (uint *)((int)&local_2c + (0x40 - uVar5));
    __n = uVar5 - 0x38;
    __dest = __s;
  }
  uVar1 = 0;
  memcpy(__dest,__src_00,__n);
  do {
    param_2[uVar1] = (uchar)(*(uint *)(param_1 + (uVar1 & 0xfffffffc)) >> ((~uVar1 & 3) << 3));
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x14);
  memset(__s,0,0x40);
  memset(param_1,0,0x14);
  local_2c = 0;
  bVar6 = local_24 != __stack_chk_guard;
  param_1[0x14] = (SHA1_CTX)0x0;
  param_1[0x15] = (SHA1_CTX)0x0;
  param_1[0x16] = (SHA1_CTX)0x0;
  param_1[0x17] = (SHA1_CTX)0x0;
  param_1[0x18] = (SHA1_CTX)0x0;
  param_1[0x19] = (SHA1_CTX)0x0;
  param_1[0x1a] = (SHA1_CTX)0x0;
  param_1[0x1b] = (SHA1_CTX)0x0;
  local_28 = 0;
  if (bVar6) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// SHA1_Perform(unsigned char*, unsigned long, unsigned char*)

void SHA1_Perform(uchar *param_1,ulong param_2,uchar *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c [16];
  int local_2c;
  
  local_74 = param_2 << 3;
  local_70 = param_2 >> 0x1d;
  local_2c = __stack_chk_guard;
  local_88 = 0x67452301;
  local_84 = 0xefcdab89;
  local_80 = 0x98badcfe;
  local_7c = 0x10325476;
  local_78 = 0xc3d2e1f0;
  if (param_2 < 0x40) {
    iVar2 = 0;
  }
  else {
    puVar5 = (undefined4 *)param_1;
    puVar7 = local_6c;
    do {
      puVar6 = puVar5 + 4;
      uVar1 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar1;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar5 = puVar6;
      puVar7 = puVar7 + 4;
    } while (puVar6 != (undefined4 *)(param_1 + 0x40));
    SHA1Transform(&local_88,(uchar *)local_6c);
    if (param_2 < 0x80) {
      iVar2 = 0x40;
    }
    else {
      do {
        puVar5 = puVar6 + 0x10;
        SHA1Transform(&local_88,(uchar *)puVar6);
        puVar6 = puVar5;
      } while (puVar5 != (undefined4 *)(param_1 + (param_2 - 0x80 & 0xffffffc0) + 0x80));
      iVar2 = ((param_2 - 0x80 >> 6) + 2) * 0x40;
    }
  }
  memcpy(local_6c,param_1 + iVar2,param_2 - iVar2);
  SHA1Result((SHA1_CTX *)&local_88,param_3);
  if (local_2c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// cal_file_SHA1(char const*)

FILE * cal_file_SHA1(char *param_1)

{
  FILE *__stream;
  size_t sVar1;
  int iVar2;
  undefined4 *__src;
  uint uVar3;
  size_t __n;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  uchar *puVar7;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  ulong local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  uchar auStack92 [20];
  uchar auStack72 [44];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    puts("Error open file to read. ");
  }
  else {
    local_6c = 0x10325476;
    local_78 = 0x67452301;
    local_74 = 0xefcdab89;
    local_70 = 0x98badcfe;
    local_68 = 0xc3d2e1f0;
    local_60 = 0;
    local_64 = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    while (iVar2 = feof(__stream), iVar2 == 0) {
      sVar1 = fread(&local_88,1,8,__stream);
      if (0 < (int)sVar1) {
        uVar3 = sVar1 * 8;
        uVar4 = uVar3 + local_64;
        uVar6 = (local_64 << 0x17) >> 0x1a;
        if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
          local_60 = local_60 + 1;
        }
        local_60 = local_60 + (sVar1 >> 0x1d);
        local_64 = uVar4;
        if (sVar1 + uVar6 < 0x40) {
          __n = 0;
          __src = &local_88;
        }
        else {
          iVar2 = -uVar6;
          __n = iVar2 + 0x40;
          memcpy(auStack92 + uVar6,&local_88,__n);
          SHA1Transform(&local_78,auStack92);
          if (0x7f - uVar6 < sVar1) {
            puVar7 = auStack72 + iVar2;
            do {
              sVar5 = __n;
              SHA1Transform(&local_78,puVar7);
              puVar7 = puVar7 + 0x40;
              __n = sVar5 + 0x40;
            } while (sVar5 + 0x7f < sVar1);
            uVar6 = 0;
            __src = (undefined4 *)(auStack72 + sVar5);
          }
          else {
            uVar6 = 0;
            __src = (undefined4 *)(auStack72 + iVar2);
          }
        }
        memcpy(auStack92 + uVar6,__src,sVar1 - __n);
      }
    }
    SHA1Result((SHA1_CTX *)&local_78,Message_Digest);
    __stream = (FILE *)fclose(__stream);
  }
  if (local_1c == __stack_chk_guard) {
    return __stream;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// lkticc_init()

undefined4 lkticc_init(void)

{
  fd = open("/dev/serio",2);
  if (-1 < fd) {
    ioctl(fd,0,0);
    ioctl(fd,1,0);
    usleep(500000);
    ioctl(fd,1,1);
    return 0;
  }
  return 1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// lkticc_close()

void lkticc_close(void)

{
  close(fd);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// lkticc_reset_only()

undefined4 lkticc_reset_only(void)

{
  ioctl(fd,0,0);
  ioctl(fd,1,0);
  sleep(1);
  ioctl(fd,1,1);
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Reset_Without_Saving()

void Reset_Without_Saving(void)

{
  undefined auStack120 [100];
  int local_14;
  
  local_14 = __stack_chk_guard;
  ioctl(fd,0xc,0x11);
  read(fd,auStack120,0x11);
  if (local_14 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// read_dipsw_Y2_16()

void read_dipsw_Y2_16(void)

{
  ioctl(fd,0xf,0);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Unknown calling convention yet parameter storage is locked
// get_reset_answer()

undefined4 get_reset_answer(void)

{
  undefined uVar1;
  ssize_t sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack100;
  uint local_60;
  uint local_58;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  uint local_48;
  undefined local_44 [16];
  undefined local_34;
  uint local_30;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined local_20;
  int local_1c;
  
  iVar5 = 0;
  local_1c = __stack_chk_guard;
  do {
    ioctl(fd,0xc,0x11);
    sVar2 = read(fd,&local_70,0x11);
    if (0x10 < sVar2) {
      uVar4 = local_70 & 0xff;
      bVar7 = local_70._1_1_ == 'm';
      if (bVar7) {
        uVar4 = uVar4 - 0x3b;
      }
      if (bVar7) {
        uVar4 = count_leading_zeroes(uVar4);
      }
      else {
        uVar4 = 0;
      }
      if (bVar7) {
        uVar4 = uVar4 >> 5;
      }
      if (local_70._2_1_ != '\0') {
        uVar4 = 0;
      }
      if (local_70._3_1_ != '\0') {
        uVar4 = 0;
      }
      if ((char)local_6c != 'L') {
        uVar4 = 0;
      }
      if (local_6c._1_1_ != 'K') {
        uVar4 = 0;
      }
      if (local_6c._2_1_ != 'Q') {
        uVar4 = 0;
      }
      if (((local_6c._3_1_ == '$') && ((char)local_68 == 'B')) && (uVar4 == 1)) {
        uVar1 = (char)local_60;
        if (iVar5 % 3 != 1) {
          uVar1 = local_34;
          if (iVar5 % 3 == 2) {
            local_30 = local_70;
            uStack44 = local_6c;
            uStack40 = local_68;
            uStack36 = uStack100;
            local_20 = (char)local_60;
          }
          else {
            local_58 = local_70;
            uStack84 = local_6c;
            uStack80 = local_68;
            uStack76 = uStack100;
            local_48 = local_48 & 0xffffff00 | local_60 & 0xff;
          }
        }
        local_34 = uVar1;
        if (((2 < iVar5) && (iVar3 = memcmp(&local_58,local_44,0x11), iVar3 == 0)) &&
           (iVar3 = memcmp(&local_30,local_44,0x11), iVar3 == 0)) {
          uVar6 = 0x11;
          lkt_reset_answer._0_4_ = local_58;
          lkt_reset_answer._4_4_ = uStack84;
          lkt_reset_answer._8_4_ = uStack80;
          lkt_reset_answer._12_4_ = uStack76;
          lkt_reset_answer[16] = (undefined)local_48;
          goto LAB_00015178;
        }
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0x14) {
      uVar6 = 0;
LAB_00015178:
      if (local_1c == __stack_chk_guard) {
        return uVar6;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
  } while( true );
}



// execute_icc_cmd(unsigned char*, unsigned char, unsigned char*)

uint execute_icc_cmd(uchar *param_1,uchar param_2,uchar *param_3)

{
  byte bVar1;
  uint __n;
  undefined4 local_38;
  uchar local_34;
  undefined4 local_2c;
  byte local_28;
  int local_24;
  
  local_38 = 0x880;
  local_2c = 0xc000;
  local_34 = 1;
  local_24 = __stack_chk_guard;
  local_28 = 0x10;
  ioctl(fd,0xb,1);
  local_34 = param_2;
  write(fd,&local_38,5);
  __n = read(fd,cmdbuf,1);
  if (((__n & 0xff) != 0) && (cmdbuf[0] == local_38._1_1_)) {
    usleep((__useconds_t)&DAT_000186a0);
    ioctl(fd,0xb,2);
    write(fd,param_1,(uint)param_2);
    __n = read(fd,cmdbuf,2);
    bVar1 = cmdbuf[1];
    if (((__n & 0xff) != 0) && (cmdbuf[0] == 'a')) {
      __n = (uint)cmdbuf[1];
      usleep(200000);
      ioctl(fd,0xb,__n + 3);
      local_28 = bVar1;
      write(fd,&local_2c,5);
      bVar1 = __read_chk(fd,cmdbuf,__n + 3,0x100);
      __n = (uint)bVar1;
      if (bVar1 != 0) {
        memcpy(param_3,cmdbuf,__n);
        goto LAB_0001520a;
      }
    }
  }
  __n = 0;
LAB_0001520a:
  if (local_24 == __stack_chk_guard) {
    return __n;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Unknown calling convention yet parameter storage is locked
// get_random_for_comm()

int get_random_for_comm(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint auStack568 [2];
  uchar uStack560;
  byte local_22f;
  byte local_22e;
  byte local_22d;
  uint local_22c;
  uint local_228;
  uint local_224;
  byte local_220;
  byte local_21f;
  byte abStack300 [256];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  wbuf[0] = 0x55;
  iVar3 = execute_icc_cmd(wbuf,'\x01',&uStack560);
  if (0 < iVar3) {
    uVar8 = local_22c ^ local_228 ^ local_224;
    uVar8 = (uVar8 << 8 ^ uVar8 ^ uVar8 << 0x10) >> 0x18 ^ uVar8 & 0xff ^ 0x5b ^ (uint)local_22f ^
            (uint)local_22e ^ (uint)local_22d ^ (uint)local_220;
    uVar9 = uVar8 & 0xbd;
    if ((int)(uVar8 << 0x19) < 0) {
      uVar9 = uVar9 | 2;
    }
    if ((uVar8 & 2) == 0) {
      if ((uint)local_21f == uVar9) {
LAB_00015350:
        memcpy(abStack300,&DAT_00027444,0x100);
        local_248 = CONCAT13((undefined)local_22c,CONCAT12(local_22d,CONCAT11(local_22e,local_22f)))
                    ^ 0x7ca10d67;
        local_244 = CONCAT13((undefined)local_228,(int3)(local_22c >> 8)) ^ 0xdd98760b;
        bVar7 = 0;
        local_240 = CONCAT13((undefined)local_224,(int3)(local_228 >> 8)) ^ 0xff29f378;
        local_23c = CONCAT13(local_220,(int3)(local_224 >> 8)) ^ 0x4d56a0bc;
        puVar5 = &local_248;
LAB_000154b8:
        do {
          bVar2 = bVar7 & 3;
          bVar1 = *(byte *)puVar5;
          uVar8 = (uint)bVar1;
          if (bVar2 == 1) {
            *(byte *)puVar5 = bVar1 ^ abStack300[uVar8];
          }
          else {
            if (bVar2 == 0) {
              *(byte *)puVar5 = abStack300[uVar8];
            }
            else {
              if (bVar2 != 2) {
                bVar7 = bVar7 + 1;
                *(byte *)puVar5 = bVar1 + abStack300[uVar8];
                puVar5 = (uint *)((int)puVar5 + 1);
                if (bVar7 == 0x10) break;
                goto LAB_000154b8;
              }
              *(byte *)puVar5 = bVar1 ^ 0x3d ^ abStack300[uVar8];
            }
          }
          bVar7 = bVar7 + 1;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (bVar7 != 0x10);
        uVar8 = 0;
        puVar5 = &local_248;
LAB_000154f6:
        do {
          bVar7 = *(byte *)puVar5;
          uVar4 = (uint)bVar7;
          uVar9 = uVar8 - (uVar8 / 3 + ((uint)((ulonglong)uVar8 * 0xaaaaaaab >> 0x20) & 0xfffffffe))
                  & 0xff;
          if (uVar9 == 0) {
            *(byte *)puVar5 = bVar7 ^ abStack300[uVar4];
          }
          else {
            if (uVar9 != 1) {
              uVar8 = uVar8 + 1 & 0xff;
              *(byte *)puVar5 = bVar7 ^ abStack300[uVar4] + bVar7;
              puVar5 = (uint *)((int)puVar5 + 1);
              if (uVar8 == 0x10) break;
              goto LAB_000154f6;
            }
            *(byte *)puVar5 = abStack300[uVar4];
          }
          uVar8 = uVar8 + 1 & 0xff;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (uVar8 != 0x10);
        puVar5 = &local_248;
        do {
          bVar7 = *(byte *)puVar5;
          uVar8 = ((uint)bVar7 & 1) << 1;
          if ((bVar7 & 2) != 0) {
            uVar8 = uVar8 | 1;
          }
          uVar9 = uVar8 << 1;
          if ((bVar7 & 4) != 0) {
            uVar9 = uVar8 << 1 | 1;
          }
          uVar8 = uVar9 << 1;
          if ((bVar7 & 8) != 0) {
            uVar8 = uVar9 << 1 | 1;
          }
          uVar9 = uVar8 << 1;
          if ((bVar7 & 0x10) != 0) {
            uVar9 = uVar8 << 1 | 1;
          }
          uVar8 = uVar9 << 1;
          if ((bVar7 & 0x20) != 0) {
            uVar8 = uVar9 << 1 | 1;
          }
          uVar9 = uVar8 << 1;
          if ((bVar7 & 0x40) != 0) {
            uVar9 = uVar8 << 1 | 1;
          }
          puVar6 = (uint *)((int)puVar5 + 1);
          *(byte *)puVar5 = (byte)(uVar9 << 1) | bVar7 >> 7;
          puVar5 = puVar6;
        } while (puVar6 != auStack568);
        rand_comm._0_4_ = local_248;
        rand_comm._4_4_ = local_244;
        rand_comm._8_4_ = local_240;
        rand_comm._12_4_ = local_23c;
        goto LAB_00015330;
      }
    }
    else {
      if ((uint)local_21f == (uVar9 | 0x40)) goto LAB_00015350;
    }
  }
  iVar3 = 0;
LAB_00015330:
  if (local_2c == __stack_chk_guard) {
    return iVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// Get_Ready_For_COMM(int)

undefined4 Get_Ready_For_COMM(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int *unaff_r5;
  undefined auStack128 [100];
  int local_1c;
  
  if (0 < param_1) {
    unaff_r4 = 0;
    unaff_r5 = &fd;
  }
  local_1c = __stack_chk_guard;
  if (0 < param_1) {
    do {
      ioctl(*unaff_r5,0xc,0x11);
      read(*unaff_r5,auStack128,0x11);
      usleep(300000);
      iVar1 = get_random_for_comm();
      if (0xf < iVar1) {
        uVar2 = 1;
        goto LAB_00015632;
      }
      unaff_r4 = unaff_r4 + 1;
      usleep(300000);
    } while (unaff_r4 != param_1);
  }
  uVar2 = 0;
LAB_00015632:
  if (local_1c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// Verify_sndata(unsigned char*, int)

undefined4 Verify_sndata(uchar *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uchar auStack400 [2];
  char local_18e;
  byte local_128;
  byte bStack295;
  byte bStack294;
  byte bStack293;
  byte bStack292;
  byte bStack291;
  byte bStack290;
  byte bStack289;
  byte bStack288;
  byte bStack287;
  byte local_11e;
  int local_24;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)param_1;
  bStack290 = (byte)uVar2;
  bStack289 = (byte)((uint)uVar2 >> 8);
  bStack288 = (byte)((uint)uVar2 >> 0x10);
  bStack287 = (byte)((uint)uVar2 >> 0x18);
  bStack294 = (byte)uVar3;
  bStack293 = (byte)((uint)uVar3 >> 8);
  bStack292 = (byte)((uint)uVar3 >> 0x10);
  bStack291 = (byte)((uint)uVar3 >> 0x18);
  uVar4 = CONCAT13(bStack289,CONCAT12(bStack290,(short)((uint)uVar3 >> 0x10))) ^
          CONCAT13(bStack293,CONCAT12(bStack294,CONCAT11((byte)param_2,0xc1))) & 0xffff07ff;
  local_24 = __stack_chk_guard;
  uVar4 = uVar4 ^ (uint)bStack288 ^ 0x5b ^ (uint)bStack287 ^ uVar4 >> 0x18 ^ (uVar4 << 8) >> 0x18 ^
                  uVar4 >> 8;
  local_11e = (byte)uVar4 & 0xbd;
  if ((int)(uVar4 << 0x19) < 0) {
    local_11e = local_11e | 2;
  }
  if ((uVar4 & 2) != 0) {
    local_11e = local_11e | 0x40;
  }
  local_128 = rand_comm[6] ^ rand_comm[0] ^ 0xc1;
  bStack290 = rand_comm[6] ^ bStack290;
  bStack295 = rand_comm[1] ^ (byte)param_2 & 7;
  bStack294 = rand_comm[2] ^ bStack294;
  bStack293 = rand_comm[3] ^ bStack293;
  bStack292 = rand_comm[4] ^ bStack292;
  bStack291 = rand_comm[5] ^ bStack291;
  bStack289 = rand_comm[7] ^ bStack289;
  local_11e = rand_comm[10] ^ local_11e;
  bStack288 = rand_comm[8] ^ bStack288;
  bStack287 = rand_comm[9] ^ bStack287;
  iVar1 = execute_icc_cmd(&local_128,'\v',auStack400);
  if (iVar1 < 5) {
    uVar2 = 0;
  }
  else {
    if (local_18e == -0x56) {
      uVar2 = 8;
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_24 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x000157c8)
// verify_file_SHA1_to_LKT(char*)

int verify_file_SHA1_to_LKT(char *param_1)

{
  int iVar1;
  uint uVar2;
  byte local_f8;
  byte bStack247;
  byte bStack246;
  byte bStack245;
  byte bStack244;
  byte bStack243;
  byte bStack242;
  byte bStack241;
  byte bStack240;
  undefined2 local_ef;
  byte local_ed;
  uchar auStack144 [2];
  char local_8e;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  cal_file_SHA1(param_1);
  bStack247 = Message_Digest[10] ^ Message_Digest[0];
  bStack246 = Message_Digest[11] ^ Message_Digest[1];
  bStack245 = Message_Digest[12] ^ Message_Digest[2];
  bStack244 = Message_Digest[13] ^ Message_Digest[3];
  bStack243 = Message_Digest[14] ^ Message_Digest[4];
  bStack242 = Message_Digest[15] ^ Message_Digest[5];
  bStack241 = Message_Digest[16] ^ Message_Digest[6];
  bStack240 = Message_Digest[17] ^ Message_Digest[7];
  Message_Digest[8] = Message_Digest[18] ^ Message_Digest[8];
  Message_Digest[9] = Message_Digest[19] ^ Message_Digest[9];
  Message_Digest._0_4_ = CONCAT13(bStack244,CONCAT12(bStack245,CONCAT11(bStack246,bStack247)));
  Message_Digest._4_4_ = CONCAT13(bStack240,CONCAT12(bStack241,CONCAT11(bStack242,bStack243)));
  uVar2 = CONCAT13(bStack245,CONCAT12(bStack246,CONCAT11(bStack247,0xc2))) ^
          CONCAT13(bStack241,CONCAT12(bStack242,CONCAT11(bStack243,bStack244)));
  uVar2 = ((uint)bStack240 ^ 0x5b ^ (uint)Message_Digest[8] ^ (uint)Message_Digest[9] ^ uVar2 ^
           uVar2 >> 8 ^ uVar2 >> 0x10) & 0xff ^ uVar2 >> 0x18;
  local_ed = (byte)uVar2 & 0xbd;
  if ((int)(uVar2 << 0x19) < 0) {
    local_ed = local_ed | 2;
  }
  if ((uVar2 & 2) != 0) {
    local_ed = local_ed | 0x40;
  }
  bStack247 = rand_comm[1] ^ bStack247;
  bStack246 = rand_comm[2] ^ bStack246;
  bStack245 = rand_comm[3] ^ bStack245;
  bStack244 = rand_comm[4] ^ bStack244;
  bStack243 = rand_comm[5] ^ bStack243;
  local_f8 = rand_comm[0] ^ 0xc2 ^ rand_comm[6];
  bStack242 = rand_comm[6] ^ bStack242;
  bStack241 = rand_comm[7] ^ bStack241;
  bStack240 = rand_comm[8] ^ bStack240;
  local_ed = local_ed ^ rand_comm[11];
  local_ef = CONCAT11(rand_comm[10] ^ Message_Digest[9],rand_comm[9] ^ Message_Digest[8]);
  iVar1 = execute_icc_cmd(&local_f8,'\f',auStack144);
  if (iVar1 < 5) {
    iVar1 = 0;
  }
  else {
    if (local_8e != -0x56) {
      iVar1 = 0;
    }
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// get_auth_lock()

uint get_auth_lock(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uchar local_e8 [103];
  byte abStack129 [101];
  int local_1c;
  
  local_e8[0] = '3';
  local_1c = __stack_chk_guard;
  iVar1 = execute_icc_cmd(local_e8,'\x01',abStack129 + 1);
  __printf_chk(1,"nr=%d\n",iVar1);
  if (0 < iVar1) {
    pbVar2 = abStack129;
    pbVar4 = pbVar2 + iVar1;
    do {
      pbVar2 = pbVar2 + 1;
      __printf_chk(1,"%02x ",(uint)*pbVar2);
    } while (pbVar2 != pbVar4);
    if (4 < iVar1) {
      uVar3 = (uint)abStack129[3];
      if (abStack129[3] == 0xaa) {
        puts("\nSuccess. ");
        goto LAB_00015a58;
      }
      puts("failed.");
    }
  }
  uVar3 = 0;
LAB_00015a58:
  if (local_1c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



// Get_J_Val(unsigned char*, unsigned char, unsigned char)

undefined4 Get_J_Val(uchar *param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  uchar uStack144;
  byte local_8f;
  byte bStack142;
  byte bStack141;
  byte bStack140;
  byte bStack139;
  byte bStack138;
  byte bStack137;
  byte bStack136;
  byte bStack135;
  byte bStack134;
  byte bStack133;
  byte local_84;
  byte bStack131;
  byte bStack130;
  byte bStack129;
  byte local_80;
  int local_2c;
  
  uVar4 = (uint)param_3 ^ 0x2c ^ (uint)param_2;
  local_ad = (byte)uVar4 & 0xbd;
  local_2c = __stack_chk_guard;
  if ((int)(uVar4 << 0x19) < 0) {
    local_ad = local_ad | 2;
  }
  if ((uVar4 & 2) != 0) {
    local_ad = local_ad | 0x40;
  }
  local_b0 = rand_comm[6] ^ rand_comm[0] ^ 0x77;
  local_af = rand_comm[1] ^ param_2;
  local_ae = rand_comm[2] ^ param_3;
  local_ad = rand_comm[3] ^ local_ad;
  iVar1 = execute_icc_cmd(&local_b0,'\x04',&uStack144);
  if (0x12 < iVar1) {
    local_8f = rand_comm[0] ^ local_8f;
    bStack142 = bStack142 ^ rand_comm[1];
    bStack141 = bStack141 ^ rand_comm[2];
    bStack138 = rand_comm[5] ^ bStack138;
    bStack140 = rand_comm[3] ^ bStack140;
    bStack139 = rand_comm[4] ^ bStack139;
    bStack136 = rand_comm[7] ^ bStack136;
    bStack137 = rand_comm[6] ^ bStack137;
    bStack135 = rand_comm[8] ^ bStack135;
    bStack134 = rand_comm[9] ^ bStack134;
    bStack133 = rand_comm[10] ^ bStack133;
    local_84 = rand_comm[11] ^ local_84;
    bStack131 = rand_comm[12] ^ bStack131;
    bStack129 = bStack129 ^ rand_comm[14];
    bStack130 = rand_comm[13] ^ bStack130;
    uVar4 = CONCAT13(bStack137,CONCAT12(bStack138,CONCAT11(bStack139,bStack140))) ^
            CONCAT13(bStack133,CONCAT12(bStack134,CONCAT11(bStack135,bStack136))) ^
            CONCAT13(bStack129,CONCAT12(bStack130,CONCAT11(bStack131,local_84)));
    local_80 = local_80 ^ rand_comm[15];
    uVar3 = ((uint)local_8f ^ 0x5b ^ (uint)bStack142 ^ (uint)bStack141 ^ uVar4 ^ uVar4 >> 8 ^
            uVar4 >> 0x10) & 0xff ^ uVar4 >> 0x18;
    uVar4 = uVar3 & 0xbd;
    if ((int)(uVar3 << 0x19) < 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar3 & 2) != 0) {
      uVar4 = uVar4 | 0x40;
    }
    if ((uint)local_80 == uVar4) {
      uVar2 = 0xf;
      *(uint *)param_1 = CONCAT13(bStack140,CONCAT12(bStack141,CONCAT11(bStack142,local_8f)));
      *(uint *)(param_1 + 4) = CONCAT13(bStack136,CONCAT12(bStack137,CONCAT11(bStack138,bStack139)))
      ;
      *(uint *)(param_1 + 8) = CONCAT13(local_84,CONCAT12(bStack133,CONCAT11(bStack134,bStack135)));
      *(ushort *)(param_1 + 0xc) = CONCAT11(bStack130,bStack131);
      param_1[0xe] = bStack129;
      goto LAB_00015c54;
    }
  }
  uVar2 = 0;
LAB_00015c54:
  if (local_2c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// Tr1_J_Val(unsigned char*, unsigned char, unsigned char)

void Tr1_J_Val(uchar *param_1,uchar param_2,uchar param_3)

{
  param_1[6] = param_1[6] ^ param_2;
  param_1[8] = param_2 ^ param_1[8];
  param_1[7] = param_3 ^ param_1[7];
  param_1[9] = param_3 ^ param_1[9];
  return;
}



// WARNING: Removing unreachable block (ram,0x00015d28)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Unknown calling convention yet parameter storage is locked
// auth_random_data_step1()

int auth_random_data_step1(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uchar uStack296;
  byte local_127;
  byte bStack294;
  byte bStack293;
  undefined4 uStack292;
  undefined4 local_120;
  undefined4 local_11c;
  byte local_118;
  byte local_117;
  byte local_116;
  int local_24;
  
  local_24 = __stack_chk_guard;
  wbuf[8] = rand_comm[8] ^ 0x45;
  wbuf[9] = rand_comm[9] ^ 0xf1;
  wbuf._0_4_ = CONCAT13(rand_comm[3],
                        CONCAT12(rand_comm[2],
                                 CONCAT11(rand_comm[1],rand_comm[0] ^ 0x39 ^ rand_comm[6]))) ^
               0x29663200;
  wbuf._4_4_ = CONCAT13(rand_comm[7],CONCAT12(rand_comm[6],CONCAT11(rand_comm[5],rand_comm[4]))) ^
               0xbfe0cc7a;
  iVar1 = execute_icc_cmd(wbuf,'\n',&uStack296);
  if (0x12 < iVar1) {
    uVar2 = local_120 ^ uStack292 ^ local_11c;
    uVar3 = (uVar2 ^ uVar2 >> 8 ^ uVar2 >> 0x10) & 0xff ^ uVar2 >> 0x18 ^ 0x5b ^ (uint)local_127 ^
            (uint)bStack294 ^ (uint)bStack293 ^ (uint)local_118 ^ (uint)local_117;
    uVar2 = uVar3 & 0xbd;
    if ((int)(uVar3 << 0x19) < 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar3 & 2) != 0) {
      uVar2 = uVar2 | 0x40;
    }
    if ((uint)local_116 == uVar2) {
      auth_rand_data._4_4_ = CONCAT13((undefined)local_120,uStack292._1_3_);
      auth_rand_data._0_4_ =
           CONCAT13((undefined)uStack292,CONCAT12(bStack293,CONCAT11(bStack294,local_127)));
      auth_rand_data._8_4_ = CONCAT13((undefined)local_11c,local_120._1_3_);
      auth_rand_data._12_4_ = CONCAT13(local_118,local_11c._1_3_);
      auth_rand_data[16] = local_117;
      goto LAB_00015e36;
    }
  }
  iVar1 = 0;
LAB_00015e36:
  if (local_24 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Unknown calling convention yet parameter storage is locked
// auth_random_data_step2()

undefined4 auth_random_data_step2(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uchar uStack304;
  undefined4 local_12f;
  undefined4 local_12b;
  undefined4 local_127;
  undefined4 local_123;
  byte local_11f;
  int local_2c;
  
  uVar6 = (auth_rand_data._0_4_ ^ auth_rand_data._4_4_) & 0x80808080 ^
          (auth_rand_data._4_4_ & 0x7f7f7f7f) + (auth_rand_data._0_4_ & 0x7f7f7f7f);
  uVar4 = (auth_rand_data._8_4_ & 0x7f7f7f7f) + (uVar6 & 0x7f7f7f7f) ^
          (uVar6 ^ auth_rand_data._8_4_) & 0x80808080;
  uVar6 = auth_rand_data._0_4_ ^ auth_rand_data._4_4_ ^ auth_rand_data._8_4_;
  wbuf._5_2_ = (undefined2)local_123;
  cVar1 = (char)(uVar4 >> 0x18) +
          auth_rand_data[14] + auth_rand_data[13] + auth_rand_data[12] + (char)uVar4 +
          (char)(uVar4 >> 8) + (char)(uVar4 >> 0x10);
  wbuf[4] = (undefined)(local_127 >> 0x18);
  wbuf._0_4_ = CONCAT31((int3)local_127,0x62);
  uVar6 = ((byte)(auth_rand_data[14] ^ auth_rand_data[13] ^ auth_rand_data[12]) ^ uVar6 ^ uVar6 >> 8
          ^ uVar6 >> 0x10) & 0xff ^ uVar6 >> 0x18;
  uVar4 = wbuf._0_4_ ^ CONCAT13(cVar1,CONCAT21(wbuf._5_2_,wbuf[4]));
  local_2c = __stack_chk_guard;
  uVar4 = uVar4 & 0xff ^ uVar6 ^ 0x5b ^ (uVar4 << 0x10) >> 0x18 ^ (uVar4 << 8) >> 0x18 ^
          uVar4 >> 0x18;
  wbuf[9] = (byte)uVar4 & 0xbd;
  if ((int)(uVar4 << 0x19) < 0) {
    wbuf[9] = wbuf[9] | 2;
  }
  if ((uVar4 & 2) != 0) {
    wbuf[9] = wbuf[9] | 0x40;
  }
  uVar4 = rand_comm._4_4_ ^ CONCAT13(cVar1,CONCAT21(wbuf._5_2_,wbuf[4]));
  wbuf[4] = (undefined)uVar4;
  wbuf._5_2_ = (undefined2)(uVar4 >> 8);
  wbuf[7] = (undefined)(uVar4 >> 0x18);
  wbuf._0_4_ = (wbuf._0_4_ ^ rand_comm._0_4_) & 0xffffff00 |
               (uint)(byte)((byte)(wbuf._0_4_ ^ rand_comm._0_4_) ^ rand_comm[6]);
  wbuf[9] = wbuf[9] ^ rand_comm[9];
  wbuf[8] = rand_comm[8] ^ (byte)uVar6;
  iVar3 = execute_icc_cmd(wbuf,'\n',&uStack304);
  uVar4 = local_123;
  uVar6 = local_127;
  if (0xb < iVar3) {
    iVar3 = iVar3 + -3;
    local_12f._0_3_ =
         CONCAT12(local_12f._2_1_ ^ rand_comm[2],
                  CONCAT11(local_12f._1_1_ ^ rand_comm[1],(byte)local_12f ^ rand_comm[0]));
    local_12f = CONCAT13(local_12f._3_1_ ^ rand_comm[3],(uint3)local_12f);
    local_12b._0_3_ =
         CONCAT12(local_12b._2_1_ ^ rand_comm[6],
                  CONCAT11(local_12b._1_1_ ^ rand_comm[5],(byte)local_12b ^ rand_comm[4]));
    local_12b = CONCAT13(local_12b._3_1_ ^ rand_comm[7],(uint3)local_12b);
    uVar2 = local_127 & 0xffffff00;
    local_127 = uVar2 | (byte)local_127 ^ rand_comm[8];
    if (((((9 < iVar3) &&
          (local_127._1_1_ = (byte)(uVar2 >> 8),
          local_127._0_2_ = CONCAT11(rand_comm[9] ^ local_127._1_1_,(byte)local_127 ^ rand_comm[8]),
          uVar2 = uVar6 & 0xffff0000, local_127 = uVar2 | (ushort)local_127, 10 < iVar3)) &&
         (local_127._2_1_ = (byte)(uVar2 >> 0x10),
         local_127._0_3_ = CONCAT12(rand_comm[10] ^ local_127._2_1_,(ushort)local_127),
         uVar6 = uVar6 & 0xff000000, local_127 = uVar6 | (uint3)local_127, 0xb < iVar3)) &&
        ((local_127._3_1_ = (byte)(uVar6 >> 0x18),
         local_127 = CONCAT13(rand_comm[11] ^ local_127._3_1_,(uint3)local_127), 0xc < iVar3 &&
         (uVar6 = local_123 & 0xffffff00, local_123 = uVar6 | rand_comm[12] ^ (byte)local_123,
         0xd < iVar3)))) &&
       ((local_123._1_1_ = (byte)(uVar6 >> 8),
        local_123._0_2_ = CONCAT11(rand_comm[13] ^ local_123._1_1_,rand_comm[12] ^ (byte)local_123),
        uVar6 = uVar4 & 0xffff0000, local_123 = uVar6 | (ushort)local_123, 0xe < iVar3 &&
        ((local_123._2_1_ = (byte)(uVar6 >> 0x10),
         local_123._0_3_ = CONCAT12(rand_comm[14] ^ local_123._2_1_,(ushort)local_123),
         uVar4 = uVar4 & 0xff000000, local_123 = uVar4 | (uint3)local_123, 0xf < iVar3 &&
         (local_123._3_1_ = (byte)(uVar4 >> 0x18),
         local_123 = CONCAT13(rand_comm[15] ^ local_123._3_1_,(uint3)local_123), 0x10 < iVar3))))))
    {
      local_11f = rand_comm[16] ^ local_11f;
    }
    uVar6 = (uint)(uint3)local_12f & 0xff ^ 0x5b ^ (uint)(local_12f._1_1_ ^ rand_comm[1]) ^
            (uint)(local_12f._2_1_ ^ rand_comm[2]) ^ (uint)(local_12f._3_1_ ^ rand_comm[3]) ^
            (uint)(uint3)local_12b & 0xff ^ (uint)(local_12b._1_1_ ^ rand_comm[5]) ^
            (uint)(local_12b._2_1_ ^ rand_comm[6]) ^ (uint)(local_12b._3_1_ ^ rand_comm[7]);
    uVar4 = uVar6 & 0xbd;
    if ((int)(uVar6 << 0x19) < 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar6 & 2) != 0) {
      uVar4 = uVar4 | 0x40;
    }
    if ((local_127 & 0xff) == uVar4) {
      uVar5 = 8;
      auth_rand_data_2._0_4_ = local_12f;
      auth_rand_data_2._4_4_ = local_12b;
      goto LAB_00016140;
    }
  }
  uVar5 = 0;
LAB_00016140:
  if (local_2c == __stack_chk_guard) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// Read_nvram(unsigned char*, int, int)

int Read_nvram(uchar *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uStack303;
  byte local_12b [4];
  byte local_127;
  byte local_126;
  byte local_125;
  byte local_124;
  byte local_123;
  byte local_122;
  byte local_121;
  int local_2c;
  
  uVar9 = (param_2 >> 8 ^ param_2 ^ param_3) & 0xffU ^ 0x9f;
  bVar12 = (byte)uVar9 & 0xbd;
  local_2c = __stack_chk_guard;
  if ((int)(uVar9 << 0x19) < 0) {
    bVar12 = bVar12 | 2;
  }
  if ((uVar9 & 2) != 0) {
    bVar12 = bVar12 | 0x40;
  }
  pbVar1 = (byte *)((int)&uStack303 + 3);
  wbuf[5] = rand_comm[5] ^ bVar12 ^ 0x55;
  wbuf[2] = rand_comm[2] ^ (byte)param_2 ^ 0x55;
  uVar9 = (uint)rand_comm[3] ^ (uint)param_2 >> 8 & 0xff ^ 0x55;
  wbuf[4] = rand_comm[4] ^ (byte)param_3 ^ 0x55;
  wbuf[0] = rand_comm[0] ^ 0x91 ^ rand_comm[6];
  wbuf[1] = rand_comm[1] ^ 0x55;
  wbuf[3] = (undefined)uVar9;
  iVar3 = execute_icc_cmd(wbuf,'\x06',pbVar1);
  if (param_3 + 3 < iVar3) {
    if (param_3 < 0) {
LAB_00016470:
      uVar9 = 0x1b;
LAB_00016440:
      uVar9 = uVar9 | 0x40;
    }
    else {
      uVar13 = param_3 + 1;
      uVar6 = 0;
      pbVar10 = pbVar1;
      do {
        uVar4 = uVar6 & 0xf;
        uVar6 = uVar6 + 1;
        pbVar2 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        *pbVar10 = *pbVar2 ^ rand_comm[uVar4];
      } while (uVar6 != uVar13);
      uVar6 = 3;
      if (uVar13 < 4) {
        uVar6 = uVar13;
      }
      if (uVar13 < 6) {
        uVar6 = uVar13;
      }
      local_12b[0] = local_12b[0] ^ 0x55;
      if (uVar6 < 2) {
        uVar9 = 1;
      }
      else {
        if (uVar6 < 3) {
          uVar9 = 2;
        }
        local_12b[1] = local_12b[1] ^ 0x55;
        if (2 < uVar6) {
          if (uVar6 < 4) {
            uVar9 = 3;
          }
          local_12b[2] = local_12b[2] ^ 0x55;
          if (3 < uVar6) {
            local_12b[3] = local_12b[3] ^ 0x55;
            if (uVar6 < 5) {
              uVar9 = 4;
            }
            else {
              uVar9 = 5;
              local_127 = local_127 ^ 0x55;
            }
          }
        }
      }
      if (uVar6 != uVar13) {
        uVar13 = uVar13 - uVar6;
        if (uVar13 >> 2 != 0) {
          uVar4 = 0;
          puVar5 = (uint *)(&stack0xfffffed0 + uVar6 + 1);
          puVar7 = (uint *)(pbVar1 + uVar6 + 1);
          do {
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 1;
            *puVar7 = *puVar5 ^ 0x55555555;
            puVar7 = puVar7 + 1;
          } while (uVar4 < uVar13 >> 2);
          uVar9 = uVar9 + (uVar13 & 0xfffffffc);
          if (uVar13 == (uVar13 & 0xfffffffc)) goto LAB_0001633e;
        }
        iVar3 = uVar9 + 1;
        pbVar1[iVar3] = pbVar1[iVar3] ^ 0x55;
        if (iVar3 <= param_3) {
          iVar3 = uVar9 + 2;
          pbVar1[iVar3] = pbVar1[iVar3] ^ 0x55;
          if (iVar3 <= param_3) {
            pbVar1[uVar9 + 3] = pbVar1[uVar9 + 3] ^ 0x55;
          }
        }
      }
LAB_0001633e:
      if (param_3 < 1) goto LAB_00016470;
      uVar9 = 3;
      if ((uint)param_3 < 4) {
        uVar9 = param_3;
      }
      if ((uint)param_3 < 0xc) {
        uVar9 = param_3;
      }
      uVar6 = (uint)local_12b[0] ^ 0x5b;
      if (uVar9 < 2) {
        iVar3 = 1;
      }
      else {
        uVar6 = uVar6 ^ local_12b[1];
        if (uVar9 < 3) {
          iVar3 = 2;
        }
        else {
          uVar6 = uVar6 ^ local_12b[2];
          if (uVar9 < 4) {
            iVar3 = 3;
          }
          else {
            uVar6 = uVar6 ^ local_12b[3];
            if (uVar9 < 5) {
              iVar3 = 4;
            }
            else {
              uVar6 = uVar6 ^ local_127;
              if (uVar9 < 6) {
                iVar3 = 5;
              }
              else {
                uVar6 = uVar6 ^ local_126;
                if (uVar9 < 7) {
                  iVar3 = 6;
                }
                else {
                  uVar6 = uVar6 ^ local_125;
                  if (uVar9 < 8) {
                    iVar3 = 7;
                  }
                  else {
                    uVar6 = uVar6 ^ local_124;
                    if (uVar9 < 9) {
                      iVar3 = 8;
                    }
                    else {
                      uVar6 = uVar6 ^ local_123;
                      if (uVar9 < 10) {
                        iVar3 = 9;
                      }
                      else {
                        uVar6 = uVar6 ^ local_122;
                        if (uVar9 < 0xb) {
                          iVar3 = 10;
                        }
                        else {
                          iVar3 = 0xb;
                          uVar6 = uVar6 ^ local_121;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (param_3 != uVar9) {
        uVar13 = param_3 - uVar9;
        if (uVar13 >> 2 != 0) {
          uVar4 = 0;
          uVar11 = 0;
          puVar5 = (uint *)(pbVar1 + uVar9 + 1);
          do {
            uVar4 = uVar4 + 1;
            uVar11 = uVar11 ^ *puVar5;
            puVar5 = puVar5 + 1;
          } while (uVar4 < uVar13 >> 2);
          iVar3 = iVar3 + (uVar13 & 0xfffffffc);
          uVar6 = uVar6 ^ (uVar11 ^ uVar11 >> 8) & 0xff ^ (uVar11 << 8) >> 0x18 ^ uVar11 >> 0x18;
          if ((uVar13 & 0xfffffffc) == uVar13) goto LAB_0001642c;
        }
        puVar8 = &uStack303 + 1;
        uVar6 = uVar6 ^ *(byte *)((int)puVar8 + iVar3);
        if (iVar3 + 1 < param_3) {
          uVar6 = uVar6 ^ *(byte *)((int)puVar8 + iVar3 + 1);
          if (iVar3 + 2 < param_3) {
            uVar6 = uVar6 ^ *(byte *)((int)puVar8 + iVar3 + 2);
          }
        }
      }
LAB_0001642c:
      uVar9 = uVar6 & 0xbd;
      if ((int)(uVar6 << 0x19) < 0) {
        uVar9 = uVar9 | 2;
      }
      if ((uVar6 & 2) != 0) goto LAB_00016440;
    }
    if ((uint)*(byte *)((int)&uStack303 + param_3 + 4) == uVar9) {
      memcpy(param_1,&uStack303 + 1,param_3);
      goto LAB_0001644e;
    }
  }
  param_3 = 0;
LAB_0001644e:
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_3;
}



// Write_nvram(unsigned char const*, int, int)

int Write_nvram(uchar *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *unaff_r5;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  cmdbuf[2] = (byte)param_2;
  cmdbuf[3] = (byte)((uint)param_2 >> 8);
  cmdbuf[0] = 0x92;
  cmdbuf[1] = 0x55;
  cmdbuf[4] = (byte)(param_3 & 0xffU);
  if (0 < param_3) {
    bVar17 = param_1 < cmdbuf + 0xe;
    bVar15 = param_1 == cmdbuf + 0xd;
    if (param_1 < cmdbuf + 0xd) {
      bVar17 = cmdbuf + 4 < param_1 + 8;
      bVar15 = param_1 + 8 == cmdbuf + 5;
    }
    uVar5 = (uint)(!bVar17 || bVar15);
    if ((uint)param_3 < 0xb) {
      uVar5 = 0;
    }
    if ((((uint)param_1 | 0x29579) & 7) != 0) {
      uVar5 = 0;
    }
    if (uVar5 == 0) {
      do {
        unaff_r5 = (undefined4 *)(uint)param_1[uVar5];
        uVar14 = uVar5 + 1;
        cmdbuf[uVar5 + 5] = param_1[uVar5];
        uVar5 = uVar14;
      } while (uVar14 != param_3);
    }
    else {
      uVar5 = 0;
      uVar14 = param_3 & 0xfffffff8;
      puVar2 = (undefined4 *)((int)&fd + 1);
      puVar8 = (undefined4 *)(param_1 + -8);
      do {
        unaff_r5 = puVar8 + 2;
        uVar11 = puVar8[3];
        uVar5 = uVar5 + 1;
        puVar2[2] = *unaff_r5;
        puVar2[3] = uVar11;
        puVar2 = puVar2 + 2;
        puVar8 = unaff_r5;
      } while (uVar5 < (uint)param_3 >> 3);
      if (param_3 != uVar14) {
        unaff_r5 = &fd;
        cmdbuf[uVar14 + 5] = param_1[param_3 & 0xfffffff8];
        if ((int)(uVar14 + 1) < param_3) {
          cmdbuf[uVar14 + 6] = param_1[uVar14 + 1];
          if ((int)(uVar14 + 2) < param_3) {
            cmdbuf[uVar14 + 7] = param_1[uVar14 + 2];
            if ((int)(uVar14 + 3) < param_3) {
              cmdbuf[uVar14 + 8] = param_1[uVar14 + 3];
              if ((int)(uVar14 + 4) < param_3) {
                cmdbuf[uVar14 + 9] = param_1[uVar14 + 4];
                if ((int)(uVar14 + 5) < param_3) {
                  cmdbuf[uVar14 + 10] = param_1[uVar14 + 5];
                  if ((int)(uVar14 + 6) < param_3) {
                    cmdbuf[uVar14 + 0xb] = param_1[uVar14 + 6];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = param_3 + 5;
  if ((int)uVar5 < 1) {
    bVar1 = 0x1b;
LAB_00016662:
    bVar1 = bVar1 | 0x40;
  }
  else {
    bVar16 = (undefined4 *)(uVar5 >> 2) == (undefined4 *)0x0;
    bVar17 = uVar5 == 7;
    bVar15 = uVar5 < 7;
    uVar14 = uVar5 & 0xfffffffc;
    if (!bVar16 && bVar15 || (bVar16 || bVar17)) {
      unaff_r5 = (undefined4 *)0x1;
    }
    if ((bVar16 || !bVar15) && (!bVar16 && !bVar17)) {
      unaff_r5 = (undefined4 *)0x0;
    }
    if (!bVar16 && bVar15 || (bVar16 || bVar17)) {
      uVar6 = 0x5b;
      uVar14 = 0;
LAB_000165ea:
      uVar6 = uVar6 ^ (byte)cmdbuf[uVar14];
      if ((((((int)(uVar14 + 1) < (int)uVar5) &&
            (uVar6 = uVar6 ^ (byte)cmdbuf[uVar14 + 1], (int)(uVar14 + 2) < (int)uVar5)) &&
           (uVar6 = uVar6 ^ (byte)cmdbuf[uVar14 + 2], (int)(uVar14 + 3) < (int)uVar5)) &&
          ((uVar6 = uVar6 ^ (byte)cmdbuf[uVar14 + 3], (int)(uVar14 + 4) < (int)uVar5 &&
           (uVar6 = uVar6 ^ (byte)cmdbuf[uVar14 + 4], (int)(uVar14 + 5) < (int)uVar5)))) &&
         (uVar6 = uVar6 ^ (byte)cmdbuf[uVar14 + 5], (int)(uVar14 + 6) < (int)uVar5)) {
        uVar6 = uVar6 ^ (byte)cmdbuf[uVar14 + 6];
      }
    }
    else {
      puVar9 = &fd;
      puVar2 = unaff_r5;
      do {
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar9 = puVar9 + 1;
        unaff_r5 = (undefined4 *)((uint)unaff_r5 ^ *puVar9);
      } while (puVar2 < (undefined4 *)(uVar5 >> 2));
      uVar6 = (uint)((int)unaff_r5 << 8) >> 0x18 ^
              ((uint)unaff_r5 ^ (uint)unaff_r5 >> 8) & 0xff ^ 0x5b ^ (uint)unaff_r5 >> 0x18;
      if (uVar5 != uVar14) goto LAB_000165ea;
    }
    bVar1 = (byte)uVar6 & 0xbd;
    if ((int)(uVar6 << 0x19) < 0) {
      bVar1 = bVar1 | 2;
    }
    if ((uVar6 & 2) != 0) goto LAB_00016662;
  }
  iVar13 = param_3 + 3;
  cmdbuf[param_3 + 5] = bVar1;
  bVar1 = cmdbuf[1];
  if (-1 < iVar13) {
    uVar6 = param_3 + 4;
    uVar14 = 2;
    if (uVar6 < 3) {
      uVar14 = uVar6;
    }
    if (uVar6 < 5) {
      uVar14 = uVar6;
    }
    uVar12 = uVar14;
    if (uVar14 != 0) {
      cmdbuf[2] = cmdbuf[1] ^ cmdbuf[2];
      if (uVar14 < 2) {
        uVar12 = 1;
      }
      else {
        cmdbuf[3] = cmdbuf[1] ^ cmdbuf[3];
        if (uVar14 < 3) {
          uVar12 = 2;
        }
        else {
          cmdbuf[4] = cmdbuf[1] ^ cmdbuf[4];
          if (uVar14 < 4) {
            uVar12 = 3;
          }
          else {
            uVar12 = 4;
            cmdbuf[5] = cmdbuf[1] ^ cmdbuf[5];
          }
        }
      }
      if (uVar6 == uVar14) goto LAB_00016760;
    }
    uVar6 = uVar6 - uVar14;
    if (uVar6 >> 2 != 0) {
      uVar3 = 0;
      puVar9 = (uint *)((int)&fd + uVar14 + 2);
      uVar10 = CONCAT13(cmdbuf[1],CONCAT12(cmdbuf[1],CONCAT11(cmdbuf[1],cmdbuf[1])));
      puVar7 = (uint *)(cmdbuf + uVar14 + 2);
      do {
        uVar3 = uVar3 + 1;
        puVar9 = puVar9 + 1;
        *puVar7 = *puVar9 ^ uVar10;
        puVar7 = puVar7 + 1;
      } while (uVar3 < uVar6 >> 2);
      uVar12 = uVar12 + (uVar6 & 0xfffffffc);
      if ((uVar6 & 0xfffffffc) == uVar6) goto LAB_00016760;
    }
    cmdbuf[uVar12 + 2] = bVar1 ^ cmdbuf[uVar12 + 2];
    if (((int)(uVar12 + 1) <= iVar13) &&
       (cmdbuf[uVar12 + 3] = bVar1 ^ cmdbuf[uVar12 + 3], (int)(uVar12 + 2) <= iVar13)) {
      cmdbuf[uVar12 + 4] = bVar1 ^ cmdbuf[uVar12 + 4];
    }
  }
LAB_00016760:
  if (-1 < (int)uVar5) {
    uVar5 = 0;
    pbVar4 = cmdbuf;
    do {
      uVar14 = uVar5 & 0xf;
      uVar5 = uVar5 + 1;
      *pbVar4 = rand_comm[uVar14] ^ *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != param_3 + 6U);
  }
  cmdbuf[0] = cmdbuf[0] ^ rand_comm[6];
  iVar13 = execute_icc_cmd_delaylong
                     ((uchar *)((param_3 & 0xffU) + 6 & 0xff),rand_comm[6],(uchar *)(uint)cmdbuf[0])
  ;
  if (iVar13 < 5) {
    param_3 = 0;
  }
  else {
    if (backbuf[2] != -0x56) {
      param_3 = 0;
    }
  }
  return param_3;
}



// load_dipswitch_from_sdcard(char*, unsigned char*, int)

size_t load_dipswitch_from_sdcard(char *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  FILE *__stream;
  char acStack128 [100];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  memset(acStack128,0,100);
  __sprintf_chk(acStack128,1,100,"/sdcard/cfg/%s.bin",param_1);
  iVar1 = access(acStack128,0);
  if ((iVar1 == 0) && (__stream = fopen(acStack128,"r"), __stream != (FILE *)0x0)) {
    sVar2 = fread(param_2,1,param_3,__stream);
    fclose(__stream);
  }
  else {
    sVar2 = 0;
  }
  if (local_1c == __stack_chk_guard) {
    return sVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// save_dipswitch_to_sdcard(char*, unsigned char const*, int)

FILE * save_dipswitch_to_sdcard(char *param_1,uchar *param_2,int param_3)

{
  FILE *__s;
  FILE *pFVar1;
  char acStack128 [100];
  int local_1c;
  
  local_1c = __stack_chk_guard;
  memset(acStack128,0,100);
  __sprintf_chk(acStack128,1,100,"/sdcard/cfg/%s.bin",param_1);
  __s = fopen(acStack128,"w");
  pFVar1 = __s;
  if (__s != (FILE *)0x0) {
    pFVar1 = (FILE *)fwrite(param_2,1,param_3,__s);
    fclose(__s);
  }
  if (local_1c == __stack_chk_guard) {
    return pFVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Read_Y3()

uint Read_Y3(void)

{
  int __fd;
  uint uVar1;
  
  __fd = open("/dev/serio",2);
  if (-1 < __fd) {
    uVar1 = ioctl(__fd,0x10,6);
    close(__fd);
    return uVar1 & 0xffff;
  }
  return 0;
}



// Write_Y3(unsigned int)

int Write_Y3(uint param_1)

{
  int __fd;
  int iVar1;
  
  __fd = open("/dev/serio",2);
  if (__fd < 0) {
    return 0xee;
  }
  iVar1 = ioctl(__fd,0x14,param_1 & 0xffff);
  close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// read_dipsw_Y2_16_reopen()

uint read_dipsw_Y2_16_reopen(void)

{
  int __fd;
  uint uVar1;
  
  __fd = open("/dev/serio",2);
  if (-1 < __fd) {
    uVar1 = ioctl(__fd,0xf,0);
    close(__fd);
    return uVar1 & 0xffff;
  }
  return 0;
}



// Read_nvram_setgame(char*)

uint Read_nvram_setgame(char *param_1)

{
  FILE *__stream;
  size_t sVar1;
  ushort **ppuVar2;
  uint uVar3;
  ushort *puVar4;
  byte local_2c;
  byte local_2b;
  byte local_27;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_20;
  byte local_1d;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  __stream = fopen("./runset.bin","r");
  if ((__stream == (FILE *)0x0) || (sVar1 = fread(&local_2c,1,0x10,__stream), (int)sVar1 < 0x10)) {
    uVar3 = 0;
  }
  else {
    *param_1 = local_2c ^ local_2b;
    param_1[1] = local_2c ^ local_27;
    param_1[6] = local_24 ^ local_2c;
    param_1[7] = local_2c ^ local_23;
    param_1[2] = local_25 ^ local_2c;
    param_1[3] = local_22 ^ local_2c;
    param_1[4] = local_20 ^ local_2c;
    param_1[5] = local_1d ^ local_2c;
    ppuVar2 = __ctype_b_loc();
    puVar4 = *ppuVar2;
    uVar3 = (uint)(puVar4[local_2c ^ local_2b] & 8);
    if ((puVar4[local_2c ^ local_2b] & 8) != 0) {
      if ((int)((uint)puVar4[(byte)param_1[1]] << 0x1c) < 0) {
        if ((int)((uint)puVar4[local_25 ^ local_2c] << 0x1c) < 0) {
          if ((int)((uint)puVar4[local_22 ^ local_2c] << 0x1c) < 0) {
            if ((int)((uint)puVar4[(byte)param_1[4]] << 0x1c) < 0) {
              if ((int)((uint)puVar4[(byte)param_1[5]] << 0x1c) < 0) {
                if ((int)((uint)puVar4[(byte)param_1[6]] << 0x1c) < 0) {
                  if ((int)((uint)puVar4[(byte)param_1[7]] << 0x1c) < 0) {
                    uVar3 = 8;
                  }
                  else {
                    uVar3 = 7;
                  }
                }
                else {
                  uVar3 = 6;
                }
              }
              else {
                uVar3 = 5;
              }
            }
            else {
              uVar3 = 4;
            }
          }
          else {
            uVar3 = 3;
          }
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
  }
  if (local_1c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



// WARNING: Could not reconcile some variable overlaps
// Write_nvram_setgame(char const*)

FILE * Write_nvram_setgame(char *param_1)

{
  byte bVar1;
  ushort **ppuVar2;
  FILE *__s;
  FILE *pFVar3;
  ushort *puVar4;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  byte local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  byte local_3b;
  undefined local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined local_35;
  byte local_34;
  undefined local_33;
  undefined local_32;
  byte local_31;
  int local_2c;
  
  local_44 = 0;
  local_48 = 0;
  local_2c = __stack_chk_guard;
  ppuVar2 = __ctype_b_loc();
  bVar1 = *param_1;
  puVar4 = *ppuVar2;
  if ((int)((uint)puVar4[bVar1] << 0x1c) < 0) {
    local_48 = (uint)bVar1;
    if ((int)((uint)puVar4[(byte)param_1[1]] << 0x1c) < 0) {
      local_48._0_2_ = CONCAT11(param_1[1],bVar1);
      local_48 = (uint)(ushort)local_48;
      if ((int)((uint)puVar4[(byte)param_1[2]] << 0x1c) < 0) {
        local_48._0_3_ = CONCAT12(param_1[2],(ushort)local_48);
        local_48 = (uint)(uint3)local_48;
        if ((int)((uint)puVar4[(byte)param_1[3]] << 0x1c) < 0) {
          bVar1 = param_1[4];
          local_48 = CONCAT13(param_1[3],(uint3)local_48);
          if ((int)((uint)puVar4[bVar1] << 0x1c) < 0) {
            local_44 = (uint)bVar1;
            if ((int)((uint)puVar4[(byte)param_1[5]] << 0x1c) < 0) {
              local_44._0_2_ = CONCAT11(param_1[5],bVar1);
              local_44 = (uint)(ushort)local_44;
              if ((int)((uint)puVar4[(byte)param_1[6]] << 0x1c) < 0) {
                local_44._0_3_ = CONCAT12(param_1[6],(ushort)local_44);
                local_44 = (uint)(uint3)local_44;
                if ((int)((uint)puVar4[(byte)param_1[7]] << 0x1c) < 0) {
                  local_44 = CONCAT13(param_1[7],(uint3)local_44);
                }
              }
            }
          }
        }
      }
    }
  }
  local_3f = rand_comm[0] ^ (byte)local_48;
  local_3b = rand_comm[0] ^ local_48._1_1_;
  local_39 = rand_comm[0] ^ local_48._2_1_;
  local_38 = rand_comm[0] ^ local_44._2_1_;
  local_37 = rand_comm[0] ^ local_44._3_1_;
  local_36 = rand_comm[0] ^ local_48._3_1_;
  local_34 = rand_comm[0] ^ (byte)local_44;
  local_40 = rand_comm[0];
  local_33 = rand_comm[13];
  local_31 = rand_comm[0] ^ local_44._1_1_;
  local_3e = rand_comm[2];
  local_3d = rand_comm[3];
  local_3c = rand_comm[4];
  local_3a = rand_comm[6];
  local_35 = rand_comm[11];
  local_32 = rand_comm[14];
  __s = fopen("./runset.bin","w");
  if (__s == (FILE *)0x0) {
    puts("\nFile failed open to write.");
  }
  else {
    pFVar3 = (FILE *)fwrite(&local_40,1,0x10,__s);
    fclose(__s);
    if ((int)pFVar3 < 0x10) {
      __s = (FILE *)0x0;
    }
    else {
      system("sync");
      __s = pFVar3;
    }
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __s;
}



undefined4 sunxi_disp_close(int *param_1)

{
  int local_20;
  int local_1c;
  
  if (-1 < param_1[1]) {
    if (-1 < param_1[2]) {
      close(param_1[2]);
    }
    if (-1 < param_1[0x11]) {
      local_20 = param_1[3];
      local_1c = param_1[0x11];
      ioctl(param_1[1],0x41,&local_20);
      param_1[0x11] = -1;
      param_1[0x12] = 0;
    }
    if (param_1[0xc] == 0) {
      munmap((void *)param_1[7],param_1[9]);
    }
    close(*param_1);
    close(param_1[1]);
    param_1[1] = -1;
    free(param_1);
  }
  return 0;
}



int sunxi_layer_reserve(int param_1)

{
  int iVar1;
  undefined4 local_118;
  int local_114;
  undefined *local_110;
  undefined4 local_108;
  int local_104;
  undefined4 *local_100;
  undefined auStack248 [5];
  undefined local_f3;
  undefined local_f1;
  undefined2 local_f0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_88 [29];
  
  local_118 = *(undefined4 *)(param_1 + 0xc);
  local_114 = 0;
  local_114 = ioctl(*(int *)(param_1 + 4),0x40,&local_118);
  *(int *)(param_1 + 0x44) = local_114;
  if (-1 < local_114) {
    local_118 = *(undefined4 *)(param_1 + 0xc);
    local_110 = auStack248;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_118);
    if (-1 < iVar1) {
      local_118 = *(undefined4 *)(param_1 + 0xc);
      local_cc = 0x5fe00000;
      local_114 = *(undefined4 *)(param_1 + 0x44);
      local_b4 = 0;
      local_f3 = 1;
      local_f1 = 1;
      local_c0 = 1;
      local_bc = 1;
      local_b0 = 1;
      local_f0 = 0xff;
      local_b8 = 10;
      local_110 = auStack248;
      iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_118);
      if (-1 < iVar1) {
        local_104 = *(int *)(param_1 + 0x44);
        if (-1 < local_104) {
          local_108 = *(undefined4 *)(param_1 + 0xc);
          local_100 = local_88;
          iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_108);
          if (iVar1 < 0) {
            local_104 = *(int *)(param_1 + 0x44);
          }
          else {
            local_108 = *(undefined4 *)(param_1 + 0xc);
            local_104 = *(undefined4 *)(param_1 + 0x44);
            local_88[0] = 4;
            local_100 = local_88;
            iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_108);
            local_104 = *(int *)(param_1 + 0x44);
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0x48) = 1;
            }
          }
          if (-1 < local_104) {
            local_108 = *(undefined4 *)(param_1 + 0xc);
            local_100 = local_88;
            iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_108);
            if (-1 < iVar1) {
              local_108 = *(undefined4 *)(param_1 + 0xc);
              local_104 = *(undefined4 *)(param_1 + 0x44);
              local_88[0] = 0;
              local_100 = local_88;
              ioctl(*(int *)(param_1 + 4),0x4a,&local_108);
            }
            local_104 = *(int *)(param_1 + 0x44);
          }
        }
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x68) = 10;
        return local_104;
      }
    }
  }
  return 0xffffffff;
}



int * sunxi_disp_init(char *param_1,int param_2)

{
  int __fd;
  int *__ptr;
  void *pvVar1;
  uint uVar2;
  ulong __request;
  uint uVar3;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_f0;
  undefined auStack104 [16];
  int local_58;
  uint local_54;
  int local_24;
  
  local_24 = __stack_chk_guard;
  __ptr = (int *)calloc(0x6c,1);
  if (param_1 == (char *)0x0) {
    param_1 = "/dev/fb0";
LAB_00016db4:
    __ptr[3] = 0;
LAB_00016db8:
    __ptr[0xc] = param_2;
    __fd = open("/dev/disp",2);
    __ptr[1] = __fd;
    if (-1 < __fd) {
      local_10c = 0x10000;
      __fd = ioctl(__fd,0,&local_10c);
      if (-1 < __fd) {
        __fd = open(param_1,2);
        *__ptr = __fd;
        if (-1 < __fd) {
          __fd = ioctl(__fd,0x4600,&local_108);
          if ((-1 < __fd) && (__fd = ioctl(*__ptr,0x4602,auStack104), -1 < __fd)) {
            uVar2 = local_f0 * local_108;
            __ptr[4] = local_108;
            __ptr[6] = local_f0;
            __ptr[9] = local_54;
            uVar3 = uVar2 & ~((int)uVar2 >> 0x20);
            if ((int)uVar2 < 0) {
              uVar3 = uVar2 + 7;
            }
            __ptr[5] = local_104;
            __ptr[8] = local_58;
            __fd = __aeabi_uidiv(local_54,(int)uVar3 >> 3);
            uVar3 = (uint)(local_f0 * local_104 * local_108) >> 3;
            __ptr[0xb] = uVar3;
            __ptr[10] = __fd;
            if (uVar3 <= local_54) {
              if (__ptr[0xc] == 0) {
                pvVar1 = mmap((void *)0x0,local_54,3,1,*__ptr,0);
                *(void **)(__ptr + 7) = pvVar1;
                if (pvVar1 == (void *)0xffffffff) goto LAB_00016dfe;
              }
              else {
                __ptr[7] = __ptr[0xc];
              }
              if (__ptr[3] == 0) {
                __request = 0x4700;
              }
              else {
                __request = 0x4701;
              }
              __ptr[0xe] = -1;
              __ptr[0xd] = 0;
              __ptr[0xf] = -1;
              __fd = ioctl(*__ptr,__request,__ptr + 0x10);
              if (__fd != 0) {
                if (__ptr[3] == 0) {
                  __request = 0x4701;
                }
                else {
                  __request = 0x4700;
                }
                __fd = ioctl(*__ptr,__request,__ptr + 0x10);
                if (__fd != 0) goto LAB_00016dfe;
              }
              __fd = sunxi_layer_reserve(__ptr);
              if (-1 < __fd) goto LAB_00016e12;
            }
          }
LAB_00016dfe:
          close(*__ptr);
        }
      }
      close(__ptr[1]);
    }
  }
  else {
    __fd = strcmp(param_1,"/dev/fb0");
    if (__fd == 0) goto LAB_00016db4;
    __fd = strcmp(param_1,"/dev/fb1");
    if (__fd == 0) {
      __ptr[3] = 1;
      goto LAB_00016db8;
    }
  }
  free(__ptr);
  __ptr = (int *)0x0;
LAB_00016e12:
  if (local_24 == __stack_chk_guard) {
    return __ptr;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined4 sunxi_layer_release(int param_1)

{
  undefined4 uVar1;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *(int *)(param_1 + 0x44);
  if (local_1c < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = *(undefined4 *)(param_1 + 0xc);
    ioctl(*(int *)(param_1 + 4),0x41,&local_20);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  return uVar1;
}



int sunxi_layer_set_rgb_input_buffer
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
              int param_6)

{
  int iVar1;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 local_c4 [3];
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  
  local_d8 = param_5;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = param_4;
  memset(local_c4,0,0x3c);
  if (*(int *)(param_1 + 0x44) < 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 100) != 0) {
    local_d4 = *(undefined4 *)(param_1 + 0xc);
    local_d0 = *(int *)(param_1 + 0x44);
    local_cc = &local_88;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_d4);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    local_d0 = *(undefined4 *)(param_1 + 0x44);
    local_88 = 0;
    local_d4 = *(undefined4 *)(param_1 + 0xc);
    local_cc = &local_88;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_d4);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  local_b4 = param_5;
  local_c4[0] = 0x5fe00000;
  __printf_chk(1,&DAT_0002760c,param_2);
  if (param_2 == 0x20) {
    local_ac = 0;
    local_b0 = 10;
    local_b8 = param_6;
  }
  else {
    if (param_2 != 0x10) {
      return 0xffffffff;
    }
    local_b0 = 5;
    local_ac = 0xd;
    local_b8 = param_6 << 1;
  }
  local_a8 = 1;
  local_88 = *(undefined4 *)(param_1 + 0xc);
  local_84 = *(undefined4 *)(param_1 + 0x44);
  local_80 = local_c4;
  iVar1 = ioctl(*(int *)(param_1 + 4),0x44,&local_88);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  local_88 = *(undefined4 *)(param_1 + 0xc);
  local_80 = &local_e4;
  local_84 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x50) = local_e0;
  *(undefined4 *)(param_1 + 0x54) = local_dc;
  *(undefined4 *)(param_1 + 0x4c) = local_e4;
  *(undefined4 *)(param_1 + 0x58) = local_d8;
  *(undefined4 *)(param_1 + 0x68) = local_b0;
  iVar1 = ioctl(*(int *)(param_1 + 4),0x46,&local_88);
  return iVar1;
}



int sunxi_layer_set_yuv420_input_buffer
              (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6
              ,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 *local_dc;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_98;
  int local_94;
  int *local_90;
  
  local_f0 = param_9;
  local_ec = param_5;
  local_e8 = param_6;
  local_f4 = param_8;
  memset(&local_d4,0,0x3c);
  local_94 = *(int *)(param_1 + 0x44);
  if (local_94 < 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 100) == 0) {
    local_e4 = *(undefined4 *)(param_1 + 0xc);
    local_e0 = local_94;
    local_dc = &local_98;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_e4);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    local_e4 = *(undefined4 *)(param_1 + 0xc);
    local_e0 = *(undefined4 *)(param_1 + 0x44);
    local_98 = 4;
    local_dc = &local_98;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_e4);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    local_94 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 100) = 1;
  }
  local_cc = *(int *)(param_1 + 0x20);
  local_c8 = param_7;
  local_90 = &local_d4;
  local_d4 = param_2 + local_cc;
  local_98 = *(undefined4 *)(param_1 + 0xc);
  local_d0 = param_3 + local_cc;
  local_cc = param_4 + local_cc;
  local_c4 = param_6;
  local_c0 = 0x12;
  local_bc = 0xf;
  local_b8 = 0;
  iVar1 = ioctl(*(int *)(param_1 + 4),0x44,&local_98);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  local_98 = *(undefined4 *)(param_1 + 0xc);
  local_90 = &local_f4;
  local_94 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x4c) = local_f4;
  *(undefined4 *)(param_1 + 0x50) = local_f0;
  *(undefined4 *)(param_1 + 0x54) = local_ec;
  *(undefined4 *)(param_1 + 0x58) = local_e8;
  *(undefined4 *)(param_1 + 0x68) = local_c0;
  iVar1 = ioctl(*(int *)(param_1 + 4),0x46,&local_98);
  return iVar1;
}



int sunxi_layer_set_output_window
              (int param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  
  local_20 = &local_48;
  local_44 = *(int *)(param_1 + 0x50);
  local_48 = *(undefined4 *)(param_1 + 0x4c);
  local_24 = *(int *)(param_1 + 0x44);
  local_3c = *(uint *)(param_1 + 0x58);
  local_40 = *(undefined4 *)(param_1 + 0x54);
  local_2c = param_5;
  if (-1 < local_24) {
    bVar2 = (int)param_5 < 0;
    bVar3 = param_5 == 0;
    if (0 < (int)param_5) {
      bVar2 = param_4 < 0;
      bVar3 = param_4 == 0;
    }
    if (!bVar3 && !bVar2) {
      local_38 = param_2;
      local_34 = param_3;
      local_30 = param_4;
      if (*(int *)(param_1 + 0x68) == 0x12) {
        if (param_3 < 0) {
          local_34 = 0;
          local_2c = param_3 + param_5;
          iVar1 = SUB84(ROUND((0.00000000 - (double)(longlong)param_3 * (double)(ulonglong)local_3c)
                              / (double)(ulonglong)param_5),0);
          local_44 = local_44 + iVar1;
          local_3c = local_3c - iVar1;
        }
        else {
          if (-1 < *(int *)(param_1 + 0x60)) goto LAB_00017178;
        }
        if ((local_3c == 0) || (local_2c == 0)) {
          local_28 = *(undefined4 *)(param_1 + 0xc);
          local_34 = 0;
          local_38 = 0xffffffff;
          local_20 = &local_38;
          local_30 = 1;
          local_2c = 1;
          iVar1 = ioctl(*(int *)(param_1 + 4),0x48,&local_28);
          return iVar1;
        }
        local_28 = *(undefined4 *)(param_1 + 0xc);
        iVar1 = ioctl(*(int *)(param_1 + 4),0x46,&local_28);
        if (iVar1 != 0) {
          return iVar1;
        }
        local_24 = *(int *)(param_1 + 0x44);
      }
LAB_00017178:
      local_28 = *(undefined4 *)(param_1 + 0xc);
      *(int *)(param_1 + 0x60) = param_3;
      *(undefined4 *)(param_1 + 0x5c) = param_2;
      local_20 = &local_38;
      iVar1 = ioctl(*(int *)(param_1 + 4),0x48,&local_28);
      return iVar1;
    }
  }
  return 0xffffffff;
}



int sunxi_layer_show(int param_1)

{
  int iVar1;
  undefined4 local_98;
  int local_94;
  undefined4 *local_90;
  undefined4 local_88;
  int local_84;
  
  local_84 = *(int *)(param_1 + 0x44);
  if (local_84 < 0) {
    iVar1 = -1;
  }
  else {
    if ((*(int *)(param_1 + 0x68) == 0x12) && (*(int *)(param_1 + 100) == 0)) {
      local_98 = *(undefined4 *)(param_1 + 0xc);
      local_94 = local_84;
      local_90 = &local_88;
      iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_98);
      if (iVar1 < 0) {
        local_84 = *(int *)(param_1 + 0x44);
      }
      else {
        local_94 = *(int *)(param_1 + 0x44);
        local_98 = *(undefined4 *)(param_1 + 0xc);
        local_88 = 4;
        local_90 = &local_88;
        iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_98);
        local_84 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 100) = 1;
        }
      }
    }
    local_88 = *(undefined4 *)(param_1 + 0xc);
    ioctl(*(int *)(param_1 + 4),0x56,&local_88);
    local_88 = *(undefined4 *)(param_1 + 0xc);
    local_84 = *(undefined4 *)(param_1 + 0x44);
    iVar1 = ioctl(*(int *)(param_1 + 4),0x42,&local_88);
  }
  return iVar1;
}



int sunxi_layer_hide(int param_1)

{
  int iVar1;
  undefined4 local_98;
  int local_94;
  undefined4 *local_90;
  undefined4 local_88;
  int local_84;
  
  local_84 = *(int *)(param_1 + 0x44);
  if (local_84 < 0) {
    iVar1 = -1;
  }
  else {
    if (*(int *)(param_1 + 100) != 0) {
      local_98 = *(undefined4 *)(param_1 + 0xc);
      local_94 = local_84;
      local_90 = &local_88;
      iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_98);
      if (iVar1 < 0) {
        local_84 = *(int *)(param_1 + 0x44);
      }
      else {
        local_94 = *(int *)(param_1 + 0x44);
        local_98 = *(undefined4 *)(param_1 + 0xc);
        local_88 = 0;
        local_90 = &local_88;
        iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_98);
        local_84 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 100) = 0;
        }
      }
    }
    local_88 = *(undefined4 *)(param_1 + 0xc);
    iVar1 = ioctl(*(int *)(param_1 + 4),0x43,&local_88);
  }
  return iVar1;
}



int sunxi_layer_set_colorkey(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_40;
  undefined *local_3c;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_40 = *(undefined4 *)(param_1 + 0xc);
  local_30 = (undefined)((uint)param_2 >> 0x18);
  local_2d = (undefined)param_2;
  local_2f = (undefined)((uint)(param_2 << 8) >> 0x18);
  local_3c = &local_30;
  local_2e = (undefined)((uint)(param_2 << 0x10) >> 0x18);
  local_28 = 2;
  local_24 = 2;
  local_20 = 2;
  local_2c = local_30;
  local_2b = local_2f;
  local_2a = local_2e;
  local_29 = local_2d;
  iVar1 = ioctl(*(int *)(param_1 + 4),4,&local_40);
  if (iVar1 == 0) {
    local_40 = *(undefined4 *)(param_1 + 0xc);
    local_3c = *(undefined **)(param_1 + 0x40);
    iVar1 = ioctl(*(int *)(param_1 + 4),0x57,&local_40);
    if (-1 < iVar1) {
      local_40 = *(undefined4 *)(param_1 + 0xc);
      local_3c = *(undefined **)(param_1 + 0x44);
      iVar1 = ioctl(*(int *)(param_1 + 4),0x57,&local_40);
      if (-1 < iVar1) {
        local_40 = *(undefined4 *)(param_1 + 0xc);
        local_3c = *(undefined **)(param_1 + 0x44);
        iVar1 = ioctl(*(int *)(param_1 + 4),0x51,&local_40);
        if (-1 < iVar1) {
          local_40 = *(undefined4 *)(param_1 + 0xc);
          local_3c = *(undefined **)(param_1 + 0x40);
          iVar1 = ioctl(*(int *)(param_1 + 4),0x52,&local_40);
          if (-1 < iVar1) {
            local_40 = *(undefined4 *)(param_1 + 0xc);
            local_3c = *(undefined **)(param_1 + 0x40);
            iVar1 = ioctl(*(int *)(param_1 + 4),0x4c,&local_40);
            return iVar1 >> 0x1f;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



int sunxi_layer_disable_colorkey(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_1c = *(undefined4 *)(param_1 + 0x44);
  iVar1 = ioctl(*(int *)(param_1 + 4),0x52,&local_20);
  if (-1 < iVar1) {
    local_20 = *(undefined4 *)(param_1 + 0xc);
    local_1c = *(undefined4 *)(param_1 + 0x44);
    iVar1 = ioctl(*(int *)(param_1 + 4),0x57,&local_20);
    if (-1 < iVar1) {
      local_20 = *(undefined4 *)(param_1 + 0xc);
      local_1c = *(undefined4 *)(param_1 + 0x40);
      iVar1 = ioctl(*(int *)(param_1 + 4),0x57,&local_20);
      return iVar1 >> 0x1f;
    }
  }
  return 0xffffffff;
}



void sunxi_wait_for_vsync(int *param_1)

{
  ioctl(*param_1,0x40044620,0);
  return;
}



undefined4 osd_init(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 *local_dc;
  uint local_d8;
  undefined4 local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_98;
  int local_94;
  undefined4 *local_90;
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  local_c4 = *(uint *)(param_1 + 0x10);
  iVar3 = sunxi_disp_init("/dev/fb0",osd_map_ram_base);
  if (iVar3 == 0) {
    disp = iVar3;
    return 0xffffffff;
  }
  local_e4 = *(undefined4 *)(iVar3 + 0x4c);
  local_e0 = *(int *)(iVar3 + 0x50);
  local_dc = *(undefined4 **)(iVar3 + 0x54);
  local_d8 = *(uint *)(iVar3 + 0x58);
  iVar5 = *(int *)(iVar3 + 0x44);
  local_c8 = local_c4;
  disp = iVar3;
  local_d4 = uVar6;
  local_d0 = iVar7;
  local_cc = uVar4;
  if (iVar5 < 0) {
    memset(&local_d4,0,0x3c);
    return 0;
  }
  uVar2 = local_c4;
  if (0 < (int)local_c4) {
    uVar2 = uVar4;
  }
  local_ec = uVar4;
  local_e8 = local_c4;
  if ((int)uVar2 < 1) {
    local_f4 = 0;
    local_f0 = 0;
    iVar7 = *(int *)(iVar3 + 0x18);
    memset(&local_d4,0,0x3c);
    goto LAB_0001750e;
  }
  if (*(int *)(iVar3 + 0x68) == 0x12) {
    if (iVar7 < 0) {
      local_d0 = 0;
      iVar1 = SUB84(ROUND((0.00000000 - (double)(longlong)iVar7 * (double)(ulonglong)local_d8) /
                          (double)(ulonglong)local_c4),0);
      local_e0 = local_e0 + iVar1;
      local_d8 = local_d8 - iVar1;
      local_c8 = iVar7 + local_c4;
    }
    else {
      if (-1 < *(int *)(iVar3 + 0x60)) goto LAB_000174c6;
    }
    local_94 = iVar5;
    if ((local_d8 == 0) || (local_c8 == 0)) {
      local_d4 = 0xffffffff;
      local_d0 = 0;
      local_90 = &local_d4;
      local_cc = 1;
      local_c8 = 1;
      local_98 = *(undefined4 *)(iVar3 + 0xc);
      ioctl(*(int *)(iVar3 + 4),0x48,&local_98);
      iVar5 = *(int *)(disp + 0x44);
    }
    else {
      local_98 = *(undefined4 *)(iVar3 + 0xc);
      local_90 = &local_e4;
      iVar5 = ioctl(*(int *)(iVar3 + 4),0x46,&local_98);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar3 + 0x44);
        goto LAB_000174c6;
      }
      iVar5 = *(int *)(disp + 0x44);
    }
  }
  else {
LAB_000174c6:
    local_98 = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0x5c) = uVar6;
    *(int *)(iVar3 + 0x60) = iVar7;
    local_90 = &local_d4;
    local_94 = iVar5;
    ioctl(*(int *)(iVar3 + 4),0x48,&local_98);
    iVar5 = *(int *)(disp + 0x44);
  }
  iVar3 = disp;
  local_f4 = 0;
  local_f0 = 0;
  iVar7 = *(int *)(disp + 0x18);
  memset(&local_d4,0,0x3c);
  if (iVar5 < 0) {
    return 0;
  }
LAB_0001750e:
  if (*(int *)(iVar3 + 100) != 0) {
    local_e4 = *(undefined4 *)(iVar3 + 0xc);
    local_e0 = iVar5;
    local_dc = &local_98;
    iVar5 = ioctl(*(int *)(iVar3 + 4),0x4b,&local_e4);
    if (iVar5 < 0) {
      return 0;
    }
    local_e4 = *(undefined4 *)(iVar3 + 0xc);
    local_98 = 0;
    local_e0 = *(int *)(iVar3 + 0x44);
    local_dc = &local_98;
    iVar5 = ioctl(*(int *)(iVar3 + 4),0x4a,&local_e4);
    if (iVar5 != 0) {
      return 0;
    }
    *(undefined4 *)(iVar3 + 100) = 0;
  }
  local_d4 = 0x5fe00000;
  __printf_chk(1,&DAT_0002760c,iVar7);
  if (iVar7 == 0x20) {
    local_bc = 0;
    local_c0 = 10;
    local_c8 = uVar4;
  }
  else {
    if (iVar7 != 0x10) {
      return 0;
    }
    local_c0 = 5;
    local_bc = 0xd;
    local_c8 = uVar4 << 1;
  }
  local_b8 = 1;
  local_98 = *(undefined4 *)(iVar3 + 0xc);
  local_94 = *(undefined4 *)(iVar3 + 0x44);
  local_90 = &local_d4;
  iVar7 = ioctl(*(int *)(iVar3 + 4),0x44,&local_98);
  if (-1 < iVar7) {
    local_90 = &local_f4;
    *(undefined4 *)(iVar3 + 0x4c) = local_f4;
    local_98 = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0x50) = local_f0;
    *(uint *)(iVar3 + 0x54) = local_ec;
    *(uint *)(iVar3 + 0x58) = local_e8;
    *(undefined4 *)(iVar3 + 0x68) = local_c0;
    local_94 = *(undefined4 *)(iVar3 + 0x44);
    ioctl(*(int *)(iVar3 + 4),0x46,&local_98);
  }
  return 0;
}



int osd_cmd(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 local_80;
  int local_7c;
  
  iVar1 = disp;
  if (param_1 == 1) {
    local_7c = *(int *)(disp + 0x44);
    if (-1 < local_7c) {
      if ((*(int *)(disp + 0x68) == 0x12) && (*(int *)(disp + 100) == 0)) {
        local_90 = *(undefined4 *)(disp + 0xc);
        local_8c = local_7c;
        local_88 = &local_80;
        iVar2 = ioctl(*(int *)(disp + 4),0x4b,&local_90);
        if (iVar2 < 0) {
          local_7c = *(int *)(iVar1 + 0x44);
        }
        else {
          local_90 = *(undefined4 *)(iVar1 + 0xc);
          local_80 = 4;
          local_8c = *(int *)(iVar1 + 0x44);
          local_88 = &local_80;
          iVar2 = ioctl(*(int *)(iVar1 + 4),0x4a,&local_90);
          local_7c = *(int *)(iVar1 + 0x44);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar1 + 100) = 1;
          }
        }
      }
      local_80 = *(undefined4 *)(iVar1 + 0xc);
      ioctl(*(int *)(iVar1 + 4),0x56,&local_80);
      local_80 = *(undefined4 *)(iVar1 + 0xc);
      local_7c = *(undefined4 *)(iVar1 + 0x44);
      ioctl(*(int *)(iVar1 + 4),0x42,&local_80);
      return 1;
    }
  }
  else {
    if ((param_1 == 2) && (local_7c = *(int *)(disp + 0x44), -1 < local_7c)) {
      if (*(int *)(disp + 100) != 0) {
        local_90 = *(undefined4 *)(disp + 0xc);
        local_8c = local_7c;
        local_88 = &local_80;
        iVar2 = ioctl(*(int *)(disp + 4),0x4b,&local_90);
        if (iVar2 < 0) {
          local_7c = *(int *)(iVar1 + 0x44);
        }
        else {
          local_90 = *(undefined4 *)(iVar1 + 0xc);
          local_80 = 0;
          local_8c = *(int *)(iVar1 + 0x44);
          local_88 = &local_80;
          iVar2 = ioctl(*(int *)(iVar1 + 4),0x4a,&local_90);
          local_7c = *(int *)(iVar1 + 0x44);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar1 + 100) = 0;
          }
        }
      }
      local_80 = *(undefined4 *)(iVar1 + 0xc);
      ioctl(*(int *)(iVar1 + 4),0x43,&local_80);
    }
  }
  return param_1;
}



undefined4 osd_quit(void)

{
  int *__ptr;
  int local_20;
  int local_1c;
  
  sleep(1);
  __ptr = disp;
  if (disp != (int *)0x0) {
    if (-1 < disp[1]) {
      if (-1 < disp[2]) {
        close(disp[2]);
      }
      if (-1 < __ptr[0x11]) {
        local_20 = __ptr[3];
        local_1c = __ptr[0x11];
        ioctl(__ptr[1],0x41,&local_20);
        __ptr[0x11] = -1;
        __ptr[0x12] = 0;
      }
      if (__ptr[0xc] == 0) {
        munmap((void *)__ptr[7],__ptr[9]);
      }
      close(*__ptr);
      close(__ptr[1]);
      __ptr[1] = -1;
      free(__ptr);
    }
    disp = (int *)0x0;
  }
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Get_FB_Physical_Addr()

undefined4 Get_FB_Physical_Addr(void)

{
  int __fd;
  int iVar1;
  undefined auStack88 [16];
  undefined4 local_48;
  int local_14;
  
  local_14 = __stack_chk_guard;
  __fd = open("/dev/fb0",2);
  if (__fd < 0) {
    puts("Error : Can not open framebuffer device");
    local_48 = 0;
  }
  else {
    iVar1 = ioctl(__fd,0x4602,auStack88);
    if (iVar1 == 0) {
      close(__fd);
    }
    else {
      puts("Error reading fixed information");
      local_48 = 0;
    }
  }
  if (local_14 == __stack_chk_guard) {
    return local_48;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined4 Get_FB_Resolution(undefined4 *param_1,undefined4 *param_2)

{
  int __fd;
  int iVar1;
  undefined4 local_b0;
  undefined4 local_ac;
  
  __fd = open("/dev/fb0",2);
  if (__fd < 0) {
    puts("Error : Can not open framebuffer device");
    return 0;
  }
  iVar1 = ioctl(__fd,0x4600,&local_b0);
  if (iVar1 == 0) {
    *param_1 = local_b0;
    *param_2 = local_ac;
    close(__fd);
    return local_b0;
  }
  puts("Error reading variable information");
  close(__fd);
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Do_mmap_get_mapaddr()

undefined4 Do_mmap_get_mapaddr(void)

{
  undefined4 uVar1;
  int __fd;
  int iVar2;
  undefined auStack88 [16];
  undefined4 local_48;
  int local_14;
  
  local_14 = __stack_chk_guard;
  fd = open("/dev/mem",0x101002);
  if (fd == -1) {
    uVar1 = 1;
  }
  else {
    map_ram_base = mmap((void *)0x0,0x1fffff,3,1,fd,0x5f800000);
    if (map_ram_base == (void *)0xffffffff) {
      puts("Error : map_ram_base mmap");
      uVar1 = 2;
    }
    else {
      __fd = open("/dev/fb0",2);
      if (__fd < 0) {
        puts("Error : Can not open framebuffer device");
        local_48 = 0;
      }
      else {
        iVar2 = ioctl(__fd,0x4602,auStack88);
        if (iVar2 == 0) {
          close(__fd);
        }
        else {
          puts("Error reading fixed information");
          local_48 = 0;
        }
      }
      uVar1 = 0;
      dst_base_fb = local_48;
    }
  }
  if (local_14 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4 s3c_fb_g2d_free(void)

{
  munmap(map_ram_base,0x1fffff);
  close(fd);
  close(g2d_fd);
  return 0;
}



void set_control_h_or_v(void)

{
  return;
}



undefined4
set_coin_enable_gpc6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int __fd;
  
  __fd = open("/dev/bitctrl",2,param_3,param_4,param_4);
  if (-1 < __fd) {
    ioctl(__fd,2,param_1);
    close(__fd);
    return 0;
  }
  perror("open device bitctrl");
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined4
set_coin_count_enable_gpc4
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int __fd;
  
  __fd = open("/dev/bitctrl",2,param_3,param_4,param_4);
  if (-1 < __fd) {
    ioctl(__fd,1,param_1);
    close(__fd);
    return 0;
  }
  perror("open device bitctrl");
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined4 s3c_fb_g2d_init(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  undefined auStack88 [16];
  undefined4 local_48;
  int local_14;
  
  local_14 = __stack_chk_guard;
  fd = open("/dev/mem",0x101002);
  if (fd != -1) {
    map_ram_base = mmap((void *)0x0,0x1fffff,3,1,fd,0x5f800000);
    if (map_ram_base != (void *)0xffffffff) {
      __fd = open("/dev/fb0",2);
      if (__fd < 0) {
        puts("Error : Can not open framebuffer device");
        local_48 = 0;
      }
      else {
        iVar1 = ioctl(__fd,0x4602,auStack88);
        if (iVar1 == 0) {
          close(__fd);
        }
        else {
          puts("Error reading fixed information");
          local_48 = 0;
        }
      }
      dst_base_fb = local_48;
      g2d_fd = open("/dev/g2d",2);
      if (g2d_fd == -1) {
        puts(" g2d open error .  ");
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
      goto LAB_00017b40;
    }
    puts("Error : map_ram_base mmap");
  }
  uVar2 = 1;
LAB_00017b40:
  if (local_14 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void s3c_g2d_copy_stretch(void)

{
  ioctl(g2d_fd,0x52,xargs);
  return;
}



void s3c_g2d_copy_normal(void)

{
  ioctl(g2d_fd,0x50,args);
  return;
}



void s3c_g2d_copy_normal_ROT_once_horizontal_640480(void)

{
  args._0_4_ = is_bit2_flip;
  if (is_bit2_flip != 0) {
    args._0_4_ = 0x100;
  }
  args._4_4_ = 0x5f800000;
  args._16_4_ = 0x280;
  args._20_4_ = 0x1e0;
  args._24_4_ = 0x10;
  args._28_4_ = 0;
  args._32_4_ = 0;
  args._36_4_ = 0;
  args._40_4_ = 0x27f;
  args._44_4_ = 0x1df;
  args._48_4_ = dst_base_fb;
  args._60_4_ = 0x280;
  args._64_4_ = 0x1e0;
  args._68_4_ = 0;
  args._72_4_ = 0;
  args._76_4_ = 0;
  args._80_4_ = 0;
  args._84_4_ = 0;
  args._88_4_ = 0;
  return;
}



void s3c_g2d_copy_normal_ROT_once_horizontal_384240(void)

{
  args._0_4_ = is_bit2_flip;
  if (is_bit2_flip != 0) {
    args._0_4_ = 0x100;
  }
  args._4_4_ = 0x5f800000;
  args._16_4_ = 0x180;
  args._20_4_ = 0xf0;
  args._24_4_ = 0x10;
  args._28_4_ = 0;
  args._32_4_ = 0;
  args._36_4_ = 0;
  args._40_4_ = 0x17f;
  args._44_4_ = 0xef;
  args._48_4_ = dst_base_fb;
  args._60_4_ = 0x180;
  args._64_4_ = 0xf0;
  args._68_4_ = 0;
  args._72_4_ = 0;
  args._76_4_ = 0;
  args._80_4_ = 0;
  args._84_4_ = 0;
  args._88_4_ = 0;
  return;
}



void s3c_g2d_copy_normal_ROT_once_horizontal_320240(void)

{
  args._0_4_ = is_bit2_flip;
  if (is_bit2_flip != 0) {
    args._0_4_ = 0x100;
  }
  args._4_4_ = 0x5f800000;
  args._16_4_ = 0x140;
  args._20_4_ = 0xf0;
  args._24_4_ = 0x10;
  args._28_4_ = 0;
  args._32_4_ = 0;
  args._36_4_ = 0;
  args._40_4_ = 0x13f;
  args._44_4_ = 0xef;
  args._48_4_ = dst_base_fb;
  args._60_4_ = 0x140;
  args._64_4_ = 0xf0;
  args._68_4_ = 0;
  args._72_4_ = 0;
  args._76_4_ = 0;
  args._80_4_ = 0;
  args._84_4_ = 0;
  args._88_4_ = 0;
  return;
}



void s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(undefined4 param_1,undefined4 param_2)

{
  args._0_4_ = is_bit2_flip;
  if (is_bit2_flip != 0) {
    args._0_4_ = 0x100;
  }
  args._4_4_ = 0x5f800000;
  args._16_4_ = param_1;
  args._20_4_ = param_2;
  args._24_4_ = 0x10;
  args._28_4_ = 0;
  args._32_4_ = 0;
  args._36_4_ = 0;
  args._40_4_ = param_1;
  args._44_4_ = param_2;
  args._48_4_ = dst_base_fb;
  args._60_4_ = param_1;
  args._64_4_ = param_2;
  args._68_4_ = 0;
  args._72_4_ = 0;
  args._76_4_ = 0;
  args._80_4_ = 0;
  args._84_4_ = 0;
  args._88_4_ = 0;
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code **ppcVar2;
  
  _init(param_1);
  ppcVar2 = (code **)0x28e9c;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    ppcVar2 = ppcVar2 + 1;
    (**ppcVar2)(param_1,param_2,param_3,*ppcVar2,param_4);
  } while (iVar1 != 8);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


