# 1 "dfa.c"
 

 

























 

# 1 "flexdef.h" 1
 

 

























 

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



# 1 "/usr/include/stddef.h" 1 3






 


# 19 "/usr/include/stddef.h" 3



 


 





 


# 61 "/usr/include/stddef.h" 3


 





 


















 





 

 

# 131 "/usr/include/stddef.h" 3


 

 


































typedef @<__SIZE_TYPE__@|long unsigned int@> size_t;






















 




 

# 271 "/usr/include/stddef.h" 3


# 283 "/usr/include/stddef.h" 3


 

 

# 317 "/usr/include/stddef.h" 3




 





















# 33 "/usr/include/stdio.h" 2 3


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



@<__STD_TYPE@|typedef @> @<__DEV_T_TYPE@|__u_quad_t  @> __dev_t;	 
@<__STD_TYPE@|typedef @> @<__UID_T_TYPE@|unsigned int  @> __uid_t;	 
@<__STD_TYPE@|typedef @> @<__GID_T_TYPE@|unsigned int  @> __gid_t;	 
@<__STD_TYPE@|typedef @> @<__INO_T_TYPE@|unsigned long int   @> __ino_t;	 
@<__STD_TYPE@|typedef @> @<__INO64_T_TYPE@|__u_quad_t  @> __ino64_t;	 
@<__STD_TYPE@|typedef @> @<__MODE_T_TYPE@|unsigned int  @> __mode_t;	 
@<__STD_TYPE@|typedef @> @<__NLINK_T_TYPE@|unsigned int  @> __nlink_t;	 
@<__STD_TYPE@|typedef @> @<__OFF_T_TYPE@|long int   @> __off_t;	 
@<__STD_TYPE@|typedef @> @<__OFF64_T_TYPE@|__quad_t  @> __off64_t;	 
@<__STD_TYPE@|typedef @> @<__PID_T_TYPE@|int  @> __pid_t;	 
@<__STD_TYPE@|typedef @> @<__FSID_T_TYPE@|struct { int __val[2]; } @> __fsid_t;	 
@<__STD_TYPE@|typedef @> @<__CLOCK_T_TYPE@|long int   @> __clock_t;	 
@<__STD_TYPE@|typedef @> @<__RLIM_T_TYPE@|unsigned long int   @> __rlim_t;	 
@<__STD_TYPE@|typedef @> @<__RLIM64_T_TYPE@|__u_quad_t  @> __rlim64_t;	 
@<__STD_TYPE@|typedef @> @<__ID_T_TYPE@|unsigned int  @> __id_t;		 
@<__STD_TYPE@|typedef @> @<__TIME_T_TYPE@|long int   @> __time_t;	 
@<__STD_TYPE@|typedef @> @<__USECONDS_T_TYPE@|unsigned int  @> __useconds_t;  
@<__STD_TYPE@|typedef @> @<__SUSECONDS_T_TYPE@|long int   @> __suseconds_t;  

@<__STD_TYPE@|typedef @> @<__DADDR_T_TYPE@|int  @> __daddr_t;	 
@<__STD_TYPE@|typedef @> @<__KEY_T_TYPE@|int  @> __key_t;	 

 
@<__STD_TYPE@|typedef @> @<__CLOCKID_T_TYPE@|int  @> __clockid_t;

 
@<__STD_TYPE@|typedef @> @<__TIMER_T_TYPE@|void * @> __timer_t;

 
@<__STD_TYPE@|typedef @> @<__BLKSIZE_T_TYPE@|long int   @> __blksize_t;

 

 
@<__STD_TYPE@|typedef @> @<__BLKCNT_T_TYPE@|long int   @> __blkcnt_t;
@<__STD_TYPE@|typedef @> @<__BLKCNT64_T_TYPE@|__quad_t  @> __blkcnt64_t;

 
@<__STD_TYPE@|typedef @> @<__FSBLKCNT_T_TYPE@|unsigned long int   @> __fsblkcnt_t;
@<__STD_TYPE@|typedef @> @<__FSBLKCNT64_T_TYPE@|__u_quad_t  @> __fsblkcnt64_t;

 
@<__STD_TYPE@|typedef @> @<__FSFILCNT_T_TYPE@|unsigned long int   @> __fsfilcnt_t;
@<__STD_TYPE@|typedef @> @<__FSFILCNT64_T_TYPE@|__u_quad_t  @> __fsfilcnt64_t;

 
@<__STD_TYPE@|typedef @> @<__FSWORD_T_TYPE@|int  @> __fsword_t;

@<__STD_TYPE@|typedef @> @<__SSIZE_T_TYPE@|int  @> __ssize_t;  

 
@<__STD_TYPE@|typedef @> @<__SYSCALL_SLONG_TYPE@|long int  @> __syscall_slong_t;
 
@<__STD_TYPE@|typedef @> @<__SYSCALL_ULONG_TYPE@|unsigned long int  @> __syscall_ulong_t;

 

typedef __off64_t __loff_t;	 
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

 
@<__STD_TYPE@|typedef @> @<__SWORD_TYPE@|int @> __intptr_t;

 
@<__STD_TYPE@|typedef @> @<__U32_TYPE@|unsigned int @> __socklen_t;





# 35 "/usr/include/stdio.h" 2 3








 
struct _IO_FILE;

@<__BEGIN_NAMESPACE_STD@| @>
 
typedef struct _IO_FILE FILE;
@<__END_NAMESPACE_STD@| @>



@<__USING_NAMESPACE_STD(FILE)@| @>









 
typedef struct _IO_FILE __FILE;









# 1 "/usr/include/libio.h" 1 3
 






























# 1 "/usr/include/_G_config.h" 1 3
 





 







# 1 "/usr/include/stddef.h" 1 3






 


# 19 "/usr/include/stddef.h" 3



 


 





 


# 61 "/usr/include/stddef.h" 3


 





 


















 





 

 

# 131 "/usr/include/stddef.h" 3


 

 


# 188 "/usr/include/stddef.h" 3





 




 

# 271 "/usr/include/stddef.h" 3


# 283 "/usr/include/stddef.h" 3


 

 

# 317 "/usr/include/stddef.h" 3




 





















# 15 "/usr/include/_G_config.h" 2 3





# 1 "/usr/include/wchar.h" 1 3
 
















 











# 47 "/usr/include/wchar.h" 3




# 1 "/usr/include/stddef.h" 1 3






 


# 19 "/usr/include/stddef.h" 3



 


 





 


# 61 "/usr/include/stddef.h" 3


 





 


















 





 

 

# 131 "/usr/include/stddef.h" 3


 

 

# 190 "/usr/include/stddef.h" 3



 




 

# 271 "/usr/include/stddef.h" 3









typedef @<__WINT_TYPE__@|unsigned int @> wint_t;




 

 

# 317 "/usr/include/stddef.h" 3




 





















