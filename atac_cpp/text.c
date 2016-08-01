# 1 "test.c"
# 1 "/usr/include/stdio.h" 1 3
 

















 







# 1 "/usr/include/features.h" 1 3
 



















 











































































 




























 





 


 














 






 
# 181 "/usr/include/features.h" 3


 








 





 





 





 








 














































# 290 "/usr/include/features.h" 3






































# 338 "/usr/include/features.h" 3





 

# 1 "/usr/include/stdc-predef.h" 1 3
 



















 







 



 



 



# 345 "/usr/include/features.h" 2 3


 








 







 







 


# 1 "/usr/include/sys/cdefs.h" 1 3
 




















 




 






 



# 71 "/usr/include/sys/cdefs.h" 3










 




 





 




 









 












 











 







 















 










 






 









# 207 "/usr/include/sys/cdefs.h" 3


 






 








 








 






 










 






 











 










 







 














 






 







 

























 






 







 




 











 













# 1 "/usr/include/bits/wordsize.h" 1 3
 












# 392 "/usr/include/sys/cdefs.h" 2 3


# 412 "/usr/include/sys/cdefs.h" 3















# 375 "/usr/include/features.h" 2 3



 








 







 



# 1 "/usr/include/gnu/stubs.h" 1 3
 













# 399 "/usr/include/features.h" 2 3




# 27 "/usr/include/stdio.h" 2 3


@<__BEGIN_DECLS@| @>





# 1 "/usr/include/bits/types.h" 1 3
 

















 







# 1 "/usr/include/bits/wordsize.h" 1 3
 












# 27 "/usr/include/bits/types.h" 2 3


 
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

 
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;








 







typedef struct
{
  long __val[2];
} __quad_t;
typedef struct
{
  __u_long __val[2];
} __u_quad_t;



 











































 


# 129 "/usr/include/bits/types.h" 3

# 1 "/usr/include/bits/typesizes.h" 1 3
 
























 


 













































# 83 "/usr/include/bits/typesizes.h" 3


 




# 130 "/usr/include/bits/types.h" 2 3



@<__STD_TYPE@|  typedef @> @<__DEV_T_TYPE@|__u_quad_t  @> __dev_t;	 
@<__STD_TYPE@|  typedef @> @<__UID_T_TYPE@|unsigned int  @> __uid_t;	 
@<__STD_TYPE@|  typedef @> @<__GID_T_TYPE@|unsigned int  @> __gid_t;	 
@<__STD_TYPE@|  typedef @> @<__INO_T_TYPE@|unsigned long int   @> __ino_t;	 
@<__STD_TYPE@|  typedef @> @<__INO64_T_TYPE@|__u_quad_t  @> __ino64_t;	 
@<__STD_TYPE@|  typedef @> @<__MODE_T_TYPE@|unsigned int  @> __mode_t;	 
@<__STD_TYPE@|  typedef @> @<__NLINK_T_TYPE@|unsigned int  @> __nlink_t;	 
@<__STD_TYPE@|  typedef @> @<__OFF_T_TYPE@|long int   @> __off_t;	 
@<__STD_TYPE@|  typedef @> @<__OFF64_T_TYPE@|__quad_t  @> __off64_t;	 
@<__STD_TYPE@|  typedef @> @<__PID_T_TYPE@|int  @> __pid_t;	 
@<__STD_TYPE@|  typedef @> @<__FSID_T_TYPE@|struct { int __val[2]; } @> __fsid_t;	 
@<__STD_TYPE@|  typedef @> @<__CLOCK_T_TYPE@|long int   @> __clock_t;	 
@<__STD_TYPE@|  typedef @> @<__RLIM_T_TYPE@|unsigned long int   @> __rlim_t;	 
@<__STD_TYPE@|  typedef @> @<__RLIM64_T_TYPE@|__u_quad_t  @> __rlim64_t;	 
@<__STD_TYPE@|  typedef @> @<__ID_T_TYPE@|unsigned int  @> __id_t;		 
@<__STD_TYPE@|  typedef @> @<__TIME_T_TYPE@|long int   @> __time_t;	 
@<__STD_TYPE@|  typedef @> @<__USECONDS_T_TYPE@|unsigned int  @> __useconds_t;  
@<__STD_TYPE@|  typedef @> @<__SUSECONDS_T_TYPE@|long int   @> __suseconds_t;  

