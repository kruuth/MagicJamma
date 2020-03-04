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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

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



void Mix_PauseMusic(void)

{
  Mix_PauseMusic();
  return;
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



void Mix_OpenAudio(void)

{
  Mix_OpenAudio();
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



void Mix_LoadWAV_RW(void)

{
  Mix_LoadWAV_RW();
  return;
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



void SDL_RWFromFile(void)

{
  SDL_RWFromFile();
  return;
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



void Mix_FreeChunk(void)

{
  Mix_FreeChunk();
  return;
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



void Mix_VolumeMusic(void)

{
  Mix_VolumeMusic();
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



void Mix_Volume(void)

{
  Mix_Volume();
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



void Mix_CloseAudio(void)

{
  Mix_CloseAudio();
  return;
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

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = remove(__filename);
  return iVar1;
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



void TTF_RenderUTF8_Blended(void)

{
  TTF_RenderUTF8_Blended();
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



void Mix_PlayChannelTimed(void)

{
  Mix_PlayChannelTimed();
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
// std::basic_ostream<char, std::char_traits<char>>&
// std::operator<<<std::char_traits<char>>(std::basic_ostream<char, std::char_traits<char>>&, char
// const*) [clone .part.15]

basic_ostream * operator___std__char_traits_char__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = (basic_ostream *)clear((_Ios_Iostate)(param_1 + *(int *)(*(int *)param_1 + -0xc)));
  return pbVar1;
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



int * main(int param_1,int param_2)

{
  int __fd;
  int iVar1;
  basic_ostream *this;
  int *piVar2;
  int *piVar3;
  SDL_Surface *pSVar4;
  lemon_menu *this_00;
  undefined8 uVar5;
  char local_f8 [8];
  char local_f0 [12];
  char *local_e4;
  undefined4 local_e0;
  undefined auStack220 [20];
  int local_c8;
  int local_c4;
  
  puts("xrunmh V2.731AW VGA");
  enable_print_gamelist = 0;
  if ((1 < param_1) && (__fd = strcmp(*(char **)(param_2 + 4),"gamelist"), __fd == 0)) {
    enable_print_gamelist = 1;
  }
  __fd = lkticc_init();
  if (0 < __fd) {
    puts("nr = lkticc_init();");
    system("reboot -f");
  }
  is_cn = 0;
  __fd = access("/tmp/BIT8",0);
  if (__fd == 0) {
    is_cn = 1;
  }
  is_horv_only = 0;
  __fd = access("/tmp/BIT9",0);
  if (__fd == 0) {
    is_horv_only = 1;
  }
  is_bit2_flip = 0;
  __fd = access("/tmp/BIT2",0);
  if (__fd == 0) {
    is_bit2_flip = 1;
  }
  g_r_for_cm(7);
  is_hv_mode = 0;
  __fd = access("./xrunmv",0);
  if (__fd == 0) {
    is_hv_mode = 1;
    __fd = access("/tmp/HV",0);
    if (__fd != 0) {
      system("reboot -f");
      return (int *)0;
    }
  }
  if (is_cn == 0) {
    __fd = auth_file_from_sdcard();
  }
  else {
    __fd = auth_file_from_sdcard_cn();
  }
  if (0 < __fd) {
    system("reboot -f");
  }
  __fd = 600;
  do {
    iVar1 = g_j_v_vga(ybuf,xbuf);
    if (0xe < iVar1) goto LAB_0000b42a;
    while( true ) {
      Reset_Without_Saving();
      usleep(700000);
      usleep(100000);
      iVar1 = g_r_for_cm(6);
      if (0 < iVar1) break;
      usleep(400000);
    }
    __fd = __fd + -1;
  } while (__fd != 0);
  system("reboot -f");
LAB_0000b42a:
  lkticc_close();
  __fd = access("/tmp/BIT1",0);
  is_autorun = 0;
  is_edit_mode = count_leading_zeroes(__fd);
  is_edit_mode = is_edit_mode >> 5;
  __fd = access("/tmp/BIT4",0);
  if (__fd == 0) {
    setgame_len = Read_nvram_setgame(setgame);
    is_autorun = 1;
  }
  needto_rungame = 0;
  needto_reboot = 0;
  needto_editgamelist = 0;
  needto_vert = 0;
  __fd = access("/tmp/BOOTOVER",0);
  if ((__fd != 0) && (__fd = access("/tmp/VERT",0), __fd == 0)) {
    system("echo 0 >> /tmp/BOOTOVER");
    needto_vert = 1;
    basic_string((char *)&local_c8,(allocator *)"cd /sdcard ; ./xrunmv ");
    assign((basic_string *)&save_cmd);
    _M_dispose((allocator *)(local_c8 + -0xc));
  }
  basic_string((char *)&local_e4,(allocator *)"./xrun");
  load((options *)&g_opts,local_e4);
  __fd = *(int *)(log._0_4_ + -0xc);
  *(undefined4 *)(*(int *)(log + __fd + 0x78) + 0x20) = 0;
  *(undefined4 *)(*(int *)(log + __fd + 0x78) + 0x24) = 2;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"main: setting log level ",0x18);
  this = (basic_ostream *)operator__((basic_ostream_char_std__char_traits_char__ *)log,0);
  endl_char_std__char_traits_char__(this);
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 2;
  __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"Lemon Launcher 0.0.6",0x14);
  endl_char_std__char_traits_char__((basic_ostream *)log);
  iVar1 = 5;
  __fd = access("/tmp/BIT3",0);
  is_free_mode = count_leading_zeroes(__fd);
  is_free_mode = is_free_mode >> 5;
  __fd = access("/tmp/BIT5",0);
  is_free_browse = count_leading_zeroes(__fd);
  is_free_browse = is_free_browse >> 5;
  __fd = access("/tmp/BIT6",0);
  is_stop_timer = count_leading_zeroes(__fd);
  is_stop_timer = is_stop_timer >> 5;
  __fd = access("/tmp/BIT7",0);
  is_maxii_board = 0;
  music_on = count_leading_zeroes(__fd);
  music_on = music_on >> 5;
  do {
    __fd = Read_Y3();
    if (__fd == 0x5500) {
      is_maxii_board = 1;
      break;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  is_advertisement_mode = check_if_is_advertisement_mode();
  save_coin = 0;
LAB_0000b5a2:
  do {
    is_home_mode = 0;
    __fd = access("/tmp/HOME",0);
    if (__fd == 0) {
      is_home_mode = 1;
    }
    else {
      if (is_home_mode == 0) {
        __fd = 5;
        do {
          iVar1 = access("/dev/input/event3",0);
          if (iVar1 == 0) {
            is_home_mode = 1;
            system("echo 1 >> /tmp/HOME");
            break;
          }
          SDL_Delay(10);
          __fd = __fd + -1;
        } while (__fd != 0);
      }
    }
    __fd = access("/dev/input/event0",0);
    if ((__fd == 0) && (__fd = access("/dev/js0",0), __fd != 0)) {
      system("ln -s /dev/input/js0   /dev/js0");
    }
    __fd = access("/dev/input/event1",0);
    if ((__fd == 0) && (__fd = access("/dev/js1",0), __fd != 0)) {
      system("ln -s /dev/input/js1   /dev/js1");
    }
    __fd = access("/dev/input/event2",0);
    if ((__fd == 0) && (__fd = access("/dev/js2",0), __fd != 0)) {
      system("ln -s /dev/input/js2   /dev/js2");
    }
    __fd = access("/dev/input/event3",0);
    if ((__fd == 0) && (__fd = access("/dev/js3",0), __fd != 0)) {
      system("ln -s /dev/input/js3   /dev/js3");
    }
    dip_val = 0;
    __fd = lkticc_init();
    if (__fd < 1) {
      dip_val = read_dipsw_Y2_16();
      lkticc_close();
    }
    else {
      system("reboot -f");
    }
    coinset_val = Read_nvram_coinsettings();
    if (3 < coinset_val - 1U) {
      coinset_val = 3;
    }
    SDL_Init(0x231);
    s3c_fb_g2d_init();
    SDL_ShowCursor(0);
    SDL_EnableKeyRepeat(500,0x1e);
    Load_music();
    __fd = open("/dev/fb0",2);
    if (__fd < 0) {
      puts("Error : Can not open framebuffer device");
LAB_0000baf4:
      xres = get_int((char *)&g_opts);
      yres = get_int((char *)&g_opts);
    }
    else {
      iVar1 = ioctl(__fd,0x4600,&local_c8);
      if (iVar1 != 0) {
        puts("Error reading variable information");
        close(__fd);
        goto LAB_0000baf4;
      }
      xres = local_c8;
      yres = local_c4;
      close(__fd);
      if (local_c8 < 1) goto LAB_0000baf4;
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
    pSVar4 = (SDL_Surface *)get_int((char *)&g_opts);
    this_00 = (lemon_menu *)get_bool((char *)&g_opts);
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 2;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"main: using graphics mode: ",0x1b);
    this = (basic_ostream *)operator__((basic_ostream_char_std__char_traits_char__ *)log,xres);
    local_f8[0] = 'x';
    this = __ostream_insert_char_std__char_traits_char__(this,local_f8,1);
    this = (basic_ostream *)operator__((basic_ostream_char_std__char_traits_char__ *)this,yres);
    local_f0[0] = 'x';
    this = __ostream_insert_char_std__char_traits_char__(this,local_f0,1);
    piVar3 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)this,(int)pSVar4);
    piVar2 = *(int **)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x7c);
    if (piVar2 == (int *)0x0) {
      uVar5 = __throw_bad_cast();
      goto LAB_0000bd5a;
    }
    if (*(char *)(piVar2 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar2 + 0x18))(piVar2,10);
    }
    put((char)piVar3);
    flush();
    pSVar4 = (SDL_Surface *)SDL_SetVideoMode(xres,yres,pSVar4);
    if (pSVar4 == (SDL_Surface *)0x0) {
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 1;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"main: unable to open screen",0x1b);
      endl_char_std__char_traits_char__((basic_ostream *)log);
LAB_0000bcb8:
      piVar3 = (int *)0x1;
LAB_0000bcbc:
      _M_dispose((allocator *)(local_e4 + -0xc));
      return piVar3;
    }
    SDL_JoystickEventState(1);
    if (is_home_mode == 0) {
      sdl_joy = SDL_JoystickOpen();
      sdl_joy2 = SDL_JoystickOpen(1);
    }
    else {
      sdl_joy = SDL_JoystickOpen(2);
      sdl_joy2 = SDL_JoystickOpen(3);
    }
    piVar3 = (int *)TTF_Init();
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 1;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"main: unable to start font engine",0x21);
      endl_char_std__char_traits_char__((basic_ostream *)log);
      SDL_Quit();
      goto LAB_0000bcb8;
    }
    SDL_Delay(100);
    while (__fd = SDL_PollEvent(auStack220), 0 < __fd) {
      SDL_Delay(10);
    }
    set_control_h_or_v(0);
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"menu = new lemon_menu(screen);",0x1e);
    piVar2 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar2 == (int *)0x0) {
      uVar5 = __throw_bad_cast();
      goto LAB_0000bd56;
    }
    if (*(char *)(piVar2 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar2 + 0x18))(piVar2,10);
    }
    put(-0x30);
    flush();
    puts("M");
    this_00 = (lemon_menu *)operator_new(0x38);
    lemon_menu(this_00,pSVar4);
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"run menu->main_loop",0x13);
    piVar2 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar2 == (int *)0x0) {
      __throw_bad_cast();
      goto LAB_0000bda2;
    }
    if (*(char *)(piVar2 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar2 + 0x18))(piVar2,10);
    }
    put(-0x30);
    flush();
    if (is_home_mode == 0) {
      main_loop(this_00);
    }
    else {
      main_loop_wireless(this_00);
    }
    while( true ) {
      if (this_00 != (lemon_menu *)0x0) {
        _lemon_menu(this_00);
        operator_delete(this_00);
      }
      if (0 < needto_vert) {
        set_control_h_or_v(1);
      }
      SDL_FreeSurface(pSVar4);
      gp2x_dev = open("/dev/mixer",1);
      local_e0 = 0x6666;
      master_volume = 0x80;
      ioctl(gp2x_dev,0xc0044d00,&local_e0);
      ioctl(gp2x_dev,0xc0044d04,&local_e0);
      close(gp2x_dev);
      Mix_PauseMusic();
      if (menu_sound != 0) {
        Mix_FreeChunk();
      }
      if (coin_sound != 0) {
        Mix_FreeChunk();
      }
      if (page_sound != 0) {
        Mix_FreeChunk();
      }
      if (bg_music != 0) {
        Mix_FreeChunk();
      }
      Mix_CloseAudio();
      TTF_Quit();
      if (sdl_joy != 0) {
        SDL_JoystickClose();
      }
      if (sdl_joy2 != 0) {
        SDL_JoystickClose();
      }
      SDL_Quit();
      s3c_fb_g2d_free();
      if (needto_rungame < 1) {
        if (0 < needto_reboot) {
          needto_reboot = 0x55;
          goto LAB_0000b5a2;
        }
        if (0 < needto_editgamelist) {
          *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
          __ostream_insert_char_std__char_traits_char__
                    ((basic_ostream *)log,"handle_run(SDL_Quit()): ",0x18);
          this = __ostream_insert_char_std__char_traits_char__
                           ((basic_ostream *)log,save_cmd,*(int *)(save_cmd + -0xc));
          endl_char_std__char_traits_char__(this);
          system(save_cmd);
          needto_editgamelist = 0x55;
          goto LAB_0000b5a2;
        }
        if (0 < needto_vert) {
          *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
          __ostream_insert_char_std__char_traits_char__
                    ((basic_ostream *)log,"handle_run(SDL_Quit()): ",0x18);
          this = __ostream_insert_char_std__char_traits_char__
                           ((basic_ostream *)log,save_cmd,*(int *)(save_cmd + -0xc));
          endl_char_std__char_traits_char__(this);
          system(save_cmd);
          needto_vert = 0;
          goto LAB_0000b5a2;
        }
        lkticc_close();
        goto LAB_0000bcbc;
      }
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"handle_run(SDL_Quit()): ",0x18);
      piVar3 = (int *)__ostream_insert_char_std__char_traits_char__
                                ((basic_ostream *)log,save_cmd,*(int *)(save_cmd + -0xc));
      piVar2 = *(int **)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x7c);
      if (piVar2 != (int *)0x0) break;
LAB_0000bda2:
      uVar5 = __throw_bad_cast();
LAB_0000bd56:
      this_00 = (lemon_menu *)0x0;
LAB_0000bd5a:
      while ((int)uVar5 != 1) {
        _M_dispose((allocator *)(local_e4 + -0xc));
        uVar5 = __cxa_end_cleanup();
        operator_delete(this_00);
        this_00 = (lemon_menu *)0x0;
      }
      __cxa_begin_catch((int)((ulonglong)uVar5 >> 0x20));
      __cxa_end_catch();
    }
    if (*(char *)(piVar2 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar2 + 0x18))(piVar2,10);
    }
    put((char)piVar3);
    flush();
    system(save_cmd);
    needto_rungame = 0x55;
    __fd = access("/tmp/BIT1",0);
    if (__fd == 0) {
      system("sync");
      puts("w.");
    }
  } while( true );
}



void _GLOBAL__sub_I_setgame(void)

{
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  save_cmd = 0x34644;
  __aeabi_atexit(&save_cmd,_ZNSsD1Ev,&__dso_handle);
  return;
}



void _GLOBAL__sub_I_jbuf_lc1(void)

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
  __aeabi_atexit(&g_opts,0x143f5,&__dso_handle,in_r3);
  return;
}



// ll::_GLOBAL__sub_I_log(void)

void _GLOBAL__sub_I_log(void)

{
  undefined **ppuVar1;
  
  Init((Init *)&__ioinit);
  __aeabi_atexit(&__ioinit,_ZNSt8ios_base4InitD1Ev,&__dso_handle);
  ios_base((ios_base *)(log + 4));
  log._4_4_ = (undefined **)0x344d0;
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
  *ppuVar1 = (undefined *)0x34600;
  ppuVar1[3] = (undefined *)0x0;
  ppuVar1[4] = (undefined *)0x0;
  ppuVar1[5] = (undefined *)0x0;
  ppuVar1[6] = (undefined *)0x0;
  locale((locale *)(ppuVar1 + 7));
  *(undefined ***)ppuVar1 = &PTR__log_buf_1_00029ea0;
  log._0_4_ = &PTR__basic_ostream_00029ee4;
  log._4_4_ = &PTR__basic_ostream_00029ef8;
  init((basic_streambuf *)(log + 4));
  log._0_4_ = (undefined **)&DAT_00029f1c;
  log._4_4_ = (undefined **)&DAT_00029f30;
  __aeabi_atexit(log,0x14a9d,&__dso_handle);
  return;
}



void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(0xb2d1,in_stack_00000000,&stack0x00000004,0x1a781,0x1a7c1,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x0000bffc)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x0000c01e)
// WARNING: Removing unreachable block (ram,0x0000c02a)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0000c04e)
// WARNING: Removing unreachable block (ram,0x0000c05a)

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



// WARNING: Removing unreachable block (ram,0x0000c08c)

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



// WARNING: Unknown calling convention yet parameter storage is locked
// check_if_is_advertisement_mode()

undefined4 check_if_is_advertisement_mode(void)

