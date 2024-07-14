# bitop.spec

Name:           bitops
Version:        1.0.0
Release:        1%{?dist}
Summary:        Bitwise operations library

License:        MIT
URL:            https://github.com/yourusername/bitop
Source0:        %{name}-%{version}.tar.gz

BuildRequires:  gcc
BuildRequires:  make
BuildRequires:  autoconf
BuildRequires:  automake

%description
Bitops is a library for performing various bitwise operations in C.

%package devel
Summary:        Development files for %{name}
Requires:       %{name}%{?_isa} = %{version}-%{release}

%description devel
Development files for %{name}.

%package debug
Summary:        Debug information for %{name}
Requires:       %{name}%{?_isa} = %{version}-%{release}

%description debug
Debug information for %{name}.

%prep
%setup -q

%build
%configure
%make_build

%install
%make_install DESTDIR=%{buildroot}
# Install headers
mkdir -p %{buildroot}%{_includedir}/%{name}
cp -a include/* %{buildroot}%{_includedir}/%{name}

%files
%license LICENSE
%doc README.md
%{_bindir}/bitops
%{_libdir}/libbitops.so.%{version}
%{_libdir}/libbitops.so.%{version}.0
%{_libdir}/libbitops.so

%files devel
%{_includedir}/%{name}/
%{_libdir}/libbitops.so

%files debug
%{_libdir}/debug/

%changelog
* Sat Jul 13 2024 Mallikarjunarao Kosuri <malli.kv2@gmail.com> - 1.0.0-1
- Initial package