@<__STD_TYPE@|  typedef @> @<__DADDR_T_TYPE@|int  @> __daddr_t;	 
@<__STD_TYPE@|  typedef @> @<__KEY_T_TYPE@|int  @> __key_t;	 

 
@<__STD_TYPE@|  typedef @> @<__CLOCKID_T_TYPE@|int  @> __clockid_t;

 
@<__STD_TYPE@|  typedef @> @<__TIMER_T_TYPE@|void * @> __timer_t;

 
@<__STD_TYPE@|  typedef @> @<__BLKSIZE_T_TYPE@|long int   @> __blksize_t;

 

 
@<__STD_TYPE@|  typedef @> @<__BLKCNT_T_TYPE@|long int   @> __blkcnt_t;
@<__STD_TYPE@|  typedef @> @<__BLKCNT64_T_TYPE@|__quad_t  @> __blkcnt64_t;

 
@<__STD_TYPE@|  typedef @> @<__FSBLKCNT_T_TYPE@|unsigned long int   @> __fsblkcnt_t;
@<__STD_TYPE@|  typedef @> @<__FSBLKCNT64_T_TYPE@|__u_quad_t  @> __fsblkcnt64_t;

 
@<__STD_TYPE@|  typedef @> @<__FSFILCNT_T_TYPE@|unsigned long int   @> __fsfilcnt_t;
@<__STD_TYPE@|  typedef @> @<__FSFILCNT64_T_TYPE@|__u_quad_t  @> __fsfilcnt64_t;

 
@<__STD_TYPE@|  typedef @> @<__FSWORD_T_TYPE@|int  @> __fsword_t;

@<__STD_TYPE@|  typedef @> @<__SSIZE_T_TYPE@|int  @> __ssize_t;  

 
@<__STD_TYPE@|  typedef @> @<__SYSCALL_SLONG_TYPE@|long int  @> __syscall_slong_t;
 
@<__STD_TYPE@|  typedef @> @<__SYSCALL_ULONG_TYPE@|unsigned long int  @> __syscall_ulong_t;

 

typedef __off64_t __loff_t;	 
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

 
@<__STD_TYPE@|  typedef @> @<__SWORD_TYPE@|int @> __intptr_t;

 
@<__STD_TYPE@|  typedef @> @<__U32_TYPE@|unsigned int @> __socklen_t;





# 35 "/usr/include/stdio.h" 2 3








 
struct _IO_FILE;

@<__BEGIN_NAMESPACE_STD@| @>
 
typedef struct _IO_FILE FILE;
@<__END_NAMESPACE_STD@| @>



@<__USING_NAMESPACE_STD(FILE)@| @>









 
typedef struct _IO_FILE __FILE;









# 1 "/usr/include/libio.h" 1 3
 






























# 1 "/usr/include/_G_config.h" 1 3
 





 












# 1 "/usr/include/wchar.h" 1 3
 
















 











# 47 "/usr/include/wchar.h" 3






 


 




typedef unsigned int wint_t;
# 71 "/usr/include/wchar.h" 3


 







 
typedef struct
{
  int __count;
  union
  {



    wint_t __wch;

    char __wchb[4];
  } __value;		 
} __mbstate_t;




 

# 893 "/usr/include/wchar.h" 3




 



# 20 "/usr/include/_G_config.h" 2 3

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 42 "/usr/include/_G_config.h" 3



 







 





# 32 "/usr/include/libio.h" 2 3

 














 






































 





































 



