# 51 "/usr/include/wchar.h" 2 3


 









 









 







 
typedef struct
{
  int __count;
  union
  {

    @<__WINT_TYPE__@|unsigned int @> __wch;



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

 














 

# 1 "/usr/include/stdarg.h" 1 3
 
































































 






typedef void *__gnuc_va_list;



 

# 122 "/usr/include/stdarg.h" 3




















# 209 "/usr/include/stdarg.h" 3




# 50 "/usr/include/libio.h" 2 3















# 76 "/usr/include/libio.h" 3











 





































 



















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
			@<_IO_va_list@|__gnuc_va_list @>, int *@<__restrict@|  @>);
extern int _IO_vfprintf (_IO_FILE *@<__restrict@|  @>, const char *@<__restrict@|  @>,
			 @<_IO_va_list@|__gnuc_va_list @>);
extern @<_IO_ssize_t@|__ssize_t @> _IO_padn (_IO_FILE *, int, @<_IO_ssize_t@|__ssize_t @>);
extern @<_IO_size_t@|size_t @> _IO_sgetn (_IO_FILE *, void *, @<_IO_size_t@|size_t @>);

extern @<_IO_off64_t@|__off64_t @> _IO_seekoff (_IO_FILE *, @<_IO_off64_t@|__off64_t @>, int, int);
extern @<_IO_off64_t@|__off64_t @> _IO_seekpos (_IO_FILE *, @<_IO_off64_t@|__off64_t @>, int);

extern void _IO_free_backup_area (_IO_FILE *) @<__THROW@| @>;

# 520 "/usr/include/libio.h" 3











# 74 "/usr/include/stdio.h" 2 3









# 1 "/usr/include/stdarg.h" 1 3
 
































































 










 



 

















void va_end (__gnuc_va_list);		 


 








 







 























 
 













# 175 "/usr/include/stdarg.h" 3


 




 

 

 

typedef __gnuc_va_list va_list;
























# 83 "/usr/include/stdio.h" 2 3







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

 



extern FILE *fopen (const char *__filename,
		    const char *__modes) @<__wur@| @>;
 



extern FILE *freopen (const char *__filename,
		      const char *__modes,
		      FILE *__stream) @<__wur@| @>;
# 294 "/usr/include/stdio.h" 3

@<__END_NAMESPACE_STD@| @>









 
extern FILE *fdopen (int __fd, const char *__modes) @<__THROW@| @> @<__wur@| @>;











 
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  @<__THROW@| @> @<__wur@| @>;

 


extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) @<__THROW@| @> @<__wur@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 

extern void setbuf (FILE *__stream, char *__buf) @<__THROW@| @>;
 


extern int setvbuf (FILE *__stream, char *__buf,
		    int __modes, size_t __n) @<__THROW@| @>;
@<__END_NAMESPACE_STD@| @>


 

extern void setbuffer (FILE *__stream, char *__buf,
		       size_t __size) @<__THROW@| @>;

 
extern void setlinebuf (FILE *__stream) @<__THROW@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fprintf (FILE *__stream,
		    const char *__format, ...);
 



extern int printf (const char *__format, ...);
 
extern int sprintf (char *__s,
		    const char *__format, ...) @<__THROWNL@| @>;

 



extern int vfprintf (FILE *__s, const char *__format,
		     @<_G_va_list@|__gnuc_va_list @> __arg);
 



extern int vprintf (const char *__format, @<_G_va_list@|__gnuc_va_list @> __arg);
 
extern int vsprintf (char *__s, const char *__format,
		     @<_G_va_list@|__gnuc_va_list @> __arg) @<__THROWNL@| @>;
@<__END_NAMESPACE_STD@| @>


@<__BEGIN_NAMESPACE_C99@| @>
 
extern int snprintf (char *__s, size_t __maxlen,
		     const char *__format, ...)
     @<__THROWNL@| @> @<__attribute__ ((__format__ (__printf__, 3, 4)))@| @>;

