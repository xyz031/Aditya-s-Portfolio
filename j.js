const mainmenu = document.querySelector('.mainmenu');
const closemenu = document.querySelector('.closemenu');
const openmenu = document.querySelector('.openmenu');

openmenu.addEventListener('click', show);
closemenu.addEventListener('click', close);

function show() {
    mainmenu.style.display = 'flex';
    mainmenu.style.top = '0';
}
function close() {
    mainmenu.style.top = '-120%';
}


// var progressbars = document.querySelectorAll('.progress>div');;
// var skillsContainer = document.getElementById('skill');
// window.addEventListener('scroll', checkScroll);
// var animationdone = false;


// function initialiseBars() {
//     for (let bar of progressbars) {
//         bar.style.width = 0 + '%';

//     }

// }
// initialiseBars();

// function fillbars() {
//     for (let bar of progressbars) {
//         let targetwidth = bar.getAttribute('data-bar-width');
//         let Currentwidth = 0;
//         let Interval = setInterval(function(){
//             if (Currentwidth > targetwidth) {
//             clearInterval(Interval);
//             return;
//         }
//         Currentwidth++;  
//         bar.style.width = Currentwidth + '%';
//     }, 10);
// }
// }

// function checkScroll() {
//     var coordinates = skillsContainer.getBoundingClientRect();
//     if (!animationdone && coordinates.top < window.innerHeight) {
//         animationdone = true;
//         console.log('done');
//         fillbars();
//     }
// }

