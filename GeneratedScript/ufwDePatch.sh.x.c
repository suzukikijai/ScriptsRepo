#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f ufwDePatch.sh 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[7]))
	"\215\127\332\325\007\155\353\366\040\273\054\235\126\036\237\131"
	"\020\221\202\324\307\256\105\135\254\033\256\025\357\326\373\005"
	"\205\017\041\301\204\230\211\221\052\103\101\203\001\113\225\052"
	"\363\174\376"
#define      date_z	1
#define      date	((&data[51]))
	"\204"
#define      text_z	436
#define      text	((&data[119]))
	"\171\267\302\162\155\113\103\354\315\114\100\340\074\130\217\200"
	"\345\347\133\273\356\311\246\153\310\300\107\014\231\344\117\023"
	"\233\021\205\010\135\310\365\052\025\065\012\121\215\232\322\163"
	"\201\056\056\160\367\324\333\277\225\042\314\057\006\033\102\242"
	"\055\307\253\057\037\322\032\043\230\000\066\353\053\234\023\300"
	"\004\031\127\352\022\137\201\024\011\115\330\143\076\066\316\020"
	"\201\076\363\050\136\276\302\163\126\317\154\243\366\332\372\247"
	"\163\132\307\343\354\227\240\342\127\122\351\027\125\036\234\270"
	"\304\353\026\163\173\367\300\103\215\244\225\163\000\272\353\206"
	"\173\201\375\102\066\360\316\261\211\277\247\326\305\327\043\176"
	"\161\031\142\103\144\062\116\347\153\356\062\063\241\017\216\145"
	"\244\234\247\037\376\021\041\154\167\070\023\006\303\134\057\156"
	"\146\147\142\224\153\135\375\071\226\065\172\371\142\222\035\102"
	"\277\241\200\223\347\023\115\341\056\113\010\151\354\325\251\132"
	"\370\056\104\236\057\365\121\336\113\171\316\261\072\006\265\303"
	"\020\330\246\136\127\117\357\232\311\376\011\012\155\251\025\123"
	"\031\105\006\225\366\336\065\065\311\003\030\125\273\116\277\216"
	"\112\347\232\141\053\164\251\271\276\240\301\174\103\355\032\061"
	"\241\101\236\227\343\126\057\052\165\265\105\311\116\142\224\366"
	"\172\117\370\254\244\357\357\332\173\111\055\126\120\205\326\112"
	"\302\022\270\167\244\363\144\171\143\332\056\376\153\013\123\133"
	"\076\334\075\330\156\170\007\313\033\150\137\302\046\071\231\242"
	"\016\045\102\344\345\365\346\263\331\330\155\025\065\004\273\076"
	"\220\155\275\274\016\262\110\063\245\165\271\164\200\377\161\242"
	"\006\071\307\051\226\064\135\246\260\233\127\041\226\100\007\372"
	"\057\034\034\116\024\010\044\373\165\336\252\000\252\142\155\210"
	"\303\365\126\264\177\073\203\341\003\257\041\275\156\255\264\204"
	"\264\026\222\077\123\276\177\127\171\062\233\315\214\207\141\201"
	"\142\215\161\205\212\367\016\101\342\137\042\367\171\161\335\240"
	"\340\172\331\174\043\021\022\275\303\260\133\251\271\111\252\244"
	"\263\371\260\277\110\376\165\011\017\014\332\332\244\061\164\167"
	"\337\110\172\215\000\362\221\213\220\240\266\245\326\300\367\144"
	"\133\311\327\334\367\005\114\357\332\050\256\157\113\173\236\122"
	"\227\340\364"
#define      opts_z	1
#define      opts	((&data[583]))
	"\366"
#define      inlo_z	3
#define      inlo	((&data[584]))
	"\140\231\215"
#define      pswd_z	256
#define      pswd	((&data[643]))
	"\307\324\173\042\236\122\377\226\130\113\205\062\163\064\242\277"
	"\257\101\021\106\041\005\013\311\244\133\002\344\141\340\373\051"
	"\265\166\113\123\311\112\351\041\226\157\124\012\243\367\311\123"
	"\070\332\231\132\337\245\043\204\174\101\157\102\327\171\263\055"
	"\357\306\100\306\240\256\360\376\043\101\101\351\357\342\042\043"
	"\327\225\105\227\220\041\144\015\142\324\120\071\115\003\147\075"
	"\312\247\003\152\125\363\150\171\064\252\142\043\214\205\107\143"
	"\032\215\373\253\256\137\271\021\063\011\113\201\015\262\276\330"
	"\132\301\102\257\264\253\051\351\125\213\015\341\020\124\105\053"
	"\341\100\327\220\237\221\241\323\233\354\124\250\237\022\201\371"
	"\324\303\251\210\157\322\161\304\135\177\246\156\323\353\232\265"
	"\053\162\105\313\003\347\237\236\323\364\107\163\006\310\154\332"
	"\214\025\143\374\350\325\301\105\124\147\264\050\123\117\335\177"
	"\301\043\113\304\012\352\143\336\336\252\121\345\163\275\277\377"
	"\323\043\374\273\370\275\001\115\044\266\165\170\005\122\367\306"
	"\166\102\212\200\054\355\136\013\230\257\360\013\155\260\013\101"
	"\323\007\374\314\305\376\031\351\264\217\142\271\342\131\177\130"
	"\233\012\330\310\370\067\324\220\347\304\234\124\165\250\226\110"
	"\260\222\025\165\221\057\136\105\276\300\376\240\032\176\370\266"
	"\211\321\177\201\010\123\022\357\001\046\150\142\006"
#define      xecc_z	15
#define      xecc	((&data[906]))
	"\332\327\117\320\233\106\354\045\203\100\202\004\021\350\357\021"
	"\042\017\243"
#define      shll_z	10
#define      shll	((&data[925]))
	"\267\150\021\332\065\105\174\317\305\256\345\237\031\301"
#define      lsto_z	1
#define      lsto	((&data[937]))
	"\360"
#define      tst1_z	22
#define      tst1	((&data[939]))
	"\371\341\144\171\112\365\257\032\020\154\040\376\374\374\034\126"
	"\046\063\226\133\046\037\007\243\104"
#define      msg2_z	19
#define      msg2	((&data[966]))
	"\240\355\061\254\112\121\253\026\372\105\114\344\144\056\265\164"
	"\266\073\141\073\240\106\003\363\225"
#define      chk1_z	22
#define      chk1	((&data[992]))
	"\146\276\023\210\260\104\232\363\132\157\070\022\257\340\032\246"
	"\072\261\275\254\320\227\345\203\371\224\267\330"
#define      rlax_z	1
#define      rlax	((&data[1016]))
	"\107"
#define      tst2_z	19
#define      tst2	((&data[1017]))
	"\045\144\267\360\311\143\317\035\210\322\107\061\315\307\377\064"
	"\021\356\077"
#define      chk2_z	19
#define      chk2	((&data[1038]))
	"\362\206\121\211\317\100\066\127\231\022\301\265\316\005\350\344"
	"\006\350\034\035\034\360"/* End of data[] */;
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
