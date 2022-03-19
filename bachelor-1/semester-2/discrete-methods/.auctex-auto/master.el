(TeX-add-style-hook
 "master"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "a4paper")))
   (TeX-run-style-hooks
    "latex2e"
    "../preamble"
    "article"
    "art10")
   (TeX-add-symbols
    "propositionautorefname")
   (LaTeX-add-labels
    "prop:1.1"
    "prop:1.2"
    "prop:1.3"))
 :latex)

