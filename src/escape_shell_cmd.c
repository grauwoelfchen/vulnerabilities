/**
 * from 1996, Apache httpd 1.0.3
 *   + src/util.c
 *   + cgi-src/util.c
 *
 * + [CVE-1999-0067 : phf CGI program allows remote command execution through shell metacharacters.](http://www.cvedetails.com/cve/CVE-1999-0067/)
 * + [CERT Advisory CA-1996-06 Vulnerability in NCSA/Apache CGI example code](http://www.cert.org/advisories/CA-1996-06.html)
 */
#include <stdio.h>
#include <string.h>

int ind(char *s, char c) {
    register int x;

    for(x=0;s[x];x++)
        if(s[x] == c) return x;

    return -1;
}

void escape_shell_cmd(char *cmd) {
    register int x,y,l;

    l=strlen(cmd);
    for(x=0;cmd[x];x++) {
        if(ind("&;`'\"|*?~<>^()[]{}$\\",cmd[x]) != -1){
        //if(ind("&;`'\"|*?~<>^()[]{}$\\\n",cmd[x]) != -1){
            for(y=l+1;y>x;y--)
                cmd[y] = cmd[y-1];
            l++; /* length has been increased */
            cmd[x] = '\\';
            x++; /* skip the character */
        }
    }
}

// -----

int main(int argc, char **argv) {
  // pass
  return 0;
}
