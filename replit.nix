{ pkgs }: {
  deps = [
    pkgs.zulu
    pkgs.strace
    pkgs.bashInteractive
    pkgs.nodePackages.bash-language-server
    pkgs.man
  ];
}