struct _IO_jump_t;  struct _IO_FILE;

 







typedef void _IO_lock_t;



 

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
   

   
  int _pos;
# 177 "/usr/include/libio.h" 3

};

 
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};

# 244 "/usr/include/libio.h" 3


struct _IO_FILE {
  int _flags;		 


   
   
  char* _IO_read_ptr;	 
  char* _IO_read_end;	 
  char* _IO_read_base;	 
  char* _IO_write_base;	 
  char* _IO_write_ptr;	 
  char* _IO_write_end;	 
  char* _IO_buf_base;	 
  char* _IO_buf_end;	 
   
  char *_IO_save_base;  
  char *_IO_backup_base;   
  char *_IO_save_end;  

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  @<_IO_off_t@|__off_t @> _old_offset;  


   
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

   

  _IO_lock_t *_lock;








  @<_IO_off64_t@|__off64_t @> _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;
   
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;











 

 

typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);

 





typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
				 size_t __n);

 





typedef int __io_seek_fn (void *__cookie, @<_IO_off64_t@|__off64_t @> *__pos, int __w);

 
typedef int __io_close_fn (void *__cookie);


# 384 "/usr/include/libio.h" 3







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
























# 430 "/usr/include/libio.h" 3





extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) @<__THROW@| @>;
extern int _IO_ferror (_IO_FILE *__fp) @<__THROW@| @>;

extern int _IO_peekc_locked (_IO_FILE *__fp);

 



extern void _IO_flockfile (_IO_FILE *) @<__THROW@| @>;
extern void _IO_funlockfile (_IO_FILE *) @<__THROW@| @>;
extern int _IO_ftrylockfile (_IO_FILE *) @<__THROW@| @>;
















extern int _IO_vfscanf (_IO_FILE * @<__restrict@| @>, const char * @<__restrict@| @>,
			@<_IO_va_list@|__gnuc_va_list  @>, int *@<__restrict@|  @>);
extern int _IO_vfprintf (_IO_FILE *@<__restrict@|  @>, const char *@<__restrict@|  @>,
			 @<_IO_va_list@|__gnuc_va_list  @>);
extern @<_IO_ssize_t@|__ssize_t @> _IO_padn (_IO_FILE *, int, @<_IO_ssize_t@|__ssize_t @>);
extern @<_IO_size_t@|size_t @> _IO_sgetn (_IO_FILE *, void *, @<_IO_size_t@|size_t @>);

extern @<_IO_off64_t@|__off64_t @> _IO_seekoff (_IO_FILE *, @<_IO_off64_t@|__off64_t @>, int, int);
extern @<_IO_off64_t@|__off64_t @> _IO_seekpos (_IO_FILE *, @<_IO_off64_t@|__off64_t @>, int);

extern void _IO_free_backup_area (_IO_FILE *) @<__THROW@| @>;

# 520 "/usr/include/libio.h" 3











# 74 "/usr/include/stdio.h" 2 3
















typedef __off_t off_t;











typedef __ssize_t ssize_t;




 
@<__BEGIN_NAMESPACE_STD@| @>

typedef _G_fpos_t fpos_t;



@<__END_NAMESPACE_STD@| @>




 





 





 






 











 




 








# 1 "/usr/include/bits/stdio_lim.h" 1 3
 









































# 164 "/usr/include/stdio.h" 2 3



 
extern struct _IO_FILE *stdin;		 
extern struct _IO_FILE *stdout;		 
extern struct _IO_FILE *stderr;		 
 




@<__BEGIN_NAMESPACE_STD@| @>
 
extern int remove (const char *__filename) @<__THROW@| @>;
 
extern int rename (const char *__old, const char *__new) @<__THROW@| @>;
@<__END_NAMESPACE_STD@| @>


 
extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) @<__THROW@| @>;


@<__BEGIN_NAMESPACE_STD@| @>
 