{
  int iVar1;
  
  iVar1 = access("/sdcard/xrun/ad640.png",0);
  if ((iVar1 == 0) && (iVar1 = access("/sdcard/xrun/ad384.png",0), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// auth_file_from_sdcard()

int auth_file_from_sdcard(void)

{
  int iVar1;
  FILE *__stream;
  int iVar2;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_1c;
  
  iVar2 = 1;
  local_1c = __stack_chk_guard;
  iVar1 = access("/sdcard/xrun/games.conf",0);
  if (iVar1 == 0) {
    iVar2 = access("/sdcard/xrun/games.bin",0);
    if (iVar2 == 0) {
      cal_file_SHA1("/sdcard/xrun/games.conf");
      __stream = fopen("/sdcard/xrun/games.bin","r");
      if (__stream == (FILE *)0x0) {
        iVar2 = 3;
      }
      else {
        fread(&local_80,0x40,1,__stream);
        fclose(__stream);
        local_94 = local_68 ^ local_7c;
        local_98 = local_80 ^ local_6c;
        local_90 = local_64 ^ local_78;
        local_8c = local_60 ^ local_74;
        local_88 = local_5c ^ local_70;
        iVar1 = iVar2;
        do {
          if (*(char *)((int)&local_98 + iVar1) != Message_Digest[iVar1]) {
            iVar2 = 4;
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x14);
      }
    }
    else {
      iVar2 = 2;
    }
  }
  if (local_1c == __stack_chk_guard) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// auth_file_from_sdcard_cn()

int auth_file_from_sdcard_cn(void)

{
  int iVar1;
  FILE *__stream;
  int iVar2;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_1c;
  
  iVar2 = 1;
  local_1c = __stack_chk_guard;
  iVar1 = access("/sdcard/xrun/gamescn.conf",0);
  if (iVar1 == 0) {
    iVar2 = access("/sdcard/xrun/gamescn.bin",0);
    if (iVar2 == 0) {
      cal_file_SHA1("/sdcard/xrun/gamescn.conf");
      __stream = fopen("/sdcard/xrun/gamescn.bin","r");
      if (__stream == (FILE *)0x0) {
        iVar2 = 3;
      }
      else {
        fread(&local_80,0x40,1,__stream);
        fclose(__stream);
        local_94 = local_68 ^ local_7c;
        local_98 = local_80 ^ local_6c;
        local_90 = local_64 ^ local_78;
        local_8c = local_60 ^ local_74;
        local_88 = local_5c ^ local_70;
        iVar1 = iVar2;
        do {
          if (*(char *)((int)&local_98 + iVar1) != Message_Digest[iVar1]) {
            iVar2 = 4;
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x14);
      }
    }
    else {
      iVar2 = 2;
    }
  }
  if (local_1c == __stack_chk_guard) {
    return iVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Load_music()

undefined4 Load_music(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Mix_OpenAudio(0x5622,0x8010,2,0x1000);
  if (iVar1 != -1) {
    uVar2 = SDL_RWFromFile("./xrun/bg.wav",&DAT_0001a908);
    bg_music = Mix_LoadWAV_RW(uVar2,1);
    uVar2 = SDL_RWFromFile("./xrun/coin.wav",&DAT_0001a908);
    coin_sound = Mix_LoadWAV_RW(uVar2,1);
    uVar2 = SDL_RWFromFile("./xrun/menu.wav",&DAT_0001a908);
    menu_sound = Mix_LoadWAV_RW(uVar2,1);
    uVar2 = SDL_RWFromFile("./xrun/page.wav",&DAT_0001a908);
    page_sound = Mix_LoadWAV_RW(uVar2,1);
    Mix_Volume(0xffffffff,0x40);
    Mix_VolumeMusic(0x40);
    return 0;
  }
  puts("Mix_OpenAudio error. ");
  return 1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// clean_music()

void clean_music(void)

{
  Mix_PauseMusic();
  if (menu_sound != 0) {
    Mix_FreeChunk();
  }
  if (coin_sound != 0) {
    Mix_FreeChunk();
  }
  if (page_sound != 0) {
    Mix_FreeChunk();
  }
  if (bg_music != 0) {
    Mix_FreeChunk();
  }
  Mix_CloseAudio();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// playsound_menu()

uint playsound_menu(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Mix_PlayChannelTimed(0xffffffff,menu_sound,0,0xffffffff);
  uVar2 = count_leading_zeroes(iVar1 + 1);
  return uVar2 >> 5;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// playsound_page()

uint playsound_page(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Mix_PlayChannelTimed(0xffffffff,page_sound,0,0xffffffff);
  uVar2 = count_leading_zeroes(iVar1 + 1);
  return uVar2 >> 5;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// playsound_coin()

uint playsound_coin(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Mix_PlayChannelTimed(0xffffffff,coin_sound,0,0xffffffff);
  uVar2 = count_leading_zeroes(iVar1 + 1);
  return uVar2 >> 5;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// play_bg_music()

uint play_bg_music(void)

{
  int iVar1;
  uint uVar2;
  
  if (bg_music != 0) {
    iVar1 = Mix_PlayChannelTimed(0xffffffff,bg_music,0xffffffff,0xffffffff);
    uVar2 = count_leading_zeroes(iVar1 + 1);
    return uVar2 >> 5;
  }
  return 0;
}



// gp2x_sound_volume(int, int)

void gp2x_sound_volume(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_14;
  
  uVar1 = param_1 & ~(param_1 >> 0x1f);
  uVar2 = param_2 & ~(param_2 >> 0x1f);
  if (0x13e < (int)uVar1) {
    uVar1 = 0x13f;
  }
  if (0x13e < (int)uVar2) {
    uVar2 = 0x13f;
  }
  if (uVar1 != 0) {
    master_volume = uVar1;
  }
  local_14 = (int)(uVar2 * 0x50) / 100 | ((int)(uVar1 * 0x50) / 100) * 0x100;
  ioctl(gp2x_dev,0xc0044d00,&local_14);
  ioctl(gp2x_dev,0xc0044d04,&local_14);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// set_volume()

void set_volume(void)

{
  undefined4 local_14;
  
  gp2x_dev = open("/dev/mixer",1);
  local_14 = 0x6666;
  master_volume = 0x80;
  ioctl(gp2x_dev,0xc0044d00,&local_14);
  ioctl(gp2x_dev,0xc0044d04,&local_14);
  close(gp2x_dev);
  return;
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



// enable_osd_timer_callback(unsigned int, void*)

undefined4 enable_osd_timer_callback(uint param_1,void *param_2)

{
  undefined local_20 [4];
  undefined4 local_1c;
  
  local_20[0] = 0x18;
  local_1c = 8;
  SDL_PushEvent(local_20);
  return 0;
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



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, bool (*)(ll::item*,
// ll::item*)>(__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, __gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, bool (*)(ll::item*, ll::item*)) [clone .constprop.59]

void 
     __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
               (__normal_iterator param_1,__normal_iterator param_2,FuncDef0 *param_3)

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



// ll::lemon_menu::render_list() [clone .part.19]

void __thiscall render_list(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  if (*(int *)(this + 0x28) != 0xb4 && *(int *)(this + 0x28) != 0) {
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      uVar2 = 0x140;
    }
    else {
      uVar2 = 0x180;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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



// ll::lemon_menu::render_coin(int) [clone .part.20]

void __thiscall render_coin(lemon_menu *this,int param_1)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  
  if (is_free_mode == 0) {
    show_coin(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),param_1);
  }
  else {
    show_free(*(menu **)(this + 0x10));
  }
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  if (*(int *)(this + 0x28) != 0xb4 && *(int *)(this + 0x28) != 0) {
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      uVar2 = 0x140;
    }
    else {
      uVar2 = 0x180;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::__introsort_loop<__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, int, bool (*)(ll::item*,
// ll::item*)>(__gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, __gnu_cxx::__normal_iterator<ll::item**, std::vector<ll::item*,
// std::allocator<ll::item*>>>, int, bool (*)(ll::item*, ll::item*)) [clone .constprop.54]

void 
     __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
               (__normal_iterator param_1,__normal_iterator param_2,int param_3,FuncDef1 *param_4)

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
  FuncDef1 *param_4_00;
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
          if (-1 < iVar2) goto LAB_0000c8c2;
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
LAB_0000c8c2:
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
          param_4_00 = *(FuncDef1 **)(**(int **)param_1 + 8);
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
LAB_0000c96e:
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
    if (0 < iVar10) goto LAB_0000cb2c;
  }
  else {
    iVar10 = iVar10 * 2 + 1;
    *uVar3 = *(int **)(param_1 + iVar10 * 4);
LAB_0000cb2c:
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
  goto LAB_0000c96e;
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
    local_20 = (int)*(short *)(iVar1 + 0x7c);
    local_1c = (int)*(short *)(iVar1 + 0x7e);
    local_18 = (uint)*(ushort *)(iVar1 + 0x80);
    local_14 = (uint)*(ushort *)(iVar1 + 0x82);
    osd_init(&local_24);
    return;
  }
  iVar1 = *(int *)(this + 0x10);
  local_18 = (uint)*(ushort *)(iVar1 + 0x80);
  local_14 = (uint)*(ushort *)(iVar1 + 0x82);
  local_20 = (xres - ((int)*(short *)(iVar1 + 0x7c) + local_18)) + 1;
  local_1c = (yres - ((int)*(short *)(iVar1 + 0x7e) + local_14)) + 1;
  osd_init(&local_24);
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
  
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  if (*(int *)(this + 0x28) != 0xb4 && *(int *)(this + 0x28) != 0) {
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      uVar2 = 0x140;
    }
    else {
      uVar2 = 0x180;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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
  if (is_autorun != '\0') {
    return;
  }
  render_background(*(menu **)(this + 0x10));
  if (is_free_mode == 0) {
    show_coin((layout *)*(menu **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),0);
  }
  else {
    show_free(*(menu **)(this + 0x10));
  }
  show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  return;
}



// ll::lemon_menu::render()

void __thiscall render(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  
  if (is_autorun == '\0') {
    render(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    __dest = map_ram_base;
    iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
    memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
    SDL_FreeSurface(iVar1);
    if (*(int *)(this + 0x28) == 0xb4 || *(int *)(this + 0x28) == 0) {
      if (is_cga != 0) {
        if (is_cga < 0x65) {
          uVar2 = 0x140;
        }
        else {
          uVar2 = 0x180;
        }
        s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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
  }
  return;
}



// ll::lemon_menu::render_list()

void __thiscall render_list(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  
  if (is_autorun == '\0') {
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    __dest = map_ram_base;
    iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
    memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
    SDL_FreeSurface(iVar1);
    if (*(int *)(this + 0x28) == 0xb4 || *(int *)(this + 0x28) == 0) {
      if (is_cga != 0) {
        if (is_cga < 0x65) {
          uVar2 = 0x140;
        }
        else {
          uVar2 = 0x180;
        }
        s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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
  }
  return;
}



// ll::lemon_menu::render_time_count()

void __thiscall render_time_count(lemon_menu *this)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  
  if (is_autorun == '\0') {
    show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
    __dest = map_ram_base;
    iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
    memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
    SDL_FreeSurface(iVar1);
    if (*(int *)(this + 0x28) == 0xb4 || *(int *)(this + 0x28) == 0) {
      if (is_cga != 0) {
        if (is_cga < 0x65) {
          uVar2 = 0x140;
        }
        else {
          uVar2 = 0x180;
        }
        s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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
  }
  return;
}



// ll::lemon_menu::render_coin(int)

void __thiscall render_coin(lemon_menu *this,int param_1)

{
  void *__dest;
  int iVar1;
  undefined4 uVar2;
  
  if (is_autorun != '\0') {
    return;
  }
  if (is_free_mode == 0) {
    show_coin(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),param_1);
  }
  else {
    show_free(*(menu **)(this + 0x10));
  }
  __dest = map_ram_base;
  iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
  memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
  SDL_FreeSurface(iVar1);
  if (*(int *)(this + 0x28) != 0xb4 && *(int *)(this + 0x28) != 0) {
    return;
  }
  if (is_cga != 0) {
    if (is_cga < 0x65) {
      uVar2 = 0x140;
    }
    else {
      uVar2 = 0x180;
    }
    s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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
  
  if (is_autorun == '\0') {
    show_snap(*(menu **)(this + 0x10));
    __dest = map_ram_base;
    iVar1 = SDL_DisplayFormat(*(undefined4 *)(*(int *)(this + 0x10) + 0x68));
    memcpy(__dest,*(void **)(iVar1 + 0x14),yres * xres * 2);
    SDL_FreeSurface(iVar1);
    if (*(int *)(this + 0x28) == 0xb4 || *(int *)(this + 0x28) == 0) {
      if (is_cga != 0) {
        if (is_cga < 0x65) {
          uVar2 = 0x140;
        }
        else {
          uVar2 = 0x180;
        }
        s3c_g2d_copy_normal_ROT_once_horizontal_xxxyyy(uVar2,0xf0);
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
  }
  return;
}



// ll::lemon_menu::do_timer60_timeover()

void __thiscall do_timer60_timeover(lemon_menu *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = is_autorun;
  iVar2 = *(int *)(this + 0x1c);
  if (0 < iVar2) {
    if (is_stop_timer < 1) {
      iVar2 = iVar2 + -1;
    }
    if (is_stop_timer < 1) {
      *(int *)(this + 0x1c) = iVar2;
    }
    if (cVar1 == '\0') {
      show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar2);
      render_g2d(this);
    }
    timeover_to_rungame = 0;
    return;
  }
  timeover_to_rungame = 1;
  this[0x14] = (lemon_menu)0x0;
  return;
}



// ll::lemon_menu::do_change_mode()

void __thiscall do_change_mode(lemon_menu *this)

{
  int iVar1;
  
  if (do_count + 1 < 0xb) {
    do_count = do_count + 1;
    return;
  }
  do_count = 0;
  do_cnv = 0;
  if (is_home_mode < 1) {
    iVar1 = access("/dev/input/event3",0);
    if (iVar1 == 0) {
      is_home_mode = 1;
      system("echo 1 >> /tmp/HOME");
      goto LAB_0000d17e;
    }
  }
  else {
    iVar1 = access("/dev/input/event3",0);
    if (iVar1 != 0) {
      is_home_mode = 0;
      remove("/tmp/HOME");
      do_cnv = 1;
      system("reboot -f");
      do {
        sleep(1);
      } while( true );
    }
  }
  if (do_cnv < 1) {
    return;
  }
LAB_0000d17e:
  save_coin = *(int *)(this + 0x18);
  save_topindex = 0;
  save_selected = 0;
  do_cnv = 0;
  moving_thread_exit = 1;
  page_thread_exit = 1;
  save_coinnum_to_file(save_coin);
  this[0x14] = (lemon_menu)0x0;
  needto_rungame = 0;
  needto_reboot = 1;
  needto_editgamelist = 0;
  needto_vert = 0;
  return;
}



// ll::lemon_menu::handle_up()

void __thiscall handle_up(lemon_menu *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar2;
    if (cVar1 == '\0') {
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
  }
  return;
}



// ll::lemon_menu::handle_up_moving()

void __thiscall handle_up_moving(lemon_menu *this)

{
  int iVar1;
  
  if ((((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) &&
      (iVar1 = select_previous_with_top_index
                         (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c)),
      iVar1 != 0)) && (is_autorun == '\0')) {
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    return;
  }
  return;
}



// ll::lemon_menu::handle_down()

void __thiscall handle_down(lemon_menu *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar2;
    if (cVar1 == '\0') {
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
  }
  return;
}



// ll::lemon_menu::handle_down_moving()

void __thiscall handle_down_moving(lemon_menu *this)

{
  int iVar1;
  
  if ((((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) &&
      (iVar1 = select_next_with_top_index
                         (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c)),
      iVar1 != 0)) && (is_autorun == '\0')) {
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    return;
  }
  return;
}



// ll::lemon_menu::handle_pgup()

void __thiscall handle_pgup(lemon_menu *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar2;
    if (cVar1 == '\0') {
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
  }
  return;
}



// ll::lemon_menu::handle_pgup_moving()

void __thiscall handle_pgup_moving(lemon_menu *this)

{
  int iVar1;
  
  if ((((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) &&
      (iVar1 = select_previous_with_top_index
                         (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                          *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar1 != 0)) &&
     (is_autorun == '\0')) {
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    return;
  }
  return;
}



// ll::lemon_menu::handle_pgdown()

void __thiscall handle_pgdown(lemon_menu *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar2;
    if (cVar1 == '\0') {
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
  }
  return;
}



// ll::lemon_menu::handle_pgdown_moving()

void __thiscall handle_pgdown_moving(lemon_menu *this)

{
  int iVar1;
  
  if ((((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) &&
      (iVar1 = select_next_with_top_index
                         (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                          *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar1 != 0)) &&
     (is_autorun == '\0')) {
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    return;
  }
  return;
}



// ll::lemon_menu::handle_alphaup()

void __thiscall handle_alphaup(lemon_menu *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((0 < *(int *)(this + 0x18)) &&
     (iVar2 = select_next_alpha(*(menu **)(this + 0x24)), iVar2 != 0)) {
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar3;
    if (cVar1 == '\0') {
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
  }
  return;
}



// ll::lemon_menu::handle_alphadown()

void __thiscall handle_alphadown(lemon_menu *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((0 < *(int *)(this + 0x18)) &&
     (iVar2 = select_previous_alpha(*(menu **)(this + 0x24)), iVar2 != 0)) {
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar3;
    if (cVar1 == '\0') {
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0000d804)
// WARNING: Removing unreachable block (ram,0x0000d81a)
// ll::lemon_menu::handle_run_with_sdl_quit()

void __thiscall handle_run_with_sdl_quit(lemon_menu *this)

{
  bool bVar1;
  allocator *paVar2;
  int iVar3;
  uint uVar4;
  bad_lemon *this_00;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *__s;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = __stack_chk_guard;
  if (0 < is_maxii_board) {
    Write_Y3(0x5500);
    Write_Y3(0x5500);
  }
  iVar7 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                  *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  paVar2 = (allocator *)get_string((char *)&g_opts);
  basic_string((char *)&local_40,paVar2);
  iVar3 = get_bool((char *)&g_opts);
  if (iVar3 != 0) {
    SDL_WM_ToggleFullScreen(*(undefined4 *)this);
  }
  uVar4 = find((char *)&local_40,(uint)&DAT_0001ace8,0);
  if (uVar4 != 0xffffffff) {
    iVar3 = find((char *)&local_40,(uint)&DAT_0001ad0c,0);
    if (iVar3 == -1) {
      this_00 = (bad_lemon *)__cxa_allocate_exception(8);
      bad_lemon(this_00,"mame path missing ./ specifier");
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&typeinfo,0x1159d);
    }
    if (iVar3 + 2U <= *(uint *)(local_40 + -0xc)) {
      basic_string((basic_string *)&local_3c,(uint)&local_40,iVar3 + 2U);
      insert((uint)&local_3c,(char *)0x0,(uint)"killall ");
      __s = *(char **)(iVar7 + 8);
      strlen(__s);
      replace((uint)&local_40,uVar4,(char *)0x2,(uint)__s);
      if (is_free_mode == 0) {
        uVar5 = *(undefined4 *)(this + 0x18);
      }
      else {
        uVar5 = 0;
        *(undefined4 *)(this + 0x18) = 0;
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      __sprintf_chk(&local_38,1,0x14," -credit %d ",uVar5);
      strlen((char *)&local_38);
      append((char *)&local_40,(uint)&local_38);
      __s = *(char **)(iVar7 + 0x10);
      strlen(__s);
      append((char *)&local_40,(uint)__s);
      if (*(int *)(this + 4) != 0) {
        SDL_RemoveTimer();
      }
      assign((basic_string *)&save_cmd);
      save_topindex = *(undefined4 *)(*(int *)(this + 0x24) + 0x1c);
      save_selected = *(undefined4 *)(*(int *)(this + 0x24) + 0x18);
      save_coin = (uint)(is_maxii_board < 1);
      save_coinnum_to_file(*(int *)(this + 0x18));
      needto_editgamelist = 0;
      needto_rungame = 1;
      needto_reboot = 0;
      needto_vert = 0;
      if ((allocator *)(local_3c + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar6 = (int *)(local_3c + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar6);
          iVar3 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_3c + -0xc));
        }
      }
      if ((allocator *)(local_40 + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar6 = (int *)(local_40 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar6);
          iVar3 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_40 + -0xc));
        }
      }
      if (local_24 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return;
    }
    __throw_out_of_range("basic_string::substr");
    _M_dispose((allocator *)(local_3c + -0xc));
    _M_dispose((allocator *)(local_40 + -0xc));
    __cxa_end_cleanup();
  }
  this_00 = (bad_lemon *)__cxa_allocate_exception(8);
  bad_lemon(this_00,"mame path missing %r specifier");
                    // WARNING: Subroutine does not return
  __cxa_throw(this_00,&typeinfo,0x1159d);
}



// ll::lemon_menu::handle_activate()

void __thiscall handle_activate(lemon_menu *this)

{
  if (*(int *)(*(int *)(this + 0x24) + 0xc) != *(int *)(*(int *)(this + 0x24) + 0x10)) {
    set_coin_enable_gpc6(0);
    moving_thread_exit = 1;
    page_thread_exit = 1;
    if (*(int *)(this + 0x34) != 0) {
      fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
      if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
        pclose(*(FILE **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x34) = 0;
    }
    handle_run_with_sdl_quit(this);
    this[0x14] = (lemon_menu)0x0;
  }
  return;
}



// ll::lemon_menu::handle_restart_for_mplayer()

void handle_restart_for_mplayer(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0000d97e)
// ll::lemon_menu::handle_reboot_edit_game_list()

void __thiscall handle_reboot_edit_game_list(lemon_menu *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_1c [2];
  
  basic_string((char *)local_1c,(allocator *)"cd /sdcard ; ./xhideh ab12");
  if (0 < is_maxii_board) {
    Write_Y3(0x5500);
    Write_Y3(0x5500);
  }
  save_topindex = *(undefined4 *)(*(int *)(this + 0x24) + 0x1c);
  save_selected = *(undefined4 *)(*(int *)(this + 0x24) + 0x18);
  assign((basic_string *)&save_cmd);
  save_coin = *(int *)(this + 0x18);
  save_coinnum_to_file(save_coin);
  moving_thread_exit = 1;
  page_thread_exit = 1;
  needto_editgamelist = 1;
  needto_reboot = 0;
  this[0x14] = (lemon_menu)0x0;
  needto_rungame = 0;
  if ((allocator *)(local_1c[0] + -0xc) != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(local_1c[0] + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar2 < 1) {
      _M_destroy((allocator *)(local_1c[0] + -0xc));
    }
  }
  return;
}



// ll::lemon_menu::handle_reboot_flip()

void __thiscall handle_reboot_flip(lemon_menu *this)

{
  save_coin = *(int *)(this + 0x18);
  save_topindex = *(undefined4 *)(*(int *)(this + 0x24) + 0x1c);
  save_selected = *(undefined4 *)(*(int *)(this + 0x24) + 0x18);
  save_coinnum_to_file(save_coin);
  this[0x14] = (lemon_menu)0x0;
  needto_rungame = 0;
  needto_reboot = 1;
  needto_editgamelist = 0;
  needto_vert = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x0000e0d0)
// WARNING: Removing unreachable block (ram,0x0000e0de)
// ll::lemon_menu::handle_run()

void __thiscall handle_run(lemon_menu *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  __pid_t __pid;
  __pid_t _Var6;
  undefined4 uVar7;
  allocator *paVar8;
  bad_lemon *this_00;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  char *__s;
  char *local_54;
  char *local_50;
  undefined auStack76 [20];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar11 = &__stack_chk_guard;
  cVar2 = -0x50;
  local_24 = __stack_chk_guard;
  iVar12 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                   *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  paVar8 = (allocator *)get_string((char *)&g_opts);
  basic_string((char *)&local_54,paVar8);
  iVar3 = get_bool((char *)&g_opts);
  if (iVar3 != 0) {
    SDL_WM_ToggleFullScreen(*(undefined4 *)this);
  }
  uVar4 = find((char *)&local_54,(uint)&DAT_0001ace8,0);
  if (uVar4 == 0xffffffff) {
LAB_0000e14c:
    this_00 = (bad_lemon *)__cxa_allocate_exception(8);
    bad_lemon(this_00,"mame path missing %r specifier");
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&typeinfo,0x1159d);
  }
  iVar5 = find((char *)&local_54,(uint)&DAT_0001ad0c,0);
  if (iVar5 == -1) goto LAB_0000e11e;
  if (iVar5 + 2U <= *(uint *)(local_54 + -0xc)) {
    basic_string((basic_string *)&local_50,(uint)&local_54,iVar5 + 2U);
    insert((uint)&local_50,(char *)0x0,(uint)"killall ");
    __s = *(char **)(iVar12 + 8);
    strlen(__s);
    replace((uint)&local_54,uVar4,(char *)0x2,(uint)__s);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    __sprintf_chk(&local_38,1,0x14," -credit %d ",*(undefined4 *)(this + 0x18));
    strlen((char *)&local_38);
    append((char *)&local_54,(uint)&local_38);
    __s = *(char **)(iVar12 + 0x10);
    strlen(__s);
    append((char *)&local_54,(uint)__s);
    puVar9 = log;
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"handle_run: ",0xc);
    piVar10 = (int *)__ostream_insert_char_std__char_traits_char__
                               ((basic_ostream *)log,local_54,*(int *)(local_54 + -0xc));
    piVar13 = *(int **)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x7c);
    if (piVar13 != (int *)0x0) {
      if (*(char *)(piVar13 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar13 + 0x18))(piVar13,10);
      }
      put((char)piVar10);
      flush();
      if (*(int *)(this + 4) != 0) {
        SDL_RemoveTimer();
      }
      __pid = fork();
      if (__pid < 0) {
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"error in fork() - first. ",0x19);
        puVar9 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
        if ((int *)puVar9 == (int *)0x0) {
          __throw_bad_cast();
LAB_0000dec8:
          __pid = getpid();
          *(undefined4 *)(*(int *)((int)puVar9 + *(int *)(*(int *)puVar9 + -0xc) + 0x78) + 0x24) = 4
          ;
          __ostream_insert_char_std__char_traits_char__
                    ((basic_ostream *)log,"i am the second child process, my process id is  ",0x31);
          piVar11 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,__pid);
          cVar2 = (char)piVar11;
          __s = (char *)(*(int *)(*piVar11 + -0xc) + (int)piVar11);
          this = *(lemon_menu **)(__s + 0x7c);
          if ((int *)this != (int *)0x0) {
            if (*(lemon_menu *)((int *)this + 7) == (lemon_menu)0x0) goto LAB_0000e020;
LAB_0000df1e:
            put(cVar2);
            flush();
            sleep(2);
            *(undefined4 *)(*(int *)((int)puVar9 + *(int *)(*(int *)puVar9 + -0xc) + 0x78) + 0x24) =
                 4;
            __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"Before  ",8);
            piVar11 = (int *)__ostream_insert_char_std__char_traits_char__
                                       ((basic_ostream *)log,local_50,*(int *)(local_50 + -0xc));
            __s = (char *)(*(int *)(*piVar11 + -0xc) + (int)piVar11);
            piVar10 = *(int **)(__s + 0x7c);
            if (piVar10 == (int *)0x0) {
              __throw_bad_cast();
            }
            else {
              if (*(char *)(piVar10 + 7) == '\0') {
                _M_widen_init();
                (**(code **)(*piVar10 + 0x18))(piVar10,10);
              }
              put((char)piVar11);
              flush();
              system(local_50);
              *(undefined4 *)(*(int *)((int)puVar9 + *(int *)(*(int *)puVar9 + -0xc) + 0x78) + 0x24)
                   = 4;
              __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"After  ",7);
              piVar10 = (int *)__ostream_insert_char_std__char_traits_char__
                                         ((basic_ostream *)log,local_50,*(int *)(local_50 + -0xc));
              __s = (char *)(*(int *)(*piVar10 + -0xc) + (int)piVar10);
              puVar9 = *(undefined1 **)(__s + 0x7c);
              if ((int *)puVar9 != (int *)0x0) {
                if (*(allocator *)((int *)puVar9 + 7) == (allocator)0x0) {
                  _M_widen_init();
                  (**(code **)(*(int *)puVar9 + 0x18))(puVar9,10);
                }
                put((char)piVar10);
                flush();
LAB_0000de04:
                    // WARNING: Subroutine does not return
                exit(0);
              }
            }
            __throw_bad_cast();
          }
          __throw_bad_cast();
          goto LAB_0000e068;
        }
LAB_0000dce2:
        if (*(allocator *)((int *)puVar9 + 7) == (allocator)0x0) {
          _M_widen_init();
          (**(code **)(*(int *)puVar9 + 0x18))(puVar9,10);
        }
        put(-0x30);
        flush();
LAB_0000dcfe:
        uVar7 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
        *(undefined4 *)(this + 4) = uVar7;
        if (iVar3 != 0) {
          SDL_WM_ToggleFullScreen(*(undefined4 *)this);
        }
        do {
          iVar3 = SDL_PollEvent(auStack76);
        } while (iVar3 != 0);
        if (is_autorun == '\0') {
          render_background(*(menu **)(this + 0x10));
          if (is_free_mode == 0) {
            show_coin((layout *)*(menu **)(this + 0x10),*(menu **)(this + 0x24),
                      *(int *)(this + 0x18),0);
          }
          else {
            show_free(*(menu **)(this + 0x10));
          }
          show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
          show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
          render_g2d(this);
        }
        puVar9 = _S_empty_rep_storage;
        paVar8 = (allocator *)(local_50 + -0xc);
        if (paVar8 == (allocator *)_S_empty_rep_storage) goto LAB_0000dd7a;
      }
      else {
        if (__pid == 0) {
          __pid = getpid();
          *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
          __ostream_insert_char_std__char_traits_char__
                    ((basic_ostream *)log,"i am the first child process, my process id is  ",0x30);
          piVar10 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,__pid);
          __s = (char *)(*(int *)(*piVar10 + -0xc) + (int)piVar10);
          piVar13 = *(int **)(__s + 0x7c);
          if (piVar13 != (int *)0x0) {
            if (*(char *)(piVar13 + 7) == '\0') {
              _M_widen_init();
              (**(code **)(*piVar13 + 0x18))(piVar13,10);
            }
            put((char)piVar10);
            flush();
            __pid = fork();
            if (-1 < __pid) {
              if (__pid != 0) goto LAB_0000de04;
              goto LAB_0000dec8;
            }
            *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
            __ostream_insert_char_std__char_traits_char__
                      ((basic_ostream *)log,"error in fork() - second. ",0x1a);
            puVar9 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
            if ((int *)puVar9 != (int *)0x0) goto LAB_0000dce2;
            __throw_bad_cast();
LAB_0000e020:
            _M_widen_init();
            (**(code **)(*(int *)this + 0x18))(this,10);
            goto LAB_0000df1e;
          }
LAB_0000e068:
          __throw_bad_cast();
        }
        else {
          *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
          __ostream_insert_char_std__char_traits_char__
                    ((basic_ostream *)log,"i am the parent process, my process id is  ",0x2b);
          _Var6 = getpid();
          piVar10 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,_Var6);
          __s = (char *)(*(int *)(*piVar10 + -0xc) + (int)piVar10);
          piVar13 = *(int **)(__s + 0x7c);
          if (piVar13 != (int *)0x0) {
            if (*(char *)(piVar13 + 7) == '\0') {
              _M_widen_init();
              (**(code **)(*piVar13 + 0x18))(piVar13,10);
            }
            put((char)piVar10);
            flush();
            *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
            __ostream_insert_char_std__char_traits_char__
                      ((basic_ostream *)log,"Before system(). ",0x11);
            piVar10 = (int *)__ostream_insert_char_std__char_traits_char__
                                       ((basic_ostream *)log,local_54,*(int *)(local_54 + -0xc));
            piVar13 = *(int **)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x7c);
            if (piVar13 == (int *)0x0) {
              __throw_bad_cast();
              goto LAB_0000e14c;
            }
            if (*(char *)(piVar13 + 7) == '\0') {
              _M_widen_init();
              (**(code **)(*piVar13 + 0x18))(piVar13,10);
            }
            put((char)piVar10);
            flush();
            system(local_54);
            assign((basic_string *)&save_cmd);
            *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
            __ostream_insert_char_std__char_traits_char__
                      ((basic_ostream *)log,"After system(). ",0x10);
            piVar10 = (int *)__ostream_insert_char_std__char_traits_char__
                                       ((basic_ostream *)log,local_54,*(int *)(local_54 + -0xc));
            piVar13 = *(int **)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x7c);
            if (piVar13 != (int *)0x0) {
              if (*(char *)(piVar13 + 7) == '\0') {
                _M_widen_init();
                (**(code **)(*piVar13 + 0x18))(piVar13,10);
              }
              put((char)piVar10);
              flush();
              _Var6 = waitpid(__pid,(int *)0x0,0);
              if (__pid != _Var6) {
                *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
                __ostream_insert_char_std__char_traits_char__
                          ((basic_ostream *)log,"Waitpid error! ",0xf);
                puVar9 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
                if ((int *)puVar9 != (int *)0x0) goto LAB_0000dce2;
                __throw_bad_cast();
                goto LAB_0000e0f4;
              }
              goto LAB_0000dcfe;
            }
            __throw_bad_cast();
            __cxa_free_exception(log);
            goto LAB_0000e104;
          }
        }
        local_50 = __s;
        paVar8 = (allocator *)__throw_bad_cast();
      }
      piVar10 = (int *)(local_50 + -4);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar10);
        iVar3 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = iVar3 + -1;
      DataMemoryBarrier(0x1f);
      if (iVar3 < 1) {
        _M_destroy(paVar8);
      }
LAB_0000dd7a:
      if (local_54 + -0xc != puVar9) {
        piVar10 = (int *)(local_54 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar10);
          iVar3 = *piVar10;
          bVar1 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar1);
        *piVar10 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_54 + -0xc));
        }
      }
      if (local_24 == *piVar11) {
        return;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
LAB_0000e0f4:
    __throw_bad_cast();
    _M_dispose((allocator *)(local_50 + -0xc));
LAB_0000e104:
    _M_dispose((allocator *)(local_54 + -0xc));
    __cxa_end_cleanup();
  }
  __throw_out_of_range("basic_string::substr");
LAB_0000e11e:
  this_00 = (bad_lemon *)__cxa_allocate_exception(8);
  bad_lemon(this_00,"mame path missing ./ specifier");
                    // WARNING: Subroutine does not return
  __cxa_throw(this_00,&typeinfo,0x1159d);
}



// ll::lemon_menu::handle_up_menu()

void __thiscall handle_up_menu(lemon_menu *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x24) != *(int *)(this + 0x20)) {
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(*(int *)(this + 0x24) + 4);
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    cVar1 = is_autorun;
    *(undefined4 *)(this + 4) = uVar2;
    if (cVar1 == '\0') {
      render_background(*(menu **)(this + 0x10));
      if (is_free_mode == 0) {
        show_coin((layout *)*(menu **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),0)
        ;
      }
      else {
        show_free(*(menu **)(this + 0x10));
      }
      show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
      render_g2d(this);
      return;
    }
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
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
  *(undefined4 *)(this + 4) = uVar1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0000e412)
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
    pSVar2 = (SDL_Surface *)(**(code **)(*piVar8 + 0x14))(piVar8);
    snap(this_00,pSVar2);
    if (is_autorun == '\0') {
      show_snap(*(menu **)(this + 0x10));
      render_g2d(this);
    }
    __s1 = *(char **)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                              *(int *)(*(int *)(this + 0x24) + 0x18) * 4) + 8);
    iVar7 = strcmp(__s1,save_rom);
    if ((iVar7 != 0) || (*(int *)(this + 0x34) == 0)) {
      __strcpy_chk(save_rom,__s1,0xb);
      (**(code **)(*piVar8 + 0x18))(&local_214,piVar8);
      iVar7 = access(local_214,0);
      if (iVar7 == 0) {
        uVar5 = (uint)*(ushort *)(*(int *)(this + 0x10) + 0x80);
        uVar6 = (uint)*(ushort *)(*(int *)(this + 0x10) + 0x82);
        if (is_bit2_flip == 0) {
          __sprintf_chk(acStack528,1,500,
                                                
                        "mplayer  -vo fbdev -hardframedrop -slave  -nodouble -really-quiet -x %d -y %d -zoom %s -osdw %d -loop 0"
                        ,uVar5,uVar6,local_214,uVar5);
        }
        else {
          __sprintf_chk(acStack528,1,500,
                                                
                        "mplayer  -vo fbdev -hardframedrop -vf-add flip  -vf-add mirror -slave  -nodouble -really-quiet -x %d -y %d -zoom %s -osdw %d -loop 0"
                        ,uVar5,uVar6,local_214,uVar5);
        }
        if (*(int *)(this + 0x34) != 0) {
          fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
          *(undefined4 *)(this + 0x34) = 0;
        }
        if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
          pclose(*(FILE **)(this + 0x30));
        }
        *(undefined4 *)(this + 0x30) = 0;
        pFVar3 = popen(acStack528,"w");
        *(FILE **)(this + 0x30) = pFVar3;
        if (pFVar3 == (FILE *)0x0) {
          *(undefined4 *)(this + 0x34) = 0;
          perror("Popen:");
        }
        else {
          *(undefined4 *)(this + 0x34) = 1;
        }
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
    if (is_help_snap == 0) {
      if (*(int *)(this + 0xc) != 0) {
        SDL_RemoveTimer();
        *(undefined4 *)(this + 0xc) = 0;
      }
      uVar4 = SDL_AddTimer(1000,0xc555,0);
      *(undefined4 *)(this + 0xc) = uVar4;
    }
    else {
      osd_cmd(2,0);
      SDL_Delay(10);
      osd_cmd(2,0);
    }
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
  uVar1 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
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



// WARNING: Removing unreachable block (ram,0x0000e6fa)
// WARNING: Removing unreachable block (ram,0x0000e6d4)
// ll::lemon_menu::handle_run_with_sdl_quit_setgame()

void __thiscall handle_run_with_sdl_quit_setgame(lemon_menu *this)

{
  bool bVar1;
  allocator *paVar2;
  int iVar3;
  uint uVar4;
  bad_lemon *this_00;
  int *piVar5;
  int iVar6;
  char *__s;
  int local_28;
  int local_24;
  
  if (0 < is_maxii_board) {
    Write_Y3(0x5500);
    Write_Y3(0x5500);
  }
  iVar6 = *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                  *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  paVar2 = (allocator *)get_string((char *)&g_opts);
  basic_string((char *)&local_28,paVar2);
  iVar3 = get_bool((char *)&g_opts);
  if (iVar3 != 0) {
    SDL_WM_ToggleFullScreen(*(undefined4 *)this);
  }
  uVar4 = find((char *)&local_28,(uint)&DAT_0001ace8,0);
  if (uVar4 == 0xffffffff) {
    this_00 = (bad_lemon *)__cxa_allocate_exception(8);
    bad_lemon(this_00,"mame path missing %r specifier");
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&typeinfo,0x1159d);
  }
  iVar3 = find((char *)&local_28,(uint)&DAT_0001ad0c,0);
  if (iVar3 != -1) {
    if (iVar3 + 2U <= *(uint *)(local_28 + -0xc)) {
      basic_string((basic_string *)&local_24,(uint)&local_28,iVar3 + 2U);
      insert((uint)&local_24,(char *)0x0,(uint)"killall ");
      __s = *(char **)(iVar6 + 8);
      strlen(__s);
      replace((uint)&local_28,uVar4,(char *)0x2,(uint)__s);
      __s = *(char **)(iVar6 + 0x10);
      strlen(__s);
      append((char *)&local_28,(uint)__s);
      if (*(int *)(this + 4) != 0) {
        SDL_RemoveTimer();
      }
      assign((basic_string *)&save_cmd);
      save_topindex = *(undefined4 *)(*(int *)(this + 0x24) + 0x1c);
      save_selected = *(undefined4 *)(*(int *)(this + 0x24) + 0x18);
      save_coin = (uint)(is_maxii_board < 1);
      needto_rungame = 1;
      needto_editgamelist = 0;
      needto_reboot = 0;
      needto_vert = 0;
      if ((allocator *)(local_24 + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar5 = (int *)(local_24 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar5);
          iVar3 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_24 + -0xc));
        }
      }
      if ((allocator *)(local_28 + -0xc) != (allocator *)_S_empty_rep_storage) {
        piVar5 = (int *)(local_28 + -4);
        DataMemoryBarrier(0x1f);
        do {
          ExclusiveAccess(piVar5);
          iVar3 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar3 + -1;
        DataMemoryBarrier(0x1f);
        if (iVar3 < 1) {
          _M_destroy((allocator *)(local_28 + -0xc));
        }
      }
      return;
    }
    __throw_out_of_range("basic_string::substr");
  }
  this_00 = (bad_lemon *)__cxa_allocate_exception(8);
  bad_lemon(this_00,"mame path missing ./ specifier");
                    // WARNING: Subroutine does not return
  __cxa_throw(this_00,&typeinfo,0x1159d);
}



// ll::lemon_menu::render_clear_screen()

void __thiscall render_clear_screen(lemon_menu *this)

{
  clear_screen_buffer(*(layout **)(this + 0x10));
  SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x68),0,*(undefined4 *)this,0);
  SDL_UpdateRect(*(undefined4 *)this,0,0,0,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x0000e83e)
// ll::lemon_menu::handle_goto_vertical()

void __thiscall handle_goto_vertical(lemon_menu *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_1c;
  
  basic_string((char *)&local_1c,(allocator *)"cd /sdcard ; ./xrunmv ");
  if (0 < is_maxii_board) {
    Write_Y3(0x5500);
    Write_Y3(0x5500);
  }
  save_topindex = *(undefined4 *)(*(int *)(this + 0x24) + 0x1c);
  save_selected = *(undefined4 *)(*(int *)(this + 0x24) + 0x18);
  assign((basic_string *)&save_cmd);
  save_coin = *(int *)(this + 0x18);
  save_coinnum_to_file(save_coin);
  needto_reboot = 0;
  moving_thread_exit = 1;
  page_thread_exit = 1;
  needto_vert = 1;
  this[0x14] = (lemon_menu)0x0;
  needto_rungame = 0;
  needto_editgamelist = 0;
  if ((allocator *)(local_1c + -0xc) != (allocator *)_S_empty_rep_storage) {
    piVar3 = (int *)(local_1c + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar3);
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar2 < 1) {
      _M_destroy((allocator *)(local_1c + -0xc));
    }
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: ram
// ll::lemon_menu::main_loop()

void __thiscall main_loop(lemon_menu *this)

{
  lemon_menu lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *unaff_r9;
  int *unaff_r10;
  int *unaff_r11;
  byte *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  uint *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  
  service_btn = 1;
  last_service_btn = 1;
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 2;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"main_loop: starting render loop",0x1f);
  piVar7 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar7 == (int *)0x0) {
    __throw_bad_cast();
    goto LAB_0000f674;
  }
  if (*(char *)(piVar7 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar7 + 0x18))(piVar7,10);
  }
  put(-0x30);
  flush();
  if (is_free_mode < 1) {
    if (is_maxii_board == 0) {
      *(undefined4 *)(this + 0x18) = save_coin;
    }
    else {
      save_coin = load_coinnum_from_file();
      *(undefined4 *)(this + 0x18) = save_coin;
    }
  }
  else {
    *(undefined4 *)(this + 0x18) = 3;
  }
  local_68 = &needto_vert;
  if (needto_vert != 0) {
    clear_screen_buffer(*(layout **)(this + 0x10));
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x68),0,*(undefined4 *)this,0);
    SDL_UpdateRect(*(undefined4 *)this,0,0,0,0);
    return;
  }
  local_80 = &is_autorun;
  if (is_autorun != 0) {
    clear_screen_buffer(*(layout **)(this + 0x10));
    SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x68),0,*(undefined4 *)this,0);
    SDL_UpdateRect(*(undefined4 *)this,0,0,0,0);
    handle_run_with_sdl_quit_setgame(this);
    return;
  }
  local_6c = &is_help_snap;
  is_help_snap = (uint)is_autorun;
  render_background(*(menu **)(this + 0x10));
  if (is_free_mode == 0) {
    show_coin((layout *)*(menu **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),0);
  }
  else {
    show_free(*(menu **)(this + 0x10));
  }
  show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
  render_g2d(this);
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
  bVar2 = is_autorun;
  *(undefined4 *)(this + 4) = uVar3;
  if (bVar2 == 0) {
    render_list(this);
  }
  local_40 = 0x10;
  if (is_bit2_flip == 0) {
    iVar6 = *(int *)(this + 0x10);
    local_3c = (int)*(short *)(iVar6 + 0x7c);
    local_38 = (int)*(short *)(iVar6 + 0x7e);
    local_34 = (uint)*(ushort *)(iVar6 + 0x80);
    local_30 = (uint)*(ushort *)(iVar6 + 0x82);
  }
  else {
    iVar6 = *(int *)(this + 0x10);
    local_34 = (uint)*(ushort *)(iVar6 + 0x80);
    local_30 = (uint)*(ushort *)(iVar6 + 0x82);
    local_3c = (xres - ((int)*(short *)(iVar6 + 0x7c) + local_34)) + 1;
    local_38 = (yres - ((int)*(short *)(iVar6 + 0x7e) + local_30)) + 1;
  }
  osd_init(&local_40);
  jbt_a = ybuf_222[0];
  jbt_b = ybuf_222[1];
  jbt_coin = ybuf_222[10];
  jbt_start = ybuf_222[11];
  jbt_up = ybuf_222[6];
  jbt_down = ybuf_222[7];
  jbt_left = ybuf_222[8];
  jbt_right = ybuf_222[9];
  jbt_c = ybuf_222[2];
  jbt_d = ybuf_222[3];
  local_58 = get_int((char *)&g_opts);
  local_54 = get_int((char *)&g_opts);
  local_50 = get_int((char *)&g_opts);
  local_64 = get_int((char *)&g_opts);
  local_60 = get_int((char *)&g_opts);
  local_4c = get_int((char *)&g_opts);
  get_int((char *)&g_opts);
  local_48 = get_int((char *)&g_opts);
  local_44 = get_int((char *)&g_opts);
  local_5c = get_int((char *)&g_opts);
  this[0x14] = (lemon_menu)0x1;
  update_snap(this);
  if (0 < is_maxii_board) {
    Write_Y3(0x5501);
    Write_Y0(0);
  }
  unaff_r11 = &music_on;
  if (music_on != 0) {
    set_volume();
    play_bg_music();
  }
  moving_thread_exit = 1;
  lock_thread = 0;
  down_counter = 0x14;
  iVar6 = SDL_GetTicks();
  next_time = iVar6 + 0x5dc;
  set_coin_enable_gpc6(1);
  set_coin_count_enable_gpc4(1);
  if (this[0x14] != (lemon_menu)0x0) {
    local_78 = &is_free_browse;
    local_7c = &is_cn;
    local_74 = &is_stop_timer;
    unaff_r9 = &is_cga;
    unaff_r10 = &is_edit_mode;
    piVar7 = &timeover_to_rungame;
    local_70 = &coinset_val;
LAB_0000ebc2:
    do {
      if (*unaff_r9 == 0) {
        if ((cnti & 3) == 0) {
          render_g2d(this);
          cnti = piVar7[0x15];
        }
        cnti = cnti + 1;
        if (2 < (int)cnti) {
          cnti = 0;
        }
      }
      else {
        render_g2d(this);
      }
      if (*unaff_r10 == 0) {
LAB_0000ebe8:
        do_change_mode(this);
        lVar1 = this[0x14];
      }
      else {
        uVar4 = read_dipsw_Y2_16_reopen();
        if ((uVar4 & 0x8000) == 0) {
          handle_reboot_edit_game_list(this);
          this[0x14] = (lemon_menu)0x0;
        }
        uVar4 = read_dipsw_Y1_16_reopen();
        if ((uVar4 & 0x8000) != 0) goto LAB_0000ebe8;
        handle_reboot_edit_game_list(this);
        this[0x14] = (lemon_menu)0x0;
        do_change_mode(this);
        lVar1 = this[0x14];
      }
      if ((lVar1 != (lemon_menu)0x0) && (uVar4 = SDL_PollEvent(&local_40), uVar4 == 0)) {
        if ((*unaff_r9 == 0) && (*local_7c != 0)) {
LAB_0000eb5a:
          if (moving_thread_exit == 0) {
            if (piVar7[0x16] == 0) {
              if (piVar7[0x18] == 0) {
                if (*unaff_r11 != 0) {
                  playsound_menu();
                }
                if ((0 < *(int *)(this + 0x18)) || (0 < *local_78)) {
                  iVar6 = select_next_with_top_index
                                    (*(menu **)(this + 0x24),1,
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
                  goto joined_r0x0000eeac;
                }
              }
              else {
                if (*unaff_r11 != 0) {
                  playsound_menu();
                }
                if (((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                   (iVar6 = select_previous_with_top_index
                                      (*(menu **)(this + 0x24),1,
                                       *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0)) {
                  bVar2 = *local_80;
                  goto joined_r0x0000ee86;
                }
              }
            }
            else {
              if (piVar7[0x17] == 0) {
                if (*unaff_r11 != 0) {
                  playsound_page();
                }
                if (((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                   (iVar6 = select_next_with_top_index
                                      (*(menu **)(this + 0x24),
                                       *(int *)(*(int *)(this + 0x10) + 0x5c),
                                       *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0)) {
                  bVar2 = *local_80;
joined_r0x0000ee86:
                  if (bVar2 == 0) {
                    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                    render_g2d(this);
                  }
                }
              }
              else {
                if (*unaff_r11 != 0) {
                  playsound_page();
                }
                if ((0 < *(int *)(this + 0x18)) || (0 < *local_78)) {
                  iVar6 = select_previous_with_top_index
                                    (*(menu **)(this + 0x24),*(int *)(*(int *)(this + 0x10) + 0x5c),
                                     *(int *)(*(int *)(this + 0x10) + 0x5c));
joined_r0x0000eeac:
                  if (iVar6 != 0) {
                    bVar2 = *local_80;
                    goto joined_r0x0000ee86;
                  }
                }
              }
            }
            SDL_Delay(0x32);
          }
LAB_0000eb9e:
          uVar5 = SDL_GetTicks();
          if (uVar5 < next_time) goto LAB_0000eba8;
LAB_0000ec8c:
          iVar6 = *(int *)(this + 0x1c);
          if (iVar6 < 1) {
            this[0x14] = (lemon_menu)0x0;
            *piVar7 = 1;
          }
          else {
            bVar2 = *local_80;
            if (*local_74 < 1) {
              iVar6 = iVar6 + -1;
            }
            if (*local_74 < 1) {
              *(int *)(this + 0x1c) = iVar6;
            }
            if (bVar2 == 0) {
              show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar6);
              render_g2d(this);
            }
            timeover_to_rungame = 0;
          }
          iVar6 = SDL_GetTicks();
          next_time = iVar6 + 0x5dc;
          service_btn = read_dipsw_Y0_16_reopen();
          service_btn = service_btn & 0x8000;
          if (service_btn != 0) goto LAB_0000ebb4;
LAB_0000ecd0:
          if (last_service_btn == 1) {
            bVar2 = *local_80;
            if (*local_70 == 4) {
              iVar6 = *(int *)(this + 0x18) + 2;
            }
            else {
              iVar6 = *(int *)(this + 0x18) + 1;
            }
            *(int *)(this + 0x18) = iVar6;
            *(undefined4 *)(this + 0x1c) = 0x3c;
            if (bVar2 == 0) {
              render_coin(this,(uint)bVar2);
            }
            uVar4 = service_btn;
            if (*unaff_r11 != 0) {
              playsound_coin();
              uVar4 = service_btn;
            }
          }
        }
        else {
          do {
            if (down_counter < 1) goto LAB_0000eb5a;
            SDL_Delay(1);
            if (piVar7[3] != 0) goto LAB_0000eb9e;
            piVar7[0x13] = piVar7[0x13] + -1;
            iVar6 = SDL_PollEvent(&local_40);
          } while (iVar6 == 0);
          if (((char)local_40 != '\v') ||
             ((((jbt_up != local_40._2_1_ && (jbt_down != local_40._2_1_)) &&
               (jbt_left != local_40._2_1_)) && (jbt_right != local_40._2_1_)))) goto LAB_0000eb5a;
          if (*(int *)(this + 4) != 0) {
            SDL_RemoveTimer();
          }
          uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
          moving_thread_exit = 1;
          *(undefined4 *)(this + 4) = uVar3;
          uVar5 = SDL_GetTicks();
          if (next_time <= uVar5) goto LAB_0000ec8c;
LAB_0000eba8:
          service_btn = read_dipsw_Y0_16_reopen();
          service_btn = service_btn & 0x8000;
          if (service_btn == 0) goto LAB_0000ecd0;
LAB_0000ebb4:
          service_btn = 1;
          uVar4 = 1;
        }
        last_service_btn = uVar4;
        read_dipsw_Y2_16_reopen();
        goto LAB_0000ebc2;
      }
      switch(local_40 & 0xff) {
      case 2:
        if ((local_54 == local_38) || (local_50 == local_38)) {
LAB_0000f170:
          if (*(int *)(this + 0x18) < 1) {
            iVar6 = *local_78;
joined_r0x0000f17c:
            if (iVar6 < 1) break;
          }
        }
        else {
          if (local_64 != local_38) {
            if (local_60 == local_38) {
              if ((local_5c & local_34) == 0) {
LAB_0000f0aa:
                if (local_64 == local_60) goto LAB_0000f170;
                if (0 < *(int *)(this + 0x18)) goto LAB_0000f0ba;
                iVar6 = *local_78;
                goto joined_r0x0000f17c;
              }
              if ((0 < *(int *)(this + 0x18)) &&
                 (iVar6 = select_next_alpha(*(menu **)(this + 0x24)), iVar6 != 0)) {
                if (*(int *)(this + 4) != 0) {
                  SDL_RemoveTimer();
                }
                uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
                bVar2 = *local_80;
                *(undefined4 *)(this + 4) = uVar3;
                goto joined_r0x0000f34a;
              }
            }
            break;
          }
          if ((local_5c & local_34) == 0) {
            if (local_60 == local_64) goto LAB_0000f0aa;
            goto LAB_0000f170;
          }
          if ((*(int *)(this + 0x18) < 1) ||
             (iVar6 = select_previous_alpha(*(menu **)(this + 0x24)), iVar6 == 0)) break;
        }
LAB_0000f0ba:
        if (*(int *)(this + 4) != 0) {
          SDL_RemoveTimer();
        }
        uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
        bVar2 = *local_80;
        *(undefined4 *)(this + 4) = uVar3;
joined_r0x0000f34a:
        if (bVar2 != 0) break;
        show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
        render_g2d(this);
        lVar1 = this[0x14];
        goto joined_r0x0000f4f2;
      case 3:
        if (local_58 == local_38) goto switchD_0000edd4_caseD_c;
        if (local_48 == local_38) {
          if (0 < *(int *)(this + 0x18)) {
LAB_0000efc6:
            if (*(int *)(*(int *)(this + 0x24) + 0xc) != *(int *)(*(int *)(this + 0x24) + 0x10)) {
              set_coin_enable_gpc6(0);
              moving_thread_exit = 1;
              page_thread_exit = 1;
              if (*(int *)(this + 0x34) != 0) {
                fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
                if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
                  pclose(*(FILE **)(this + 0x30));
                }
                *(undefined4 *)(this + 0x30) = 0;
                *(undefined4 *)(this + 0x34) = 0;
              }
              handle_run_with_sdl_quit(this);
              this[0x14] = (lemon_menu)0x0;
              goto LAB_0000eed8;
            }
          }
        }
        else {
          if ((local_44 != local_38) && (local_4c == local_38)) {
            bVar2 = *local_80;
            if (*local_70 == 4) {
              iVar6 = *(int *)(this + 0x18) + 2;
            }
            else {
              iVar6 = *(int *)(this + 0x18) + 1;
            }
            *(int *)(this + 0x18) = iVar6;
            *(undefined4 *)(this + 0x1c) = 0x3c;
            if (bVar2 == 0) {
              render_coin(this,(uint)bVar2);
              lVar1 = this[0x14];
              goto joined_r0x0000f4f2;
            }
          }
        }
        break;
      case 10:
        if (local_40._1_1_ == 0) {
          if (jbt_up == local_40._2_1_) {
            if (*unaff_r11 != 0) {
              playsound_menu();
            }
            if ((((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                (iVar6 = select_previous_with_top_index
                                   (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c)
                                   ), iVar6 != 0)) && (*local_80 == 0)) {
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
            }
            moving_thread_exit = 0;
            is_pagemove = 0;
            is_up = 1;
            SDL_Delay(0x3c);
            lVar1 = this[0x14];
          }
          else {
            if (*(byte *)((int)piVar7 + 0x3e) == local_40._2_1_) {
              if (*unaff_r11 != 0) {
                playsound_menu();
              }
              if (((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                 ((iVar6 = select_next_with_top_index
                                     (*(menu **)(this + 0x24),1,
                                      *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0 &&
                  (*local_80 == 0)))) {
                show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                render_g2d(this);
              }
              SDL_Delay(0x3c);
              moving_thread_exit = 0;
              is_up = 0;
              is_pagemove = 0;
              lVar1 = this[0x14];
            }
            else {
              if (*(byte *)((int)piVar7 + 0x3f) == local_40._2_1_) {
                if (*unaff_r11 != 0) {
                  playsound_page();
                }
                if (((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                   ((iVar6 = select_previous_with_top_index
                                       (*(menu **)(this + 0x24),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0 &&
                    (*local_80 == 0)))) {
                  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                  render_g2d(this);
                }
                moving_thread_exit = 0;
                is_left = 1;
                is_pagemove = 1;
                SDL_Delay(0x3c);
                lVar1 = this[0x14];
              }
              else {
                if (*(byte *)(piVar7 + 0x10) != local_40._2_1_) {
                  if ((*(byte *)((int)piVar7 + 0x46) == local_40._2_1_) &&
                     ((0 < *(int *)(this + 0x18) || (0 < *local_78)))) {
                    if (*unaff_r11 != 0) {
                      playsound_menu();
                    }
                    goto LAB_0000efc6;
                  }
                  break;
                }
                if (*unaff_r11 != 0) {
                  playsound_page();
                }
                if ((((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                    (iVar6 = select_next_with_top_index
                                       (*(menu **)(this + 0x24),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0)) &&
                   (*local_80 == 0)) {
                  show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                  render_g2d(this);
                }
                moving_thread_exit = 0;
                is_left = 0;
                is_pagemove = 1;
                SDL_Delay(0x3c);
                lVar1 = this[0x14];
              }
            }
          }
          goto joined_r0x0000f4f2;
        }
        break;
      case 0xb:
        uVar4 = (uint)local_40._2_1_;
        if (local_40._1_1_ == 0) {
          if ((((uint)jbt_up == uVar4) || ((uint)*(byte *)((int)piVar7 + 0x3e) == uVar4)) ||
             (((uint)*(byte *)(piVar7 + 0x10) == uVar4 ||
              ((uint)*(byte *)((int)piVar7 + 0x3f) == uVar4)))) {
            iVar6 = *(int *)(this + 0x18);
            piVar7[3] = 1;
            piVar7[0x13] = 0x14;
            if ((0 < iVar6) || (0 < *local_78)) {
              if (*(int *)(this + 4) != 0) {
                SDL_RemoveTimer();
              }
              uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
              bVar2 = *local_80;
              *(undefined4 *)(this + 4) = uVar3;
              if (bVar2 != 0) goto LAB_0000f1ea;
LAB_0000f674:
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
              uVar4 = local_40 >> 0x10 & 0xff;
            }
          }
          else {
            if ((uint)*(byte *)((int)piVar7 + 0x43) == uVar4) {
              if (*unaff_r11 != 0) {
                playsound_menu();
              }
              *local_6c = (uint)((int)*local_6c < 1);
              update_snap(this);
LAB_0000f1ea:
              uVar4 = local_40 >> 0x10 & 0xff;
            }
            else {
              if ((uint)*(byte *)((int)piVar7 + 0x42) == uVar4) {
                if ((is_hv_mode != 0) && (is_horv_only == 0)) {
                  handle_goto_vertical(this);
                  this[0x14] = (lemon_menu)0x0;
                  goto LAB_0000f1ea;
                }
              }
              else {
                *local_6c = (uint)local_40._1_1_;
              }
            }
          }
        }
        if ((uint)jbt_coin == uVar4) {
          bVar2 = *local_80;
          if (*local_70 == 4) {
            iVar6 = *(int *)(this + 0x18) + 2;
          }
          else {
            iVar6 = *(int *)(this + 0x18) + 1;
          }
          *(int *)(this + 0x18) = iVar6;
          *(undefined4 *)(this + 0x1c) = 0x3c;
          if (bVar2 == 0) {
            render_coin(this,(uint)bVar2);
          }
          if (*unaff_r11 != 0) {
            playsound_coin();
            lVar1 = this[0x14];
            goto joined_r0x0000f4f2;
          }
        }
        break;
      case 0xc:
switchD_0000edd4_caseD_c:
        needto_rungame = 0;
        this[0x14] = (lemon_menu)0x0;
        needto_reboot = 0;
        *local_68 = 0;
        needto_editgamelist = 0;
        goto LAB_0000eed8;
      case 0x18:
        if (local_3c == 1) {
          update_snap(this);
          lVar1 = this[0x14];
          goto joined_r0x0000f4f2;
        }
        if (local_3c == 4) {
          if (moving_thread_exit == 0) {
            if (*unaff_r11 != 0) {
              playsound_menu();
            }
            if ((0 < *(int *)(this + 0x18)) || (0 < *local_78)) {
              iVar6 = select_previous_with_top_index
                                (*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c));
joined_r0x0000f25a:
              if (iVar6 != 0) {
                bVar2 = *local_80;
                goto joined_r0x0000f34a;
              }
            }
          }
        }
        else {
          if (local_3c == 5) {
            if (moving_thread_exit == 0) {
              if (*unaff_r11 != 0) {
                playsound_menu();
              }
              if (((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                 (iVar6 = select_next_with_top_index
                                    (*(menu **)(this + 0x24),1,
                                     *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0)) {
                bVar2 = *local_80;
                goto joined_r0x0000f34a;
              }
            }
          }
          else {
            if (local_3c == 6) {
              if (moving_thread_exit == 0) {
                if (*unaff_r11 != 0) {
                  playsound_page();
                }
                if (((0 < *(int *)(this + 0x18)) || (0 < *local_78)) &&
                   (iVar6 = select_previous_with_top_index
                                      (*(menu **)(this + 0x24),
                                       *(int *)(*(int *)(this + 0x10) + 0x5c),
                                       *(int *)(*(int *)(this + 0x10) + 0x5c)), iVar6 != 0)) {
                  bVar2 = *local_80;
                  goto joined_r0x0000f34a;
                }
              }
            }
            else {
              if (local_3c == 7) {
                if (moving_thread_exit == 0) {
                  if (*unaff_r11 != 0) {
                    playsound_page();
                  }
                  if ((0 < *(int *)(this + 0x18)) || (0 < *local_78)) {
                    iVar6 = select_next_with_top_index
                                      (*(menu **)(this + 0x24),
                                       *(int *)(*(int *)(this + 0x10) + 0x5c),
                                       *(int *)(*(int *)(this + 0x10) + 0x5c));
                    goto joined_r0x0000f25a;
                  }
                }
              }
              else {
                if (local_3c == 8) {
                  if (*local_6c != 0) {
                    osd_cmd(2,0);
                    SDL_Delay(10);
                    osd_cmd(2,0);
                    lVar1 = this[0x14];
                    goto joined_r0x0000f4f2;
                  }
                  osd_cmd(1,0);
                  SDL_Delay(10);
                  osd_cmd(1,0);
                }
              }
            }
          }
        }
      }
      lVar1 = this[0x14];
joined_r0x0000f4f2:
    } while (lVar1 != (lemon_menu)0x0);
  }
LAB_0000eed8:
  set_coin_enable_gpc6(0);
  if ((timeover_to_rungame == 0) ||
     (timeover_to_rungame = 0,
     *(int *)(*(int *)(this + 0x24) + 0xc) == *(int *)(*(int *)(this + 0x24) + 0x10))) {
    iVar6 = *(int *)(this + 0x34);
  }
  else {
    set_coin_enable_gpc6();
    moving_thread_exit = 1;
    page_thread_exit = 1;
    if (*(int *)(this + 0x34) != 0) {
      fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
      if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
        pclose(*(FILE **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x34) = 0;
    }
    handle_run_with_sdl_quit(this);
    this[0x14] = (lemon_menu)0x0;
    iVar6 = *(int *)(this + 0x34);
  }
  if (iVar6 != 0) {
    fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
    if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
      pclose(*(FILE **)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  osd_quit();
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
  *(undefined4 *)(this + 4) = uVar3;
  return;
}



// ll::lemon_menu::handle_print_gamelist()

void __thiscall handle_print_gamelist(lemon_menu *this)

{
  char *__s;
  int iVar1;
  int *piVar2;
  char acStack32 [12];
  int local_14;
  
  local_14 = __stack_chk_guard;
  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
    piVar2 = *(int **)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                      *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
    __strcpy_chk(acStack32,piVar2[2],10);
    __s = (char *)(**(code **)(*piVar2 + 8))(piVar2);
    puts(__s);
    do {
      select_next_with_top_index(*(menu **)(this + 0x24),1,*(int *)(*(int *)(this + 0x10) + 0x5c));
      piVar2 = *(int **)(*(int *)(*(int *)(this + 0x24) + 0xc) +
                        *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
      __s = (char *)(**(code **)(*piVar2 + 8))(piVar2);
      puts(__s);
      iVar1 = strcmp(acStack32,(char *)piVar2[2]);
    } while (iVar1 != 0);
  }
  if (local_14 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// ll::lemon_menu::main_loop_wireless()

void __thiscall main_loop_wireless(lemon_menu *this)

{
  lemon_menu lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  size_t __size;
  size_t extraout_r1;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  
  piVar16 = (int *)0x2;
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 2;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"main_loop: starting render loop",0x1f);
  piVar15 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar15 == (int *)0x0) {
    __throw_bad_cast();
    __size = extraout_r1;
LAB_000102f2:
    fwrite("stop\n",__size,5,*(FILE **)(this + 0x30));
    if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
      pclose(*(FILE **)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
LAB_00010014:
    handle_run_with_sdl_quit(this);
    this[0x14] = (lemon_menu)0x0;
    iVar12 = *piVar16;
  }
  else {
    if (*(char *)(piVar15 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar15 + 0x18))(piVar15,10);
    }
    put(-0x30);
    flush();
    if (is_free_mode < 1) {
      if (is_maxii_board == 0) {
        *(undefined4 *)(this + 0x18) = save_coin;
      }
      else {
        save_coin = load_coinnum_from_file();
        *(undefined4 *)(this + 0x18) = save_coin;
      }
    }
    else {
      *(undefined4 *)(this + 0x18) = 3;
    }
    if (needto_vert != 0) {
      clear_screen_buffer(*(layout **)(this + 0x10));
      SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x68),0,*(undefined4 *)this,0);
      SDL_UpdateRect(*(undefined4 *)this,0,0,0,0);
      return;
    }
    if (is_autorun != 0) {
      clear_screen_buffer(*(layout **)(this + 0x10));
      SDL_UpperBlit(*(undefined4 *)(*(int *)(this + 0x10) + 0x68),0,*(undefined4 *)this,0);
      SDL_UpdateRect(*(undefined4 *)this,0,0,0,0);
      handle_run_with_sdl_quit_setgame(this);
      return;
    }
    is_help_snap = (uint)is_autorun;
    render_background(*(menu **)(this + 0x10));
    if (is_free_mode == 0) {
      show_coin((layout *)*(menu **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),0);
    }
    else {
      show_free(*(menu **)(this + 0x10));
    }
    show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    if (*(int *)(this + 4) != 0) {
      SDL_RemoveTimer();
    }
    uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
    bVar2 = is_autorun;
    *(undefined4 *)(this + 4) = uVar3;
    if (bVar2 == 0) {
      render_list(this);
    }
    local_40 = 0x10;
    if (is_bit2_flip == 0) {
      iVar14 = *(int *)(this + 0x10);
      local_3c = SEXT24(*(short *)(iVar14 + 0x7c));
      local_38 = (int)*(short *)(iVar14 + 0x7e);
      local_34 = (uint)*(ushort *)(iVar14 + 0x80);
      local_30 = (uint)*(ushort *)(iVar14 + 0x82);
    }
    else {
      iVar14 = *(int *)(this + 0x10);
      local_34 = (uint)*(ushort *)(iVar14 + 0x80);
      local_30 = (uint)*(ushort *)(iVar14 + 0x82);
      local_3c = (xres - ((int)*(short *)(iVar14 + 0x7c) + local_34)) + 1;
      local_38 = (yres - ((int)*(short *)(iVar14 + 0x7e) + local_30)) + 1;
    }
    piVar16 = &timeover_to_rungame;
    osd_init(&local_40);
    jbt_a = ybuf_222[0];
    jbt_b = ybuf_222[1];
    jbt_coin = ybuf_222[8];
    jbt_start = ybuf_222[9];
    jbt_c = ybuf_222[2];
    jbt_d = ybuf_222[3];
    iVar14 = get_int((char *)&g_opts);
    iVar4 = get_int((char *)&g_opts);
    iVar5 = get_int((char *)&g_opts);
    iVar6 = get_int((char *)&g_opts);
    iVar7 = get_int((char *)&g_opts);
    iVar8 = get_int((char *)&g_opts);
    get_int((char *)&g_opts);
    iVar9 = get_int((char *)&g_opts);
    iVar10 = get_int((char *)&g_opts);
    uVar11 = get_int((char *)&g_opts);
    this[0x14] = (lemon_menu)0x1;
    update_snap(this);
    if (0 < is_maxii_board) {
      Write_Y3(0x5501);
    }
    if (music_on != 0) {
      set_volume();
      play_bg_music();
    }
    lock_thread = 0;
    moving_thread_exit = 1;
    down_counter = 0x14;
    iVar12 = SDL_GetTicks();
    lVar1 = this[0x14];
    next_time = iVar12 + 0x5dc;
joined_r0x0000f9b0:
    iVar12 = timeover_to_rungame;
    if (lVar1 != (lemon_menu)0x0) {
      if (is_cga != 0) goto LAB_0000faba;
LAB_0000fa00:
      if ((cnti & 3) == 0) {
        render_g2d(this);
      }
      cnti = cnti + 1;
      if (2 < (int)cnti) {
        cnti = 0;
      }
      if (is_edit_mode != 0) goto LAB_0000fac8;
LAB_0000fa1a:
      do_change_mode(this);
      if (this[0x14] != (lemon_menu)0x0) {
        do {
          iVar12 = SDL_PollEvent(&local_40);
          if (iVar12 != 0) break;
          do {
            if (down_counter < 1) goto LAB_0000fa54;
            SDL_Delay(1);
            if (moving_thread_exit != 0) goto LAB_0000faa2;
            down_counter = down_counter + -1;
            iVar12 = SDL_PollEvent(&local_40);
          } while (iVar12 == 0);
          if ((((char)local_40 == '\a') && (local_40._2_1_ < 2)) && ((short)local_3c == 0)) {
            if (*(int *)(this + 4) != 0) {
              SDL_RemoveTimer();
            }
            uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
            moving_thread_exit = 1;
            *(undefined4 *)(this + 4) = uVar3;
            uVar13 = SDL_GetTicks();
            if (next_time <= uVar13) {
LAB_0000fc0e:
              bVar2 = is_autorun;
              iVar12 = *(int *)(this + 0x1c);
              if (iVar12 < 1) {
                this[0x14] = (lemon_menu)0x0;
                timeover_to_rungame = 1;
              }
              else {
                if (is_stop_timer < 1) {
                  iVar12 = iVar12 + -1;
                }
                if (is_stop_timer < 1) {
                  *(int *)(this + 0x1c) = iVar12;
                }
                if (bVar2 == 0) {
                  show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),iVar12);
                  render_g2d(this);
                }
                timeover_to_rungame = 0;
              }
              iVar12 = SDL_GetTicks();
              next_time = iVar12 + 0x5dc;
            }
          }
          else {
LAB_0000fa54:
            if (moving_thread_exit == 0) {
              if (is_pagemove == 0) {
                if (is_up == 0) {
                  if (music_on != 0) {
                    playsound_menu();
                  }
                  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
                    iVar12 = select_next_with_top_index
                                       (*(menu **)(this + 0x24),1,
                                        *(int *)(*(int *)(this + 0x10) + 0x5c));
                    goto joined_r0x0000fc6a;
                  }
                }
                else {
                  if (music_on != 0) {
                    playsound_menu();
                  }
                  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
                    iVar12 = select_previous_with_top_index
                                       (*(menu **)(this + 0x24),1,
                                        *(int *)(*(int *)(this + 0x10) + 0x5c));
                    goto joined_r0x0000fc6a;
                  }
                }
              }
              else {
                if (is_left == 0) {
                  if (music_on != 0) {
                    playsound_page();
                  }
                  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
                    iVar12 = select_next_with_top_index
                                       (*(menu **)(this + 0x24),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c));
                    goto joined_r0x0000fc6a;
                  }
                }
                else {
                  if (music_on != 0) {
                    playsound_page();
                  }
                  if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
                    iVar12 = select_previous_with_top_index
                                       (*(menu **)(this + 0x24),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c),
                                        *(int *)(*(int *)(this + 0x10) + 0x5c));
joined_r0x0000fc6a:
                    if ((iVar12 != 0) && (is_autorun == 0)) {
                      show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
                      render_g2d(this);
                    }
                  }
                }
              }
              SDL_Delay(0x14);
            }
LAB_0000faa2:
            uVar13 = SDL_GetTicks();
            if (next_time <= uVar13) goto LAB_0000fc0e;
          }
          read_dipsw_Y2_16_reopen();
          if (is_cga == 0) goto LAB_0000fa00;
LAB_0000faba:
          render_g2d(this);
          if (is_edit_mode == 0) goto LAB_0000fa1a;
LAB_0000fac8:
          uVar13 = read_dipsw_Y2_16_reopen();
          if ((uVar13 & 0x8000) == 0) {
            handle_reboot_edit_game_list(this);
            this[0x14] = (lemon_menu)0x0;
          }
          uVar13 = read_dipsw_Y1_16_reopen();
          if ((uVar13 & 0x8000) != 0) goto LAB_0000fa1a;
          handle_reboot_edit_game_list(this);
          this[0x14] = (lemon_menu)0x0;
          do_change_mode(this);
          if (this[0x14] == (lemon_menu)0x0) break;
        } while( true );
      }
      bVar2 = is_autorun;
      switch(local_40 & 0xff) {
      case 2:
        if ((iVar4 == local_38) || (iVar5 == local_38)) {
          iVar12 = *(int *)(this + 0x18);
joined_r0x0000fe78:
          if ((0 < iVar12) || (0 < is_free_browse)) {
LAB_0000fe7c:
            if (*(int *)(this + 4) != 0) {
              SDL_RemoveTimer();
            }
            uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
            bVar2 = is_autorun;
            *(undefined4 *)(this + 4) = uVar3;
            if (bVar2 == 0) {
              show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
              render_g2d(this);
              lVar1 = this[0x14];
              goto joined_r0x0000f9b0;
            }
          }
        }
        else {
          if (iVar6 == local_38) {
            if ((uVar11 & local_34) == 0) {
              if (iVar7 == iVar6) goto LAB_0000fe6c;
LAB_0000ff5e:
              iVar12 = *(int *)(this + 0x18);
              goto joined_r0x0000fe78;
            }
            if (0 < *(int *)(this + 0x18)) {
              iVar12 = select_previous_alpha(*(menu **)(this + 0x24));
joined_r0x000100b6:
              if (iVar12 != 0) goto LAB_0000fe7c;
            }
          }
          else {
            if (iVar7 == local_38) {
              if ((uVar11 & local_34) == 0) {
LAB_0000fe6c:
                if (iVar6 == iVar7) goto LAB_0000ff5e;
                iVar12 = *(int *)(this + 0x18);
                goto joined_r0x0000fe78;
              }
              if (0 < *(int *)(this + 0x18)) {
                iVar12 = select_next_alpha(*(menu **)(this + 0x24));
                goto joined_r0x000100b6;
              }
            }
          }
        }
        break;
      case 3:
        if (iVar14 == local_38) goto switchD_0000fb06_caseD_c;
        if (iVar9 == local_38) {
          if ((0 < *(int *)(this + 0x18)) &&
             (*(int *)(*(int *)(this + 0x24) + 0xc) != *(int *)(*(int *)(this + 0x24) + 0x10))) {
            set_coin_enable_gpc6(0);
            __size = 1;
            moving_thread_exit = 1;
            page_thread_exit = 1;
            if (*(int *)(this + 0x34) != 0) goto LAB_000102f2;
            goto LAB_00010014;
          }
        }
        else {
          if ((iVar10 != local_38) && (iVar8 == local_38)) {
            uVar13 = (uint)is_autorun;
            if (coinset_val == 4) {
              iVar12 = *(int *)(this + 0x18) + 2;
            }
            else {
              iVar12 = *(int *)(this + 0x18) + 1;
            }
            *(int *)(this + 0x18) = iVar12;
            *(undefined4 *)(this + 0x1c) = 0x3c;
            if (bVar2 == 0) {
              render_coin(this,uVar13);
              lVar1 = this[0x14];
              goto joined_r0x0000f9b0;
            }
          }
        }
        break;
      case 7:
        if (local_40._1_1_ == '\x02') {
          uVar13 = (uint)local_40._2_1_;
          if (local_40._2_1_ == 1) {
            iVar12 = (int)(short)local_3c;
            if (iVar12 + 32000 < 0 == SCARRY4(iVar12,32000)) {
              if (iVar12 < 0x7d01) {
                if ((short)local_3c == 0) {
                  if (up_is_down != 0) {
                    down_counter = 0x14;
                    moving_thread_exit = uVar13;
                    up_is_down = local_3c & 0xffff;
                    handle_up(this);
                  }
                  if (down_is_down != 0) {
                    down_is_down = 0;
                    moving_thread_exit = 1;
                    down_counter = 0x14;
                    handle_down(this);
                    lVar1 = this[0x14];
                    goto joined_r0x0000f9b0;
                  }
                }
              }
              else {
                if ((int)down_is_down < 1) {
                  up_is_down = 0;
                  left_is_down = 0;
                  right_is_down = 0;
                  down_is_down = uVar13;
                  if (music_on != 0) {
                    playsound_menu();
                  }
                  handle_down_moving(this);
                  if (is_cga == 0) {
                    SDL_Delay(0x78);
                  }
                  else {
                    SDL_Delay(0xb4);
                  }
                  moving_thread_exit = 0;
                  is_up = 0;
                  is_pagemove = 0;
                  lVar1 = this[0x14];
                  goto joined_r0x0000f9b0;
                }
              }
            }
            else {
              if ((int)up_is_down < 1) {
                down_is_down = 0;
                left_is_down = 0;
                right_is_down = 0;
                up_is_down = uVar13;
                if (music_on != 0) {
                  playsound_menu();
                }
                handle_up_moving(this);
                is_pagemove = 0;
                is_up = 1;
joined_r0x000101f0:
                if (is_cga == 0) {
                  moving_thread_exit = 0;
                  SDL_Delay(0x78);
                  lVar1 = this[0x14];
                }
                else {
                  moving_thread_exit = 0;
                  SDL_Delay(0xb4);
                  lVar1 = this[0x14];
                }
                goto joined_r0x0000f9b0;
              }
            }
          }
          else {
            if (local_40._2_1_ == 0) {
              iVar12 = (int)(short)local_3c;
              if (iVar12 + 32000 < 0 == SCARRY4(iVar12,32000)) {
                if (iVar12 < 0x7d01) {
                  if ((short)local_3c == 0) {
                    if (left_is_down != 0) {
                      moving_thread_exit = 1;
                      down_counter = 0x14;
                      left_is_down = local_3c & 0xffff;
                      handle_pgup(this);
                    }
                    if (right_is_down != 0) {
                      right_is_down = 0;
                      moving_thread_exit = 1;
                      down_counter = 0x14;
                      handle_pgdown(this);
                      lVar1 = this[0x14];
                      goto joined_r0x0000f9b0;
                    }
                  }
                }
                else {
                  if ((int)right_is_down < 1) {
                    right_is_down = 1;
                    left_is_down = uVar13;
                    if (music_on != 0) {
                      playsound_page();
                    }
                    handle_pgdown_moving(this);
                    is_left = 0;
                    goto joined_r0x0001013c;
                  }
                }
              }
              else {
                if ((int)left_is_down < 1) {
                  left_is_down = 1;
                  right_is_down = uVar13;
                  if (music_on != 0) {
                    playsound_page();
                  }
                  handle_pgup_moving(this);
                  is_left = 1;
joined_r0x0001013c:
                  is_pagemove = 1;
                  goto joined_r0x000101f0;
                }
              }
            }
          }
        }
        break;
      case 0xb:
        uVar13 = (uint)local_40._2_1_;
        if (local_40._1_1_ == '\x02') {
          if ((uint)jbt_start == uVar13) {
            if ((0 < *(int *)(this + 0x18)) || (0 < is_free_browse)) {
              if (music_on != 0) {
                playsound_menu();
              }
              if (*(int *)(*(int *)(this + 0x24) + 0xc) != *(int *)(*(int *)(this + 0x24) + 0x10)) {
                set_coin_enable_gpc6(0);
                moving_thread_exit = 1;
                page_thread_exit = 1;
                if (*(int *)(this + 0x34) != 0) {
                  fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
                  if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
                    pclose(*(FILE **)(this + 0x30));
                  }
                  *(undefined4 *)(this + 0x30) = 0;
                  *(undefined4 *)(this + 0x34) = 0;
                }
                handle_run_with_sdl_quit(this);
                this[0x14] = (lemon_menu)0x0;
              }
              uVar13 = local_40 >> 0x10 & 0xff;
            }
          }
          else {
            if ((uint)jbt_c == uVar13) {
              if (music_on != 0) {
                playsound_menu();
              }
              is_help_snap = (uint)((int)is_help_snap < 1);
              update_snap(this);
              uVar13 = local_40 >> 0x10 & 0xff;
            }
            else {
              if ((uint)jbt_b == uVar13) {
                if ((is_hv_mode != 0) && (is_horv_only == 0)) {
                  handle_goto_vertical(this);
                  this[0x14] = (lemon_menu)0x0;
                  uVar13 = local_40 >> 0x10 & 0xff;
                }
              }
              else {
                if ((uint)jbt_d == uVar13) {
                  if (enable_print_gamelist != 0) {
                    handle_print_gamelist(this);
                    uVar13 = local_40 >> 0x10 & 0xff;
                  }
                }
                else {
                  is_help_snap = 0;
                }
              }
            }
          }
        }
        bVar2 = is_autorun;
        if ((uint)jbt_coin == uVar13) {
          uVar13 = (uint)is_autorun;
          if (coinset_val == 4) {
            iVar12 = *(int *)(this + 0x18) + 2;
          }
          else {
            iVar12 = *(int *)(this + 0x18) + 1;
          }
          *(int *)(this + 0x18) = iVar12;
          *(undefined4 *)(this + 0x1c) = 0x3c;
          if (bVar2 == 0) {
            render_coin(this,uVar13);
          }
          if (music_on != 0) {
            playsound_coin();
            lVar1 = this[0x14];
            goto joined_r0x0000f9b0;
          }
        }
        break;
      case 0xc:
switchD_0000fb06_caseD_c:
        needto_rungame = 0;
        this[0x14] = (lemon_menu)0x0;
        needto_reboot = 0;
        needto_vert = 0;
        needto_editgamelist = 0;
        iVar12 = timeover_to_rungame;
        goto joined_r0x0000fd18;
      case 0x18:
        if (local_3c == 1) {
          update_snap(this);
          lVar1 = this[0x14];
        }
        else {
          if (local_3c != 8) break;
          if (is_help_snap == 0) {
            osd_cmd(1,0);
            SDL_Delay(10);
            osd_cmd(1,0);
            break;
          }
          osd_cmd(2,0);
          SDL_Delay(10);
          osd_cmd(2,0);
          lVar1 = this[0x14];
        }
        goto joined_r0x0000f9b0;
      }
      lVar1 = this[0x14];
      goto joined_r0x0000f9b0;
    }
  }
joined_r0x0000fd18:
  if ((iVar12 == 0) ||
     (timeover_to_rungame = 0,
     *(int *)(*(int *)(this + 0x24) + 0xc) == *(int *)(*(int *)(this + 0x24) + 0x10))) {
    iVar14 = *(int *)(this + 0x34);
  }
  else {
    set_coin_enable_gpc6();
    moving_thread_exit = 1;
    page_thread_exit = 1;
    if (*(int *)(this + 0x34) != 0) {
      fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
      if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
        pclose(*(FILE **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x34) = 0;
    }
    handle_run_with_sdl_quit(this);
    this[0x14] = (lemon_menu)0x0;
    iVar14 = *(int *)(this + 0x34);
  }
  if (iVar14 != 0) {
    fwrite("stop\n",1,5,*(FILE **)(this + 0x30));
    if (*(FILE **)(this + 0x30) != (FILE *)0x0) {
      pclose(*(FILE **)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  osd_quit();
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar3 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
  *(undefined4 *)(this + 4) = uVar3;
  return;
}



// ll::lemon_menu::get_single_run_game_index()

void __thiscall get_single_run_game_index(lemon_menu *this)

{
  int iVar1;
  size_t sVar2;
  ushort **ppuVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  char *__s2;
  int iVar8;
  menu *this_00;
  char acStack56 [12];
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if (((*(int *)(this + 0x18) < 1) && (is_free_browse < 1)) &&
     (iVar1 = save_setgame_index, is_autorun == '\0')) {
LAB_000103de:
    save_setgame_index = iVar1;
    if (local_2c == __stack_chk_guard) {
      return;
    }
  }
  else {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"Into get_single_run_game_index",0x1e);
    piVar7 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar7 != (int *)0x0) {
      if (*(char *)(piVar7 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar7 + 0x18))(piVar7,10);
      }
      put(-0x30);
      flush();
      iVar1 = save_setgame_index;
      if (is_autorun == '\0') goto LAB_000103de;
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"Into get_single_run_game_index, ",0x20);
      sVar2 = strlen(setgame);
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,setgame,sVar2);
      piVar7 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar7 != (int *)0x0) {
        if (*(char *)(piVar7 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*piVar7 + 0x18))(piVar7,10);
        }
        put(-0x30);
        flush();
        this_00 = *(menu **)(this + 0x24);
        iVar8 = 0;
        *(undefined4 *)(this_00 + 0x18) = 0;
        __s2 = *(char **)(**(int **)(this_00 + 0xc) + 8);
        __strcpy_chk(acStack56,__s2,10);
        save_setgame_index = 0;
        ppuVar3 = __ctype_b_loc();
LAB_000104ba:
        puVar4 = *ppuVar3;
        iVar6 = 0;
        do {
          uVar5 = (uint)(byte)setgame[iVar6];
          if ((puVar4[(uint)(byte)__s2[iVar6]] & 8) == 0) {
            if ((int)((uint)puVar4[uVar5] << 0x1c) < 0) goto LAB_00010506;
            iVar1 = iVar8;
            if (iVar6 != 0) goto LAB_000103de;
          }
          else {
            if (((puVar4[uVar5] & 8) == 0) || ((uint)(byte)__s2[iVar6] != uVar5)) goto LAB_00010506;
          }
          iVar6 = iVar6 + 1;
        } while( true );
      }
    }
    __throw_bad_cast();
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
LAB_00010506:
  select_next_with_top_index(this_00,1,*(int *)(*(int *)(this + 0x10) + 0x5c));
  this_00 = *(menu **)(this + 0x24);
  __s2 = *(char **)(*(int *)(*(int *)(this_00 + 0xc) + *(int *)(this_00 + 0x18) * 4) + 8);
  iVar6 = strcmp(acStack56,__s2);
  iVar1 = save_setgame_index;
  if (iVar6 == 0) goto LAB_000103de;
  iVar8 = iVar8 + 1;
  goto LAB_000104ba;
}



// WARNING: Removing unreachable block (ram,0x00010e92)
// WARNING: Could not reconcile some variable overlaps
// ll::lemon_menu::load_menus()

void __thiscall load_menus(lemon_menu *this)

{
  bool bVar1;
  FILE *__stream;
  int iVar2;
  undefined4 uVar3;
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
  ushort **ppuVar14;
  ushort *puVar15;
  char *__s2;
  bad_lemon *this_00;
  undefined **ppuVar16;
  undefined **extraout_r1;
  undefined **ppuVar17;
  uint uVar18;
  FuncDef0 *pFVar19;
  FuncDef1 *pFVar20;
  int **ppiVar21;
  FILE *pFVar22;
  int **ppiVar23;
  int **ppiVar24;
  int **ppiVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  undefined **unaff_r11;
  char *__dest;
  int local_9fe8;
  int local_9fd8;
  int local_9fc4;
  undefined **local_9fc0;
  undefined **local_9fbc;
  undefined *local_9fb8;
  undefined4 local_9fb4;
  undefined4 local_9fa8;
  char **local_9fa4;
  char *pcStack40728;
  undefined4 local_9f14;
  undefined4 local_9ef0;
  undefined *local_9ec8;
  undefined4 local_9ec4;
  undefined4 local_9eb8;
  undefined **ppuStack40628;
  undefined *local_9e28;
  undefined4 local_9e24;
  undefined4 local_9e18;
  char *local_9dd8;
  undefined4 local_9dd4;
  undefined4 local_9dc8;
  char *local_9d88;
  undefined4 local_9d84;
  undefined4 local_9d5c;
  undefined *local_9d38;
  undefined4 local_9d34;
  undefined *local_9d0c;
  char local_9c94 [40000];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack60;
  undefined4 uStack56;
  undefined local_34;
  int local_2c;
  
  pFVar22 = (FILE *)0x0;
  local_54 = 0;
  local_2c = __stack_chk_guard;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  __stream = fopen("./showroms.lst","r");
  if (__stream == (FILE *)0x0) {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"./showroms.lst file open error .",0x20);
    endl_char_std__char_traits_char__((basic_ostream *)log);
  }
  else {
    __dest = local_9c94;
    while( true ) {
      iVar2 = feof(__stream);
      if (iVar2 != 0) break;
      pFVar22 = (FILE *)((int)&pFVar22->_flags + 1);
      local_54 = iVar2;
      local_50 = iVar2;
      local_4c = iVar2;
      local_48 = iVar2;
      local_44 = iVar2;
      fgets((char *)&local_54,0xf,__stream);
      strcpy(__dest,(char *)&local_54);
      __dest = __dest + 0x14;
    }
    fclose(__stream);
    __stream = pFVar22;
  }
  ppuStack40628 = &local_9e28;
  local_9fa4 = &pcStack40728;
  memset(ppuStack40628,0,400);
  local_9d88 = "params";
  local_9e28 = &DAT_0001b0a0;
  local_9dd8 = "title";
  local_9d5c = 0x1ae48;
  local_9e18 = 0x10;
  local_9d38 = &DAT_0001b0b4;
  local_9d0c = &DAT_0001b0b8;
  local_9dc8 = 0x10;
  local_9e24 = 3;
  local_9dd4 = 3;
  local_9d84 = 3;
  local_9d34 = 3;
  memset(local_9fa4,0,0xf0);
  pcStack40728 = "sorted";
  local_9ec8 = &DAT_0001b0c8;
  local_9f14 = 4;
  local_9ef0 = 1;
  local_9eb8 = 1;
  local_9ec4 = 5;
  memset(&local_9fb8,0,0xa0);
  local_9fb8 = &DAT_0001b0d0;
  local_9fb4 = 5;
  local_9fa8 = 9;
  uVar3 = cfg_init(&local_9fb8,0);
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
  basic_string((char *)&local_9fc4,(allocator *)&local_40);
  resolve((options *)&g_opts,(basic_string *)&local_9fc4);
  iVar2 = cfg_parse(uVar3,local_9fc4);
  if (iVar2 == -1) {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"load_menus: file error, using defaults",0x26);
    endl_char_std__char_traits_char__((basic_ostream *)log);
    cfg_parse_buf(uVar3,0x1ae48);
  }
  else {
    if (iVar2 == 1) {
      this_00 = (bad_lemon *)__cxa_allocate_exception(8);
      bad_lemon(this_00,"load_menus: parse error");
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&typeinfo,0x1159d);
    }
  }
  ppuVar4 = (undefined **)operator_new(0x20);
  ppuVar4[1] = (undefined *)0x0;
  *(undefined ***)ppuVar4 = &PTR__menu_1_00029bc8;
  basic_string((char *)(ppuVar4 + 2),(allocator *)"Arcade Games");
  ppuVar4[3] = (undefined *)0x0;
  ppuVar4[4] = (undefined *)0x0;
  ppuVar4[5] = (undefined *)0x0;
  ppuVar4[6] = (undefined *)0x0;
  ppuVar4[7] = (undefined *)0x0;
  *(undefined ***)(this + 0x20) = ppuVar4;
  iVar2 = cfg_size(uVar3,&DAT_0001b0d0);
  if (0 < iVar2) {
    local_9fd8 = 0;
    do {
      uVar5 = cfg_getnsec(uVar3,&DAT_0001b0d0,local_9fd8);
      __s = (allocator *)cfg_title();
      iVar6 = cfg_getbool(uVar5,"sorted");
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log," --------------",0xf);
      if (__s == (allocator *)0x0) {
        clear((_Ios_Iostate)(log + *(int *)(log._0_4_ + -0xc)));
      }
      else {
        sVar7 = strlen((char *)__s);
        __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,(char *)__s,sVar7);
      }
      __ostream_insert_char_std__char_traits_char__((basic_ostream *)log," --------------",0xf);
      piVar26 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar26 == (int *)0x0) {
        __throw_bad_cast();
        do {
          _M_dispose((allocator *)(unaff_r11[2] + -0xc));
          *(undefined ***)unaff_r11 = &PTR__item_1_0001acb0;
          operator_delete(unaff_r11);
          _M_dispose((allocator *)(local_9fc4 + -0xc));
          __cxa_end_cleanup();
          _M_dispose((allocator *)(unaff_r11[3] + -0xc));
        } while( true );
      }
      if (*(char *)(piVar26 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar26 + 0x18))(piVar26,10);
      }
      put(-0x30);
      flush();
      if ((*__s != (allocator)0x2e) || (this[0x15] != (lemon_menu)0x0)) {
        ppuVar4 = (undefined **)operator_new(0x20);
        ppuVar4[1] = (undefined *)0x0;
        *(undefined ***)ppuVar4 = &PTR__menu_1_00029bc8;
        basic_string((char *)(ppuVar4 + 2),__s);
        puVar8 = *(undefined **)(this + 0x20);
        ppuVar4[4] = (undefined *)0x0;
        ppuVar4[5] = (undefined *)0x0;
        ppuVar4[1] = puVar8;
        ppuVar16 = *(undefined ***)(puVar8 + 0x10);
        ppuVar17 = *(undefined ***)(puVar8 + 0x14);
        ppuVar4[3] = (undefined *)0x0;
        ppuVar4[6] = (undefined *)0x0;
        ppuVar4[7] = (undefined *)0x0;
        local_9fc0 = ppuVar4;
        if (ppuVar16 == ppuVar17) {
          _M_insert_aux((vector_ll__item__std__allocator_ll__item___ *)(puVar8 + 0xc),
                        (__normal_iterator)ppuVar16,(item **)&local_9fc0);
        }
        else {
          if (ppuVar16 != (undefined **)0x0) {
            *(undefined ***)ppuVar16 = ppuVar4;
            ppuVar16 = *(undefined ***)(puVar8 + 0x10);
          }
          *(undefined ***)(puVar8 + 0x10) = ppuVar16 + 1;
        }
        pFVar20 = (FuncDef1 *)0x0;
        save_setgame_index = 0;
        iVar9 = cfg_size(uVar5,&DAT_0001b0c8);
        if (0 < iVar9) {
          iVar27 = 0;
          local_9fe8 = iVar27;
LAB_0001091c:
          uVar10 = cfg_getnsec(uVar5,&DAT_0001b0c8,iVar27);
          __s = (allocator *)cfg_getstr(uVar10,&DAT_0001b0a0);
          paVar11 = (allocator *)cfg_getstr(uVar10,"title");
          paVar12 = (allocator *)cfg_getstr(uVar10,"params");
          paVar13 = (allocator *)cfg_getstr(uVar10,&DAT_0001b0b4);
          pFVar20 = (FuncDef1 *)(uint)(byte)*paVar11;
          if (((*paVar11 != (allocator)0x2e) ||
              (pFVar20 = (FuncDef1 *)(uint)(byte)this[0x15], this[0x15] != (lemon_menu)0x0)) &&
             (__stream != (FILE *)0x0)) {
            ppuVar14 = __ctype_b_loc();
            __dest = local_9c94;
            unaff_r11 = (undefined **)0x0;
            puVar15 = *ppuVar14;
LAB_0001098c:
            pFVar20 = (FuncDef1 *)0x0;
            do {
              uVar18 = (uint)(byte)__dest[(int)pFVar20];
              if ((puVar15[(uint)(byte)__s[(int)pFVar20]] & 8) == 0) {
                if ((int)((uint)puVar15[uVar18] << 0x1c) < 0) goto LAB_00010bbc;
                if (pFVar20 != (FuncDef1 *)0x0) {
                  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
                  __ostream_insert_char_std__char_traits_char__
                            ((basic_ostream *)log,"-->add rom : ",0xd);
                  if (__s == (allocator *)0x0) {
                    clear((_Ios_Iostate)(log + *(int *)(log._0_4_ + -0xc)));
                    unaff_r11 = *(undefined ***)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
                    if (unaff_r11 != (undefined **)0x0) goto LAB_00010a08;
LAB_00010c1a:
                    __throw_bad_cast();
                    ppuVar16 = extraout_r1;
LAB_00010c1e:
                    _M_insert_aux((vector_ll__item__std__allocator_ll__item___ *)(ppuVar4 + 3),
                                  (__normal_iterator)ppuVar16,(item **)&local_9fbc);
                  }
                  else {
                    sVar7 = strlen((char *)__s);
                    __ostream_insert_char_std__char_traits_char__
                              ((basic_ostream *)log,(char *)__s,sVar7);
                    unaff_r11 = *(undefined ***)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
                    if (unaff_r11 == (undefined **)0x0) goto LAB_00010c1a;
LAB_00010a08:
                    if (*(char *)(unaff_r11 + 7) == '\0') {
                      _M_widen_init();
                      (**(code **)(*unaff_r11 + 0x18))(unaff_r11,10);
                    }
                    put(-0x30);
                    flush();
                    unaff_r11 = (undefined **)operator_new(0x18);
                    unaff_r11[1] = (undefined *)0x0;
                    *(undefined ***)unaff_r11 = &PTR__game_1_00029c18;
                    basic_string((char *)(unaff_r11 + 2),__s);
                    basic_string((char *)(unaff_r11 + 3),paVar11);
                    basic_string((char *)(unaff_r11 + 4),paVar12);
                    basic_string((char *)(unaff_r11 + 5),paVar13);
                    *(undefined ***)(unaff_r11 + 1) = ppuVar4;
                    ppuVar16 = (undefined **)ppuVar4[4];
                    local_9fbc = unaff_r11;
                    if (ppuVar16 == (undefined **)ppuVar4[5]) goto LAB_00010c1e;
                    if (ppuVar16 != (undefined **)0x0) {
                      *(undefined ***)ppuVar16 = unaff_r11;
                      ppuVar16 = (undefined **)ppuVar4[4];
                    }
                    *(undefined ***)(ppuVar4 + 4) = ppuVar16 + 1;
                  }
                  pFVar20 = (FuncDef1 *)(uint)is_autorun;
                  if (is_autorun == 0) goto LAB_00010adc;
                  puVar15 = *ppuVar14;
                  pFVar20 = (FuncDef1 *)0x0;
                  goto LAB_00010ab2;
                }
              }
              else {
                if (((puVar15[uVar18] & 8) == 0) || ((uint)(byte)__s[(int)pFVar20] != uVar18))
                goto LAB_00010bbc;
              }
              pFVar20 = pFVar20 + 1;
            } while( true );
          }
          goto LAB_00010ae2;
        }
LAB_00010aec:
        if (iVar6 == 1) {
          ppiVar21 = (int **)ppuVar4[3];
          ppiVar23 = (int **)ppuVar4[4];
          if (ppiVar21 != ppiVar23) {
            iVar6 = count_leading_zeroes((int)(int **)((int)ppiVar23 - (int)ppiVar21) >> 2);
            pFVar19 = (FuncDef0 *)((0x1f - iVar6) * 2);
                        
            __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
                      ((__normal_iterator)ppiVar21,(__normal_iterator)ppiVar23,(int)pFVar19,pFVar20)
            ;
            if ((int)(int **)((int)ppiVar23 - (int)ppiVar21) < 0x44) {
                            
              __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                        ((__normal_iterator)ppiVar21,(__normal_iterator)ppiVar23,pFVar19);
            }
            else {
                            
              __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                        ((__normal_iterator)ppiVar21,(__normal_iterator)(ppiVar21 + 0x10),pFVar19);
              ppiVar21 = ppiVar21 + 0x10;
              while (ppiVar23 != ppiVar21) {
                piVar26 = *ppiVar21;
                ppiVar24 = ppiVar21;
                while( true ) {
                  ppiVar25 = ppiVar24 + -1;
                  piVar28 = *ppiVar25;
                  unaff_r11 = (undefined **)(**(code **)(*piVar26 + 8))(piVar26);
                  __dest = (char *)(**(code **)(*piVar28 + 8))(piVar28);
                  iVar6 = strcmp((char *)unaff_r11,__dest);
                  if (-1 < iVar6) break;
                  *ppiVar24 = *ppiVar25;
                  ppiVar24 = ppiVar25;
                }
                *ppiVar24 = piVar26;
                ppiVar21 = ppiVar21 + 1;
              }
            }
          }
        }
      }
      local_9fd8 = local_9fd8 + 1;
    } while (iVar2 != local_9fd8);
  }
  pFVar20 = *(FuncDef1 **)(this + 0x20);
  ppiVar23 = *(int ***)(pFVar20 + 0xc);
  ppiVar21 = *(int ***)(pFVar20 + 0x10);
  if (ppiVar23 != ppiVar21) {
    iVar2 = count_leading_zeroes((int)(int **)((int)ppiVar21 - (int)ppiVar23) >> 2);
    pFVar19 = (FuncDef0 *)((0x1f - iVar2) * 2);
        
    __introsort_loop___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____int_bool____ll__item__ll__item___
              ((__normal_iterator)ppiVar23,(__normal_iterator)ppiVar21,(int)pFVar19,pFVar20);
    if ((int)(int **)((int)ppiVar21 - (int)ppiVar23) < 0x44) {
            
      __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                ((__normal_iterator)ppiVar23,(__normal_iterator)ppiVar21,pFVar19);
    }
    else {
            
      __insertion_sort___gnu_cxx____normal_iterator_ll__item___std__vector_ll__item__std__allocator_ll__item_____bool____ll__item__ll__item___
                ((__normal_iterator)ppiVar23,(__normal_iterator)(ppiVar23 + 0x10),pFVar19);
      ppiVar23 = ppiVar23 + 0x10;
      while (ppiVar21 != ppiVar23) {
        piVar26 = *ppiVar23;
        ppiVar24 = ppiVar23;
        while( true ) {
          ppiVar25 = ppiVar24 + -1;
          piVar28 = *ppiVar25;
          __dest = (char *)(**(code **)(*piVar26 + 8))(piVar26);
          __s2 = (char *)(**(code **)(*piVar28 + 8))(piVar28);
          iVar2 = strcmp(__dest,__s2);
          if (-1 < iVar2) break;
          *ppiVar24 = *ppiVar25;
          ppiVar24 = ppiVar25;
        }
        *ppiVar24 = piVar26;
        ppiVar23 = ppiVar23 + 1;
      }
    }
    pFVar20 = *(FuncDef1 **)(this + 0x20);
  }
  *(FuncDef1 **)(this + 0x24) = pFVar20;
  cfg_free(uVar3);
  if ((allocator *)(local_9fc4 + -0xc) != (allocator *)_S_empty_rep_storage) {
    piVar26 = (int *)(local_9fc4 + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar26);
      iVar2 = *piVar26;
      bVar1 = (bool)hasExclusiveAccess(piVar26);
    } while (!bVar1);
    *piVar26 = iVar2 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar2 < 1) {
      _M_destroy((allocator *)(local_9fc4 + -0xc));
    }
  }
  if (local_2c != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
LAB_00010bbc:
  unaff_r11 = (undefined **)((int)unaff_r11 + 1);
  __dest = __dest + 0x14;
  if ((int)__stream <= (int)unaff_r11) goto LAB_00010ae2;
  goto LAB_0001098c;
LAB_00010ab2:
  uVar18 = (uint)(byte)pFVar20[0x3469c];
  if ((puVar15[(uint)(byte)__s[(int)pFVar20]] & 8) == 0) {
    if ((int)((uint)puVar15[uVar18] << 0x1c) < 0) goto LAB_00010adc;
    if (pFVar20 != (FuncDef1 *)0x0) goto code_r0x00010ad2;
  }
  else {
    if (((puVar15[uVar18] & 8) == 0) || ((uint)(byte)__s[(int)pFVar20] != uVar18))
    goto LAB_00010adc;
  }
  pFVar20 = pFVar20 + 1;
  goto LAB_00010ab2;
code_r0x00010ad2:
  save_setgame_index = local_9fe8;
LAB_00010adc:
  local_9fe8 = local_9fe8 + 1;
LAB_00010ae2:
  iVar27 = iVar27 + 1;
  if (iVar9 == iVar27) goto LAB_00010aec;
  goto LAB_0001091c;
}



// ll::lemon_menu::lemon_menu(SDL_Surface*)

lemon_menu * __thiscall lemon_menu(lemon_menu *this,SDL_Surface *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  layout *this_00;
  layout *this_01;
  bool bVar5;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x15] = (lemon_menu)0x0;
  *(SDL_Surface **)this = param_1;
  uVar2 = get_int((char *)&g_opts);
  *(undefined4 *)(this + 0x28) = uVar2;
  uVar2 = get_int((char *)&g_opts);
  iVar3 = log._0_4_;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(*(int *)(log + *(int *)(iVar3 + -0xc) + 0x78) + 0x24) = 4;
  __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"lemon_menu::lemon_menu",0x16);
  piVar4 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  this_00 = (layout *)param_1;
  if (piVar4 == (int *)0x0) goto LAB_0001147a;
  if (*(char *)(piVar4 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar4 + 0x18))(piVar4,10);
  }
  put(-0x30);
  flush();
  ybuf_222._0_4_ = ybuf._0_4_;
  ybuf_222._4_4_ = ybuf._4_4_;
  ybuf_222._8_4_ = ybuf._8_4_;
  bVar5 = (dip_val & 4) != 0;
  ybuf_222._12_2_ = ybuf._12_2_;
  ybuf_222[14] = ybuf[14];
  save_flip_atboot = ybuf._4_4_;
  if (bVar5) {
    save_flip_atboot = 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (bVar5) {
    uVar2 = 0;
  }
  else {
    save_flip_atboot = 0;
    uVar2 = 0xb4;
  }
  *(undefined4 *)(this + 0x28) = uVar2;
  this_00 = xres;
  if ((iVar3 < 0x280) && (*(int *)(param_1 + 0xc) < 0x1e0)) {
    if (is_maxii_board == 0) {
      this_00 = (layout *)operator_new(0x8c);
      layout(this_00,"./xrun/xrun320240v12.conf",0x140,0xf0,*(int *)(this + 0x28));
    }
    else {
      if (is_cga < 0x65) {
        if (is_cn == 0) {
          this_00 = (layout *)operator_new(0x8c);
          layout(this_00,"./xrun/xrun320240.conf",0x140,0xf0,*(int *)(this + 0x28));
        }
        else {
          this_00 = (layout *)operator_new(0x8c);
          layout(this_00,"./xrun/xrun320240cn.conf",0x140,0xf0,*(int *)(this + 0x28));
        }
      }
      else {
        if (is_home_mode == 0) {
          if (is_cn == 0) {
            this_00 = (layout *)operator_new(0x8c);
            layout(this_00,"./xrun/xrun384240.conf",0x180,0xf0,*(int *)(this + 0x28));
          }
          else {
            this_00 = (layout *)operator_new(0x8c);
            layout(this_00,"./xrun/xrun384240cn.conf",0x180,0xf0,*(int *)(this + 0x28));
          }
        }
        else {
          if (is_cn == 0) {
            this_00 = (layout *)operator_new(0x8c);
            layout(this_00,"./xrun/xrun384240home.conf",0x180,0xf0,*(int *)(this + 0x28));
          }
          else {
            this_00 = (layout *)operator_new(0x8c);
            layout(this_00,"./xrun/xrun384240cnhome.conf",0x180,0xf0,*(int *)(this + 0x28));
          }
        }
      }
    }
LAB_00011094:
    *(layout **)(this + 0x10) = this_00;
  }
  else {
    if (is_maxii_board == 0) {
      this_00 = (layout *)operator_new(0x8c);
      layout(this_00,"./xrun/xrun640480v12.conf",0x280,0x1e0,*(int *)(this + 0x28));
      goto LAB_00011094;
    }
    if (xres != (layout *)0x320) {
      if (is_home_mode == 0) {
        if (is_cn == 0) {
          this_00 = (layout *)operator_new(0x8c);
          layout(this_00,"./xrun/xrun640480.conf",0x280,0x1e0,*(int *)(this + 0x28));
        }
        else {
          this_00 = (layout *)operator_new(0x8c);
          layout(this_00,"./xrun/xrun640480cn.conf",0x280,0x1e0,*(int *)(this + 0x28));
        }
      }
      else {
        if (is_cn == 0) {
          this_00 = (layout *)operator_new(0x8c);
          layout(this_00,"./xrun/xrun640480home.conf",0x280,0x1e0,*(int *)(this + 0x28));
        }
        else {
          this_00 = (layout *)operator_new(0x8c);
          layout(this_00,"./xrun/xrun640480cnhome.conf",0x280,0x1e0,*(int *)(this + 0x28));
        }
      }
      goto LAB_00011094;
    }
    if (is_home_mode == 0) {
      if (is_cn == 0) {
        this_01 = (layout *)operator_new(0x8c);
        layout(this_01,"./xrun/xrun800600.conf",800,600,*(int *)(this + 0x28));
      }
      else {
        this_01 = (layout *)operator_new(0x8c);
        layout(this_01,"./xrun/xrun800600cn.conf",800,600,*(int *)(this + 0x28));
      }
    }
    else {
      if (is_cn == 0) {
        this_01 = (layout *)operator_new(0x8c);
        layout(this_01,"./xrun/xrun800600home.conf",800,600,*(int *)(this + 0x28));
      }
      else {
        this_01 = (layout *)operator_new(0x8c);
        layout(this_01,"./xrun/xrun800600cnhome.conf",800,600,*(int *)(this + 0x28));
      }
    }
    *(layout **)(this + 0x10) = this_01;
  }
  *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 4;
  __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"load_menus();",0xd);
  piVar4 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar4 == (int *)0x0) {
LAB_0001147a:
    do {
      __throw_bad_cast();
      operator_delete(this_00);
      __cxa_end_cleanup();
    } while( true );
  }
  if (*(char *)(piVar4 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar4 + 0x18))(piVar4,10);
  }
  put(-0x30);
  flush();
  load_menus(this);
  *(undefined4 *)(this + 0x24) =
       *(undefined4 *)
        (*(int *)(*(int *)(this + 0x24) + 0xc) + *(int *)(*(int *)(this + 0x24) + 0x18) * 4);
  if (*(int *)(this + 4) != 0) {
    SDL_RemoveTimer();
  }
  uVar2 = SDL_AddTimer(*(undefined4 *)(this + 0x2c),0xc571,0);
  iVar3 = *(int *)(log._0_4_ + -0xc);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(*(int *)(log + iVar3 + 0x78) + 0x24) = 4;
  __ostream_insert_char_std__char_traits_char__
            ((basic_ostream *)log,"get_single_run_game_index();",0x1c);
  piVar4 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
  if (piVar4 == (int *)0x0) goto LAB_0001147a;
  if (*(char *)(piVar4 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar4 + 0x18))(piVar4,10);
  }
  put(-0x30);
  flush();
  get_single_run_game_index(this);
  t_j_v_vga(ybuf_222,xbuf);
  ybuf_222._8_4_ =
       (ybuf_222._8_4_ ^ 0xecececec) & 0x80808080 ^ (ybuf_222._8_4_ & 0x7f7f7f7f) + 0x6c6c6c6c;
  ybuf_222._0_4_ =
       (ybuf_222._0_4_ & 0x7f7f7f7f) + 0x6c6c6c6c ^ (ybuf_222._0_4_ ^ 0xecececec) & 0x80808080;
  ybuf_222._4_4_ =
       (ybuf_222._4_4_ & 0x7f7f7f7f) + 0x6c6c6c6c ^ (ybuf_222._4_4_ ^ 0xecececec) & 0x80808080;
  ybuf_222[14] = ybuf_222[14] + -0x14;
  ybuf_222._12_2_ = CONCAT11(ybuf_222[13] + -0x14,ybuf_222[12] + -0x14);
  if (needto_editgamelist == 0x55) {
    save_topindex = 0;
    save_selected = 0;
  }
  uVar1 = save_topindex;
  uVar2 = save_selected;
  if (needto_rungame != 0x55) {
    iVar3 = needto_reboot;
    if (needto_reboot != 0x55) {
      iVar3 = 0;
    }
    if (needto_reboot != 0x55) {
      *(int *)(this + 0x18) = iVar3;
      goto LAB_00011216;
    }
  }
  iVar3 = *(int *)(this + 0x24);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x18) = uVar2;
  *(undefined4 *)(iVar3 + 0x1c) = uVar1;
