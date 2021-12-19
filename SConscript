from building import *
Import('rtconfig')

src   = []
path  = []
cwd   = GetCurrentDir()

if GetDepend('PKG_USING_DESIGN_PATTERN'):
    if GetDepend('PKG_USING_DESIGN_PATTERN_OBSERVER'):
        src += Glob('src/observer/observer.c')
        src += Glob('src/observer/subject.c')
        
        src += Glob('samples/observer_test.c')
        path  += [cwd + '/src/observer/']

group = DefineGroup('design_pattern', src, depend = ['PKG_USING_DESIGN_PATTERN'], CPPPATH = path)

Return('group')