extern FILE *tmpfile (void) @<__wur@| @>;












 
extern char *tmpnam (char *__s) @<__THROW@| @> @<__wur@| @>;
@<__END_NAMESPACE_STD@| @>


 

extern char *tmpnam_r (char *__s) @<__THROW@| @> @<__wur@| @>;




 






extern char *tempnam (const char *__dir, const char *__pfx)
     @<__THROW@| @> @<__attribute_malloc__@| @> @<__wur@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fclose (FILE *__stream);
 



extern int fflush (FILE *__stream);
@<__END_NAMESPACE_STD@| @>


 





extern int fflush_unlocked (FILE *__stream);


# 263 "/usr/include/stdio.h" 3



@<__BEGIN_NAMESPACE_STD@| @>

 



extern FILE *fopen (const char *@<__restrict@|  @> __filename,
		    const char *@<__restrict@|  @> __modes) @<__wur@| @>;
 



extern FILE *freopen (const char *@<__restrict@|  @> __filename,
		      const char *@<__restrict@|  @> __modes,
		      FILE *@<__restrict@|  @> __stream) @<__wur@| @>;
# 294 "/usr/include/stdio.h" 3

@<__END_NAMESPACE_STD@| @>









 
extern FILE *fdopen (int __fd, const char *__modes) @<__THROW@| @> @<__wur@| @>;











 
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  @<__THROW@| @> @<__wur@| @>;

 


extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) @<__THROW@| @> @<__wur@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 

extern void setbuf (FILE *@<__restrict@|  @> __stream, char *@<__restrict@|  @> __buf) @<__THROW@| @>;
 


extern int setvbuf (FILE *@<__restrict@|  @> __stream, char *@<__restrict@|  @> __buf,
		    int __modes, size_t __n) @<__THROW@| @>;
@<__END_NAMESPACE_STD@| @>


 

extern void setbuffer (FILE *@<__restrict@|  @> __stream, char *@<__restrict@|  @> __buf,
		       size_t __size) @<__THROW@| @>;

 
extern void setlinebuf (FILE *__stream) @<__THROW@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fprintf (FILE *@<__restrict@|  @> __stream,
		    const char *@<__restrict@|  @> __format, ...);
 



extern int printf (const char *@<__restrict@|  @> __format, ...);
 
extern int sprintf (char *@<__restrict@|  @> __s,
		    const char *@<__restrict@|  @> __format, ...) @<__THROWNL@| @>;

 



extern int vfprintf (FILE *@<__restrict@|  @> __s, const char *@<__restrict@|  @> __format,
		     @<_G_va_list@|__gnuc_va_list @> __arg);
 



extern int vprintf (const char *@<__restrict@|  @> __format, @<_G_va_list@|__gnuc_va_list @> __arg);
 
extern int vsprintf (char *@<__restrict@|  @> __s, const char *@<__restrict@|  @> __format,
		     @<_G_va_list@|__gnuc_va_list @> __arg) @<__THROWNL@| @>;
@<__END_NAMESPACE_STD@| @>


@<__BEGIN_NAMESPACE_C99@| @>
 
extern int snprintf (char *@<__restrict@|  @> __s, size_t __maxlen,
		     const char *@<__restrict@|  @> __format, ...)
     @<__THROWNL@| @> @<__attribute__ ((__format__ (__printf__, 3, 4)))@| @>;