LAB_00011216:
  if (is_autorun != '\0') {
    *(undefined4 *)(*(int *)(this + 0x24) + 0x18) = save_setgame_index;
  }
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
    *(undefined ***)ppuVar1 = &PTR__item_1_0001acb0;
    return;
  }
  if (*(char *)(piVar2 + 7) == '\0') {
    _M_widen_init();
    (**(code **)(*piVar2 + 0x18))(piVar2,10);
  }
  put(-0x30);
  flush();
  *(byte *)(this + 0x15) = (byte)this[0x15] ^ 1;
  load_menus(this);
  if (is_autorun == '\0') {
    render_background(*(menu **)(this + 0x10));
    if (is_free_mode == 0) {
      show_coin((layout *)*(menu **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x18),0);
    }
    else {
      show_free(*(menu **)(this + 0x10));
    }
    show_time(*(layout **)(this + 0x10),*(menu **)(this + 0x24),*(int *)(this + 0x1c));
    show_list_topindex(*(layout **)(this + 0x10),*(menu **)(this + 0x24));
    render_g2d(this);
    return;
  }
  return;
}



// ll::item::~item()

void __thiscall _item(item *this)

{
  *(undefined ***)this = &PTR__item_1_0001acb0;
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
  *(undefined ***)this = &PTR__item_1_0001acb0;
  operator_delete(this);
  return this;
}



