#!/usr/bin/env python2
# -*- coding: UTF-8 -*-
#
# Yuanjie Huang

import sys


def lint():
    print ''

    cfg={}
    f = open(sys.argv[1])
    for l in f:
        if l[0] == '#': continue
        if '=' not in l: continue
        c,m = l.strip().split('=', 1)
        if cfg.has_key(c):
            print '#', c, 'has already been set, reset from', cfg[c], 'to', m
        cfg[c] = m
    f.close()

    print ''

    if len(sys.argv) > 2:
        print '# -------------------------------------\n'
        f = open(sys.argv[2])
        for l in f:
            if l[0] == '#': continue
            if '=' not in l: continue
            c, m = l.strip().split('=', 1)
            if not cfg.has_key(c):
                #print c, 'is new, and set to', m
                print '+%s=%s' % (c, m)
            elif m != cfg[c]:
                #print c, 'changed from', cfg[c], 'to', m
                print '-%s=%s' % (c, cfg[c])
                print '+%s=%s' % (c, m)
                del cfg[c]
            else:
                del cfg[c]
        f.close()
        if len(cfg):
            for c,m in cfg.items():
                #print c, 'is missing, was', m
                print '-%s=%s' % (c, m)
            return False
        return True
    else:
        return True

if __name__ == '__main__':
    lint()

