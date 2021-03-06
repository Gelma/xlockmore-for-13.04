/* config.h.  Generated from config.h.in by configure.  */
/*-
 * config.h.in --- xlockmore
 *
 *  The best way to set these parameters is by running the included `configure'
 *  script.  That examines your system, and generates `config.h' from
 *  `config.h.in'.
 *
 *  If something goes very wrong, you can edit `config.h' directly, but beware
 *  that your changes will be lost if you ever run `configure' again.
 *
 *  At the bottom, there are a few things commented out that are not
 *  automatically detected (past "NOT AUTOMATICALLY DETECTED YET").
 *
 */

/* Define to empty if the keyword does not work.  */
#if !defined(_HPUX_SOURCE) && !defined(__cplusplus) && !defined(c_plusplus)
/* #undef const */
#endif

/* Define to empty if the keyword does not work.  */
#if !defined(__cplusplus) && !defined(c_plusplus)
/* #undef inline */
#endif

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'.  */
/* #undef GETGROUPS_T */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
/* #undef HAVE_SYS_WAIT_H */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define as the return type of signal handlers (int or void).  */
/* #undef RETSIGTYPE */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define if your <sys/time.h> declares struct tm.  */
/* #undef TM_IN_SYS_TIME */

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if gettimeofday requires two arguments.  */
#define GETTIMEOFDAY_TWO_ARGS 1

/* Define if you have the tzset function.  */
#define HAVE_TZSET 1

/* Define if you have the timelocal function.  */
#define HAVE_TIMELOCAL 1

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Define if you have the gethostname function.  */
#define HAVE_GETHOSTNAME 1

/* Define if you have the select function.  */
#define HAVE_SELECT 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the seteuid function.  */
#define HAVE_SETEUID 1

/* Define if you have the setreuid function.  */
/* #undef HAVE_SETREUID */

/* Define one of these if they exist, usleep prefered.  */
#define HAVE_USLEEP 1
/* #undef HAVE_NANOSLEEP */

/* If left undefined will default to internal Random Number Generator */
/* #undef SRAND */
/* #undef LRAND */
/* #undef MAXRAND */
#define HAVE_RAND48 1
/* #undef HAVE_RANDOM */
/* #undef HAVE_RAND */

/* Avoid delaring these if the system has already done it for us. */
#define DECLARED_GETENV 1
#define DECLARED_SRAND48 1

/* Enable use of matherr function */
#define USE_MATHERR 1

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <ndir.h> header file.  */
/* #undef HAVE_NDIR_H */

/* Define if you have the <sys/dir.h> header file.  */
/* #undef HAVE_SYS_DIR_H */

/* Define if you have the <sys/ndir.h> header file.  */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <syslog.h> header file.  */
#define HAVE_SYSLOG_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <sys/param.h> header file.  */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the shadow passwords (or elf).  */
#define HAVE_SHADOW 1

/* Define if you have the sigset_t structure.  */
/* #undef HAVE_STRUCT_SIGSET_T */

/* Define if wchar_t defined internally to C++. */
#if defined(__cplusplus) || defined(c_plusplus)
/* #undef _WCHAR_T */
#endif

/* Define if you have libesd (Enlightenment Sound Daemon) */
/* #undef HAVE_LIBESD */

/* Various system defines.  */
/* #undef SYSV */
#ifndef SVR4
/* #undef SVR4 */
#endif
#define linux 1
/* #undef SOLARIS2 */
/* #undef LESS_THAN_SOLARIS2_5 */
/* #undef SUNOS4 */
#define _POSIX_SOURCE 1
#define _BSD_SOURCE 1
#define _GNU_SOURCE 1
/* #undef AIXV3 */
/* #undef LESS_THAN_AIX3_2 */
/* #undef SUN_OGL_NO_VERTEX_MACROS */

/* Define this if your version of OpenGL has the glBindTexture() routine.
   This is the case for OpenGL 1.1, but not for OpenGL 1.0.
 */
