#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f customDetect.sh 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[1]))
	"\143\020\055\004\162\136\071\026\046\224\014\365\323\206\334\227"
	"\314\222\247\104\011\373\135"
#define      xecc_z	15
#define      xecc	((&data[23]))
	"\060\042\062\212\161\207\274\324\012\067\352\207\361\276\047\231"
	"\156\136"
#define      shll_z	8
#define      shll	((&data[41]))
	"\107\257\302\216\237\022\353\303"
#define      chk1_z	22
#define      chk1	((&data[49]))
	"\317\055\200\302\054\246\273\005\272\065\250\055\271\067\143\263"
	"\121\214\250\136\341\342\341\063\044"
#define      pswd_z	256
#define      pswd	((&data[138]))
	"\030\230\161\051\253\351\021\372\233\165\004\227\322\142\260\315"
	"\374\036\053\072\103\115\315\150\331\256\234\375\277\232\074\327"
	"\063\256\000\336\227\022\331\063\210\335\312\132\100\172\047\074"
	"\230\123\166\334\240\104\104\171\363\341\166\262\173\263\212\257"
	"\136\117\161\302\143\175\210\236\152\362\022\037\256\060\260\251"
	"\307\317\236\107\231\275\135\142\026\344\227\364\335\252\152\073"
	"\371\333\376\135\130\206\373\302\171\015\342\050\075\222\321\005"
	"\141\157\114\373\055\252\135\103\216\364\070\153\237\242\246\231"
	"\176\245\366\327\054\361\231\245\377\174\315\075\016\237\103\160"
	"\016\220\153\073\072\310\177\310\275\267\064\134\132\333\365\330"
	"\200\354\257\254\336\111\122\336\305\040\033\324\277\137\105\315"
	"\357\260\011\052\171\211\363\067\101\047\224\233\002\212\163\202"
	"\166\043\057\124\154\201\062\062\242\116\006\141\255\113\057\235"
	"\374\070\307\166\301\272\255\002\342\101\236\344\313\021\147\102"
	"\065\226\226\241\030\311\323\273\030\332\034\305\046\113\143\042"
	"\204\052\231\106\345\106\111\307\210\347\254\123\371\023\225\056"
	"\252\054\317\303\366\243\176\016\175\232\324\243\345\067\306\152"
	"\142\137\260\110\246\371\017\056\340\273\202\331\317\030\010\171"
	"\104\327\074\072\173\272\111\371\124\035\235\072\124\143\244\267"
	"\303\125\377\151\116\017\230\056\312\032\010\231\062\020\023\167"
	"\141\212\215\371\235\147\054\045\104\366\200\205\160\250\301\011"
#define      chk2_z	19
#define      chk2	((&data[411]))
	"\233\033\165\105\173\040\322\357\332\242\126\337\055\116\307\153"
	"\013\012\123\263\174\053\024\160"
#define      msg1_z	42
#define      msg1	((&data[439]))
	"\210\076\254\067\240\012\035\302\063\114\211\203\007\153\350\302"
	"\064\137\151\100\032\210\057\063\307\232\124\340\113\371\272\167"
	"\271\106\231\125\317\076\112\131\055\262\055\224\106\146\226\067"
#define      opts_z	1
#define      opts	((&data[482]))
	"\337"
#define      date_z	1
#define      date	((&data[483]))
	"\355"
#define      lsto_z	1
#define      lsto	((&data[484]))
	"\161"
#define      inlo_z	3
#define      inlo	((&data[485]))
	"\060\205\252"
#define      rlax_z	1
#define      rlax	((&data[488]))
	"\300"
#define      tst1_z	22
#define      tst1	((&data[489]))
	"\343\333\111\043\251\210\272\204\203\151\071\205\054\227\005\057"
	"\326\155\174\332\174\063\155\107\316\335"
#define      msg2_z	19
#define      msg2	((&data[516]))
	"\333\304\311\003\271\353\025\177\155\231\015\347\323\200\065\046"
	"\220\051\261\206\230\254\023\070"
#define      text_z	172
#define      text	((&data[576]))
	"\270\004\227\263\165\122\056\153\177\121\042\266\157\023\322\051"
	"\200\032\367\135\155\121\135\111\352\012\135\042\355\065\364\246"
	"\071\213\132\257\336\010\303\327\277\000\207\227\127\277\137\265"
	"\235\006\063\237\241\067\000\362\033\124\175\323\164\071\063\325"
	"\162\221\316\341\370\126\376\226\126\025\264\005\321\316\042\242"
	"\177\363\160\200\023\243\131\377\045\271\271\051\304\246\154\231"
	"\241\104\142\224\121\340\145\150\067\271\375\302\367\063\240\023"
	"\370\147\074\227\015\066\234\063\351\261\101\004\357\234\125\265"
	"\331\035\146\273\002\222\016\243\300\062\040\116\301\072\346\043"
	"\162\073\007\042\342\256\303\361\146\263\253\346\166\063\143\174"
	"\003\232\204\243\005\122\306\276\275\222\333\324\376\364\117\304"
	"\351\002\255\106\100\251\021\171\321\357\317\002\171\320\141\376"
	"\156\057\242\051\046\363\237\277\014\171\023\064\062\156\056\177"
	"\137\210\032\136\331\075\024\110\120\346\162\320\001\151\056\156"
	"\273\214\270\245\226\025\310\204\113\275\052\205\110\204\064\047"
	"\015\116\205\346\214"/* End of data[] */;
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