// ll::bad_lemon::~bad_lemon()

bad_lemon * __thiscall _bad_lemon(bad_lemon *this)

{
  *(undefined ***)this = &PTR__bad_lemon_1_0001acd8;
  _exception((exception *)this);
  return this;
}



// ll::bad_lemon::~bad_lemon()

bad_lemon * __thiscall _bad_lemon(bad_lemon *this)

{
  *(undefined ***)this = &PTR__bad_lemon_1_0001acd8;
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
  *(undefined ***)this = &PTR__bad_lemon_1_0001acd8;
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
    put(-0x30);
    flush();
    return (undefined4 *)this;
  }
  __throw_bad_cast();
  _exception((exception *)this);
  __src = (void **)__cxa_end_cleanup();
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
      if (__dest == (void *)0x0) goto LAB_000116be;
    }
  }
  __dest = operator_new(uVar7);
LAB_000116be:
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
      if (__dest == (void *)0x0) goto LAB_000116be;
    }
  }
  __dest = operator_new(uVar4);
LAB_000116be:
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



// WARNING: Removing unreachable block (ram,0x0001270c)
// WARNING: Removing unreachable block (ram,0x0001271a)
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
  short sVar13;
  uint uVar14;
  undefined1 *puVar15;
  short sVar16;
  int *piVar17;
  short sVar18;
  int *piVar19;
  char *local_c68;
  int local_c64;
  stat sStack3168;
  char *pcStack3080;
  undefined4 uStack3076;
  undefined4 uStack3064;
  char *pcStack3032;
  char *pcStack3000;
  undefined4 uStack2996;
  undefined4 uStack2984;
  char *pcStack2952;
  undefined4 uStack2936;
  char *pcStack2920;
  undefined4 uStack2916;
  undefined4 uStack2896;
  char *local_ac8;
  undefined4 local_ac4;
  undefined4 local_ab8;
  char *local_a98;
  char *local_a78;
  undefined4 local_a74;
  undefined4 local_a68;
  char *local_a48;
  undefined4 local_a38;
  char *local_a28;
  undefined4 local_a24;
  undefined4 local_a10;
  char *local_9d8;
  undefined4 local_9d4;
  undefined4 local_9c0;
  undefined4 local_998;
  char *local_988;
  undefined4 local_984;
  undefined4 local_970;
  char *local_8e8;
  undefined4 local_8e4;
  undefined4 local_8d8;
  char *local_8b8;
  char *local_898;
  undefined4 local_894;
  undefined4 local_888;
  char *local_868;
  undefined4 local_858;
  char *local_848;
  undefined4 local_844;
  undefined4 local_830;
  char *local_7f8;
  undefined4 local_7f4;
  undefined4 local_7e0;
  undefined4 local_7b8;
  char *local_7a8;
  undefined4 local_7a4;
  undefined4 local_790;
  char *local_708;
  undefined4 local_704;
  undefined4 local_6f8;
  char *local_6d8;
  char *local_6b8;
  undefined4 local_6b4;
  undefined4 local_6a8;
  char *local_688;
  undefined4 local_678;
  char *local_668;
  undefined4 local_664;
  undefined4 local_650;
  char *local_618;
  undefined4 local_614;
  undefined4 local_600;
  undefined4 local_5d8;
  char *local_5c8;
  undefined4 local_5c4;
  undefined4 local_5b0;
  char *local_528;
  undefined4 local_524;
  undefined4 local_518;
  char *local_4f8;
  char *local_4d8;
  undefined4 local_4d4;
  undefined4 local_4c8;
  char *local_4a8;
  undefined4 local_498;
  char *local_488;
  undefined4 local_484;
  undefined4 local_470;
  char *local_438;
  undefined4 local_434;
  undefined4 local_420;
  char *local_3e8;
  undefined4 local_3e4;
  undefined4 local_3d0;
  undefined4 local_3a8;
  char *local_398;
  undefined4 local_394;
  undefined4 local_380;
  char *local_348;
  undefined4 local_344;
  undefined4 local_330;
  undefined *local_2a8;
  undefined4 local_2a4;
  undefined4 local_27c;
  char *local_258;
  undefined4 local_254;
  undefined4 local_22c;
  char *local_208;
  undefined4 local_204;
  char **local_1f4;
  undefined4 local_1b8;
  undefined4 local_1b4;
  char **local_1a4;
  char *local_168;
  undefined4 local_164;
  char **local_154;
  char *local_118;
  undefined4 local_114;
  char **local_104;
  char *local_c8;
  undefined4 local_c4;
  char **local_b4;
  
  uVar14 = (uint)param_3;
  uVar12 = (uint)param_2;
  *(undefined4 *)this = 0x34644;
  *(undefined4 *)(this + 100) = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0;
  if (param_4 == 0x5a || param_4 == 0x10e) {
    param_3 = param_2;
    uVar12 = uVar14;
  }
  *(short *)(this + 0xc) = (short)uVar12;
  *(ushort *)(this + 0xe) = param_3;
  iVar4 = SDL_CreateRGBSurface(0,uVar12,uVar12,0x10,0xf800,0x7e0,0x1f,0);
  *(int *)(this + 0x68) = iVar4;
  if (iVar4 == 0) {
    this_00 = (bad_lemon *)__cxa_allocate_exception(8);
    bad_lemon(this_00,"layout: unable to create back buffer");
                    // WARNING: Subroutine does not return
    __cxa_throw(this_00,&typeinfo,0x1159d);
  }
  local_154 = &pcStack3080;
  memset(&local_ac8,0,0x1e0);
  local_a10 = 0x28;
  local_1a4 = &local_528;
  local_ac8 = "position";
  local_a98 = "{0,0}";
  local_a78 = "dimensions";
  local_a48 = "{full,56}";
  local_a38 = 0x11731;
  local_a28 = "font_height";
  local_9d8 = "justify";
  local_998 = 0x11761;
  local_988 = "color";
  local_970 = 0xefefef;
  local_ac4 = 1;
  local_a74 = 1;
  local_104 = &local_8e8;
  local_a24 = 1;
  local_b4 = &local_708;
  local_9d4 = 1;
  local_984 = 1;
  local_ab8 = 2;
  local_a68 = 2;
  local_9c0 = 2;
  memset(local_1a4,0,0x280);
  local_528 = "position";
  local_348 = "hover_color";
  local_4d8 = "dimensions";
  local_4f8 = "{0,56}";
  local_330 = 0x32e4ff;
  local_498 = 0x11731;
  local_524 = 1;
  local_518 = 2;
  local_488 = "font_height";
  local_4d4 = 1;
  local_4c8 = 2;
  local_3e8 = "justify";
  local_484 = 1;
  local_434 = 1;
  local_3a8 = 0x11761;
  local_3e4 = 1;
  local_3d0 = 2;
  local_398 = "color";
  local_394 = 1;
  local_344 = 1;
  local_438 = "spacing";
  local_380 = 0xc2f4ff;
  local_420 = 4;
  local_4a8 = "{full,full}";
  local_470 = 0x1c;
  memset(local_154,0,0x140);
  uStack3076 = 1;
  pcStack3032 = "{0,56}";
  pcStack3000 = "dimensions";
  uStack3064 = 2;
  pcStack3080 = "position";
  uStack2996 = 1;
  uStack2984 = 2;
  pcStack2952 = "{full,full}";
  uStack2916 = 1;
  pcStack2920 = "alpha";
  uStack2936 = 0x11731;
  uStack2896 = 0x96;
  memset(local_104,0,0x1e0);
  local_790 = 0xefefef;
  local_8e8 = "position";
  local_8e4 = 1;
  local_8d8 = 2;
  local_8b8 = "{0,0}";
  local_894 = 1;
  local_888 = 2;
  local_898 = "dimensions";
  local_844 = 1;
  local_7f4 = 1;
  local_868 = "{full,56}";
  local_7e0 = 2;
  local_7a4 = 1;
  local_858 = 0x11731;
  local_848 = "font_height";
  local_7f8 = "justify";
  local_7b8 = 0x11761;
  local_7a8 = "color";
  local_830 = 0x1c;
  memset(local_b4,0,0x1e0);
  local_5b0 = 0xefefef;
  local_704 = 1;
  local_708 = "position";
  local_6f8 = 2;
  local_6b4 = 1;
  local_6d8 = "{0,0}";
  local_6a8 = 2;
  local_664 = 1;
  local_6b8 = "dimensions";
  local_614 = 1;
  local_600 = 2;
  local_688 = "{full,56}";
  local_5c4 = 1;
  local_678 = 0x11731;
  local_668 = "font_height";
  local_618 = "justify";
  local_5d8 = 0x11761;
  local_5c8 = "color";
  local_650 = 0x1c;
  memset(&local_2a8,0,0x280);
  local_c8 = "timecount";
  local_1f4 = &local_ac8;
  local_168 = "snapshot";
  local_2a8 = &DAT_00029a4c;
  local_258 = "background";
  local_208 = "title";
  local_1b8 = 0x1a960;
  local_118 = "coinnum";
  local_27c = 0x1ae48;
  local_22c = 0x1ae48;
  local_2a4 = 3;
  local_254 = 3;
  local_204 = 5;
  local_1b4 = 5;
  local_164 = 5;
  local_114 = 5;
  local_c4 = 5;
  uVar5 = cfg_init(&local_2a8,0);
  cfg_set_validate_func(uVar5,"title",0x117c5);
  cfg_set_validate_func(uVar5,0x1a960,0x117c5);
  cfg_set_validate_func(uVar5,"snapshot",0x117c5);
  iVar4 = cfg_parse(uVar5,param_1);
  if (iVar4 == -1) {
    *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
    __ostream_insert_char_std__char_traits_char__
              ((basic_ostream *)log,"layout: file error, using defaults",0x22);
    puVar15 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if ((int *)puVar15 != (int *)0x0) {
      if (*(allocator *)((int *)puVar15 + 7) == (allocator)0x0) {
        _M_widen_init();
        (**(code **)(*(int *)puVar15 + 0x18))(puVar15,10);
      }
      put(-0x30);
      flush();
      cfg_parse_buf(uVar5,0x1ae48);
      goto LAB_00011c7e;
    }
LAB_000126e6:
    __throw_bad_cast();
LAB_000126ea:
    __throw_bad_cast();
    __cxa_free_exception(puVar15);
LAB_00012574:
    _M_dispose((allocator *)(*(int *)this + -0xc));
    paVar10 = (allocator *)__cxa_end_cleanup();
  }
  else {
    if (iVar4 == 1) {
LAB_00012614:
      this_00 = (bad_lemon *)__cxa_allocate_exception(8);
      bad_lemon(this_00,"layout: parse error");
                    // WARNING: Subroutine does not return
      __cxa_throw(this_00,&typeinfo,0x1159d);
    }
    strlen(param_1);
    assign((char *)this,(uint)param_1);
    iVar4 = rfind((char)this,0x2f);
    uVar12 = iVar4 + 1;
    if (*(uint *)(*(int *)this + -0xc) < uVar12) {
      __throw_out_of_range("basic_string::erase");
      goto LAB_00012614;
    }
    _M_mutate((uint)this,uVar12,*(uint *)(*(int *)this + -0xc) - uVar12);
LAB_00011c7e:
    local_c68 = _S_empty_rep_storage + 0xc;
    local_c64 = 0x34644;
    __s = (char *)cfg_getstr(uVar5,&DAT_00029a4c);
    if (*__s == '/' || *__s == '\0') {
      strlen(__s);
      assign((char *)&local_c68,(uint)__s);
    }
    else {
      assign((basic_string *)&local_c68);
      strlen(__s);
      append((char *)&local_c68,(uint)__s);
    }
    __s = (char *)cfg_getstr(uVar5,"background");
    if (*__s == '/' || *__s == '\0') {
      strlen(__s);
      assign((char *)&local_c64,(uint)__s);
    }
    else {
      assign((basic_string *)&local_c64);
      strlen(__s);
      append((char *)&local_c64,(uint)__s);
    }
    __s = local_c68;
    iVar4 = IMG_Load(local_c64);
    *(int *)(this + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"layout: background image not found",0x22);
      puVar15 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if ((int *)puVar15 != (int *)0x0) {
        if (*(allocator *)((int *)puVar15 + 7) == (allocator)0x0) {
          _M_widen_init();
          (**(code **)(*(int *)puVar15 + 0x18))(puVar15,10);
        }
        put(-0x30);
        flush();
        goto LAB_00011cf0;
      }
      goto LAB_000126ea;
    }
