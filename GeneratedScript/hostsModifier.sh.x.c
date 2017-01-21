#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f hostsModifier.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\027"
#define      opts_z	1
#define      opts	((&data[1]))
	"\151"
#define      inlo_z	3
#define      inlo	((&data[2]))
	"\252\354\347"
#define      tst2_z	19
#define      tst2	((&data[8]))
	"\023\053\315\052\041\100\064\100\314\317\065\371\145\157\101\057"
	"\001\202\120\023\253\250"
#define      chk2_z	19
#define      chk2	((&data[31]))
	"\130\265\357\174\220\216\227\047\123\117\113\026\134\227\010\345"
	"\360\301\161\245\174\005\372"
#define      msg1_z	42
#define      msg1	((&data[57]))
	"\270\143\336\343\123\375\124\020\221\075\056\246\211\361\116\365"
	"\227\210\376\132\162\140\241\166\310\041\172\022\063\332\216\040"
	"\310\370\043\166\333\341\060\057\355\060\041\303\067\200\311\025"
	"\036\303\370\032\322\352\151\133"
#define      pswd_z	256
#define      pswd	((&data[126]))
	"\367\144\045\305\130\371\316\261\256\275\055\303\153\327\173\316"
	"\265\136\041\263\021\367\136\106\316\266\167\305\255\030\065\245"
	"\236\006\134\017\333\232\044\320\236\017\016\117\166\327\270\026"
	"\067\373\134\110\362\272\217\300\160\006\206\036\037\274\304\276"
	"\303\040\315\236\273\362\156\132\001\174\252\167\124\142\216\213"
	"\135\352\324\120\245\143\021\026\152\230\064\212\124\371\110\027"
	"\032\026\266\325\010\044\060\012\241\332\202\366\075\020\201\233"
	"\373\126\353\240\272\375\266\045\225\353\260\351\345\370\001\377"
	"\017\267\325\030\334\005\042\176\340\244\164\035\264\366\271\260"
	"\115\244\121\010\241\010\055\067\363\336\040\330\327\042\330\346"
	"\332\255\376\266\263\040\065\224\304\251\262\171\240\153\052\355"
	"\017\173\365\261\203\043\350\167\001\011\120\330\054\050\276\006"
	"\326\275\275\211\336\362\035\243\234\317\034\075\073\107\052\112"
	"\302\040\374\106\103\345\275\105\357\015\035\033\066\334\042\014"
	"\232\337\226\170\322\263\033\157\203\070\254\276\177\327\011\102"
	"\367\006\210\072\353\106\200\333\124\235\366\212\172\030\226\024"
	"\370\054\215\313\340\250\072\144\340\347\043\140\276\055\242\265"
	"\063\053\360\037\263\345\254\315\267\227\067\023\214\210\014\203"
	"\354\061\111\105\052\027\366\331\325\044\234\101\374\030\017\262"
	"\167\061\146\053\027\022\370\317\252\060\342\066\271\356\272\245"
	"\040\003\353\113\033\341\044\360\006\301\061\002\331\101\264\121"
	"\163\033\174"
#define      chk1_z	22
#define      chk1	((&data[446]))
	"\132\005\273\260\112\331\052\011\336\004\161\013\250\341\136\122"
	"\041\127\152\034\007\210\223\330\245"
#define      shll_z	10
#define      shll	((&data[470]))
	"\272\164\230\176\076\247\014\346\153\117\053"
#define      text_z	521
#define      text	((&data[483]))
	"\314\360\142\235\157\275\121\204\210\103\356\345\256\005\343\047"
	"\176\141\354\225\031\142\302\275\270\230\261\224\213\330\006\151"
	"\066\070\051\202\305\043\253\227\273\336\053\114\160\374\215\231"
	"\046\117\012\174\361\146\064\317\377\250\306\304\047\137\260\201"
	"\036\273\060\231\343\145\372\350\327\054\376\246\310\074\107\205"
	"\022\176\257\217\327\247\374\255\241\361\301\174\156\051\377\236"
	"\037\070\026\307\020\164\263\142\206\016\343\204\161\361\302\306"
	"\052\265\047\001\126\240\045\047\265\123\260\277\225\133\050\354"
	"\222\102\251\055\036\221\147\263\253\036\300\071\211\051\031\241"
	"\262\030\310\231\345\113\260\107\100\332\324\071\203\126\047\171"
	"\242\003\100\107\025\131\307\343\270\260\350\030\306\036\363\305"
	"\057\004\233\333\345\162\004\330\172\151\324\256\353\372\021\270"
	"\120\020\144\126\043\150\000\147\200\375\267\043\345\352\161\157"
	"\174\221\070\025\116\261\145\124\001\121\102\352\010\202\213\322"
	"\036\241\051\252\277\362\353\210\250\317\233\333\150\021\050\167"
	"\061\367\306\133\262\140\240\333\034\106\252\137\007\036\240\044"
	"\025\122\054\011\346\227\251\367\256\250\311\161\365\053\375\210"
	"\306\364\233\173\202\272\064\152\161\172\207\372\173\057\227\151"
	"\232\356\217\303\210\366\162\240\065\323\161\111\061\123\276\343"
	"\220\373\132\023\104\304\246\362\012\260\317\353\237\275\335\124"
	"\142\046\115\054\020\060\232\345\066\336\243\342\170\266\002\050"
	"\037\350\115\067\314\150\052\276\273\255\301\345\320\372\240\263"
	"\215\156\353\030\025\314\221\364\222\223\041\315\340\245\334\153"
	"\046\241\040\047\116\223\025\046\003\246\233\160\251\140\002\005"
	"\150\240\112\215\315\313\367\322\327\173\136\212\075\237\051\012"
	"\032\121\112\363\253\003\244\135\041\040\243\212\100\322\160\156"
	"\070\367\216\306\134\101\253\265\071\176\001\102\014\235\045\320"
	"\141\177\106\260\274\371\024\010\363\242\036\270\234\202\051\167"
	"\363\130\245\063\220\210\003\311\375\112\034\277\236\312\260\354"
	"\262\141\362\271\055\032\307\346\017\262\176\117\041\346\121\105"
	"\062\052\045\131\152\263\257\336\366\102\032\221\036\177\105\011"
	"\021\012\373\236\363\044\066\320\133\220\110\160\130\255\055\103"
	"\276\047\146\135\236\014\162\370\062\257\362\227\347\321\274\330"
	"\330\175\012\332\127\113\217\250\277\252\044\112\330\232\244\261"
	"\100\340\277\237\014\210\244\130\124\224\357\074\146\253\024\076"
	"\051"
#define      date_z	1
#define      date	((&data[1042]))
	"\046"
#define      tst1_z	22
#define      tst1	((&data[1046]))
	"\051\123\116\165\320\272\327\110\064\042\100\350\222\205\367\336"
	"\310\023\141\007\232\326\323\220\375"
#define      msg2_z	19
#define      msg2	((&data[1068]))
	"\366\246\120\353\115\053\000\237\131\332\062\041\200\356\244\106"
	"\167\351\001\030\335\050\371"
#define      rlax_z	1
#define      rlax	((&data[1091]))
	"\375"
#define      xecc_z	15
#define      xecc	((&data[1093]))
	"\172\254\120\371\134\327\226\043\333\042\206\333\106\113\341\051"
	"\000"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
