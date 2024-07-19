const swiper = new Swiper('.swiper', {
    speed: 400,
    direction: 'horizontal',
    loop: true,
    grabCursor:true,

    spaceBetween:10,
  

    pagination: {
      el: '.swiper-pagination',
      type:'bullets',
      clickkable:true
    },
  
    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev',
    },
  
    breakpoints:{
        0: {
            slidesPerView: 1
        },
        720:{
            slidesPerView: 2
        },
        1024:{
            slidesPerView: 4
        }
    }

  });



// API DE ANIMAÇÃO 


document.addEventListener("DOMContentLoaded", function() {
  // Selecione todos os elementos que deseja observar
  const elements = document.querySelectorAll('.textCard');

  // Crie uma instância do Intersection Observer
  const observer = new IntersectionObserver((entries) => {
      entries.forEach(entry => {
          if (entry.isIntersecting) {
              // Adiciona a classe 'animate' ao elemento quando ele entra na área visível
              entry.target.classList.add('animate');
              // Para garantir que a animação não seja acionada novamente, desobserve o elemento
              observer.unobserve(entry.target);
          }
      });
  }, { threshold: 0.1 }); // threshold é a porcentagem do elemento que deve estar visível para acionar o callback

  // Observe cada elemento
  elements.forEach(element => {
      observer.observe(element);
  });
});
