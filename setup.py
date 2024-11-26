from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup, find_namespace_packages
import glob


__version__ = '0.0.1'

src_files = glob.glob('synow/src/*.cpp')

ext_modules = [
    Pybind11Extension(
        'synow',
        src_files,
        define_macros=[('VERSION_INFO', __version__)]
    ),
]

setup(
    # Package info
    name='synow',
    version=__version__,
    description='synow spectrum synthesis.',
    url='https://github.com/anthonyburrow/synow',
    author='Anthony Burrow',
    author_email='anthony.r.burrow@gmail.com',
    license='MIT',
    classifiers=[
        'Programming Language :: Python',
        'Programming Language :: Python :: 3',
        'Topic :: Scientific/Engineering :: Astronomy',
        'Topic :: Scientific/Engineering :: Physics',
        'Intended Audience :: Science/Research',
    ],
    # Dependencies
    install_requires=[],
    optional=[],
    extras_require={'test': ['pytest', 'requests']},
    # Package installation
    packages=find_namespace_packages(where='synow'),
    package_dir={'': 'synow'},
    include_package_data=True,
    package_data={
        # 'synow.data': ['*.dat']
    },
    # External
    ext_modules=ext_modules,
    cmdclass={'build_ext': build_ext},
)