extern int vsnprintf (char *@<__restrict@|  @> __s, size_t __maxlen,
		      const char *@<__restrict@|  @> __format, @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__THROWNL@| @> @<__attribute__ ((__format__ (__printf__, 3, 0)))@| @>;
@<__END_NAMESPACE_C99@| @>


# 408 "/usr/include/stdio.h" 3



 
extern int vdprintf (int __fd, const char *@<__restrict@|  @> __fmt,
		     @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__attribute__ ((__format__ (__printf__, 2, 0)))@| @>;
extern int dprintf (int __fd, const char *@<__restrict@|  @> __fmt, ...)
     @<__attribute__ ((__format__ (__printf__, 2, 3)))@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fscanf (FILE *@<__restrict@|  @> __stream,
		   const char *@<__restrict@|  @> __format, ...) @<__wur@| @>;
 



extern int scanf (const char *@<__restrict@|  @> __format, ...) @<__wur@| @>;
 
extern int sscanf (const char *@<__restrict@|  @> __s,
		   const char *@<__restrict@|  @> __format, ...) @<__THROW@| @>;




# 451 "/usr/include/stdio.h" 3

extern int __isoc99_fscanf (FILE *@<__restrict@|  @> __stream,
			    const char *@<__restrict@|  @> __format, ...) @<__wur@| @>;
extern int __isoc99_scanf (const char *@<__restrict@|  @> __format, ...) @<__wur@| @>;
extern int __isoc99_sscanf (const char *@<__restrict@|  @> __s,
			    const char *@<__restrict@|  @> __format, ...) @<__THROW@| @>;






@<__END_NAMESPACE_STD@| @>


@<__BEGIN_NAMESPACE_C99@| @>
 



extern int vfscanf (FILE *@<__restrict@|  @> __s, const char *@<__restrict@|  @> __format,
		    @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__attribute__ ((__format__ (__scanf__, 2, 0)))@| @> @<__wur@| @>;

 



extern int vscanf (const char *@<__restrict@|  @> __format, @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__attribute__ ((__format__ (__scanf__, 1, 0)))@| @> @<__wur@| @>;

 
extern int vsscanf (const char *@<__restrict@|  @> __s,
		    const char *@<__restrict@|  @> __format, @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__THROW@| @> @<__attribute__ ((__format__ (__scanf__, 2, 0)))@| @>;




# 507 "/usr/include/stdio.h" 3

extern int __isoc99_vfscanf (FILE *@<__restrict@|  @> __s,
			     const char *@<__restrict@|  @> __format,
			     @<_G_va_list@|__gnuc_va_list @> __arg) @<__wur@| @>;
extern int __isoc99_vscanf (const char *@<__restrict@|  @> __format,
			    @<_G_va_list@|__gnuc_va_list @> __arg) @<__wur@| @>;
extern int __isoc99_vsscanf (const char *@<__restrict@|  @> __s,
			     const char *@<__restrict@|  @> __format,
			     @<_G_va_list@|__gnuc_va_list @> __arg) @<__THROW@| @>;






@<__END_NAMESPACE_C99@| @>



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

 



extern int getchar (void);
@<__END_NAMESPACE_STD@| @>

 




 



extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);



 





extern int fgetc_unlocked (FILE *__stream);



@<__BEGIN_NAMESPACE_STD@| @>
 






extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

 



extern int putchar (int __c);
@<__END_NAMESPACE_STD@| @>

 




 





extern int fputc_unlocked (int __c, FILE *__stream);



 



extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);





 
extern int getw (FILE *__stream);

 
extern int putw (int __w, FILE *__stream);



@<__BEGIN_NAMESPACE_STD@| @>
 



extern char *fgets (char *@<__restrict@|  @> __s, int __n, FILE *@<__restrict@|  @> __stream)
     @<__wur@| @>;



 










extern char *gets (char *__s) @<__wur@| @> @<__attribute_deprecated__@| @>;

@<__END_NAMESPACE_STD@| @>

# 651 "/usr/include/stdio.h" 3




 









extern @<_IO_ssize_t@|__ssize_t @> __getdelim (char **@<__restrict@|  @> __lineptr,
			       size_t *@<__restrict@|  @> __n, int __delimiter,
			       FILE *@<__restrict@|  @> __stream) @<__wur@| @>;
extern @<_IO_ssize_t@|__ssize_t @> getdelim (char **@<__restrict@|  @> __lineptr,
			     size_t *@<__restrict@|  @> __n, int __delimiter,
			     FILE *@<__restrict@|  @> __stream) @<__wur@| @>;

 





extern @<_IO_ssize_t@|__ssize_t @> getline (char **@<__restrict@|  @> __lineptr,
			    size_t *@<__restrict@|  @> __n,
			    FILE *@<__restrict@|  @> __stream) @<__wur@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fputs (const char *@<__restrict@|  @> __s, FILE *@<__restrict@|  @> __stream);

 



extern int puts (const char *__s);


 



extern int ungetc (int __c, FILE *__stream);


 



extern size_t fread (void *@<__restrict@|  @> __ptr, size_t __size,
		     size_t __n, FILE *@<__restrict@|  @> __stream) @<__wur@| @>;
 



extern size_t fwrite (const void *@<__restrict@|  @> __ptr, size_t __size,
		      size_t __n, FILE *@<__restrict@|  @> __s);
@<__END_NAMESPACE_STD@| @>

# 728 "/usr/include/stdio.h" 3



 





extern size_t fread_unlocked (void *@<__restrict@|  @> __ptr, size_t __size,
			      size_t __n, FILE *@<__restrict@|  @> __stream) @<__wur@| @>;
extern size_t fwrite_unlocked (const void *@<__restrict@|  @> __ptr, size_t __size,
			       size_t __n, FILE *@<__restrict@|  @> __stream);



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fseek (FILE *__stream, long int __off, int __whence);
 



extern long int ftell (FILE *__stream) @<__wur@| @>;
 



extern void rewind (FILE *__stream);
@<__END_NAMESPACE_STD@| @>

 






 



extern int fseeko (FILE *__stream, __off_t __off, int __whence);
 



extern __off_t ftello (FILE *__stream) @<__wur@| @>;
# 789 "/usr/include/stdio.h" 3



@<__BEGIN_NAMESPACE_STD@| @>

 



extern int fgetpos (FILE *@<__restrict@|  @> __stream, fpos_t *@<__restrict@|  @> __pos);
 



extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 814 "/usr/include/stdio.h" 3

@<__END_NAMESPACE_STD@| @>








@<__BEGIN_NAMESPACE_STD@| @>
 
extern void clearerr (FILE *__stream) @<__THROW@| @>;
 
extern int feof (FILE *__stream) @<__THROW@| @> @<__wur@| @>;
 
extern int ferror (FILE *__stream) @<__THROW@| @> @<__wur@| @>;
@<__END_NAMESPACE_STD@| @>


 
extern void clearerr_unlocked (FILE *__stream) @<__THROW@| @>;
extern int feof_unlocked (FILE *__stream) @<__THROW@| @> @<__wur@| @>;
extern int ferror_unlocked (FILE *__stream) @<__THROW@| @> @<__wur@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern void perror (const char *__s);
@<__END_NAMESPACE_STD@| @>

 



# 1 "/usr/include/bits/sys_errlist.h" 1 3
 





















 


extern int sys_nerr;
extern const char *const sys_errlist[];





# 853 "/usr/include/stdio.h" 2 3




 
extern int fileno (FILE *__stream) @<__THROW@| @> @<__wur@| @>;



 
extern int fileno_unlocked (FILE *__stream) @<__THROW@| @> @<__wur@| @>;





 



extern FILE *popen (const char *__command, const char *__modes) @<__wur@| @>;

 



extern int pclose (FILE *__stream);




 
extern char *ctermid (char *__s) @<__THROW@| @>;









# 906 "/usr/include/stdio.h" 3




 

 
extern void flockfile (FILE *__stream) @<__THROW@| @>;

 

extern int ftrylockfile (FILE *__stream) @<__THROW@| @> @<__wur@| @>;

 
extern void funlockfile (FILE *__stream) @<__THROW@| @>;










 











@<__END_DECLS@| @>




# 1 "test.c" 2