extern int vsnprintf (char *__s, size_t __maxlen,
		      const char *__format, @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__THROWNL@| @> @<__attribute__ ((__format__ (__printf__, 3, 0)))@| @>;
@<__END_NAMESPACE_C99@| @>


# 408 "/usr/include/stdio.h" 3



 
extern int vdprintf (int __fd, const char *__fmt,
		     @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__attribute__ ((__format__ (__printf__, 2, 0)))@| @>;
extern int dprintf (int __fd, const char *__fmt, ...)
     @<__attribute__ ((__format__ (__printf__, 2, 3)))@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fscanf (FILE *__stream,
		   const char *__format, ...) @<__wur@| @>;
 



extern int scanf (const char *__format, ...) @<__wur@| @>;
 
 




# 450 "/usr/include/stdio.h" 3

extern int __isoc99_fscanf (FILE *__stream,
			    const char *__format, ...) @<__wur@| @>;
extern int __isoc99_scanf (const char *__format, ...) @<__wur@| @>;
extern int __isoc99_sscanf (const char *__s,
			    const char *__s, const char *__format,
		    @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__attribute__ ((__format__ (__scanf__, 2, 0)))@| @> @<__wur@| @>;

 



extern int vscanf (const char *__format, @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__attribute__ ((__format__ (__scanf__, 1, 0)))@| @> @<__wur@| @>;

 
extern int vsscanf (const char *__s,
		    const char *__format, @<_G_va_list@|__gnuc_va_list @> __arg)
     @<__THROW@| @> @<__attribute__ ((__format__ (__scanf__, 2, 0)))@| @>;




# 491 "/usr/include/stdio.h" 3

extern int __isoc99_vfscanf (FILE *__s,
			     const char *__format,
			     @<_G_va_list@|__gnuc_va_list @> __arg) @<__wur@| @>;
extern int __isoc99_vscanf (const char *__format,
			    @<_G_va_list@|__gnuc_va_list @> __arg) @<__wur@| @>;
extern int __isoc99_vsscanf (const char *__s,
			     const char *__format,
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
 



extern char *fgets (char *__s, int __n, FILE *__stream)
     @<__wur@| @>;



 










extern char *gets (char *__s) @<__wur@| @> @<__attribute_deprecated__@| @>;

@<__END_NAMESPACE_STD@| @>

# 635 "/usr/include/stdio.h" 3




 









extern @<_IO_ssize_t@|__ssize_t @> __getdelim (char **__lineptr,
			       size_t *__n, int __delimiter,
			       FILE *__stream) @<__wur@| @>;
extern @<_IO_ssize_t@|__ssize_t @> getdelim (char **__lineptr,
			     size_t *__n, int __delimiter,
			     FILE *__stream) @<__wur@| @>;

 





extern @<_IO_ssize_t@|__ssize_t @> getline (char **__lineptr,
			    size_t *__n,
			    FILE *__stream) @<__wur@| @>;



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fputs (const char *__s, FILE *__stream);

 



extern int puts (const char *__s);


 



extern int ungetc (int __c, FILE *__stream);


 



extern size_t fread (void *__ptr, size_t __size,
		     size_t __n, FILE *__stream) @<__wur@| @>;
 



extern size_t fwrite (const void *__ptr, size_t __size,
		      size_t __n, FILE *__s);
@<__END_NAMESPACE_STD@| @>

# 712 "/usr/include/stdio.h" 3



 





extern size_t fread_unlocked (void *__ptr, size_t __size,
			      size_t __n, FILE *__stream) @<__wur@| @>;
extern size_t fwrite_unlocked (const void *__ptr, size_t __size,
			       size_t __n, FILE *__stream);



@<__BEGIN_NAMESPACE_STD@| @>
 



extern int fseek (FILE *__stream, long int __off, int __whence);
 



extern long int ftell (FILE *__stream) @<__wur@| @>;
 



extern void rewind (FILE *__stream);
@<__END_NAMESPACE_STD@| @>

 






 



extern int fseeko (FILE *__stream, __off_t __off, int __whence);
 



extern __off_t ftello (FILE *__stream) @<__wur@| @>;
# 773 "/usr/include/stdio.h" 3



@<__BEGIN_NAMESPACE_STD@| @>

 



extern int fgetpos (FILE *__stream, fpos_t *__pos);
 



extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 798 "/usr/include/stdio.h" 3

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





# 837 "/usr/include/stdio.h" 2 3




 
extern int fileno (FILE *__stream) @<__THROW@| @> @<__wur@| @>;



 
extern int fileno_unlocked (FILE *__stream) @<__THROW@| @> @<__wur@| @>;





 



extern FILE *popen (const char *__command, const char *__modes) @<__wur@| @>;

 



extern int pclose (FILE *__stream);




 
extern char *ctermid (char *__s) @<__THROW@| @>;









# 890 "/usr/include/stdio.h" 3




 

 
extern void flockfile (FILE *__stream) @<__THROW@| @>;

 

extern int ftrylockfile (FILE *__stream) @<__THROW@| @> @<__wur@| @>;

 
extern void funlockfile (FILE *__stream) @<__THROW@| @>;










 











@<__END_DECLS@| @>




# 31 "flexdef.h" 2

# 1 "/usr/include/ctype.h" 1 3
 

















 









@<__BEGIN_DECLS@| @>


 







# 1 "/usr/include/endian.h" 1 3
 





















 











 
# 1 "/usr/include/bits/endian.h" 1 3
 






# 36 "/usr/include/endian.h" 2 3


 




















 
# 1 "/usr/include/bits/byteswap.h" 1 3
 


























# 1 "/usr/include/bits/wordsize.h" 1 3
 












# 28 "/usr/include/bits/byteswap.h" 2 3


 



 
# 1 "/usr/include/bits/byteswap-16.h" 1 3
 





















# 43 "/usr/include/bits/byteswap-16.h" 3

static @<__inline@| @> unsigned short int
__bswap_16 (unsigned short int __bsx)
{
  return @<__bswap_constant_16 (__bsx)@|((unsigned short int) (((( __bsx ) >> 8) & 0xff) | ((( __bsx ) & 0xff) << 8))) @>;
}

# 35 "/usr/include/bits/byteswap.h" 2 3


 




# 86 "/usr/include/bits/byteswap.h" 3

static @<__inline@| @> unsigned int
__bswap_32 (unsigned int __bsx)
{
  return @<__bswap_constant_32 (__bsx)@|(((( __bsx ) & 0xff000000) >> 24) | ((( __bsx ) & 0x00ff0000) >>  8) |	((( __bsx ) & 0x0000ff00) <<  8) | ((( __bsx ) & 0x000000ff) << 24)) @>;
}



# 153 "/usr/include/bits/byteswap.h" 3



# 60 "/usr/include/endian.h" 2 3




















# 97 "/usr/include/endian.h" 3




# 40 "/usr/include/ctype.h" 2 3







enum
{
  _ISupper = @<_ISbit (0)@|(( 0 ) < 8 ? ((1 << ( 0 )) << 8) : ((1 << ( 0 )) >> 8)) @>,	 
  _ISlower = @<_ISbit (1)@|(( 1 ) < 8 ? ((1 << ( 1 )) << 8) : ((1 << ( 1 )) >> 8)) @>,	 
  _ISalpha = @<_ISbit (2)@|(( 2 ) < 8 ? ((1 << ( 2 )) << 8) : ((1 << ( 2 )) >> 8)) @>,	 
  _ISdigit = @<_ISbit (3)@|(( 3 ) < 8 ? ((1 << ( 3 )) << 8) : ((1 << ( 3 )) >> 8)) @>,	 
  _ISxdigit = @<_ISbit (4)@|(( 4 ) < 8 ? ((1 << ( 4 )) << 8) : ((1 << ( 4 )) >> 8)) @>,	 
  _ISspace = @<_ISbit (5)@|(( 5 ) < 8 ? ((1 << ( 5 )) << 8) : ((1 << ( 5 )) >> 8)) @>,	 
  _ISprint = @<_ISbit (6)@|(( 6 ) < 8 ? ((1 << ( 6 )) << 8) : ((1 << ( 6 )) >> 8)) @>,	 
  _ISgraph = @<_ISbit (7)@|(( 7 ) < 8 ? ((1 << ( 7 )) << 8) : ((1 << ( 7 )) >> 8)) @>,	 
  _ISblank = @<_ISbit (8)@|(( 8 ) < 8 ? ((1 << ( 8 )) << 8) : ((1 << ( 8 )) >> 8)) @>,	 
  _IScntrl = @<_ISbit (9)@|(( 9 ) < 8 ? ((1 << ( 9 )) << 8) : ((1 << ( 9 )) >> 8)) @>,	 
  _ISpunct = @<_ISbit (10)@|(( 10 ) < 8 ? ((1 << ( 10 )) << 8) : ((1 << ( 10 )) >> 8)) @>,	 
  _ISalnum = @<_ISbit (11)@|(( 11 ) < 8 ? ((1 << ( 11 )) << 8) : ((1 << ( 11 )) >> 8)) @>	 
};


 















extern const unsigned short int **__ctype_b_loc (void)
     @<__THROW@| @> @<__attribute__ ((__const__))@| @>;
extern const __int32_t **__ctype_tolower_loc (void)
     @<__THROW@| @> @<__attribute__ ((__const__))@| @>;
extern const __int32_t **__ctype_toupper_loc (void)
     @<__THROW@| @> @<__attribute__ ((__const__))@| @>;



















@<__BEGIN_NAMESPACE_STD@| @>

 



@<__exctype (isalnum)@|extern int  isalnum  (int)   @>;
@<__exctype (isalpha)@|extern int  isalpha  (int)   @>;
@<__exctype (iscntrl)@|extern int  iscntrl  (int)   @>;
@<__exctype (isdigit)@|extern int  isdigit  (int)   @>;
@<__exctype (islower)@|extern int  islower  (int)   @>;
@<__exctype (isgraph)@|extern int  isgraph  (int)   @>;
@<__exctype (isprint)@|extern int  isprint  (int)   @>;
@<__exctype (ispunct)@|extern int  ispunct  (int)   @>;
@<__exctype (isspace)@|extern int  isspace  (int)   @>;
@<__exctype (isupper)@|extern int  isupper  (int)   @>;
@<__exctype (isxdigit)@|extern int  isxdigit  (int)   @>;


 
extern int tolower (int __c) @<__THROW@| @>;

 
extern int toupper (int __c) @<__THROW@| @>;

@<__END_NAMESPACE_STD@| @>


 

@<__BEGIN_NAMESPACE_C99@| @>

@<__exctype (isblank)@|extern int  isblank  (int)   @>;

@<__END_NAMESPACE_C99@| @>









 

extern int isascii (int __c) @<__THROW@| @>;

 

extern int toascii (int __c) @<__THROW@| @>;

 

@<__exctype (_toupper)@|extern int  _toupper  (int)   @>;
@<__exctype (_tolower)@|extern int  _tolower  (int)   @>;


 

# 180 "/usr/include/ctype.h" 3


# 197 "/usr/include/ctype.h" 3

















# 226 "/usr/include/ctype.h" 3



















 










 

# 1 "/usr/include/xlocale.h" 1 3
 





















 



typedef struct __locale_struct
{
   
  struct __locale_data *__locales[13];  

   
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

   
  const char *__names[13];
} *__locale_t;

 
typedef __locale_t locale_t;


# 258 "/usr/include/ctype.h" 2 3


 







 



@<__exctype_l (isalnum_l)@|extern int  isalnum_l  (int, __locale_t)   @>;
@<__exctype_l (isalpha_l)@|extern int  isalpha_l  (int, __locale_t)   @>;
@<__exctype_l (iscntrl_l)@|extern int  iscntrl_l  (int, __locale_t)   @>;
@<__exctype_l (isdigit_l)@|extern int  isdigit_l  (int, __locale_t)   @>;
@<__exctype_l (islower_l)@|extern int  islower_l  (int, __locale_t)   @>;
@<__exctype_l (isgraph_l)@|extern int  isgraph_l  (int, __locale_t)   @>;
@<__exctype_l (isprint_l)@|extern int  isprint_l  (int, __locale_t)   @>;
@<__exctype_l (ispunct_l)@|extern int  ispunct_l  (int, __locale_t)   @>;
@<__exctype_l (isspace_l)@|extern int  isspace_l  (int, __locale_t)   @>;
@<__exctype_l (isupper_l)@|extern int  isupper_l  (int, __locale_t)   @>;
@<__exctype_l (isxdigit_l)@|extern int  isxdigit_l  (int, __locale_t)   @>;

@<__exctype_l (isblank_l)@|extern int  isblank_l  (int, __locale_t)   @>;


 
extern int __tolower_l (int __c, __locale_t __l) @<__THROW@| @>;
extern int tolower_l (int __c, __locale_t __l) @<__THROW@| @>;

 
extern int __toupper_l (int __c, __locale_t __l) @<__THROW@| @>;
extern int toupper_l (int __c, __locale_t __l) @<__THROW@| @>;






















































@<__END_DECLS@| @>


# 32 "flexdef.h" 2


 



 






















 













 









 





 


 




 


 







 






 







 







 


 




 



 












 














 





 



 











 







 







 






 





 





 





 





 






 





 




 




 





 

 





struct hash_entry
	{
	struct hash_entry *prev, *next;
	char *name;
	char *str_val;
	int int_val;
	} ;

typedef struct hash_entry **hash_table;





extern struct hash_entry *ndtbl[@<NAME_TABLE_HASH_SIZE@|101 @>]; 
extern struct hash_entry *sctbl[@<START_COND_HASH_SIZE@|101 @>];
extern struct hash_entry *ccltab[@<CCL_HASH_SIZE@|101 @>];


 








































extern int printstats, syntaxerror, eofseen, ddebug, trace, nowarn, spprdflt;
extern int interactive, caseins, lex_compat, useecs, fulltbl, usemecs;
extern int fullspd, gen_line_dirs, performance_report, backing_up_report;
extern int C_plus_plus, long_align, use_read, yytext_is_array, csize;
extern int yymore_used, reject, real_reject, continued_action;




extern int yymore_really_used, reject_really_used;


 
























extern int datapos, dataline, linenum;
extern FILE *skelfile, *yyin, *backing_up_file;
extern char *skel[];
extern int skel_ind;
extern char *infilename;
extern char **input_files;
extern int num_input_files;
extern char *program_name;

extern char *action_array;
extern int action_size;
extern int defs1_offset, prolog_offset, action_offset, action_index;


 







extern int onestate[@<ONE_STACK_SIZE@|500 @>], onesym[@<ONE_STACK_SIZE@|500 @>];
extern int onenext[@<ONE_STACK_SIZE@|500 @>], onedef[@<ONE_STACK_SIZE@|500 @>], onesp;


 




























extern int current_mns, num_rules, num_eof_rules, default_rule;
extern int current_max_rules, lastnfa;
extern int *firstst, *lastst, *finalst, *transchar, *trans1, *trans2;
extern int *accptnum, *assoc_rule, *state_type;
extern int *rule_type, *rule_linenum, *rule_useful;

 





 

extern int current_state_type;

 



 


extern int variable_trailing_context_rules;


 











extern int numtemps, numprots, protprev[@<MSP@|50 @>], protnext[@<MSP@|50 @>], prottbl[@<MSP@|50 @>];
extern int protcomst[@<MSP@|50 @>], firstprot, lastprot, protsave[@<PROT_SAVE_SIZE@|2000 @>];


 









 




extern int numecs, nextecm[@<CSIZE@|256 @> + 1], ecgroup[@<CSIZE@|256 @> + 1], nummecs;

 




extern int tecfwd[@<CSIZE@|256 @> + 1], tecbck[@<CSIZE@|256 @> + 1];


 
















extern int lastsc, current_max_scs, *scset, *scbol, *scxclu, *sceof, *actvsc;
extern char **scname;


 





























extern int current_max_dfa_size, current_max_xpairs;
extern int current_max_template_xpairs, current_max_dfas;
extern int lastdfa, *nxt, *chk, *tnxt;
extern int *base, *def, *nultrans, NUL_ec, tblend, firstfree, **dss, *dfasiz;
extern union dfaacc_union
	{
	int *dfaacc_set;
	int dfaacc_state;
	} *dfaacc;
extern int *accsiz, *dhash, numas;
extern int numsnpairs, jambase, jamstate;
extern int end_of_buffer_state;

 











extern int lastccl, current_maxccls, *cclmap, *ccllen, *cclng, cclreuse;
extern int current_max_ccl_tbl_size;
extern @<Char@|unsigned char @> *ccltbl;


 



















extern char nmstr[@<MAXLINE@|2048 @>];
extern int sectnum, nummt, hshcol, dfaeql, numeps, eps2, num_reallocs;
extern int tmpuses, totnst, peakpairs, numuniq, numdup, hshsave;
extern int num_backing_up, bol_needed;

void *allocate_array @<PROTO((int, int))@|() @>;
void *reallocate_array @<PROTO((void*, int, int))@|() @>;

void *yy_flex_alloc @<PROTO((int))@|() @>;
void *yy_flex_realloc @<PROTO((void*, int))@|() @>;
void yy_flex_free @<PROTO((void*))@|() @>;
int yy_strcmp @<PROTO(( const char *s1, const char *s2 ))@|() @>;
void yy_strcpy @<PROTO(( char *s1, const char *s2 ))@|() @>;
int yy_strlen @<PROTO(( const char *s ))@|() @>;








































 


extern int yylval;


 


 

extern void ccladd @<PROTO((int, int))@|() @>;	 
extern int cclinit @<PROTO((void))@|() @>;	 
extern void cclnegate @<PROTO((int))@|() @>;	 

 
extern void list_character_set @<PROTO((FILE*, int[]))@|() @>;


 

 
extern void increase_max_dfas @<PROTO((void))@|() @>;

extern void ntod @<PROTO((void))@|() @>;	 


 

 
extern void ccl2ecl @<PROTO((void))@|() @>;

 
extern int cre8ecs @<PROTO((int[], int[], int))@|() @>;

 
extern void mkeccl @<PROTO((Char[], int, int[], int[], int, int))@|() @>;

 
extern void mkechar @<PROTO((int, int[], int[]))@|() @>;


 

extern void make_tables @<PROTO((void))@|() @>;	 


 

extern void flexend @<PROTO((int))@|() @>;
extern void usage @<PROTO((void))@|() @>;


 

 
extern void add_action @<PROTO(( char *new_text ))@|() @>;

 
extern int all_lower @<PROTO((register char *))@|() @>;

 
extern int all_upper @<PROTO((register char *))@|() @>;

 
extern void bubble @<PROTO((int [], int))@|() @>;

 
extern void check_char @<PROTO((int c))@|() @>;

 
extern void cshell @<PROTO((Char [], int, int))@|() @>;

 
extern void dataend @<PROTO((void))@|() @>;

 
extern void flexerror @<PROTO((char[]))@|() @>;

 
extern void flexfatal @<PROTO((char[]))@|() @>;

 
extern void lerrif @<PROTO((char[], int))@|() @>;

 
extern void lerrsf @<PROTO((char[], char[]))@|() @>;

 
extern void line_directive_out @<PROTO((FILE*))@|() @>;

 


extern void mark_defs1 @<PROTO((void))@|() @>;

 
extern void mark_prolog @<PROTO((void))@|() @>;

 
extern void mk2data @<PROTO((int))@|() @>;

extern void mkdata @<PROTO((int))@|() @>;	 

 
extern int myctoi @<PROTO((char []))@|() @>;

 


extern char *readable_form @<PROTO((int))@|() @>;

 
extern void skelout @<PROTO((void))@|() @>;

 
extern void transition_struct_out @<PROTO((int, int))@|() @>;

 
extern void *yy_flex_xmalloc @<PROTO(( int ))@|() @>;

 
extern void zero_out @<PROTO((char *, int))@|() @>;


 

 
extern void add_accept @<PROTO((int, int))@|() @>;

 
extern int copysingl @<PROTO((int, int))@|() @>;

 
extern void dumpnfa @<PROTO((int))@|() @>;

 
extern void finish_rule @<PROTO((int, int, int, int))@|() @>;

 
extern int link_machines @<PROTO((int, int))@|() @>;

 


extern void mark_beginning_as_normal @<PROTO((register int))@|() @>;

 
extern int mkbranch @<PROTO((int, int))@|() @>;

extern int mkclos @<PROTO((int))@|() @>;	 
extern int mkopt @<PROTO((int))@|() @>;	 

 
extern int mkor @<PROTO((int, int))@|() @>;

 
extern int mkposcl @<PROTO((int))@|() @>;

extern int mkrep @<PROTO((int, int, int))@|() @>;	 

 
extern int mkstate @<PROTO((int))@|() @>;

extern void new_rule @<PROTO((void))@|() @>;	 


 

 
extern void format_pinpoint_message @<PROTO((char[], char[]))@|() @>;

 
extern void pinpoint_message @<PROTO((char[]))@|() @>;

 
void line_warning @<PROTO(( char[], int ))@|() @>;

 
void line_pinpoint @<PROTO(( char[], int ))@|() @>;

 
extern void format_synerr @<PROTO((char [], char[]))@|() @>;
extern void synerr @<PROTO((char []))@|() @>;	 
extern void warn @<PROTO((char []))@|() @>;	 
extern int yyparse @<PROTO((void))@|() @>;	 


 

 
extern int flexscan @<PROTO((void))@|() @>;

 
extern void set_input_file @<PROTO((char*))@|() @>;

 
extern int yywrap @<PROTO((void))@|() @>;


 

 
extern void cclinstal @<PROTO ((Char [], int))@|() @>;

 
extern int ccllookup @<PROTO((Char []))@|() @>;

extern void ndinstal @<PROTO((char[], Char[]))@|() @>;	 
 
extern void scextend @<PROTO((void))@|() @>;
extern void scinstal @<PROTO((char[], int))@|() @>;	 

 
extern int sclookup @<PROTO((char[]))@|() @>;


 

 
extern void bldtbl @<PROTO((int[], int, int, int, int))@|() @>;

extern void cmptmps @<PROTO((void))@|() @>;	 
extern void expand_nxt_chk @<PROTO((void))@|() @>;	 
extern void inittbl @<PROTO((void))@|() @>;	 
 
extern void mkdeftbl @<PROTO((void))@|() @>;

 


extern void mk1tbl @<PROTO((int, int, int, int))@|() @>;

 
extern void place_state @<PROTO((int*, int, int))@|() @>;

 
extern void stack1 @<PROTO((int, int, int, int))@|() @>;


 

extern int yylex @<PROTO((void))@|() @>;
# 31 "dfa.c" 2



 

void dump_associated_rules @<PROTO((FILE*, int))@|() @>;
void dump_transitions @<PROTO((FILE*, int[]))@|() @>;
void sympartition @<PROTO((int[], int, int[], int[]))@|() @>;
int symfollowset @<PROTO((int[], int, int, int[]))@|() @>;


 








void check_for_backing_up( ds, state )
int ds;
int state[];
	{
	if ( (reject && ! dfaacc[ds].dfaacc_set) ||
	     (! reject && ! dfaacc[ds].dfaacc_state) )
		{  
		++num_backing_up;

		if ( backing_up_report )
			{
			fprintf( backing_up_file,
				"State #%d is non-accepting -\n", ds );

			 
			dump_associated_rules( backing_up_file, ds );

			 


			dump_transitions( backing_up_file, state );

			@<putc( '\n', backing_up_file )@|_IO_putc (  '\n' ,   backing_up_file  ) @>;
			}
		}
	}


 





















void check_trailing_context( nfa_states, num_states, accset, nacc )
int *nfa_states, num_states;
int *accset;
register int nacc;
	{
	register int i, j;

	for ( i = 1; i <= num_states; ++i )
		{
		int ns = nfa_states[i];
		register int type = state_type[ns];
		register int ar = assoc_rule[ns];

		if ( type == @<STATE_NORMAL@|0x1 @> || rule_type[ar] != @<RULE_VARIABLE@|1 @> )
			{  
			}

		else if ( type == @<STATE_TRAILING_CONTEXT@|0x2 @> )
			{
			 





			for ( j = 1; j <= nacc; ++j )
				if ( accset[j] & @<YY_TRAILING_HEAD_MASK@|0x4000 @> )
					{
					line_warning(
						"dangerous trailing context",
						rule_linenum[ar] );
					return;
					}
			}
		}
	}


 






void dump_associated_rules( file, ds )
FILE *file;
int ds;
	{
	register int i, j;
	register int num_associated_rules = 0;
	int rule_set[@<MAX_ASSOC_RULES@|100 @> + 1];
	int *dset = dss[ds];
	int size = dfasiz[ds];

	for ( i = 1; i <= size; ++i )
		{
		register int rule_num = rule_linenum[assoc_rule[dset[i]]];

		for ( j = 1; j <= num_associated_rules; ++j )
			if ( rule_num == rule_set[j] )
				break;

		if ( j > num_associated_rules )
			{  
			if ( num_associated_rules < @<MAX_ASSOC_RULES@|100 @> )
				rule_set[++num_associated_rules] = rule_num;
			}
		}

	bubble( rule_set, num_associated_rules );

	fprintf( file, " associated rule line numbers:" );

	for ( i = 1; i <= num_associated_rules; ++i )
		{
		if ( i % 8 == 1 )
			@<putc( '\n', file )@|_IO_putc (  '\n' ,   file  ) @>;

		fprintf( file, "\t%d", rule_set[i] );
		}

	@<putc( '\n', file )@|_IO_putc (  '\n' ,   file  ) @>;
	}


 










void dump_transitions( file, state )
FILE *file;
int state[];
	{
	register int i, ec;
	int out_char_set[@<CSIZE@|256 @>];

	for ( i = 0; i < csize; ++i )
		{
		ec = @<abs( ecgroup[i] )@|((  ecgroup[i]  ) < 0 ? -(  ecgroup[i]  ) : (  ecgroup[i]  )) @>;
		out_char_set[i] = state[ec];
		}

	fprintf( file, " out-transitions: " );

	list_character_set( file, out_char_set );

	 
	for ( i = 0; i < csize; ++i )
		out_char_set[i] = ! out_char_set[i];

	fprintf( file, "\n jam-transitions: EOF " );

	list_character_set( file, out_char_set );

	@<putc( '\n', file )@|_IO_putc (  '\n' ,   file  ) @>;
	}


 



















int *epsclosure( t, ns_addr, accset, nacc_addr, hv_addr )
int *t, *ns_addr, accset[], *nacc_addr, *hv_addr;
	{
	register int stkpos, ns, tsp;
	int numstates = *ns_addr, nacc, hashval, transsym, nfaccnum;
	int stkend, nstate;
	static int did_stk_init = @<false@|0 @>, *stk; 

















































	if ( ! did_stk_init )
		{
		stk = @<allocate_integer_array( current_max_dfa_size )@|(int *) allocate_array(   current_max_dfa_size  , sizeof( int ) ) @>;
		did_stk_init = @<true@|1 @>;
		}

	nacc = stkend = hashval = 0;

	for ( nstate = 1; nstate <= numstates; ++nstate )
		{
		ns = t[nstate];

		 


		if ( ! @<IS_MARKED(ns)@|(trans1[ ns ] < 0) @> )
			{
			@<PUT_ON_STACK(ns)@|{ if ( ++stkend >= current_max_dfa_size ) { current_max_dfa_size += 750 ; ++num_reallocs; t = (int *) reallocate_array( (void *)   t ,   current_max_dfa_size  , sizeof( int ) ) ; stk = (int *) reallocate_array( (void *)   stk ,   current_max_dfa_size  , sizeof( int ) ) ; }  stk[stkend] =  ns ; trans1[  ns  ] = trans1[  ns  ] - 32000 ;  } @>
			@<CHECK_ACCEPT(ns)@|{ nfaccnum = accptnum[ ns ]; if ( nfaccnum != 0  ) accset[++nacc] = nfaccnum; } @>
			hashval += ns;
			}
		}

	for ( stkpos = 1; stkpos <= stkend; ++stkpos )
		{
		ns = stk[stkpos];
		transsym = transchar[ns];

		if ( transsym == @<SYM_EPSILON@|(256  + 1) @> )
			{
			tsp = trans1[ns] + @<MARKER_DIFFERENCE@|32000 @>;

			if ( tsp != @<NO_TRANSITION@|0  @> )
				{
				if ( ! @<IS_MARKED(tsp)@|(trans1[ tsp ] < 0) @> )
					@<STACK_STATE(tsp)@|{ { if ( ++stkend >= current_max_dfa_size ) { current_max_dfa_size += 750 ; ++num_reallocs; t = (int *) reallocate_array( (void *)   t ,   current_max_dfa_size  , sizeof( int ) ) ; stk = (int *) reallocate_array( (void *)   stk ,   current_max_dfa_size  , sizeof( int ) ) ; }  stk[stkend] =   tsp  ; trans1[   tsp   ] = trans1[   tsp   ] - 32000 ;  }  { nfaccnum = accptnum[  tsp  ]; if ( nfaccnum != 0  ) accset[++nacc] = nfaccnum; }  if ( nfaccnum != 0  || transchar[ tsp ] != (256  + 1)  ) { if ( ++numstates >= current_max_dfa_size ) { current_max_dfa_size += 750 ; ++num_reallocs; t = (int *) reallocate_array( (void *)   t ,   current_max_dfa_size  , sizeof( int ) ) ; stk = (int *) reallocate_array( (void *)   stk ,   current_max_dfa_size  , sizeof( int ) ) ; }  t[numstates] =   tsp  ; hashval +=   tsp  ; }  } @>

				tsp = trans2[ns];

				if ( tsp != @<NO_TRANSITION@|0  @> && ! @<IS_MARKED(tsp)@|(trans1[ tsp ] < 0) @> )
					@<STACK_STATE(tsp)@|{ { if ( ++stkend >= current_max_dfa_size ) { current_max_dfa_size += 750 ; ++num_reallocs; t = (int *) reallocate_array( (void *)   t ,   current_max_dfa_size  , sizeof( int ) ) ; stk = (int *) reallocate_array( (void *)   stk ,   current_max_dfa_size  , sizeof( int ) ) ; }  stk[stkend] =   tsp  ; trans1[   tsp   ] = trans1[   tsp   ] - 32000 ;  }  { nfaccnum = accptnum[  tsp  ]; if ( nfaccnum != 0  ) accset[++nacc] = nfaccnum; }  if ( nfaccnum != 0  || transchar[ tsp ] != (256  + 1)  ) { if ( ++numstates >= current_max_dfa_size ) { current_max_dfa_size += 750 ; ++num_reallocs; t = (int *) reallocate_array( (void *)   t ,   current_max_dfa_size  , sizeof( int ) ) ; stk = (int *) reallocate_array( (void *)   stk ,   current_max_dfa_size  , sizeof( int ) ) ; }  t[numstates] =   tsp  ; hashval +=   tsp  ; }  } @>
				}
			}
		}

	 

	for ( stkpos = 1; stkpos <= stkend; ++stkpos )
		{
		if ( @<IS_MARKED(stk[stkpos])@|(trans1[ stk[stkpos] ] < 0) @> )
			@<UNMARK_STATE(stk[stkpos])@|trans1[ stk[stkpos] ] = trans1[ stk[stkpos] ] + 32000 ; @>
		else
			flexfatal( "consistency check failed in epsclosure()" );
		}

	*ns_addr = numstates;
	*hv_addr = hashval;
	*nacc_addr = nacc;

	return t;
	}


 

void increase_max_dfas()
	{
	current_max_dfas += @<MAX_DFAS_INCREMENT@|1000 @>;

	++num_reallocs;

	base = @<reallocate_integer_array( base, current_max_dfas )@|(int *) reallocate_array( (void *)   base ,   current_max_dfas  , sizeof( int ) ) @>;
	def = @<reallocate_integer_array( def, current_max_dfas )@|(int *) reallocate_array( (void *)   def ,   current_max_dfas  , sizeof( int ) ) @>;
	dfasiz = @<reallocate_integer_array( dfasiz, current_max_dfas )@|(int *) reallocate_array( (void *)   dfasiz ,   current_max_dfas  , sizeof( int ) ) @>;
	accsiz = @<reallocate_integer_array( accsiz, current_max_dfas )@|(int *) reallocate_array( (void *)   accsiz ,   current_max_dfas  , sizeof( int ) ) @>;
	dhash = @<reallocate_integer_array( dhash, current_max_dfas )@|(int *) reallocate_array( (void *)   dhash ,   current_max_dfas  , sizeof( int ) ) @>;
	dss = @<reallocate_int_ptr_array( dss, current_max_dfas )@|(int **) reallocate_array( (void *)   dss ,   current_max_dfas  , sizeof( int * ) ) @>;
	dfaacc = @<reallocate_dfaacc_union( dfaacc, current_max_dfas )@|(union dfaacc_union *) reallocate_array( (void *)   dfaacc ,   current_max_dfas  , sizeof( union dfaacc_union ) ) @>;

	if ( nultrans )
		nultrans =
			@<reallocate_integer_array( nultrans, current_max_dfas )@|(int *) reallocate_array( (void *)   nultrans ,   current_max_dfas  , sizeof( int ) ) @>;
	}


 





void ntod()
	{
	int *accset, ds, nacc, newds;
	int sym, hashval, numstates, dsize;
	int num_full_table_rows;	 
	int *nset, *dset;
	int targptr, totaltrans, i, comstate, comfreq, targ;
	int *epsclosure(), snstods(), symlist[@<CSIZE@|256 @> + 1];
	int num_start_states;
	int todo_head, todo_next;

	 






	int duplist[@<CSIZE@|256 @> + 1], state[@<CSIZE@|256 @> + 1];
	int targfreq[@<CSIZE@|256 @> + 1], targstate[@<CSIZE@|256 @> + 1];

	accset = @<allocate_integer_array( num_rules + 1 )@|(int *) allocate_array(   num_rules + 1  , sizeof( int ) ) @>;
	nset = @<allocate_integer_array( current_max_dfa_size )@|(int *) allocate_array(   current_max_dfa_size  , sizeof( int ) ) @>;

	 





	todo_head = todo_next = 0;

	for ( i = 0; i <= csize; ++i )
		{
		duplist[i] = @<NIL@|0 @>;
		symlist[i] = @<false@|0 @>;
		}

	for ( i = 0; i <= num_rules; ++i )
		accset[i] = @<NIL@|0 @>;

	if ( trace )
		{
		dumpnfa( scset[1] );
		fputs( "\n\nDFA Dump:\n\n", @<stderr@|stderr @> );
		}

	inittbl();

	 




























	 


	if ( ! fullspd && ecgroup[0] == numecs )
		{
		 


		int use_NUL_table = (numecs == csize);

		if ( fulltbl && ! use_NUL_table )
			{
			 


			int power_of_two;

			for ( power_of_two = 1; power_of_two <= csize;
			      power_of_two *= 2 )
				if ( numecs == power_of_two )
					{
					use_NUL_table = @<true@|1 @>;
					break;
					}
			}

		if ( use_NUL_table )
			nultrans = @<allocate_integer_array( current_max_dfas )@|(int *) allocate_array(   current_max_dfas  , sizeof( int ) ) @>;

		 


		}


	if ( fullspd )
		{
		for ( i = 0; i <= numecs; ++i )
			state[i] = 0;
		place_state( state, 0, 0 );
		}

	else if ( fulltbl )
		{
		if ( nultrans )
			 


			num_full_table_rows = numecs;

		else
			 



			num_full_table_rows = numecs + 1;

		 


		printf( "static const %s yy_nxt[][%d] =\n    {\n",
			 
			long_align ? "long" : "short", num_full_table_rows );

		 
		for ( i = 0; i < num_full_table_rows; ++i )
			mk2data( 0 );

		 
		datapos = @<NUMDATAITEMS@|10 @>;

		 
		dataline = @<NUMDATALINES@|10 @>;
		}

	 

	num_start_states = lastsc * 2;

	for ( i = 1; i <= num_start_states; ++i )
		{
		numstates = 1;

		 



		if ( i % 2 == 1 )
			nset[numstates] = scset[(i / 2) + 1];
		else
			nset[numstates] =
				mkbranch( scbol[i / 2], scset[i / 2] );

		nset = epsclosure( nset, &numstates, accset, &nacc, &hashval );

		if ( snstods( nset, numstates, accset, nacc, hashval, &ds ) )
			{
			numas += nacc;
			totnst += numstates;
			++todo_next;

			if ( variable_trailing_context_rules && nacc > 0 )
				check_trailing_context( nset, numstates,
							accset, nacc );
			}
		}

	if ( ! fullspd )
		{
		if ( ! snstods( nset, 0, accset, 0, 0, &end_of_buffer_state ) )
			flexfatal(
				"could not create unique end-of-buffer state" );

		++numas;
		++num_start_states;
		++todo_next;
		}

	while ( todo_head < todo_next )
		{
		targptr = 0;
		totaltrans = 0;

		for ( i = 1; i <= numecs; ++i )
			state[i] = 0;

		ds = ++todo_head;

		dset = dss[ds];
		dsize = dfasiz[ds];

		if ( trace )
			fprintf( @<stderr@|stderr @>, "state # %d:\n", ds );

		sympartition( dset, dsize, symlist, duplist );

		for ( sym = 1; sym <= numecs; ++sym )
			{
			if ( symlist[sym] )
				{
				symlist[sym] = 0;

				if ( duplist[sym] == @<NIL@|0 @> )
					{
					 
					numstates = symfollowset( dset, dsize,
								sym, nset );
					nset = epsclosure( nset, &numstates,
						accset, &nacc, &hashval );

					if ( snstods( nset, numstates, accset,
						nacc, hashval, &newds ) )
						{
						totnst = totnst + numstates;
						++todo_next;
						numas += nacc;

						if (
					variable_trailing_context_rules &&
							nacc > 0 )
							check_trailing_context(
								nset, numstates,
								accset, nacc );
						}

					state[sym] = newds;

					if ( trace )
						fprintf( @<stderr@|stderr @>, "\t%d\t%d\n",
							sym, newds );

					targfreq[++targptr] = 1;
					targstate[targptr] = newds;
					++numuniq;
					}

				else
					{
					 



					targ = state[duplist[sym]];
					state[sym] = targ;

					if ( trace )
						fprintf( @<stderr@|stderr @>, "\t%d\t%d\n",
							sym, targ );

					 



					i = 0;
					while ( targstate[++i] != targ )
						;

					++targfreq[i];
					++numdup;
					}

				++totaltrans;
				duplist[sym] = @<NIL@|0 @>;
				}
			}

		numsnpairs = numsnpairs + totaltrans;

		if ( caseins && ! useecs )
			{
			register int j;

			for ( i = 'A', j = 'a'; i <= 'Z'; ++i, ++j )
				state[i] = state[j];
			}

		if ( ds > num_start_states )
			check_for_backing_up( ds, state );

		if ( nultrans )
			{
			nultrans[ds] = state[NUL_ec];
			state[NUL_ec] = 0;	 
			}

		if ( fulltbl )
			{
			 
			if ( ds == end_of_buffer_state )
				mk2data( -end_of_buffer_state );
			else
				mk2data( end_of_buffer_state );

			for ( i = 1; i < num_full_table_rows; ++i )
				 


				mk2data( state[i] ? state[i] : -ds );

			 
			datapos = @<NUMDATAITEMS@|10 @>;

			 
			dataline = @<NUMDATALINES@|10 @>;
			}

		else if ( fullspd )
			place_state( state, ds, totaltrans );

		else if ( ds == end_of_buffer_state )
			 


			stack1( ds, 0, 0, @<JAMSTATE@|-32766 @> );

		else  
			{
			 



			comfreq = 0;
			comstate = 0;

			for ( i = 1; i <= targptr; ++i )
				if ( targfreq[i] > comfreq )
					{
					comfreq = targfreq[i];
					comstate = targstate[i];
					}

			bldtbl( state, ds, totaltrans, comstate, comfreq );
			}
		}

	if ( fulltbl )
		dataend();

	else if ( ! fullspd )
		{
		cmptmps();   

		 


		while ( onesp > 0 )
			{
			mk1tbl( onestate[onesp], onesym[onesp], onenext[onesp],
			onedef[onesp] );
			--onesp;
			}

		mkdeftbl();
		}
	}


 









int snstods( sns, numstates, accset, nacc, hashval, newds_addr )
int sns[], numstates, accset[], nacc, hashval, *newds_addr;
	{
	int didsort = 0;
	register int i, j;
	int newds, *oldsns;

	for ( i = 1; i <= lastdfa; ++i )
		if ( hashval == dhash[i] )
			{
			if ( numstates == dfasiz[i] )
				{
				oldsns = dss[i];

				if ( ! didsort )
					{
					 




					bubble( sns, numstates );
					didsort = 1;
					}

				for ( j = 1; j <= numstates; ++j )
					if ( sns[j] != oldsns[j] )
						break;

				if ( j > numstates )
					{
					++dfaeql;
					*newds_addr = i;
					return 0;
					}

				++hshcol;
				}

			else
				++hshsave;
			}

	 

	if ( ++lastdfa >= current_max_dfas )
		increase_max_dfas();

	newds = lastdfa;

	dss[newds] = @<allocate_integer_array( numstates + 1 )@|(int *) allocate_array(   numstates + 1  , sizeof( int ) ) @>;

	 



	if ( ! didsort )
		bubble( sns, numstates );

	for ( i = 1; i <= numstates; ++i )
		dss[newds][i] = sns[i];

	dfasiz[newds] = numstates;
	dhash[newds] = hashval;

	if ( nacc == 0 )
		{
		if ( reject )
			dfaacc[newds].dfaacc_set = (int *) 0;
		else
			dfaacc[newds].dfaacc_state = 0;

		accsiz[newds] = 0;
		}

	else if ( reject )
		{
		 





		bubble( accset, nacc );

		dfaacc[newds].dfaacc_set = @<allocate_integer_array( nacc + 1 )@|(int *) allocate_array(   nacc + 1  , sizeof( int ) ) @>;

		 
		for ( i = 1; i <= nacc; ++i )
			{
			dfaacc[newds].dfaacc_set[i] = accset[i];

			if ( accset[i] <= num_rules )
				 


				rule_useful[accset[i]] = @<true@|1 @>;
			}

		accsiz[newds] = nacc;
		}

	else
		{
		 


		j = num_rules + 1;

		for ( i = 1; i <= nacc; ++i )
			if ( accset[i] < j )
				j = accset[i];

		dfaacc[newds].dfaacc_state = j;

		if ( j <= num_rules )
			rule_useful[j] = @<true@|1 @>;
		}

	*newds_addr = newds;

	return 1;
	}


 






int symfollowset( ds, dsize, transsym, nset )
int ds[], dsize, transsym, nset[];
	{
	int ns, tsp, sym, i, j, lenccl, ch, numstates, ccllist;

	numstates = 0;

	for ( i = 1; i <= dsize; ++i )
		{  
		ns = ds[i];
		sym = transchar[ns];
		tsp = trans1[ns];

		if ( sym < 0 )
			{  
			sym = -sym;
			ccllist = cclmap[sym];
			lenccl = ccllen[sym];

			if ( cclng[sym] )
				{
				for ( j = 0; j < lenccl; ++j )
					{
					 


					ch = ccltbl[ccllist + j];

					if ( ch == 0 )
						ch = NUL_ec;

					if ( ch > transsym )
						 


						break;

					else if ( ch == transsym )
						  goto bottom;
					}

				 
				nset[++numstates] = tsp;
				}

			else
				for ( j = 0; j < lenccl; ++j )
					{
					ch = ccltbl[ccllist + j];

					if ( ch == 0 )
						ch = NUL_ec;

					if ( ch > transsym )
						break;
					else if ( ch == transsym )
						{
						nset[++numstates] = tsp;
						break;
						}
					}
			}

		else if ( sym >= 'A' && sym <= 'Z' && caseins )
			flexfatal( "consistency check failed in symfollowset" );

		else if ( sym == @<SYM_EPSILON@|(256  + 1) @> )
			{  
			}

		else if ( @<abs( ecgroup[sym] )@|((  ecgroup[sym]  ) < 0 ? -(  ecgroup[sym]  ) : (  ecgroup[sym]  )) @> == transsym )
			nset[++numstates] = tsp;

		bottom: ;
		}

	return numstates;
	}


 






void sympartition( ds, numstates, symlist, duplist )
int ds[], numstates;
int symlist[], duplist[];
	{
	int tch, i, j, k, ns, dupfwd[@<CSIZE@|256 @> + 1], lenccl, cclp, ich;

	 




	for ( i = 1; i <= numecs; ++i )
		{  
		duplist[i] = i - 1;
		dupfwd[i] = i + 1;
		}

	duplist[1] = @<NIL@|0 @>;
	dupfwd[numecs] = @<NIL@|0 @>;

	for ( i = 1; i <= numstates; ++i )
		{
		ns = ds[i];
		tch = transchar[ns];

		if ( tch != @<SYM_EPSILON@|(256  + 1) @> )
			{
			if ( tch < -lastccl || tch >= csize )
				{
				flexfatal(
			"bad transition character detected in sympartition()" );
				}

			if ( tch >= 0 )
				{  
				int ec = ecgroup[tch];

				mkechar( ec, dupfwd, duplist );
				symlist[ec] = 1;
				}

			else
				{  
				tch = -tch;

				lenccl = ccllen[tch];
				cclp = cclmap[tch];
				mkeccl( ccltbl + cclp, lenccl, dupfwd,
					duplist, numecs, NUL_ec );

				if ( cclng[tch] )
					{
					j = 0;

					for ( k = 0; k < lenccl; ++k )
						{
						ich = ccltbl[cclp + k];

						if ( ich == 0 )
							ich = NUL_ec;

						for ( ++j; j < ich; ++j )
							symlist[j] = 1;
						}

					for ( ++j; j <= numecs; ++j )
						symlist[j] = 1;
					}

				else
					for ( k = 0; k < lenccl; ++k )
						{
						ich = ccltbl[cclp + k];

						if ( ich == 0 )
							ich = NUL_ec;

						symlist[ich] = 1;
						}
				}
			}
		}
	}