LAB_00011cf0:
    uVar6 = cfg_getsec(uVar5,"title");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x34) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x36) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar16 = (short)iVar4;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar16 = *(short *)(this + 0xc) - *(short *)(this + 0x34);
    }
    iVar4 = iVar7 + 1;
    sVar18 = (short)iVar4;
    if (iVar4 != 0) {
      sVar13 = (short)iVar7;
    }
    else {
      sVar13 = *(short *)(this + 0x36);
      sVar18 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x38) = sVar16;
    if (iVar4 == 0) {
      sVar13 = sVar18 - sVar13;
    }
    *(short *)(this + 0x3a) = sVar13;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x40) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x44) = uVar8;
    iVar4 = cfg_getint(uVar6,"color");
    iVar7 = cfg_getint(uVar6,"color");
    lVar2 = (layout)cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x3c) = 0;
    this[0x3e] = lVar2;
    this[0x3c] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x3d] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    uVar6 = cfg_getsec(uVar5,0x1a960);
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x84) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x86) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar16 = (short)iVar4;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar16 = *(short *)(this + 0xc) - *(short *)(this + 0x84);
    }
    *(short *)(this + 0x88) = sVar16;
    if (iVar7 == -1) {
      sVar16 = *(short *)(this + 0xe) - *(short *)(this + 0x86);
    }
    else {
      sVar16 = (short)iVar7;
    }
    *(short *)(this + 0x8a) = sVar16;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x50) = uVar8;
    uVar8 = cfg_getint(uVar6,"spacing");
    *(undefined4 *)(this + 0x54) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    puVar15 = log;
    *(undefined4 *)(this + 0x58) = uVar8;
    uVar8 = __aeabi_idiv((uint)*(ushort *)(this + 0x8a),
                         *(int *)(this + 0x50) + *(int *)(this + 0x54));
    iVar4 = log._0_4_;
    *(undefined4 *)(this + 0x5c) = uVar8;
    *(undefined4 *)(*(int *)(log + *(int *)(iVar4 + -0xc) + 0x78) + 0x24) = 4;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"_page_size= ",0xc);
    piVar17 = (int *)operator__((basic_ostream_char_std__char_traits_char__ *)log,
                                *(int *)(this + 0x5c));
    piVar19 = *(int **)((int)piVar17 + *(int *)(*piVar17 + -0xc) + 0x7c);
    if (piVar19 == (int *)0x0) {
      __throw_bad_cast();
      _M_dispose((allocator *)(local_c64 + -0xc));
      _M_dispose((allocator *)(local_c68 + -0xc));
      goto LAB_00012574;
    }
    if (*(char *)(piVar19 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar19 + 0x18))(piVar19,10);
    }
    put((char)piVar17);
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
    *(undefined2 *)(this + 0x7c) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x7e) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar18 = (short)iVar4;
    sVar16 = 1;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar16 = *(short *)(this + 0x7c);
      sVar18 = *(short *)(this + 0xc) - sVar16;
    }
    if (iVar7 != -1) {
      sVar13 = (short)iVar7;
    }
    else {
      sVar13 = *(short *)(this + 0x7e);
      sVar16 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x80) = sVar18;
    if (iVar7 == -1) {
      sVar13 = sVar16 - sVar13;
    }
    *(short *)(this + 0x82) = sVar13;
    lVar2 = (layout)cfg_getint(uVar6,"alpha");
    this[0x60] = lVar2;
    uVar6 = cfg_getsec(uVar5,"coinnum");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x6c) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x6e) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar16 = (short)iVar4;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar16 = *(short *)(this + 0xc) - *(short *)(this + 0x6c);
    }
    iVar4 = iVar7 + 1;
    sVar18 = (short)iVar4;
    if (iVar4 != 0) {
      sVar13 = (short)iVar7;
    }
    else {
      sVar13 = *(short *)(this + 0x6e);
      sVar18 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x70) = sVar16;
    if (iVar4 == 0) {
      sVar13 = sVar18 - sVar13;
    }
    *(short *)(this + 0x72) = sVar13;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x20) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x24) = uVar8;
    iVar4 = cfg_getint(uVar6,"color");
    iVar7 = cfg_getint(uVar6,"color");
    lVar2 = (layout)cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x1c) = 0;
    this[0x1e] = lVar2;
    this[0x1c] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x1d] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    uVar6 = cfg_getsec(uVar5,"timecount");
    uVar3 = cfg_getnint(uVar6,"position",0);
    *(undefined2 *)(this + 0x74) = uVar3;
    uVar3 = cfg_getnint(uVar6,"position",1);
    *(undefined2 *)(this + 0x76) = uVar3;
    iVar4 = cfg_getnint(uVar6,"dimensions",0);
    sVar18 = (short)iVar4;
    sVar16 = 1;
    iVar7 = cfg_getnint(uVar6,"dimensions");
    if (iVar4 == -1) {
      sVar16 = *(short *)(this + 0x74);
      sVar18 = *(short *)(this + 0xc) - sVar16;
    }
    if (iVar7 != -1) {
      sVar13 = (short)iVar7;
    }
    else {
      sVar13 = *(short *)(this + 0x76);
      sVar16 = *(short *)(this + 0xe);
    }
    *(short *)(this + 0x78) = sVar18;
    if (iVar7 == -1) {
      sVar13 = sVar16 - sVar13;
    }
    *(short *)(this + 0x7a) = sVar13;
    uVar8 = cfg_getint(uVar6,"font_height");
    *(undefined4 *)(this + 0x2c) = uVar8;
    uVar8 = cfg_getint(uVar6,"justify");
    *(undefined4 *)(this + 0x30) = uVar8;
    iVar4 = cfg_getint(uVar6,"color");
    iVar7 = cfg_getint(uVar6,"color");
    lVar2 = (layout)cfg_getint(uVar6,"color");
    *(undefined4 *)(this + 0x28) = 0;
    this[0x2a] = lVar2;
    this[0x28] = SUB41((uint)(iVar4 << 8) >> 0x18,0);
    this[0x29] = SUB41((uint)(iVar7 << 0x10) >> 0x18,0);
    iVar4 = __xstat(3,__s,&sStack3168);
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
      piVar17 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar17 == (int *)0x0) {
LAB_00012690:
        __throw_bad_cast();
LAB_00012694:
        *(undefined4 *)(*(int *)((int)puVar15 + *(int *)(*(int *)puVar15 + -0xc) + 0x78) + 0x24) = 1
        ;
        __s = (char *)SDL_GetError();
        pbVar11 = operator___std__char_traits_char__((basic_ostream *)log,__s);
        endl_char_std__char_traits_char__(pbVar11);
        this_00 = (bad_lemon *)__cxa_allocate_exception(8);
        bad_lemon(this_00,"layout: unable to create title font");
                    // WARNING: Subroutine does not return
        __cxa_throw(this_00,&typeinfo,0x1159d);
      }
      if (*(char *)(piVar17 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar17 + 0x18))(piVar17,10);
      }
      put(-0x30);
      flush();
      iVar4 = TTF_OpenFont(__s,*(undefined4 *)(this + 0x20));
      *(int *)(this + 0x10) = iVar4;
      if (iVar4 == 0) goto LAB_00012694;
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
        __cxa_throw(this_00,&typeinfo,0x1159d);
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
      piVar17 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar17 == (int *)0x0) {
        __throw_bad_cast();
        goto LAB_000126e6;
      }
      if (*(char *)(piVar17 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar17 + 0x18))(piVar17,10);
      }
      put(-0x30);
      flush();
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"layout: using default font",0x1a);
      puVar15 = *(undefined1 **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if ((int *)puVar15 == (int *)0x0) {
        __throw_bad_cast();
        goto LAB_00012690;
      }
      if (*(char *)((int *)puVar15 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*(int *)puVar15 + 0x18))(puVar15,10);
      }
      put(-0x30);
      flush();
      uVar6 = SDL_RWFromMem(&default_font,0xe55c);
      uVar6 = TTF_OpenFontRW(uVar6,0,*(undefined4 *)(this + 0x20));
      *(undefined4 *)(this + 0x10) = uVar6;
      uVar6 = SDL_RWFromMem(&default_font,0xe55c);
      uVar6 = TTF_OpenFontRW(uVar6,0,*(undefined4 *)(this + 0x50));
      *(undefined4 *)(this + 0x14) = uVar6;
    }
    cfg_free(uVar5);
    puVar15 = _S_empty_rep_storage;
    paVar10 = (allocator *)(local_c64 + -0xc);
    if (paVar10 == (allocator *)_S_empty_rep_storage) goto LAB_00012316;
  }
  piVar17 = (int *)(paVar10 + 8);
  DataMemoryBarrier(0x1f);
  do {
    ExclusiveAccess(piVar17);
    iVar4 = *piVar17;
    bVar1 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar1);
  *piVar17 = iVar4 + -1;
  DataMemoryBarrier(0x1f);
  if (iVar4 < 1) {
    _M_destroy(paVar10);
  }