#define HAVE_GLBINDTEXTURE 1

/* Define if you have XPM (look for it under a X11 dir).  */
#define HAVE_XPM 1

/* Define if you have c++ */
#define HAVE_CXX 1

/* Define if you have FreeType (libttf.a)  */
/* #undef HAVE_TTF */

/* Define if you have GLTT (libgltt.a)  */
/* #undef HAVE_GLTT */

/* Define if you have FreeType2 (libfreetype.a)  */
/* #undef HAVE_FREETYPE */

/* Define if you have FTGL (libftgl.a)  */
/* #undef HAVE_FTGL */

/* Define if you have GLTT AND FreeType or FTGL AND FreeType2 */
/* #undef DEF_TTFONT */

/* Define if you have XMU (Editres).  */
#define USE_XMU 1

/* Define if you have OpenGL (or Mesa).  */
#define USE_GL 1

/* Define if you have DtSaver.  */
/* #undef USE_DTSAVER */

/* Define if you have DPMS (Display Power Management Signaling).  */
#define USE_DPMS 1

/* Define if you have Xinerama  */
/* #undef USE_XINERAMA */

/* Define one of these for sounds.  */
/* #undef USE_RPLAY */
/* #undef USE_NAS */
/* #undef USE_VMSPLAY */
/* #undef DEF_PLAY */
/* #undef USE_ESOUND */
/* Define this one when using Esound */
/* #undef DEFAULT_SOUND_DIR */

/* Allows xlock to run in root window (some window managers have problems) */
#define USE_VROOT 1

/* Users can not turn off allowroot */
#define ALWAYS_ALLOW_ROOT 1

/* Paranoid administrator option (a check is also done to see if you have it) */
#define USE_SYSLOG 1

/* Multiple users ... security? */
/* #undef USE_MULTIPLE_USER */

/* Multiple root users ... security? */
/* #undef USE_MULTIPLE_ROOT */

/* Allow all in xlock group to unlock... security? */
/* #undef USE_XLOCK_GROUP */

/* Allow a window to be placed over xlock */
/* #undef USE_WINDOW_VISIBILITY */

/* Some machines may still need this (fd_set errors may be a sign) */
/* #undef USE_OLD_EVENT_LOOP */

/* This patches up old __VMS_VER < 70000000 */
/* #undef USE_VMSUTILS */

/* For personal use you may want to consider: */
/* Unfriendly paranoid admininistrator or unknown shadow passwd algorithm */
/* #undef USE_XLOCKRC */

/* For labs you may want to consider: */

/* Enable auto-logout code, minutes until auto-logout */
/* #undef USE_AUTO_LOGOUT */

/* Set default for auto-logout code, hard limit is USE_AUTO_LOGOUT */
/* #undef DEF_AUTO_LOGOUT */

/* Enable logout button, minutes until button appears */
#define USE_BUTTON_LOGOUT 10

/* Set default for logout button code, hard limit is USE_LOGOUT_BUTTON */
/* #undef DEF_BUTTON_LOGOUT */

/* Force button password window to stay up */
/* #undef USE_BUTTON_UP */

/* Enable automatic logout mode (does not come up in random mode) */
#define USE_BOMB 1

/* Disable interactive modes (useful in production environments) */
/* #undef DISABLE_INTERACTIVE */

/* Enable unstable modes */
/* #undef USE_UNSTABLE */

/* Define one of these with USE_AUTO_LOGOUT, USE_LOGOUT_BUTTON, and/or
   USE_BOMB, if using xdm */
/* #undef CLOSEDOWN_LOGOUT */
/* #undef SESSION_LOGOUT */

/* File of staff who are exempt */
#define STAFF_FILE "/etc/xlock.staff"

/* Netgroup that is exempt */
/* #undef STAFF_NETGROUP */

/* Digital Unix Enhanced Security */
/* #undef OSF1_ENH_SEC */

/* Kerberos 4 */
/* #undef HAVE_KRB4 */

