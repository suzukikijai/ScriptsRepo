#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -T -f customJWatcher.sh 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[0]))
	"\225\035\140\330\014\235\036\154\137\146\112\171\135\325\250\025"
	"\203\036\327\217\060\122\046\072\107\323\121"
#define      rlax_z	1
#define      rlax	((&data[27]))
	"\277"
#define      lsto_z	1
#define      lsto	((&data[28]))
	"\242"
#define      shll_z	8
#define      shll	((&data[29]))
	"\214\060\270\347\124\232\170\303\307\246"
#define      chk1_z	22
#define      chk1	((&data[42]))
	"\277\233\116\120\035\103\001\224\002\127\252\017\104\271\176\333"
	"\337\212\347\200\022\007\030\106\232\323\170\072\276\120"
#define      msg2_z	19
#define      msg2	((&data[70]))
	"\161\266\205\141\072\024\265\053\275\240\120\165\106\003\127\103"
	"\312\171\026\323\136"
#define      opts_z	1
#define      opts	((&data[90]))
	"\154"
#define      tst2_z	19
#define      tst2	((&data[93]))
	"\236\320\334\131\100\013\305\254\354\146\051\137\126\117\351\264"
	"\345\354\130\276\160\165"
#define      chk2_z	19
#define      chk2	((&data[113]))
	"\245\060\176\371\351\177\224\176\242\055\361\012\366\132\200\355"
	"\302\331\303\274\313"
#define      date_z	1
#define      date	((&data[134]))
	"\206"
#define      pswd_z	256
#define      pswd	((&data[137]))
	"\123\333\377\076\234\252\314\011\017\373\211\160\272\002\014\254"
	"\122\240\252\252\052\335\047\361\125\134\042\354\276\323\237\257"
	"\241\236\355\075\111\272\107\130\265\320\311\157\323\326\034\046"
	"\166\307\320\241\244\367\222\371\124\264\346\022\210\205\301\051"
	"\044\257\147\155\151\256\306\036\177\217\216\122\146\253\171\335"
	"\162\111\176\026\101\021\017\225\306\366\247\116\173\151\170\240"
	"\031\337\015\202\216\324\241\016\144\060\141\312\334\332\247\116"
	"\043\045\144\145\067\164\372\375\152\242\114\346\014\304\206\045"
	"\244\224\250\063\151\112\101\315\172\242\227\126\174\076\245\240"
	"\144\012\005\234\177\000\231\351\242\346\320\256\252\127\323\117"
	"\353\174\202\124\306\303\042\101\145\271\230\342\370\075\203\134"
	"\107\210\370\306\211\222\260\053\170\200\332\043\330\256\162\303"
	"\052\364\030\360\270\072\062\035\364\312\000\354\007\203\110\117"
	"\014\101\025\225\324\306\301\114\107\233\157\037\111\342\343\163"
	"\326\373\144\216\066\226\254\052\140\254\027\150\060\140\267\075"
	"\241\314\322\166\223\223\302\332\056\062\371\170\024\334\353\353"
	"\330\120\200\215"
#define      text_z	229
#define      text	((&data[442]))
	"\322\062\212\060\314\103\141\271\254\226\127\174\014\112\200\225"
	"\006\113\305\117\270\313\130\300\037\063\101\255\316\023\305\240"
	"\105\117\320\022\223\062\313\077\311\043\273\325\155\073\152\263"
	"\123\261\167\064\321\156\270\360\301\167\131\077\312\376\143\147"
	"\156\132\036\043\037\322\357\275\250\350\371\011\262\013\016\014"
	"\041\117\003\114\311\001\200\035\344\210\145\316\343\330\343\256"
	"\270\257\152\020\101\322\266\300\014\117\051\202\036\030\067\303"
	"\157\260\174\063\042\371\216\273\376\167\313\226\014\353\173\006"
	"\000\303\045\033\146\270\112\120\367\162\006\243\265\264\245\071"
	"\006\227\175\245\122\372\017\077\275\121\144\102\172\132\102\305"
	"\230\172\035\110\163\333\314\216\032\174\042\160\340\261\150\123"
	"\317\167\043\053\001\021\221\233\277\202\177\041\234\074\221\016"
	"\016\273\144\232\357\341\171\030\071\133\023\173\327\363\140\204"
	"\363\374\100\204\355\071\226\107\243\225\053\362\336\300\112\030"
	"\132\026\271\145\342\326\306\372\060\316\066\125\243\111\046\235"
	"\317\204\053\370\126\013\162\355\100\161\120\112\307\116\054\064"
	"\324\373\326\134\376\354\146\015\132\052\357\024\274\122\041\330"
	"\047\317\110\223\164\207\060\304\077"
#define      msg1_z	42
#define      msg1	((&data[677]))
	"\033\316\336\376\045\116\337\070\146\162\073\233\037\216\124\153"
	"\153\036\014\355\163\237\003\305\216\346\077\165\371\123\155\147"
	"\030\362\323\014\134\060\330\306\242\172\000"
#define      inlo_z	3
#define      inlo	((&data[719]))
	"\051\305\037"
#define      xecc_z	15
#define      xecc	((&data[723]))
	"\277\300\054\243\157\256\232\121\272\162\163\147\023\226\341\163"
	"\233\336"/* End of data[] */;
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