LAB_00012316:
  if (local_c68 + -0xc != puVar15) {
    piVar17 = (int *)(local_c68 + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar17);
      iVar4 = *piVar17;
      bVar1 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar1);
    *piVar17 = iVar4 + -1;
    DataMemoryBarrier(0x1f);
    if (iVar4 < 1) {
      _M_destroy((allocator *)(local_c68 + -0xc));
    }
  }
  return this;
}



// WARNING: Removing unreachable block (ram,0x000127a4)
// ll::layout::~layout()

layout * __thiscall _layout(layout *this)

{
  bool bVar1;
  allocator *paVar2;
  int iVar3;
  int *piVar4;
  
  SDL_FreeSurface(*(undefined4 *)(this + 4));
  SDL_FreeSurface(*(undefined4 *)(this + 0x68));
  TTF_CloseFont(*(undefined4 *)(this + 0x10));
  TTF_CloseFont(*(undefined4 *)(this + 0x14));
  if (*(int *)(this + 100) != 0) {
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
  if (*(int *)(this + 100) != 0) {
    SDL_FreeSurface();
  }
  *(SDL_Surface **)(this + 100) = param_1;
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



// ll::layout::show_coin(ll::menu*, int, int)

void __thiscall show_coin(layout *this,menu *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_34;
  undefined4 uStack48;
  undefined auStack44 [8];
  int local_24;
  
  puVar2 = (undefined4 *)(this + 0x6c);
  local_24 = __stack_chk_guard;
  if (*(int *)(this + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(this + 0x68),puVar2,0);
  }
  else {
    SDL_UpperBlit(*(int *)(this + 4),puVar2,*(undefined4 *)(this + 0x68),puVar2);
  }
  if (coinset_val != 3) {
    if (coinset_val == 1) {
      if (param_2 % 3 == 0) {
        __sprintf_chk(auStack44,1,8,&DAT_00029b9c,param_2 / 3);
      }
      else {
        __sprintf_chk(auStack44,1,8,"%d+%d/3",param_2 / 3,param_2 % 3);
      }
      goto LAB_0001289e;
    }
    if (coinset_val == 2) {
      if (param_2 << 0x1f < 0) {
        __sprintf_chk(auStack44,1,8,"%d+%d/2",param_2 / 2,
                      (param_2 - (param_2 >> 0x1f) & 1U) + (param_2 >> 0x1f));
      }
      else {
        __sprintf_chk(auStack44,1,8,&DAT_00029b9c,param_2 / 2);
      }
      goto LAB_0001289e;
    }
    if (coinset_val != 4) goto LAB_0001289e;
  }
  __sprintf_chk(auStack44,1,8,&DAT_00029b98,param_2);
LAB_0001289e:
  if (param_3 == 0) {
    uVar1 = TTF_RenderUTF8_Blended
                      (*(undefined4 *)(this + 0x10),auStack44,*(undefined4 *)(this + 0x1c));
  }
  else {
    uVar1 = TTF_RenderUTF8_Blended
                      (*(undefined4 *)(this + 0x10),auStack44,*(undefined4 *)(this + 0x48));
  }
  local_34 = *puVar2;
  uStack48 = *(undefined4 *)(this + 0x70);
  SDL_UpperBlit(uVar1,0,*(undefined4 *)(this + 0x68),&local_34);
  SDL_FreeSurface(uVar1);
  if (local_24 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// ll::layout::show_free(ll::menu*)

void show_free(menu *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined4 local_24;
  undefined local_20;
  int local_1c;
  
  puVar2 = (undefined4 *)(param_1 + 0x6c);
  local_1c = __stack_chk_guard;
  if (*(int *)(param_1 + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(param_1 + 0x68),puVar2,0);
  }
  else {
    SDL_UpperBlit(*(int *)(param_1 + 4),puVar2,*(undefined4 *)(param_1 + 0x68),puVar2);
  }
  local_24 = 0x65657246;
  local_20 = 0;
  uVar1 = TTF_RenderUTF8_Blended
                    (*(undefined4 *)(param_1 + 0x10),&local_24,*(undefined4 *)(param_1 + 0x1c));
  local_2c = *puVar2;
  uStack40 = *(undefined4 *)(param_1 + 0x70);
  SDL_UpperBlit(uVar1,0,*(undefined4 *)(param_1 + 0x68),&local_2c);
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
  
  puVar2 = (undefined4 *)(this + 0x74);
  local_1c = __stack_chk_guard;
  if (*(int *)(this + 4) == 0) {
    SDL_FillRect(*(undefined4 *)(this + 0x68),puVar2,0);
  }
  else {
    SDL_UpperBlit(*(int *)(this + 4),puVar2,*(undefined4 *)(this + 0x68),puVar2);
  }
  if (is_home_mode == 0) {
    __sprintf_chk(auStack36,1,8,&DAT_00029b9c,param_2);
  }
  else {
    __sprintf_chk(auStack36,1,8,&DAT_00029bb8,param_2);
  }
  uVar1 = TTF_RenderUTF8_Blended
                    (*(undefined4 *)(this + 0x10),auStack36,*(undefined4 *)(this + 0x28));
  local_2c = *puVar2;
  uStack40 = *(undefined4 *)(this + 0x78);
  SDL_UpperBlit(uVar1,0,*(undefined4 *)(this + 0x68),&local_2c);
  SDL_FreeSurface(uVar1);
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012b3c
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
    SDL_FillRect(*(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,0);
    uVar5 = extraout_s1_00;
  }
  else {
    SDL_UpperBlit(*(int *)(param_1 + 4),param_1 + 0x7c,*(undefined4 *)(param_1 + 0x68),
                  param_1 + 0x7c);
    uVar5 = extraout_s1;
  }
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 != 0) {
    fVar6 = (float)(ulonglong)*(ushort *)(param_1 + 0x80) / (float)(longlong)*(int *)(iVar2 + 8);
    fVar7 = (float)(ulonglong)*(ushort *)(param_1 + 0x82) / (float)(longlong)*(int *)(iVar2 + 0xc);
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
    local_28 = *(short *)(param_1 + 0x7c) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x80) - (*(uint *)(iVar2 + 8) & 0xffff)) /
                      2);
    local_26 = *(short *)(param_1 + 0x7e) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x82) - (*(uint *)(iVar2 + 0xc) & 0xffff))
                      / 2);
    uVar5 = SDL_UpperBlit(extraout_s0,iVar2,0,*(undefined4 *)(param_1 + 0x68),&local_28);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c) = 0;
    uVar5 = SDL_FillRect(uVar5,iVar2,0,0);
    uVar5 = SDL_SetAlpha(uVar5,iVar2,0x10000,(uint)(byte)param_1[0x60]);
    uVar5 = SDL_UpperBlit(uVar5,iVar2,0,*(undefined4 *)(param_1 + 0x68),&local_28);
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
  uVar4 = (uint)*(ushort *)(this + 0x88);
  iVar5 = *(int *)(this + 0x58);
  local_28 = 0;
  local_26 = 0;
  local_24 = (ushort)*(int *)(iVar2 + 8);
  if ((int)uVar4 <= *(int *)(iVar2 + 8)) {
    local_24 = *(ushort *)(this + 0x88);
  }
  local_22 = (undefined2)*(undefined4 *)(iVar2 + 0xc);
  if (iVar5 == 0) {
    local_30 = *(short *)(this + 0x84);
  }
  else {
    if (iVar5 != 1) {
      iVar3 = uVar4 - (uint)local_24;
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      uVar1 = *(ushort *)(this + 0x84);
    }
    else {
      uVar1 = *(ushort *)(this + 0x84);
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
      SDL_FillRect(*(undefined4 *)(this + 0x68),this + 0x84,0);
    }
    else {
      SDL_UpperBlit(*(int *)(this + 4),this + 0x84,*(undefined4 *)(this + 0x68),this + 0x84);
    }
    piVar4 = *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) * 4);
    iVar11 = (int)*(short *)(this + 0x86) +
             (int)((uint)*(ushort *)(this + 0x8a) - *(int *)(this + 0x50)) / 2;
    uVar10 = *(undefined4 *)(this + 0x68);
    iVar5 = (**(code **)(*piVar4 + 0xc))
                      (piVar4,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                       *(undefined4 *)(this + 0x4c));
    uVar7 = (uint)*(ushort *)(this + 0x88);
    iVar6 = *(int *)(this + 0x58);
    local_30 = 0;
    local_2c = (ushort)*(int *)(iVar5 + 8);
    if ((int)uVar7 <= *(int *)(iVar5 + 8)) {
      local_2c = *(ushort *)(this + 0x88);
    }
    local_2a = (undefined2)*(undefined4 *)(iVar5 + 0xc);
    local_2e = 0;
    if (iVar6 == 0) {
      local_38 = *(short *)(this + 0x84);
    }
    else {
      if (iVar6 != 1) {
        iVar8 = uVar7 - (uint)local_2c;
        iVar8 = iVar8 - (iVar8 >> 0x1f);
        uVar1 = *(ushort *)(this + 0x84);
      }
      else {
        uVar1 = *(ushort *)(this + 0x84);
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
    sVar3 = *(short *)(this + 0x86);
    uVar1 = *(ushort *)(this + 0x8a);
    iVar8 = (iVar11 - iVar6) - *(int *)(this + 0x54);
    iVar5 = iVar11 + iVar6 + *(int *)(this + 0x54);
    if (ppiVar9 != ppiVar12) {
      do {
        ppiVar12 = ppiVar12 + -1;
        uVar10 = *(undefined4 *)(this + 0x68);
        iVar6 = (**(code **)(**ppiVar12 + 0xc))
                          (*ppiVar12,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                           *(undefined4 *)(this + 0x4c));
        uVar2 = *(ushort *)(this + 0x88);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar6 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar6 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x84);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar2 + *(short *)(this + 0x84)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x84) + (short)((int)((uint)uVar2 - (uint)local_2c) / 2);
          }
        }
        local_36 = (undefined2)iVar8;
        SDL_UpperBlit(iVar6,&local_30,uVar10,&local_38);
        SDL_FreeSurface(iVar6);
        iVar6 = *(int *)(this + 0x50);
        iVar8 = iVar8 - (*(int *)(this + 0x54) + iVar6);
        if (ppiVar12 == *(int ***)(param_1 + 0xc)) {
          ppiVar9 = ppiVar12 + *(int *)(param_1 + 0x18);
          goto LAB_00012df0;
        }
      } while ((int)sVar3 < iVar8);
      ppiVar9 = *(int ***)(param_1 + 0xc) + *(int *)(param_1 + 0x18);
    }
LAB_00012df0:
    if (ppiVar9 + 1 != *(int ***)(param_1 + 0x10)) {
      iVar6 = iVar6 + iVar5;
      ppiVar12 = ppiVar9 + 1;
      do {
        if ((int)((uint)uVar1 + (int)sVar3) <= iVar6) {
          return;
        }
        ppiVar9 = ppiVar12 + 1;
        uVar10 = *(undefined4 *)(this + 0x68);
        iVar6 = (**(code **)(**ppiVar12 + 0xc))
                          (*ppiVar12,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                           *(undefined4 *)(this + 0x4c));
        iVar11 = *(int *)(this + 0x58);
        uVar2 = *(ushort *)(this + 0x88);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar6 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar6 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar6 + 0xc);
        iVar8 = (uint)uVar2 - (uint)local_2c;
        if (iVar11 == 0) {
          local_38 = *(short *)(this + 0x84);
        }
        else {
          uVar7 = iVar8 - (iVar8 >> 0x1f);
          if (iVar11 == 1) {
            uVar7 = (uint)*(ushort *)(this + 0x84);
          }
          if (iVar11 == 1) {
            local_38 = (uVar2 + (short)uVar7) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x84) + (short)((int)uVar7 >> 1);
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



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012f46
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
    uVar15 = SDL_FillRect(*(undefined4 *)(this + 0x68),this + 8,0);
  }
  else {
    uVar15 = SDL_UpperBlit(*(int *)(this + 4),0,*(undefined4 *)(this + 0x68),this + 8);
  }
  iVar5 = *(int *)(this + 100);
  if (iVar5 != 0) {
    fVar17 = (float)(ulonglong)*(ushort *)(this + 0x80) / (float)(longlong)*(int *)(iVar5 + 8);
    fVar18 = (float)(ulonglong)*(ushort *)(this + 0x82) / (float)(longlong)*(int *)(iVar5 + 0xc);
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
    local_2e = *(short *)(this + 0x7e) +
               (short)((int)((uint)*(ushort *)(this + 0x82) - (*(uint *)(iVar5 + 0xc) & 0xffff)) / 2
                      );
    local_30 = *(short *)(this + 0x7c) +
               (short)((int)((uint)*(ushort *)(this + 0x80) - (*(uint *)(iVar5 + 8) & 0xffff)) / 2);
    uVar15 = SDL_UpperBlit(extraout_s0,iVar5,0,*(undefined4 *)(this + 0x68),&local_30);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x1c) = 0;
    uVar15 = SDL_FillRect(uVar15,iVar5,0,0);
    uVar15 = SDL_SetAlpha(uVar15,iVar5,0x10000,(uint)(byte)this[0x60]);
    uVar15 = SDL_UpperBlit(uVar15,iVar5,0,*(undefined4 *)(this + 0x68),&local_30);
    uVar15 = SDL_FreeSurface(uVar15,iVar5);
  }
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    piVar6 = *(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18) * 4);
    iVar11 = (int)*(short *)(this + 0x86) +
             (int)((uint)*(ushort *)(this + 0x8a) - *(int *)(this + 0x50)) / 2;
    uVar9 = *(undefined4 *)(this + 0x68);
    iVar5 = (**(code **)(*piVar6 + 0xc))
                      (uVar15,piVar6,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                       *(undefined4 *)(this + 0x4c));
    uVar1 = *(ushort *)(this + 0x88);
    local_30 = 0;
    local_2c = (ushort)*(int *)(iVar5 + 8);
    if ((int)(uint)uVar1 <= *(int *)(iVar5 + 8)) {
      local_2c = uVar1;
    }
    local_2a = (undefined2)*(undefined4 *)(iVar5 + 0xc);
    local_2e = 0;
    if (*(int *)(this + 0x58) == 0) {
      local_38 = *(short *)(this + 0x84);
    }
    else {
      if (*(int *)(this + 0x58) == 1) {
        local_38 = (uVar1 + *(short *)(this + 0x84)) - local_2c;
      }
      else {
        local_38 = *(short *)(this + 0x84) + (short)((int)((uint)uVar1 - (uint)local_2c) / 2);
      }
    }
    local_36 = (undefined2)iVar11;
    uVar15 = SDL_UpperBlit(extraout_s0_00,iVar5,&local_30,uVar9,&local_38);
    uVar16 = SDL_FreeSurface(uVar15,iVar5);
    iVar7 = *(int *)(this + 0x50);
    ppiVar8 = *(int ***)(param_1 + 0xc);
    ppiVar12 = ppiVar8 + *(int *)(param_1 + 0x18);
    sVar3 = *(short *)(this + 0x86);
    uVar1 = *(ushort *)(this + 0x8a);
    iVar10 = (iVar11 - iVar7) - *(int *)(this + 0x54);
    iVar5 = iVar11 + iVar7 + *(int *)(this + 0x54);
    if (ppiVar8 != ppiVar12) {
      do {
        ppiVar12 = ppiVar12 + -1;
        uVar15 = *(undefined4 *)(this + 0x68);
        iVar11 = (**(code **)(**ppiVar12 + 0xc))
                           ((int)uVar16,*ppiVar12,*(undefined4 *)(this + 0x14),
                            *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c));
        uVar2 = *(ushort *)(this + 0x88);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar11 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar11 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar11 + 0xc);
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x84);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar2 + *(short *)(this + 0x84)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x84) + (short)((int)((uint)uVar2 - (uint)local_2c) / 2);
          }
        }
        local_36 = (undefined2)iVar10;
        uVar15 = SDL_UpperBlit(extraout_s0_01,iVar11,&local_30,uVar15,&local_38);
        uVar16 = SDL_FreeSurface(uVar15,iVar11);
        iVar7 = *(int *)(this + 0x50);
        iVar10 = iVar10 - (*(int *)(this + 0x54) + iVar7);
        if (ppiVar12 == *(int ***)(param_1 + 0xc)) {
          ppiVar8 = ppiVar12 + *(int *)(param_1 + 0x18);
          goto LAB_0001312c;
        }
      } while ((int)sVar3 < iVar10);
      ppiVar8 = *(int ***)(param_1 + 0xc) + *(int *)(param_1 + 0x18);
    }
LAB_0001312c:
    if (ppiVar8 + 1 != *(int ***)(param_1 + 0x10)) {
      iVar7 = iVar7 + iVar5;
      ppiVar12 = ppiVar8 + 1;
      do {
        if ((int)((uint)uVar1 + (int)sVar3) <= iVar7) {
          return;
        }
        ppiVar8 = ppiVar12 + 1;
        uVar15 = *(undefined4 *)(this + 0x68);
        iVar11 = (**(code **)(**ppiVar12 + 0xc))
                           ((int)uVar16,*ppiVar12,*(undefined4 *)(this + 0x14),
                            *(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c));
        uVar2 = *(ushort *)(this + 0x88);
        local_30 = 0;
        local_2e = 0;
        local_2c = (ushort)*(int *)(iVar11 + 8);
        if ((int)(uint)uVar2 <= *(int *)(iVar11 + 8)) {
          local_2c = uVar2;
        }
        local_2a = (undefined2)*(undefined4 *)(iVar11 + 0xc);
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x84);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar2 + *(short *)(this + 0x84)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x84) + (short)((int)((uint)uVar2 - (uint)local_2c) / 2);
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
  uVar4 = (uint)*(ushort *)(this + 0x88);
  iVar5 = *(int *)(this + 0x58);
  local_28 = 0;
  local_26 = 0;
  local_24 = (ushort)*(int *)(iVar2 + 8);
  if ((int)uVar4 <= *(int *)(iVar2 + 8)) {
    local_24 = *(ushort *)(this + 0x88);
  }
  local_22 = (undefined2)*(undefined4 *)(iVar2 + 0xc);
  if (iVar5 == 0) {
    local_30 = *(short *)(this + 0x84);
  }
  else {
    if (iVar5 != 1) {
      iVar3 = uVar4 - (uint)local_24;
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      uVar1 = *(ushort *)(this + 0x84);
    }
    else {
      uVar1 = *(ushort *)(this + 0x84);
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
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  int iVar8;
  short local_38;
  undefined2 local_36;
  undefined2 local_30;
  undefined2 local_2e;
  ushort local_2c;
  undefined2 local_2a;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) {
    if (*(int *)(this + 4) == 0) {
      SDL_FillRect(*(undefined4 *)(this + 0x68),this + 0x84,0);
    }
    else {
      SDL_UpperBlit(*(int *)(this + 4),this + 0x84,*(undefined4 *)(this + 0x68),this + 0x84);
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    ppiVar5 = (int **)(*(int *)(param_1 + 0xc) + iVar4 * 4);
    iVar8 = (int)*(short *)(this + 0x86);
    iVar2 = (uint)*(ushort *)(this + 0x8a) + iVar8;
    if (ppiVar5 != *(int ***)(param_1 + 0x10)) {
      iVar3 = *(int *)(this + 0x50) + iVar8;
      do {
        if (iVar2 <= iVar3) {
          return;
        }
        ppiVar6 = ppiVar5 + 1;
        iVar4 = iVar4 + 1;
        uVar7 = *(undefined4 *)(this + 0x68);
        iVar3 = (**(code **)(**ppiVar5 + 0x10))
                          (*ppiVar5,*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x48),
                           *(undefined4 *)(this + 0x4c),iVar4);
        uVar1 = *(ushort *)(this + 0x88);
        local_30 = 0;
        local_2e = 0;
        local_2a = (undefined2)*(undefined4 *)(iVar3 + 0xc);
        local_2c = (ushort)*(int *)(iVar3 + 8);
        if ((int)(uint)uVar1 <= *(int *)(iVar3 + 8)) {
          local_2c = uVar1;
        }
        if (*(int *)(this + 0x58) == 0) {
          local_38 = *(short *)(this + 0x84);
        }
        else {
          if (*(int *)(this + 0x58) == 1) {
            local_38 = (uVar1 + *(short *)(this + 0x84)) - local_2c;
          }
          else {
            local_38 = *(short *)(this + 0x84) + (short)((int)((uint)uVar1 - (uint)local_2c) / 2);
          }
        }
        local_36 = (undefined2)iVar8;
        SDL_UpperBlit(iVar3,&local_30,uVar7,&local_38);
        SDL_FreeSurface(iVar3);
        iVar8 = iVar8 + *(int *)(this + 0x54) + *(int *)(this + 0x50);
        iVar3 = *(int *)(this + 0x50) + iVar8;
        ppiVar5 = ppiVar6;
      } while (*(int ***)(param_1 + 0x10) != ppiVar6);
    }
  }
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00013428
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
    SDL_FillRect(*(undefined4 *)(param_1 + 0x68),param_1 + 8,0);
    uVar5 = extraout_s1_00;
  }
  else {
    SDL_UpperBlit(*(int *)(param_1 + 4),0,*(undefined4 *)(param_1 + 0x68),param_1 + 8);
    uVar5 = extraout_s1;
  }
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 != 0) {
    fVar6 = (float)(ulonglong)*(ushort *)(param_1 + 0x80) / (float)(longlong)*(int *)(iVar2 + 8);
    fVar7 = (float)(ulonglong)*(ushort *)(param_1 + 0x82) / (float)(longlong)*(int *)(iVar2 + 0xc);
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
    local_28 = *(short *)(param_1 + 0x7c) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x80) - (*(uint *)(iVar2 + 8) & 0xffff)) /
                      2);
    local_26 = *(short *)(param_1 + 0x7e) +
               (short)((int)((uint)*(ushort *)(param_1 + 0x82) - (*(uint *)(iVar2 + 0xc) & 0xffff))
                      / 2);
    uVar5 = SDL_UpperBlit(extraout_s0,iVar2,0,*(undefined4 *)(param_1 + 0x68),&local_28);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x1c) = 0;
    uVar5 = SDL_FillRect(uVar5,iVar2,0,0);
    uVar5 = SDL_SetAlpha(uVar5,iVar2,0x10000,(uint)(byte)param_1[0x60]);
    uVar5 = SDL_UpperBlit(uVar5,iVar2,0,*(undefined4 *)(param_1 + 0x68),&local_28);
    SDL_FreeSurface(uVar5,iVar2);
  }
  return;
}



// ll::layout::clear_screen_buffer()

void __thiscall clear_screen_buffer(layout *this)

{
  SDL_FillRect(*(undefined4 *)(this + 0x68),this + 8,0);
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



// WARNING: Removing unreachable block (ram,0x00013628)
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
  *(undefined ***)this = &PTR__menu_1_00029bc8;
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
  *(undefined ***)this = &PTR__item_1_0001acb0;
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

void draw_prefix(_TTF_Font *param_1,SDL_Color param_2,SDL_Color param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  SDL_Color *pSVar3;
  SDL_Color local_20;
  SDL_Color local_1c [2];
  SDL_Color local_14;
  
  pSVar3 = &local_20;
  local_1c[0] = param_3;
  local_20 = param_4;
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0) ||
     (param_1 != *(_TTF_Font **)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) * 4))) {
    pSVar3 = local_1c;
  }
  local_14 = *pSVar3;
  uVar1 = (**(code **)(*(int *)param_1 + 8))(param_1);
  TTF_RenderUTF8_Solid(param_2,uVar1,local_14);
  return;
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
  uVar2 = find((char *)&local_14,(uint)&DAT_0001ace8,0);
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
      goto LAB_00013972;
    }
    if (*(char *)(piVar6 + 7) == '\0') {
      _M_widen_init();
      (**(code **)(*piVar6 + 0x18))(piVar6,10);
    }
    put(-0x30);
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
LAB_00013972:
  if (iVar5 < 1) {
    _M_destroy(paVar3);
  }
  return;
}



// ll::game::snapshot()