/* Kerberos 5 */
/* #undef HAVE_KRB5 */

/* Define to write out Kerberos 5 credentials to credential cache */
/* #undef KRB5_WRITE_NEW_CCACHE */

/* DCE Passwording */
/* #undef DCE_PASSWD */

/* Define to use and link against PAM */
#define USE_PAM 1

/* Bad version of PAM  */
#define BAD_PAM 1

/* Good version of PAM  */
/* #undef GOOD_PAM */

/* AIX & Solaris AFS Passwording */
/* #undef AFS */

/* DEC Tru64 SIA Passwording */
/* #undef SIA */

/* SUNOS Adjunct Passwording */
/* #undef SUNOS_ADJUNCT_PASSWD */

/* USE Xmb function series */
/* #undef USE_MB */

/* XResource customization, drawback -display option may not work  */
/* #undef CUSTOMIZATION */

/* New Dynamic Linking */
/* #undef USE_MODULES */

/* reporting language customization */
/* #undef NL */
/* #undef FR */
/* #undef DE */
/* #undef JA */

/* enabling original mail icon xpm patch */
/* #undef ORIGINAL_XPM_PATCH */

/* Virtual Terminal Lock for XFree86 users  */
/* #undef USE_VTLOCK */

/* The FOLLOWING are NOT AUTOMATICALLY DETECTED YET */

/* Force NON-MESA GL using MESA includes, uncomment next line */
/* #define OPENGL_MESA_INCLUDES */

/* EXTRA SOUND STUFF if you do not have RPLAY or NAS */
/* Set sound directory in XLock.ad */
/* SUNOS 4.1.3 */
/* #define DEF_PLAY "/usr/demo/SOUND/play" */
/* IRIX 5.3 */
/* #define DEF_PLAY "/usr/sbin/sfplay" */
/* Digital Unix with Multimedia Services installed */
/* #define DEF_PLAY "/usr/bin/mme/decsound -play" */
/* LINUX and others (see etc directory) */
/* #define DEF_PLAY "/usr/local/bin/play.sh" */

/* EXTRA SYSLOG STUFF if you want to override defaults for SYSLOG */
/* You may want to set all -DSYSLOG_* to LOG_WARNING to maximize messages */
/* #define SYSLOG_FACILITY LOG_AUTH */
/* #define SYSLOG_WARNING LOG_WARNING */
/* #define SYSLOG_NOTICE LOG_NOTICE */
/* #define SYSLOG_INFO LOG_INFO */

/* #define SAFEWORD */
/* #define FX */

/* Full screen colormaps are not allowed on compliant window managers
   like FVWM, TVWM, SCWM, and DEC WINDOWS and tricks xlock, this fix does
   not work on TrueColor
 */
/* #define COMPLIANT_COLORMAP */

/* For Direct color control */
/* #define NO_RESERVE_BLACK */
/* #define NO_RESERVE_WHITE */

/* Use this program for password verification */
/* #undef PASSWD_HELPER_PROGRAM */

/* Anybody with a password can unlock, good to use with HAVE_SYSLOG_H */
/* #define GLOBAL_UNLOCK */

/* I use this for testing SunCplusplus
   may have to define HAVE_USLEEP
 */
/* #define SunCplusplus */

/* Define to use ImageMagick */
/* #undef USE_MAGICK */

/* New FTGL library */
/* #undef FTGL213 */

/* I use this when I am working on something */
/* #define UNDER_DEVELOPMENT */

/* Blank only: may be good on high use workstations where cpu usage is
   precious, i.e.  only want blank mode
 */

/* Define next line if you only want blank mode */
/* #undef BLANK_ONLY */

/* Define next line if you only want nice modes (low CPU-usage) */
/* #undef NICE_ONLY */

/* Define next line if you are debugging X */
/* #undef SYNCHRONIZE */

/* Define next line if you do not like the time in password window */
/* #undef NO_TIME */