int * __thiscall snapshot(game *this)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  allocator *paVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *__s;
  int local_1c;
  
  if (is_advertisement_mode != 0) {
    if (is_cga == 0) {
      uVar2 = IMG_Load("/sdcard/xrun/ad640.png");
      return (int *)uVar2;
    }
    uVar2 = IMG_Load("/sdcard/xrun/ad384.png");
    return (int *)uVar2;
  }
  if (is_cga == 0) {
    paVar4 = (allocator *)get_string((char *)&g_opts);
    basic_string((char *)&local_1c,paVar4);
    uVar3 = find((char *)&local_1c,(uint)&DAT_0001ace8,0);
    if (uVar3 == 0xffffffff) {
      iVar5 = 0x30;
      *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
      __ostream_insert_char_std__char_traits_char__
                ((basic_ostream *)log,"game::snapshot: snap option missing %r specifier",0x30);
      piVar8 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
      if (piVar8 == (int *)0x0) {
        __throw_bad_cast();
        _M_dispose((allocator *)(local_1c + -0xc));
        paVar4 = (allocator *)__cxa_end_cleanup();
        iVar6 = *(int *)(iVar5 + -4);
        *(int *)(iVar5 + -4) = iVar6 + -1;
        goto LAB_00013c7e;
      }
      if (*(char *)(piVar8 + 7) == '\0') {
        _M_widen_init();
        (**(code **)(*piVar8 + 0x18))(piVar8,10);
      }
      put(-0x30);
      flush();
      piVar8 = (int *)0x0;
    }
    else {
      if (is_help_snap == 0) {
        __s = *(char **)(this + 8);
        strlen(__s);
        replace((uint)&local_1c,uVar3,(char *)0x2,(uint)__s);
      }
      else {
        if (is_maxii_board == 0) {
          if (is_cn == 0) {
            replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_old");
          }
          else {
            replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_old");
          }
        }
        else {
          if ((is_hv_mode == 0) || (is_horv_only != 0)) {
            if (is_home_mode == 0) {
              if (is_cn == 0) {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)&DAT_00029d10);
              }
              else {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn");
              }
            }
            else {
              if (is_cn == 0) {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_home");
              }
              else {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_home");
              }
            }
          }
          else {
            if (is_cn == 0) {
              if (is_home_mode == 0) {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_hv");
              }
              else {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_hv_home");
              }
            }
            else {
              if (is_home_mode == 0) {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_hv");
              }
              else {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_hv_home");
              }
            }
          }
        }
      }
      piVar8 = (int *)IMG_Load(local_1c);
    }
    paVar4 = (allocator *)(local_1c + -0xc);
    if (paVar4 == (allocator *)_S_empty_rep_storage) {
      return piVar8;
    }
    piVar7 = (int *)(local_1c + -4);
    DataMemoryBarrier(0x1f);
    do {
      ExclusiveAccess(piVar7);
      iVar6 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar6 + -1;
  }
  else {
    if (is_cga < 0x65) {
      paVar4 = (allocator *)get_string((char *)&g_opts);
      basic_string((char *)&local_1c,paVar4);
      uVar3 = find((char *)&local_1c,(uint)&DAT_0001ace8,0);
      if (uVar3 == 0xffffffff) {
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"game::snapshot: snap option missing %r specifier",0x30);
        piVar8 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
        if (piVar8 == (int *)0x0) goto LAB_00014152;
        if (*(char *)(piVar8 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*piVar8 + 0x18))(piVar8,10);
        }
        put(-0x30);
        flush();
        piVar8 = (int *)0x0;
      }
      else {
        if (is_help_snap == 0) {
          __s = *(char **)(this + 8);
          strlen(__s);
          replace((uint)&local_1c,uVar3,(char *)0x2,(uint)__s);
        }
        else {
          if (is_maxii_board == 0) {
            if (is_cn == 0) {
              replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_old");
            }
            else {
              replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_old");
            }
          }
          else {
            if (is_hv_mode == 0) {
              if (is_cn == 0) {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)&DAT_00029d10);
              }
              else {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn");
              }
            }
            else {
              if (is_cn == 0) {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_hv");
              }
              else {
                replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_hv");
              }
            }
          }
        }
        piVar8 = (int *)IMG_Load(local_1c);
      }
      paVar4 = (allocator *)(local_1c + -0xc);
      if (paVar4 == (allocator *)_S_empty_rep_storage) {
        return piVar8;
      }
      piVar7 = (int *)(local_1c + -4);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar7);
        iVar6 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar6 + -1;
    }
    else {
      paVar4 = (allocator *)get_string((char *)&g_opts);
      basic_string((char *)&local_1c,paVar4);
      uVar3 = find((char *)&local_1c,(uint)&DAT_0001ace8,0);
      if (uVar3 == 0xffffffff) {
        *(undefined4 *)(*(int *)(log + *(int *)(log._0_4_ + -0xc) + 0x78) + 0x24) = 3;
        __ostream_insert_char_std__char_traits_char__
                  ((basic_ostream *)log,"game::snapshot: snap option missing %r specifier",0x30);
        piVar8 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
        if (piVar8 == (int *)0x0) {
          __throw_bad_cast();
LAB_00014152:
          iVar5 = __throw_bad_cast();
          return (int *)*(undefined4 *)(iVar5 + 0xc);
        }
        if (*(char *)(piVar8 + 7) == '\0') {
          _M_widen_init();
          (**(code **)(*piVar8 + 0x18))(piVar8,10);
        }
        put(-0x30);
        flush();
        piVar8 = (int *)0x0;
      }
      else {
        if (is_help_snap == 0) {
          __s = *(char **)(this + 8);
          strlen(__s);
          replace((uint)&local_1c,uVar3,(char *)0x2,(uint)__s);
        }
        else {
          if (is_maxii_board == 0) {
            if (is_cn == 0) {
              replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_old");
            }
            else {
              replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_old");
            }
          }
          else {
            if ((is_hv_mode == 0) || (is_horv_only != 0)) {
              if (is_home_mode == 0) {
                if (is_cn == 0) {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)&DAT_00029d10);
                }
                else {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn");
                }
              }
              else {
                if (is_cn == 0) {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_home");
                }
                else {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_home");
                }
              }
            }
            else {
              if (is_cn == 0) {
                if (is_home_mode == 0) {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_hv");
                }
                else {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"help_hv_home");
                }
              }
              else {
                if (is_home_mode == 0) {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_hv");
                }
                else {
                  replace((uint)&local_1c,uVar3,(char *)0x2,(uint)"helpcn_hv_home");
                }
              }
            }
          }
        }
        piVar8 = (int *)IMG_Load(local_1c);
      }
      paVar4 = (allocator *)(local_1c + -0xc);
      if (paVar4 == (allocator *)_S_empty_rep_storage) {
        return piVar8;
      }
      piVar7 = (int *)(local_1c + -4);
      DataMemoryBarrier(0x1f);
      do {
        ExclusiveAccess(piVar7);
        iVar6 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar6 + -1;
    }
  }
  DataMemoryBarrier(0x1f);
LAB_00013c7e:
  if (iVar6 < 1) {
    _M_destroy(paVar4);
  }
  return piVar8;
}



// ll::game::text() const

undefined4 __thiscall text(game *this)

{
  return *(undefined4 *)(this + 0xc);
}



// WARNING: Removing unreachable block (ram,0x0001428e)
// WARNING: Removing unreachable block (ram,0x00014264)
// WARNING: Removing unreachable block (ram,0x00014272)
// WARNING: Removing unreachable block (ram,0x00014280)
// ll::game::~game()

game * __thiscall _game(game *this)

{
  bool bVar1;
  allocator *paVar2;
  int *piVar3;
  int iVar4;
  
  paVar2 = (allocator *)(*(int *)(this + 0x14) + -0xc);
  *(undefined ***)this = &PTR__game_1_00029c18;
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
  *(undefined ***)this = &PTR__item_1_0001acb0;
  return this;
}



// WARNING: Removing unreachable block (ram,0x000143dc)
// WARNING: Removing unreachable block (ram,0x000143b2)
// WARNING: Removing unreachable block (ram,0x000143c0)
// WARNING: Removing unreachable block (ram,0x000143ce)
// ll::game::~game()

game * __thiscall _game(game *this)

{
  bool bVar1;
  allocator *paVar2;
  int *piVar3;
  int iVar4;
  
  paVar2 = (allocator *)(*(int *)(this + 0x14) + -0xc);
  *(undefined ***)this = &PTR__game_1_00029c18;
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
  *(undefined ***)this = &PTR__item_1_0001acb0;
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



// WARNING: Removing unreachable block (ram,0x000149c0)
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
  undefined4 local_b8c;
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
  undefined4 local_4ac;
  char *local_488;
  undefined4 local_484;
  undefined4 local_45c;
  char *local_438;
  undefined4 local_434;
  undefined4 local_40c;
  undefined1 *local_3e8;
  undefined4 local_3e4;
  undefined4 local_3bc;
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
  local_bc8 = 0x14405;
  local_bb8 = "theme";
  local_b68 = "snapshot_delay";
  local_b18 = &DAT_0001b0b8;
  local_b50 = 500;
  local_ac8 = &DAT_00029d80;
  local_a78 = &DAT_00029d88;
  local_a28 = &DAT_00029d90;
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
  local_b8c = 0x1ae48;
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
  local_9d8 = &DAT_00029d98;
  local_988 = &DAT_00029da0;
  local_938 = &DAT_00029da8;
  local_8e8 = &DAT_00029db0;
  local_898 = &DAT_00029db8;
  local_848 = &DAT_00029dc0;
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
  local_4ac = 0x1ae48;
  local_45c = 0x1ae48;
  local_40c = 0x1ae48;
  local_3bc = 0x1ae48;
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
  local_4d8 = &DAT_00029d38;
  local_488 = "snapx";
  local_438 = "snap384";
  local_3e8 = &DAT_00029c50;
  local_398 = &DAT_0001afd4;
  local_348 = &DAT_0001afdc;
  local_380 = 0x1b;
  local_c8 = "alphamod";
  local_330 = 0x111;
  local_2f8 = &DAT_0001afe0;
  local_2f4 = 1;
  local_2a4 = 1;
  local_254 = 1;
  local_204 = 1;
  local_1b4 = 1;
  local_164 = 1;
  local_114 = 1;
  local_c4 = 1;
  local_2e0 = 0x112;
  local_2a8 = &DAT_0001afe8;
  local_258 = "pgdown";
  local_240 = 0x113;
  local_208 = "reload";
  local_150 = 0x31;
  local_118 = &DAT_0001b014;
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
      put(-0x30);
      flush();
      cfg_parse_buf(*(undefined4 *)(this + 4),0x1ae48);
      goto LAB_00014872;
    }
LAB_000149a8:
    __throw_bad_cast();
  }
  else {
    if (iVar4 != 1) {
LAB_00014872:
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
    ((undefined **)this)[1] = (undefined *)0x29e48;
    *(undefined ***)this = &PTR__bad_lemon_1_0001acd8;
    *(undefined4 *)(*(int *)(log + iVar4 + 0x78) + 0x24) = 1;
    __ostream_insert_char_std__char_traits_char__((basic_ostream *)log,"options: parse error",0x14);
    piVar5 = *(int **)(log + *(int *)(log._0_4_ + -0xc) + 0x7c);
    if (piVar5 == (int *)0x0) {
      __throw_bad_cast();
      _exception((exception *)this);
      __cxa_free_exception(this);
      _M_dispose((allocator *)(local_d9c + -0xc));
      __cxa_end_cleanup();
      goto LAB_000149a8;
    }
    if (*(char *)(piVar5 + 7) != '\0') goto LAB_00014974;
  }
  _M_widen_init();
  (**(code **)(*piVar5 + 0x18))(piVar5,10);
LAB_00014974:
  put(-0x30);
  flush();
                    // WARNING: Subroutine does not return
  __cxa_throw(this,&typeinfo,0x1159d);
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
    put(' ');
  }
  return param_1;
}



// ll::log_buf::~log_buf()

log_buf * __thiscall _log_buf(log_buf *this)

{
  *(undefined4 *)this = 0x34600;
  _locale((locale *)(this + 0x1c));
  return this;
}



// ll::log_buf::~log_buf()

log_buf * __thiscall _log_buf(log_buf *this)

{
  *(undefined4 *)this = 0x34600;
  _locale((locale *)(this + 0x1c));
  operator_delete(this);
  return this;
}



// ll::logger::~logger()

logger * __thiscall _logger(logger *this)

{
  *(undefined ***)this = &PTR__basic_ostream_00029ee4;
  *(undefined4 *)(this + 4) = 0x344d0;
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
  *(undefined ***)this = &PTR__basic_ostream_00029ee4;
  *(undefined4 *)(this + 4) = 0x344d0;
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



// execute_icc_cmd_delaylong(unsigned char*, unsigned char, unsigned char*) [clone .constprop.4]

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
      usleep(100000);
      __printf_chk(1,"\n            ");
      ioctl(fd,0xb,(uint)local_11f + 3);
      local_124 = local_11f;
      write(fd,&local_128,5);
      bVar1 = __read_chk(fd,&local_120,(uint)local_11f + 3,0x100);
      uVar2 = (uint)bVar1;
      if (bVar1 != 0) {
        usleep(10000);
        __memcpy_chk(backbuf,&local_120,uVar2,0x100);
        goto LAB_00014b6a;
      }
    }
  }
  uVar2 = 0;
LAB_00014b6a:
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
    __src = &DAT_0002a595;
  }
  else {
    __dest = param_1 + uVar4 + 0x1c;
    __src = &DAT_0002a594;
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
      __src = &DAT_00029f48;
      __dest = param_1 + uVar5 + 0x1c;
    }
    else {
      param_1[0x5b] = (SHA1_CTX)0x0;
      SHA1Transform((ulong *)param_1,(uchar *)__s);
      __src = &DAT_00029f49;
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
          goto LAB_00016580;
        }
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0x14) {
      uVar6 = 0;
LAB_00016580:
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
    usleep(100000);
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
        goto LAB_00016612;
      }
    }
  }
  __n = 0;
LAB_00016612:
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
LAB_00016758:
        memcpy(abStack300,&DAT_00029f5c,0x100);
        local_248 = CONCAT13((undefined)local_22c,CONCAT12(local_22d,CONCAT11(local_22e,local_22f)))
                    ^ 0x7ca10d67;
        local_244 = CONCAT13((undefined)local_228,(int3)(local_22c >> 8)) ^ 0xdd98760b;
        bVar7 = 0;
        local_240 = CONCAT13((undefined)local_224,(int3)(local_228 >> 8)) ^ 0xff29f378;
        local_23c = CONCAT13(local_220,(int3)(local_224 >> 8)) ^ 0x4d56a0bc;
        puVar5 = &local_248;
LAB_000168c0:
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
                goto LAB_000168c0;
              }
              *(byte *)puVar5 = bVar1 ^ 0x3d ^ abStack300[uVar8];
            }
          }
          bVar7 = bVar7 + 1;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (bVar7 != 0x10);
        uVar8 = 0;
        puVar5 = &local_248;
LAB_000168fe:
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
              goto LAB_000168fe;
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
        goto LAB_00016738;
      }
    }
    else {
      if ((uint)local_21f == (uVar9 | 0x40)) goto LAB_00016758;
    }
  }
  iVar3 = 0;
LAB_00016738:
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
        goto LAB_00016a3a;
      }
      unaff_r4 = unaff_r4 + 1;
      usleep(300000);
    } while (unaff_r4 != param_1);
  }
  uVar2 = 0;
LAB_00016a3a:
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



// WARNING: Removing unreachable block (ram,0x00016bd0)
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
  byte bVar1;
  uint uVar2;
  undefined4 local_f8;
  undefined local_f4;
  undefined4 local_f0;
  byte local_ec;
  undefined local_e8 [104];
  undefined auStack128 [2];
  byte local_7e;
  int local_1c;
  
  local_f8 = 0x880;
  local_f0 = 0xc000;
  local_ec = 0x10;
  local_f4 = 1;
  local_1c = __stack_chk_guard;
  local_e8[0] = 0x33;
  ioctl(fd,0xb);
  local_f4 = 1;
  write(fd,&local_f8,5);
  uVar2 = read(fd,cmdbuf,1);
  if (((uVar2 & 0xff) != 0) && (cmdbuf[0] == local_f8._1_1_)) {
    usleep(100000);
    ioctl(fd,0xb,2);
    write(fd,local_e8,1);
    uVar2 = read(fd,cmdbuf,2);
    bVar1 = cmdbuf[1];
    if (((uVar2 & 0xff) != 0) && (cmdbuf[0] == 'a')) {
      uVar2 = (uint)cmdbuf[1];
      usleep(200000);
      ioctl(fd,0xb,uVar2 + 3);
      local_ec = bVar1;
      write(fd,&local_f0,5);
      bVar1 = __read_chk(fd,cmdbuf,uVar2 + 3,0x100);
      if ((bVar1 != 0) && (__memcpy_chk(auStack128,cmdbuf,(uint)bVar1,100), 4 < bVar1)) {
        uVar2 = (uint)local_7e;
        if (local_7e == 0xaa) {
          puts("\nSuccess. ");
        }
        else {
          puts("failed.");
          uVar2 = 0;
        }
        goto LAB_00016e6a;
      }
    }
  }
  uVar2 = 0;
LAB_00016e6a:
  if (local_1c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
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
      goto LAB_0001710c;
    }
  }
  uVar2 = 0;
LAB_0001710c:
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



// WARNING: Removing unreachable block (ram,0x000171e0)
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
      goto LAB_000172ee;
    }
  }
  iVar1 = 0;
LAB_000172ee:
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
      goto LAB_000175f8;
    }
  }
  uVar5 = 0;
LAB_000175f8:
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
LAB_00017928:
      uVar9 = 0x1b;
LAB_000178f8:
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
          if (uVar13 == (uVar13 & 0xfffffffc)) goto LAB_000177f6;
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
LAB_000177f6:
      if (param_3 < 1) goto LAB_00017928;
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
          if ((uVar13 & 0xfffffffc) == uVar13) goto LAB_000178e4;
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
LAB_000178e4:
      uVar9 = uVar6 & 0xbd;
      if ((int)(uVar6 << 0x19) < 0) {
        uVar9 = uVar9 | 2;
      }
      if ((uVar6 & 2) != 0) goto LAB_000178f8;
    }
    if ((uint)*(byte *)((int)&uStack303 + param_3 + 4) == uVar9) {
      memcpy(param_1,&uStack303 + 1,param_3);
      goto LAB_00017906;
    }
  }
  param_3 = 0;
LAB_00017906:
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
    if ((((uint)param_1 | 0x34865) & 7) != 0) {
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
LAB_00017b1a:
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
LAB_00017aa2:
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
      if (uVar5 != uVar14) goto LAB_00017aa2;
    }
    bVar1 = (byte)uVar6 & 0xbd;
    if ((int)(uVar6 << 0x19) < 0) {
      bVar1 = bVar1 | 2;
    }
    if ((uVar6 & 2) != 0) goto LAB_00017b1a;
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
      if (uVar6 == uVar14) goto LAB_00017c18;
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
      if ((uVar6 & 0xfffffffc) == uVar6) goto LAB_00017c18;
    }
    cmdbuf[uVar12 + 2] = bVar1 ^ cmdbuf[uVar12 + 2];
    if (((int)(uVar12 + 1) <= iVar13) &&
       (cmdbuf[uVar12 + 3] = bVar1 ^ cmdbuf[uVar12 + 3], (int)(uVar12 + 2) <= iVar13)) {
      cmdbuf[uVar12 + 4] = bVar1 ^ cmdbuf[uVar12 + 4];
    }
  }
LAB_00017c18:
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



// Write_Y0(unsigned int)

int Write_Y0(uint param_1)

{
  int __fd;
  int iVar1;
  
  __fd = open("/dev/serio",2);
  if (-1 < __fd) {
    iVar1 = ioctl(__fd,0x11,param_1 & 0xffff);
    close(__fd);
    return iVar1;
  }
  puts("Error open device to write.");
  return 0xee;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// read_dipsw_Y0_16_reopen()

uint read_dipsw_Y0_16_reopen(void)

{
  int __fd;
  uint uVar1;
  
  __fd = open("/dev/serio",2);
  if (-1 < __fd) {
    uVar1 = ioctl(__fd,0x10,0);
    close(__fd);
    return uVar1 & 0xffff;
  }
  return 0;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// read_dipsw_Y1_16_reopen()

uint read_dipsw_Y1_16_reopen(void)

{
  int __fd;
  uint uVar1;
  
  __fd = open("/dev/serio",2);
  if (-1 < __fd) {
    uVar1 = ioctl(__fd,0x10,2);
    close(__fd);
    return uVar1 & 0xffff;
  }
  return 0;
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



// save_coinnum_to_file(int)

FILE * save_coinnum_to_file(int param_1)

{
  FILE *__s;
  FILE *pFVar1;
  undefined local_20;
  undefined local_1f;
  int local_14;
  
  local_14 = __stack_chk_guard;
  __s = fopen("/tmp/coin.bin","w");
  pFVar1 = __s;
  if (__s != (FILE *)0x0) {
    local_20 = (undefined)param_1;
    local_1f = (undefined)((uint)(param_1 << 0x10) >> 0x18);
    pFVar1 = (FILE *)fwrite(&local_20,1,2,__s);
    fclose(__s);
  }
  if (local_14 == __stack_chk_guard) {
    return pFVar1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// load_coinnum_from_file()

uint load_coinnum_from_file(void)

{
  int iVar1;
  uint uVar2;
  FILE *__stream;
  size_t sVar3;
  byte local_20;
  byte local_1f;
  int local_14;
  
  local_14 = __stack_chk_guard;
  iVar1 = access("/tmp/coin.bin",0);
  if ((iVar1 == 0) && (__stream = fopen("/tmp/coin.bin","r"), __stream != (FILE *)0x0)) {
    sVar3 = fread(&local_20,1,2,__stream);
    fclose(__stream);
    if (0 < (int)sVar3) {
      if (sVar3 == 1) {
        uVar2 = (uint)local_20;
        goto LAB_0001802e;
      }
      if (sVar3 == 2) {
        uVar2 = (uint)local_20 + (uint)local_1f * 0x100;
        goto LAB_0001802e;
      }
    }
  }
  uVar2 = 0;
LAB_0001802e:
  if (local_14 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// Read_nvram_coinsettings()

uint Read_nvram_coinsettings(void)

{
  FILE *__stream;
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  int local_14;
  
  local_14 = __stack_chk_guard;
  __stream = fopen("/sdcard/coin.bin","r");
  if (__stream != (FILE *)0x0) {
    sVar1 = fread(&local_28,1,8,__stream);
    fclose(__stream);
    if (7 < (int)sVar1) {
      uVar2 = (uint)local_28;
      uVar3 = count_leading_zeroes(local_27 - uVar2);
      uVar3 = uVar3 >> 5;
      if ((uint)local_26 == uVar2) {
        uVar3 = uVar3 + 1;
      }
      if ((uint)local_25 == uVar2) {
        uVar3 = uVar3 + 1;
      }
      if ((uint)local_24 == uVar2) {
        uVar3 = uVar3 + 1;
      }
      if ((uint)local_23 == uVar2) {
        uVar3 = uVar3 + 1;
      }
      if ((uint)local_22 == uVar2) {
        uVar3 = uVar3 + 1;
      }
      if (3 < (int)uVar3) goto LAB_00018116;
    }
  }
  uVar2 = 0;
LAB_00018116:
  if (local_14 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// Write_nvram_coinsettings(char)

FILE * Write_nvram_coinsettings(char param_1)

{
  FILE *__s;
  FILE *pFVar1;
  undefined auStack36 [16];
  int local_14;
  
  local_14 = __stack_chk_guard;
  memset(auStack36,(int)param_1,7);
  __s = fopen("/sdcard/coin.bin","w");
  if (__s == (FILE *)0x0) {
    puts("\nFile failed open to write.");
  }
  else {
    pFVar1 = (FILE *)fwrite(auStack36,1,8,__s);
    fclose(__s);
    if ((int)pFVar1 < 8) {
      __s = (FILE *)0x0;
    }
    else {
      system("sync");
      __s = pFVar1;
    }
  }
  if (local_14 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return __s;
}



// do_b_sw(unsigned char const*, unsigned char)

uint do_b_sw(uchar *param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = ((int)uVar1 >> (uint)*param_1 & 1U) << 1;
  if (((int)uVar1 >> (uint)param_1[1] & 1U) != 0) {
    uVar2 = uVar2 | 1;
  }
  uVar3 = uVar2 << 1;
  if (((int)uVar1 >> (uint)param_1[2] & 1U) != 0) {
    uVar3 = uVar2 << 1 | 1;
  }
  uVar2 = uVar3 << 1;
  if (((int)uVar1 >> (uint)param_1[3] & 1U) != 0) {
    uVar2 = uVar3 << 1 | 1;
  }
  uVar3 = uVar2 << 1;
  if (((int)uVar1 >> (uint)param_1[4] & 1U) != 0) {
    uVar3 = uVar2 << 1 | 1;
  }
  uVar2 = uVar3 << 1;
  if (((int)uVar1 >> (uint)param_1[5] & 1U) != 0) {
    uVar2 = uVar3 << 1 | 1;
  }
  uVar3 = uVar2 << 1;
  if (((int)uVar1 >> (uint)param_1[6] & 1U) != 0) {
    uVar3 = uVar2 << 1 | 1;
  }
  uVar2 = uVar3 << 1 | 1;
  if (((int)uVar1 >> (uint)param_1[7] & 1U) == 0) {
    uVar2 = uVar3 << 1;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00018424)
// csum_vga(unsigned char*, int)

uint csum_vga(uchar *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 < 1) {
    uVar5 = 0;
    uVar6 = uVar5;
  }
  else {
    uVar5 = 0;
    pbVar4 = param_1;
    do {
      pbVar4 = pbVar4 + 1;
      uVar6 = (uint)*(ushort *)(&cit_tb + ((uint)*pbVar4 ^ uVar5 >> 8) * 2) ^ uVar5 << 8;
      uVar5 = uVar6 & 0xffff;
      pbVar4 = pbVar4;
    } while (pbVar4 != param_1 + param_2);
    uVar5 = uVar5 >> 8;
    uVar6 = uVar6 & 0xff;
  }
  uVar2 = ((int)uVar5 >> 1 & 1U) << 1;
  if (((int)uVar5 >> 5 & 1U) != 0) {
    uVar2 = uVar2 | 1;
  }
  uVar3 = uVar2 << 1;
  if (((int)uVar5 >> 6 & 1U) != 0) {
    uVar3 = uVar2 << 1 | 1;
  }
  uVar2 = uVar3 << 1;
  if (((int)uVar5 >> 3 & 1U) != 0) {
    uVar2 = uVar3 << 1 | 1;
  }
  uVar3 = uVar2 << 1;
  if ((int)uVar5 >> 7 != 0) {
    uVar3 = uVar2 << 1 | 1;
  }
  uVar1 = ((int)uVar6 >> 1 & 1U) << 1;
  uVar2 = uVar3 << 1;
  if ((uVar5 & 1) != 0) {
    uVar2 = uVar3 << 1 | 1;
  }
  uVar3 = uVar2 << 1;
  if (((int)uVar5 >> 2 & 1U) != 0) {
    uVar3 = uVar2 << 1 | 1;
  }
  if ((uVar6 & 1) != 0) {
    uVar1 = uVar1 | 1;
  }
  uVar2 = uVar1 << 1;
  if (((int)uVar6 >> 6 & 1U) != 0) {
    uVar2 = uVar1 << 1 | 1;
  }
  uVar1 = uVar2 << 1;
  if (((int)uVar6 >> 5 & 1U) != 0) {
    uVar1 = uVar2 << 1 | 1;
  }
  uVar2 = uVar1 << 1;
  if (((int)uVar6 >> 3 & 1U) != 0) {
    uVar2 = uVar1 << 1 | 1;
  }
  uVar1 = uVar2 << 1;
  if (((int)uVar6 >> 4 & 1U) != 0) {
    uVar1 = uVar2 << 1 | 1;
  }
  uVar2 = uVar1 << 1;
  if (((int)uVar6 >> 2 & 1U) != 0) {
    uVar2 = uVar1 << 1 | 1;
  }
  uVar1 = uVar3 << 1;
  if (((int)uVar5 >> 4 & 1U) != 0) {
    uVar1 = uVar3 << 1 | 1;
  }
  uVar5 = uVar2 << 1;
  if ((int)uVar6 >> 7 != 0) {
    uVar5 = uVar2 << 1 | 1;
  }
  return uVar1 << uVar5 + 8 & 0xffff;
}



// WARNING: Could not reconcile some variable overlaps
// encrypt_r_data_for_comm_vga(unsigned char*, unsigned char*)

void encrypt_r_data_for_comm_vga(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  undefined4 local_13c;
  uint local_138;
  uint local_134 [2];
  undefined auStack300 [256];
  int local_2c;
  
  local_13c = 0x1843c6e1;
  local_2c = __stack_chk_guard;
  pvVar3 = memcpy(auStack300,&DAT_0002a074,0x100);
  if (((uint)param_1 & 3) == 0) {
    local_138 = *(uint *)param_1 ^ 0x84032de0;
    local_134[0] = *(uint *)(param_1 + 4) ^ local_13c ^ 0x7e7e7e7e;
  }
  else {
    local_138 = *(uint *)param_1 ^ 0x84032de0;
    local_134[0] = CONCAT13(param_1[7] ^ (byte)(local_13c >> 0x18) ^ 0x7e,
                            CONCAT12(local_13c._2_1_ ^ 0x7e ^ param_1[6],
                                     CONCAT11(local_13c._1_1_ ^ 0x7e ^ param_1[5],
                                              (byte)local_13c ^ 0x7e ^ param_1[4])));
  }
  bVar6 = 0;
  puVar4 = &local_138;
  do {
    while( true ) {
      bVar9 = bVar6 & 3;
      bVar1 = *(byte *)puVar4;
      uVar8 = (uint)bVar1;
      if (bVar9 != 1) break;
      bVar6 = bVar6 + 1;
      *(byte *)puVar4 = bVar1 ^ *(byte *)((int)pvVar3 + uVar8);
      puVar4 = (uint *)((int)puVar4 + 1);
      if (bVar6 == 8) goto LAB_000184c4;
    }
    if (bVar9 == 0) {
      *(byte *)puVar4 = *(byte *)((int)pvVar3 + uVar8) ^ 0x2b;
    }
    else {
      if (bVar9 == 2) {
        *(byte *)puVar4 = bVar1 ^ 0x5a ^ *(byte *)((int)pvVar3 + uVar8);
      }
      else {
        *(byte *)puVar4 = bVar1 + *(char *)((int)pvVar3 + uVar8);
      }
    }
    bVar6 = bVar6 + 1;
    puVar4 = (uint *)((int)puVar4 + 1);
  } while (bVar6 != 8);
LAB_000184c4:
  pbVar7 = (byte *)((int)&local_13c + 3);
  do {
    bVar6 = pbVar7[1];
    uVar8 = ((uint)bVar6 & 1) << 1;
    if ((bVar6 & 2) != 0) {
      uVar8 = uVar8 | 1;
    }
    uVar5 = uVar8 << 1;
    if ((bVar6 & 4) != 0) {
      uVar5 = uVar8 << 1 | 1;
    }
    uVar8 = uVar5 << 1;
    if ((bVar6 & 8) != 0) {
      uVar8 = uVar5 << 1 | 1;
    }
    uVar5 = uVar8 << 1;
    if ((bVar6 & 0x10) != 0) {
      uVar5 = uVar8 << 1 | 1;
    }
    uVar8 = uVar5 << 1;
    if ((bVar6 & 0x20) != 0) {
      uVar8 = uVar5 << 1 | 1;
    }
    uVar5 = uVar8 << 1;
    if ((bVar6 & 0x40) != 0) {
      uVar5 = uVar8 << 1 | 1;
    }
    pbVar7 = pbVar7 + 1;
    *pbVar7 = (byte)(uVar5 << 1) | bVar6 >> 7;
  } while (pbVar7 != (byte *)((int)local_134 + 3));
  *(uint *)param_2 = local_138;
  iVar2 = __stack_chk_guard;
  *(uint *)(param_2 + 4) = local_134[0];
  if (local_2c == iVar2) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// g_r_for_cm_vga()

undefined4 g_r_for_cm_vga(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  timeval tStack296;
  timezone tStack288;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  byte local_108 [7];
  undefined local_101;
  undefined local_100;
  uint local_a0;
  uint local_9c;
  byte local_98;
  byte local_97;
  byte local_96;
  int local_3c;
  
  pbVar6 = (byte *)((int)&local_10c + 3);
  local_3c = __stack_chk_guard;
  gettimeofday(&tStack296,(__timezone_ptr_t)&tStack288);
  srand(tStack296.tv_usec);
  do {
    iVar1 = rand();
    pbVar6 = pbVar6 + 1;
    *pbVar6 = SUB81(ROUND((double)(longlong)iVar1 * 255.00000000 * 0.00000000),0) + 1;
  } while (pbVar6 != local_108 + 6);
  local_108[0] = ~(local_108[5] ^ local_108[6] ^ 0x5f);
  uVar9 = ((uint)*(ushort *)
                  (&cit_tb +
                  ((uint)local_108[1] ^ (uint)(*(ushort *)(&cit_tb + (uint)local_108[0] * 2) >> 8))
                  * 2) ^ (uint)*(ushort *)(&cit_tb + (uint)local_108[0] * 2) << 8) & 0xffff;
  uVar9 = ((uint)*(ushort *)(&cit_tb + ((uint)local_108[2] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff
  ;
  local_110 = 0x3060501;
  local_10c = 0x4020007;
  uVar9 = ((uint)*(ushort *)(&cit_tb + ((uint)local_108[3] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff
  ;
  uVar9 = ((uint)*(ushort *)(&cit_tb + ((uint)local_108[4] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff
  ;
  uVar9 = ((uint)*(ushort *)(&cit_tb + ((uint)local_108[5] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff
  ;
  uVar9 = (uint)*(ushort *)(&cit_tb + ((uint)local_108[6] ^ uVar9 >> 8) * 2) ^ uVar9 << 8;
  uVar7 = (uVar9 & 0xffff) >> 8;
  uVar5 = uVar9 & 0xff;
  uVar8 = ((int)uVar7 >> 1 & 1U) << 1;
  if (((int)uVar7 >> 5 & 1U) != 0) {
    uVar8 = uVar8 | 1;
  }
  uVar4 = uVar8 << 1 | 1;
  if (((int)uVar7 >> 6 & 1U) == 0) {
    uVar4 = uVar8 << 1;
  }
  uVar8 = uVar4 << 1;
  if (((int)uVar7 >> 3 & 1U) != 0) {
    uVar8 = uVar4 << 1 | 1;
  }
  uVar4 = uVar8 << 1;
  if ((int)uVar7 >> 7 != 0) {
    uVar4 = uVar8 << 1 | 1;
  }
  local_a0 = 0x5060001;
  local_9c = 0x7020403;
  uVar8 = uVar4 << 1 | 1;
  if ((uVar7 & 1) == 0) {
    uVar8 = uVar4 << 1;
  }
  uVar3 = ((int)uVar5 >> 1 & 1U) << 1;
  uVar4 = uVar8 << 1 | 1;
  if (((int)uVar7 >> 2 & 1U) == 0) {
    uVar4 = uVar8 << 1;
  }
  if ((uVar9 & 1) != 0) {
    uVar3 = uVar3 | 1;
  }
  uVar9 = uVar3 << 1;
  if (((int)uVar5 >> 6 & 1U) != 0) {
    uVar9 = uVar3 << 1 | 1;
  }
  uVar8 = uVar9 << 1;
  if (((int)uVar5 >> 5 & 1U) != 0) {
    uVar8 = uVar9 << 1 | 1;
  }
  uVar9 = uVar8 << 1;
  if (((int)uVar5 >> 3 & 1U) != 0) {
    uVar9 = uVar8 << 1 | 1;
  }
  uVar8 = uVar9 << 1 | 1;
  if (((int)uVar5 >> 4 & 1U) == 0) {
    uVar8 = uVar9 << 1;
  }
  uVar9 = uVar8 << 1 | 1;
  if (((int)uVar5 >> 2 & 1U) == 0) {
    uVar9 = uVar8 << 1;
  }
  uVar8 = uVar4 << 1;
  if (((int)uVar7 >> 4 & 1U) != 0) {
    uVar8 = uVar4 << 1 | 1;
  }
  uVar7 = uVar9 << 1;
  if ((int)uVar5 >> 7 != 0) {
    uVar7 = uVar9 << 1 | 1;
  }
  iVar1 = uVar8 << uVar7 + 8;
  local_101 = (undefined)iVar1;
  local_100 = (undefined)((uint)(iVar1 << 0x10) >> 0x18);
  iVar1 = execute_icc_cmd(local_108,'\t',(uchar *)&local_a0);
  if (0xb < iVar1) {
    uVar9 = ((uint)*(ushort *)
                    (&cit_tb +
                    (local_a0 >> 0x10 & 0xff ^
                    (uint)(*(ushort *)(&cit_tb + (local_a0 >> 8 & 0xff) * 2) >> 8)) * 2) ^
            (uint)*(ushort *)(&cit_tb + (local_a0 >> 8 & 0xff) * 2) << 8) & 0xffff;
    local_118 = 0x3060501;
    local_114 = 0x4020007;
    local_110 = 0x5060001;
    local_10c = 0x7020403;
    uVar9 = ((uint)*(ushort *)(&cit_tb + (local_a0 >> 0x18 ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff
    ;
    uVar9 = ((uint)*(ushort *)(&cit_tb + (local_9c & 0xff ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
    uVar9 = ((uint)*(ushort *)(&cit_tb + (local_9c >> 8 & 0xff ^ uVar9 >> 8) * 2) ^ uVar9 << 8) &
            0xffff;
    uVar9 = ((uint)*(ushort *)(&cit_tb + (local_9c >> 0x10 & 0xff ^ uVar9 >> 8) * 2) ^ uVar9 << 8) &
            0xffff;
    uVar9 = ((uint)*(ushort *)(&cit_tb + (local_9c >> 0x18 ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff
    ;
    uVar5 = (uint)*(ushort *)(&cit_tb + ((uint)local_98 ^ uVar9 >> 8) * 2) ^ uVar9 << 8;
    uVar8 = (uVar5 & 0xffff) >> 8;
    uVar7 = uVar5 & 0xff;
    uVar9 = ((int)uVar8 >> 1 & 1U) << 1;
    if (((int)uVar8 >> 5 & 1U) != 0) {
      uVar9 = uVar9 | 1;
    }
    uVar4 = uVar9 << 1;
    if (((int)uVar8 >> 6 & 1U) != 0) {
      uVar4 = uVar9 << 1 | 1;
    }
    uVar3 = ((int)uVar7 >> 1 & 1U) << 1;
    uVar9 = uVar4 << 1;
    if (((int)uVar8 >> 3 & 1U) != 0) {
      uVar9 = uVar4 << 1 | 1;
    }
    uVar4 = uVar9 << 1;
    if ((int)uVar8 >> 7 != 0) {
      uVar4 = uVar9 << 1 | 1;
    }
    uVar9 = uVar4 << 1;
    if ((uVar8 & 1) != 0) {
      uVar9 = uVar4 << 1 | 1;
    }
    uVar4 = uVar9 << 1;
    if (((int)uVar8 >> 2 & 1U) != 0) {
      uVar4 = uVar9 << 1 | 1;
    }
    if ((uVar5 & 1) != 0) {
      uVar3 = uVar3 | 1;
    }
    uVar9 = uVar3 << 1 | 1;
    if (((int)uVar7 >> 6 & 1U) == 0) {
      uVar9 = uVar3 << 1;
    }
    uVar5 = uVar9 << 1;
    if (((int)uVar7 >> 5 & 1U) != 0) {
      uVar5 = uVar9 << 1 | 1;
    }
    uVar9 = uVar5 << 1;
    if (((int)uVar7 >> 3 & 1U) != 0) {
      uVar9 = uVar5 << 1 | 1;
    }
    uVar5 = uVar9 << 1;
    if (((int)uVar7 >> 4 & 1U) != 0) {
      uVar5 = uVar9 << 1 | 1;
    }
    uVar9 = uVar5 << 1 | 1;
    if (((int)uVar7 >> 2 & 1U) == 0) {
      uVar9 = uVar5 << 1;
    }
    uVar5 = uVar4 << 1;
    if (((int)uVar8 >> 4 & 1U) != 0) {
      uVar5 = uVar4 << 1 | 1;
    }
    uVar8 = uVar9 << 1;
    if ((int)uVar7 >> 7 != 0) {
      uVar8 = uVar9 << 1 | 1;
    }
    uVar5 = uVar5 << uVar8 + 8;
    if (((uint)local_97 == (uVar5 & 0xff)) && ((uint)local_96 == (uVar5 << 0x10) >> 0x18)) {
      encrypt_r_data_for_comm_vga((uchar *)((int)&local_a0 + 1),rand_comm_vga);
      uVar2 = 8;
      goto LAB_00018ad0;
    }
  }
  uVar2 = 0;
LAB_00018ad0:
  if (local_3c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Could not reconcile some variable overlaps
// g_j_v_vga(unsigned char*, unsigned char*)

undefined4 g_j_v_vga(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  timeval tStack224;
  timezone tStack216;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  byte local_c0 [7];
  byte local_b9;
  byte local_b8;
  uchar local_a0;
  byte bStack159;
  byte bStack158;
  byte bStack157;
  byte local_9c;
  byte local_9b;
  byte bStack154;
  byte bStack153;
  byte bStack152;
  undefined4 local_97;
  undefined2 local_93;
  byte local_91;
  byte local_90;
  byte local_8f;
  int local_3c;
  
  pbVar6 = (byte *)((int)&local_c4 + 3);
  local_3c = __stack_chk_guard;
  gettimeofday(&tStack224,(__timezone_ptr_t)&tStack216);
  srand(tStack224.tv_usec);
  do {
    iVar2 = rand();
    pbVar6 = pbVar6 + 1;
    *pbVar6 = SUB81(ROUND((double)(longlong)iVar2 * 255.00000000 * 0.00000000),0) + 1;
  } while (pbVar6 != local_c0 + 6);
  uVar8 = ((uint)*(ushort *)
                  (&cit_tb +
                  ((uint)local_c0[2] ^ (uint)(*(ushort *)(&cit_tb + (uint)local_c0[1] * 2) >> 8)) *
                  2) ^ (uint)*(ushort *)(&cit_tb + (uint)local_c0[1] * 2) << 8) & 0xffff;
  local_c8 = 0x3060501;
  local_c4 = 0x4020007;
  uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)local_c0[3] ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
  uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)local_c0[4] ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
  local_a0 = '\x01';
  bStack159 = 0;
  bStack158 = 6;
  bStack157 = 5;
  local_9c = 3;
  local_9b = 4;
  bStack154 = 2;
  bStack153 = 7;
  uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)local_c0[5] ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
  uVar8 = (uint)*(ushort *)(&cit_tb + ((uint)local_c0[6] ^ uVar8 >> 8) * 2) ^ uVar8 << 8;
  param_2[1] = local_c0[2];
  *param_2 = local_c0[1];
  param_2[2] = local_c0[3];
  uVar9 = (uVar8 & 0xffff) >> 8;
  uVar5 = uVar8 & 0xff;
  param_2[3] = local_c0[4];
  uVar7 = ((int)uVar9 >> 1 & 1U) << 1;
  if (((int)uVar9 >> 5 & 1U) != 0) {
    uVar7 = uVar7 | 1;
  }
  uVar3 = ((int)uVar5 >> 1 & 1U) << 1;
  uVar10 = uVar7 << 1;
  if (((int)uVar9 >> 6 & 1U) != 0) {
    uVar10 = uVar7 << 1 | 1;
  }
  uVar7 = uVar10 << 1;
  if (((int)uVar9 >> 3 & 1U) != 0) {
    uVar7 = uVar10 << 1 | 1;
  }
  uVar10 = uVar7 << 1;
  if ((int)uVar9 >> 7 != 0) {
    uVar10 = uVar7 << 1 | 1;
  }
  local_c0[5] = rand_comm_vga[4] ^ local_c0[5];
  uVar7 = uVar10 << 1 | 1;
  if ((uVar9 & 1) == 0) {
    uVar7 = uVar10 << 1;
  }
  local_c0[6] = rand_comm_vga[5] ^ local_c0[6];
  uVar10 = uVar7 << 1;
  if (((int)uVar9 >> 2 & 1U) != 0) {
    uVar10 = uVar7 << 1 | 1;
  }
  if ((uVar8 & 1) != 0) {
    uVar3 = uVar3 | 1;
  }
  local_c0[0] = ~(local_c0[6] ^ local_c0[5] ^ 0x5e);
  uVar8 = uVar3 << 1;
  if (((int)uVar5 >> 6 & 1U) != 0) {
    uVar8 = uVar3 << 1 | 1;
  }
  uVar7 = uVar8 << 1 | 1;
  if (((int)uVar5 >> 5 & 1U) == 0) {
    uVar7 = uVar8 << 1;
  }
  uVar8 = uVar7 << 1;
  if (((int)uVar5 >> 3 & 1U) != 0) {
    uVar8 = uVar7 << 1 | 1;
  }
  local_c0[1] = local_c0[1] ^ rand_comm_vga[0];
  local_c0[2] = local_c0[2] ^ rand_comm_vga[1];
  uVar7 = uVar8 << 1;
  if (((int)uVar5 >> 4 & 1U) != 0) {
    uVar7 = uVar8 << 1 | 1;
  }
  local_c0[3] = local_c0[3] ^ rand_comm_vga[2];
  uVar8 = uVar7 << 1;
  if (((int)uVar5 >> 2 & 1U) != 0) {
    uVar8 = uVar7 << 1 | 1;
  }
  uVar7 = uVar10 << 1;
  if (((int)uVar9 >> 4 & 1U) != 0) {
    uVar7 = uVar10 << 1 | 1;
  }
  uVar9 = uVar8 << 1;
  if ((int)uVar5 >> 7 != 0) {
    uVar9 = uVar8 << 1 | 1;
  }
  local_c0[4] = local_c0[4] ^ rand_comm_vga[3];
  iVar2 = uVar7 << uVar9 + 8;
  local_b9 = (byte)iVar2 ^ rand_comm_vga[6];
  local_b8 = rand_comm_vga[7] ^ (byte)((uint)(iVar2 << 0x10) >> 0x18);
  iVar2 = execute_icc_cmd(local_c0,'\t',&local_a0);
  if (0x13 < iVar2) {
    bStack159 = rand_comm_vga[0] ^ bStack159;
    bStack158 = bStack158 ^ rand_comm_vga[1];
    local_9c = rand_comm_vga[3] ^ local_9c;
    bStack157 = rand_comm_vga[2] ^ bStack157;
    local_9b = local_9b ^ rand_comm_vga[4];
    bStack154 = bStack154 ^ rand_comm_vga[5];
    local_97 = CONCAT13(rand_comm_vga[3] ^ local_97._3_1_,
                        CONCAT12(rand_comm_vga[2] ^ local_97._2_1_,
                                 CONCAT11(rand_comm_vga[1] ^ local_97._1_1_,
                                          (byte)local_97 ^ rand_comm_vga[0])));
    bStack152 = bStack152 ^ rand_comm_vga[7];
    bVar1 = rand_comm_vga[5] ^ (byte)((ushort)local_93 >> 8);
    local_93 = CONCAT11(bVar1,rand_comm_vga[4] ^ (byte)local_93);
    uVar8 = ((uint)*(ushort *)
                    (&cit_tb +
                    ((uint)bStack158 ^ (uint)(*(ushort *)(&cit_tb + (uint)bStack159 * 2) >> 8)) * 2)
            ^ (uint)*(ushort *)(&cit_tb + (uint)bStack159 * 2) << 8) & 0xffff;
    bStack153 = bStack153 ^ rand_comm_vga[6];
    local_91 = rand_comm_vga[6] ^ local_91;
    local_90 = rand_comm_vga[7] ^ local_90;
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)bStack157 ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    local_d0 = 0x3060501;
    local_cc = 0x4020007;
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)local_9c ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)local_9b ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)bStack154 ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)bStack153 ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)bStack152 ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)
                    (&cit_tb + ((uint)((byte)local_97 ^ rand_comm_vga[0]) ^ uVar8 >> 8) * 2) ^
            uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)
                    (&cit_tb + ((uint)(rand_comm_vga[1] ^ local_97._1_1_) ^ uVar8 >> 8) * 2) ^
            uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)
                    (&cit_tb + ((uint)(rand_comm_vga[2] ^ local_97._2_1_) ^ uVar8 >> 8) * 2) ^
            uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)
                    (&cit_tb + ((uint)(rand_comm_vga[3] ^ local_97._3_1_) ^ uVar8 >> 8) * 2) ^
            uVar8 << 8) & 0xffff;
    uVar8 = ((uint)*(ushort *)
                    (&cit_tb + ((uint)(rand_comm_vga[4] ^ (byte)local_93) ^ uVar8 >> 8) * 2) ^
            uVar8 << 8) & 0xffff;
    local_8f = local_8f ^ rand_comm_vga[0];
    uVar8 = ((uint)*(ushort *)(&cit_tb + ((uint)bVar1 ^ uVar8 >> 8) * 2) ^ uVar8 << 8) & 0xffff;
    uVar7 = (uint)*(ushort *)(&cit_tb + ((uint)local_91 ^ uVar8 >> 8) * 2) ^ uVar8 << 8;
    uVar5 = (uVar7 & 0xffff) >> 8;
    uVar7 = uVar7 & 0xff;
    uVar8 = ((int)uVar5 >> 1 & 1U) << 1;
    if (((int)uVar5 >> 5 & 1U) != 0) {
      uVar8 = uVar8 | 1;
    }
    uVar9 = uVar8 << 1;
    if (((int)uVar5 >> 6 & 1U) != 0) {
      uVar9 = uVar8 << 1 | 1;
    }
    uVar8 = uVar9 << 1;
    if (((int)uVar5 >> 3 & 1U) != 0) {
      uVar8 = uVar9 << 1 | 1;
    }
    uVar10 = ((int)uVar7 >> (local_c8 & 0xff) & 1U) << 1;
    uVar9 = uVar8 << 1;
    if ((int)uVar5 >> 7 != 0) {
      uVar9 = uVar8 << 1 | 1;
    }
    uVar8 = uVar9 << 1;
    if ((uVar5 & 1) != 0) {
      uVar8 = uVar9 << 1 | 1;
    }
    uVar9 = uVar8 << 1;
    if (((int)uVar5 >> 2 & 1U) != 0) {
      uVar9 = uVar8 << 1 | 1;
    }
    if (((int)uVar7 >> (local_c8 >> 8 & 0xff) & 1U) != 0) {
      uVar10 = uVar10 | 1;
    }
    uVar8 = uVar10 << 1;
    if (((int)uVar7 >> (local_c8 >> 0x10 & 0xff) & 1U) != 0) {
      uVar8 = uVar10 << 1 | 1;
    }
    uVar10 = uVar8 << 1;
    if (((int)uVar7 >> (local_c8 >> 0x18) & 1U) != 0) {
      uVar10 = uVar8 << 1 | 1;
    }
    uVar8 = uVar10 << 1;
    if (((int)uVar7 >> (local_c4 & 0xff) & 1U) != 0) {
      uVar8 = uVar10 << 1 | 1;
    }
    uVar10 = uVar8 << 1;
    if (((int)uVar7 >> (local_c4 >> 8 & 0xff) & 1U) != 0) {
      uVar10 = uVar8 << 1 | 1;
    }
    uVar8 = uVar10 << 1;
    if (((int)uVar7 >> (local_c4 >> 0x10 & 0xff) & 1U) != 0) {
      uVar8 = uVar10 << 1 | 1;
    }
    uVar10 = uVar9 << 1;
    if (((int)uVar5 >> 4 & 1U) != 0) {
      uVar10 = uVar9 << 1 | 1;
    }
    uVar5 = uVar8 << 1;
    if (((int)uVar7 >> (local_c4 >> 0x18) & 1U) != 0) {
      uVar5 = uVar8 << 1 | 1;
    }
    uVar10 = uVar10 << uVar5 + 8;
    if (((uint)local_90 == (uVar10 & 0xff)) && ((uint)local_8f == (uVar10 << 0x10) >> 0x18)) {
      uVar4 = 0xf;
      *(uint *)param_1 = CONCAT13(local_9c,CONCAT12(bStack157,CONCAT11(bStack158,bStack159)));
      *(uint *)(param_1 + 4) = CONCAT13(bStack152,CONCAT12(bStack153,CONCAT11(bStack154,local_9b)));
      *(undefined4 *)(param_1 + 8) = local_97;
      *(undefined2 *)(param_1 + 0xc) = local_93;
      param_1[0xe] = local_91;
      goto LAB_000192b2;
    }
  }
  uVar4 = 0;
LAB_000192b2:
  if (local_3c == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// t_j_v_vga(unsigned char*, unsigned char*)

void t_j_v_vga(uchar *param_1,uchar *param_2)

{
  *param_1 = *param_2 ^ *param_1;
  param_1[1] = param_2[1] ^ param_1[1];
  param_1[6] = param_2[2] ^ param_1[6];
  param_1[7] = param_2[2] ^ param_1[7];
  param_1[8] = param_2[3] ^ param_1[8];
  param_1[9] = param_2[3] ^ param_1[9];
  return;
}



// g_r_for_cm(int)

undefined4 g_r_for_cm(int param_1)

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
      iVar1 = g_r_for_cm_vga();
      if (7 < iVar1) {
        uVar2 = 1;
        goto LAB_000193a2;
      }
      unaff_r4 = unaff_r4 + 1;
      usleep(300000);
    } while (unaff_r4 != param_1);
  }
  uVar2 = 0;
LAB_000193a2:
  if (local_1c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// auth_c32_for_cm_vga()

undefined4 auth_c32_for_cm_vga(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uchar *puVar4;
  timeval tStack276;
  timezone tStack268;
  uchar local_104;
  byte local_103;
  byte local_102;
  byte local_101;
  byte local_100;
  uchar uStack248;
  byte local_f7;
  byte local_f6;
  byte local_f5;
  byte local_f4;
  byte local_f3;
  byte local_f2;
  byte local_f1;
  byte local_f0;
  byte local_ef;
  byte local_ee;
  uchar uStack145;
  uchar local_90;
  byte local_8f;
  byte local_8e;
  undefined local_8d;
  undefined local_8c;
  byte local_8b;
  byte local_8a;
  undefined local_89;
  undefined local_88;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  gettimeofday(&tStack276,(__timezone_ptr_t)&tStack268);
  puVar4 = &uStack145;
  srand(tStack276.tv_usec);
  do {
    iVar1 = rand();
    puVar4 = puVar4 + 1;
    *puVar4 = SUB81(ROUND((double)(longlong)iVar1 * 255.00000000 * 0.00000000),0) + '\x01';
  } while (puVar4 != &local_90 + 6);
  uVar3 = (uint)(local_8b ^ local_8a) ^ 0xac;
  local_104 = (uchar)uVar3;
  local_103 = local_8f;
  local_102 = local_8e;
  local_101 = local_8b;
  local_100 = local_8a;
  uVar3 = *(uint *)(cr32_table +
                   ((*(uint *)(cr32_table + (uVar3 << 2 ^ 0x3fc)) ^ 0xffffff ^ (uint)local_8f) &
                   0xff) * 4) ^ (*(uint *)(cr32_table + (uVar3 << 2 ^ 0x3fc)) ^ 0xffffff) >> 8;
  uVar3 = *(uint *)(cr32_table + ((uVar3 ^ local_8e) & 0xff) * 4) ^ uVar3 >> 8;
  uVar3 = *(uint *)(cr32_table + ((local_8b ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
  uVar3 = uVar3 >> 8 ^ 0x55aa55aa ^ *(uint *)(cr32_table + ((local_8a ^ uVar3) & 0xff) * 4);
  local_8d = (undefined)uVar3;
  local_8c = (undefined)(uVar3 >> 8);
  local_89 = (undefined)(uVar3 >> 0x10);
  local_88 = (undefined)(uVar3 >> 0x18);
  local_90 = local_104;
  iVar1 = execute_icc_cmd(&local_90,'\t',&uStack248);
  if ((((iVar1 < 0xc) ||
       (uVar3 = *(uint *)(cr32_table +
                         ((*(uint *)(cr32_table + ((uint)local_f7 << 2 ^ 0x3fc)) ^ 0xffffff ^
                          (uint)local_f6) & 0xff) * 4) ^
                (*(uint *)(cr32_table + ((uint)local_f7 << 2 ^ 0x3fc)) ^ 0xffffff) >> 8,
       uVar3 = *(uint *)(cr32_table + ((local_f5 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8,
       uVar3 = *(uint *)(cr32_table + ((local_f4 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8,
       uVar3 = *(uint *)(cr32_table + ((local_f3 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8,
       uVar3 = *(uint *)(cr32_table + ((local_f2 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8 ^ 0x55aa55aa,
       (uint)local_f1 != (uVar3 & 0xff))) || ((uint)local_f0 != (uVar3 << 0x10) >> 0x18)) ||
     ((uint)local_ef != (uVar3 << 8) >> 0x18)) {
    uVar2 = 0;
  }
  else {
    if ((uint)local_ee == uVar3 >> 0x18) {
      uVar2 = 8;
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_2c == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
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
LAB_0001976c:
    __ptr[3] = 0;
LAB_00019770:
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
                if (pvVar1 == (void *)0xffffffff) goto LAB_000197b6;
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
                if (__fd != 0) goto LAB_000197b6;
              }
              __fd = sunxi_layer_reserve(__ptr);
              if (-1 < __fd) goto LAB_000197ca;
            }
          }
LAB_000197b6:
          close(*__ptr);
        }
      }
      close(__ptr[1]);
    }
  }
  else {
    __fd = strcmp(param_1,"/dev/fb0");
    if (__fd == 0) goto LAB_0001976c;
    __fd = strcmp(param_1,"/dev/fb1");
    if (__fd == 0) {
      __ptr[3] = 1;
      goto LAB_00019770;
    }
  }
  free(__ptr);
  __ptr = (int *)0x0;
LAB_000197ca:
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
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 *local_d4;
  undefined4 local_cc [3];
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  
  local_e0 = param_5;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = param_4;
  memset(local_cc,0,0x3c);
  if (*(int *)(param_1 + 0x44) < 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 100) != 0) {
    local_dc = *(undefined4 *)(param_1 + 0xc);
    local_d8 = *(int *)(param_1 + 0x44);
    local_d4 = &local_90;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4b,&local_dc);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    local_dc = *(undefined4 *)(param_1 + 0xc);
    local_d8 = *(undefined4 *)(param_1 + 0x44);
    local_90 = 0;
    local_d4 = &local_90;
    iVar1 = ioctl(*(int *)(param_1 + 4),0x4a,&local_dc);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  local_bc = param_5;
  local_cc[0] = 0x5fe00000;
  if (param_2 == 0x20) {
    local_b4 = 0;
    local_b8 = 10;
    local_c0 = param_6;
  }
  else {
    if (param_2 != 0x10) {
      return 0xffffffff;
    }
    local_b8 = 5;
    local_b4 = 0xd;
    local_c0 = param_6 << 1;
  }
  local_b0 = 1;
  local_90 = *(undefined4 *)(param_1 + 0xc);
  local_8c = *(undefined4 *)(param_1 + 0x44);
  local_88 = local_cc;
  iVar1 = ioctl(*(int *)(param_1 + 4),0x44,&local_90);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  local_90 = *(undefined4 *)(param_1 + 0xc);
  local_88 = &local_ec;
  local_8c = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x50) = local_e8;
  *(undefined4 *)(param_1 + 0x54) = local_e4;
  *(undefined4 *)(param_1 + 0x4c) = local_ec;
  *(undefined4 *)(param_1 + 0x58) = local_e0;
  *(undefined4 *)(param_1 + 0x68) = local_b8;
  iVar1 = ioctl(*(int *)(param_1 + 4),0x46,&local_90);
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
          if (-1 < *(int *)(param_1 + 0x60)) goto LAB_00019b24;
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
LAB_00019b24:
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
    goto LAB_00019eb8;
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
      if (-1 < *(int *)(iVar3 + 0x60)) goto LAB_00019e70;
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
        goto LAB_00019e70;
      }
      iVar5 = *(int *)(disp + 0x44);
    }
  }
  else {
LAB_00019e70:
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
LAB_00019eb8:
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



undefined4 set_control_h_or_v(void)

{
  int __fd;
  
  __fd = open("/dev/bitctrl",2);
  if (-1 < __fd) {
    ioctl(__fd,6,0);
    ioctl(__fd,7,0);
    close(__fd);
    return 0;
  }
  perror("open device bitctrl");
                    // WARNING: Subroutine does not return
  exit(1);
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
      goto LAB_0001a51c;
    }
    puts("Error : map_ram_base mmap");
  }
  uVar2 = 1;
LAB_0001a51c:
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
  args._40_4_ = 0x280;
  args._44_4_ = 0x1e0;
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
  args._40_4_ = 0x180;
  args._44_4_ = 0xf0;
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
  args._40_4_ = 0x140;
  args._44_4_ = 0xf0;
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
  ppcVar2 = (code **)0x33e94;
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


